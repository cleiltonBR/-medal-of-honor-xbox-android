/**
 * Medal of Honor European Assault - Recompiled code chunk 21
 * Functions: 250 (0x000A9BA0 - 0x000B1A60)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000A9BA0
 * Original: 0x000A9BA0 - 0x000A9BBE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A9BA8u); RECOMP_ABI_CALL(0x000A8510u, sub_000A8510); /* call 0x000A8510 */

loc_000A9BA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9BB8; /* je: equal / zero */

loc_000A9BAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A9BB5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A9BB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A9BB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9BC0
 * Original: 0x000A9BC0 - 0x000A9BDC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9BC0: ;
    ecx = MEM32(0x3C3FE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9BDB; /* je: equal / zero */

loc_000A9BCA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A9BD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9BCEu); } /* indirect call */
    }

loc_000A9BD1: ;
    MEM32(0x3C3FE4) = 0;

loc_000A9BDB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9BE0
 * Original: 0x000A9BE0 - 0x000A9C28 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9BE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 7);
    PUSH32(esp, 0x7038BB3E);
    esi = ecx;
    PUSH32(esp, 0x000A9BF7u); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_000A9BF7: ;
    ecx = MEM32(esi + 0xB0);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0xB0);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9C1B; /* je: equal / zero */

loc_000A9C0C: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9C1B; /* je: equal / zero */

loc_000A9C12: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x000A9C1Bu); RECOMP_ABI_CALL(0x000FCBB0u, sub_000FCBB0); /* call 0x000FCBB0 */

loc_000A9C1B: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A9C23u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000A9C23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9C30
 * Original: 0x000A9C30 - 0x000A9C35 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9C30(void)
{

loc_000A9C30: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9C40
 * Original: 0x000A9C40 - 0x000A9C43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9C40(void)
{

loc_000A9C40: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9C50
 * Original: 0x000A9C50 - 0x000A9C5E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9C50(void)
{

loc_000A9C50: ;
    ecx = MEM32(ecx + 0xB0);
    PUSH32(esp, 0x000A9C5Bu); RECOMP_ABI_CALL(0x000A9F40u, sub_000A9F40); /* call 0x000A9F40 */

loc_000A9C5B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9C60
 * Original: 0x000A9C60 - 0x000A9DAB (331 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9C60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    eax = esp;
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9CBEu); RECOMP_ABI_CALL(0x00265BC0u, sub_00265BC0); /* call 0x00265BC0 */

loc_000A9CBE: ;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(0x534370, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    PUSH32(esp, 0x534370);
    ecx = esp + 0x54;
    XMM_STORE(0x534390, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x44); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9D01u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000A9D01: ;
    edx = MEM32(0x3C3FE4);
    edx = MEM32(edx + 0xB0);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9DA7; /* je: equal / zero */

loc_000A9D18: ;
    ecx = MEM32(eax + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(edx + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A9D2F; /* je: equal / zero */

loc_000A9D25: ;
    MEM32(ecx + 0xDC) = 0;

loc_000A9D2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9DA7; /* je: equal / zero */

loc_000A9D33: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xD0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(eax + 0x90, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(eax + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(eax + 0xB0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(eax + 0xC0, xmm0); /* movaps */
    MEM32(eax + 0xD4) = 2;
    ecx = MEM32(0x3C3FE4);
    ecx = MEM32(ecx + 0xB0);
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xD8) = edx;
    MEM32(eax + 0xDC) = 0;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9DA4; /* je: equal / zero */

loc_000A9D9E: ;
    MEM32(edx + 0xDC) = eax;

loc_000A9DA4: ;
    MEM32(ecx + 4) = eax;

loc_000A9DA7: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9DB0
 * Original: 0x000A9DB0 - 0x000A9DCF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9DB0(void)
{

loc_000A9DB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000A9DBEu); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_000A9DBE: ;
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A9DCAu); RECOMP_ABI_CALL(0x000AA0A0u, sub_000AA0A0); /* call 0x000AA0A0 */

loc_000A9DCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9DD0
 * Original: 0x000A9DD0 - 0x000A9E13 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A9DD8u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000A9DD8: ;
    PUSH32(esp, 0x1190);
    MEM32(esi) = 0x310078;
    MEM32(esi + 8) = 0x31006C;
    PUSH32(esp, 0x000A9DEFu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A9DEF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9E07; /* je: equal / zero */

loc_000A9DF6: ;
    ecx = eax;
    PUSH32(esp, 0x000A9DFDu); RECOMP_ABI_CALL(0x000AA260u, sub_000AA260); /* call 0x000AA260 */

loc_000A9DFD: ;
    MEM32(esi + 0xB0) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A9E07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB0) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9E20
 * Original: 0x000A9E20 - 0x000A9E7E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9E20: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = MEM32(edi + 0xB0);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(edi) = 0x310078;
    MEM32(edi + 8) = 0x31006C;
    if (CMP_EQ(_fa, _fb)) goto loc_000A9E75; /* je: equal / zero */

loc_000A9E3B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ebp + 0x1190;
    ebx = 0x14;
    goto loc_000A9E50;

    /* nop */

loc_000A9E50: ;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xE0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x000A9E5Du); RECOMP_ABI_CALL(0x0012EDA0u, sub_0012EDA0); /* call 0x0012EDA0 */

loc_000A9E5D: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A9E50; /* jne: not equal / not zero */

loc_000A9E60: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A9E66u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A9E66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(edi + 0xB0) = 0;
    POP32(esp, ebx);

loc_000A9E75: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_000A9E80
 * Original: 0x000A9E80 - 0x000A9ED1 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9E80: ;
    eax = MEM32(0x3C3FE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9ED0; /* jne: not equal / not zero */

loc_000A9E89: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xC0);
    PUSH32(esp, 0x3101C8);
    PUSH32(esp, 0x000A9E9Du); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000A9E9D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9EBD; /* je: equal / zero */

loc_000A9EA4: ;
    ecx = eax;
    PUSH32(esp, 0x000A9EABu); RECOMP_ABI_CALL(0x000A9DD0u, sub_000A9DD0); /* call 0x000A9DD0 */

loc_000A9EAB: ;
    ecx = eax;
    MEM32(0x3C3FE4) = eax;
    PUSH32(esp, 0x000A9EB7u); RECOMP_ABI_CALL(0x000A9BE0u, sub_000A9BE0); /* call 0x000A9BE0 */

loc_000A9EB7: ;
    eax = MEM32(0x3C3FE4);
    esp += 4; return; /* ret */

loc_000A9EBD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax;
    MEM32(0x3C3FE4) = eax;
    PUSH32(esp, 0x000A9ECBu); RECOMP_ABI_CALL(0x000A9BE0u, sub_000A9BE0); /* call 0x000A9BE0 */

loc_000A9ECB: ;
    eax = MEM32(0x3C3FE4);

loc_000A9ED0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9EE0
 * Original: 0x000A9EE0 - 0x000A9EF0 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9EE0: ;
    PUSH32(esp, 0x000A9EE5u); RECOMP_ABI_CALL(0x000A9E80u, sub_000A9E80); /* call 0x000A9E80 */

loc_000A9EE5: ;
    ecx = MEM32(eax + 0xB0);
    g_seh_ebp = ebp; sub_000A9F90(); return; /* tail jmp 0x000A9F90 */

}

/**
 * sub_000A9F40
 * Original: 0x000A9F40 - 0x000A9F8D (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9F40: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9F8B; /* je: equal / zero */

loc_000A9F48: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9F8A; /* je: equal / zero */

loc_000A9F50: ;
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9F7C; /* jne: not equal / not zero */

loc_000A9F5A: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx + 0x16C);
    PUSH32(esp, 0x3F800000);
    eax = esi + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A9F76u); RECOMP_ABI_CALL(0x0012EDE0u, sub_0012EDE0); /* call 0x0012EDE0 */

loc_000A9F76: ;
    MEM8(esi + 0x6C) = 1;
    goto loc_000A9F80;

loc_000A9F7C: ;
    MEM8(esi + 0x6C) = 0;

loc_000A9F80: ;
    esi = MEM32(esi + 0xD8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9F50; /* jne: not equal / not zero */

loc_000A9F8A: ;
    POP32(esp, esi);

loc_000A9F8B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9F90
 * Original: 0x000A9F90 - 0x000AA098 (264 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    eax = ecx + 0xE8;
    edi = 4;

loc_000A9FA6: ;
    MEM8(eax + -108) = LO8(edx);
    esi = MEM32(ecx + 8);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9FC1; /* je: equal / zero */

loc_000A9FB5: ;
    ebx = eax + -216;
    MEM32(esi + 0xDC) = ebx;

loc_000A9FC1: ;
    MEM32(eax + 4) = edx;
    esi = eax + -216;
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x74) = LO8(edx);
    esi = MEM32(ecx + 8);
    MEM32(eax + 0xE0) = esi;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9FE9; /* je: equal / zero */

loc_000A9FE0: ;
    ebx = eax + 8;
    MEM32(esi + 0xDC) = ebx;

loc_000A9FE9: ;
    MEM32(eax + 0xE4) = edx;
    esi = eax + 8;
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x154) = LO8(edx);
    esi = MEM32(ecx + 8);
    MEM32(eax + 0x1C0) = esi;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA017; /* je: equal / zero */

loc_000AA00B: ;
    ebx = eax + 0xE8;
    MEM32(esi + 0xDC) = ebx;

loc_000AA017: ;
    MEM32(eax + 0x1C4) = edx;
    esi = eax + 0xE8;
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x234) = LO8(edx);
    esi = MEM32(ecx + 8);
    MEM32(eax + 0x2A0) = esi;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA048; /* je: equal / zero */

loc_000AA03C: ;
    ebx = eax + 0x1C8;
    MEM32(esi + 0xDC) = ebx;

loc_000AA048: ;
    MEM32(eax + 0x2A4) = edx;
    esi = eax + 0x1C8;
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x314) = LO8(edx);
    esi = MEM32(ecx + 8);
    MEM32(eax + 0x380) = esi;
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA079; /* je: equal / zero */

loc_000AA06D: ;
    ebx = eax + 0x2A8;
    MEM32(esi + 0xDC) = ebx;

loc_000AA079: ;
    MEM32(eax + 0x384) = edx;
    esi = eax + 0x2A8;
    _fb = (uint32_t)(0x460) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x460;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = esi;
    if ((_fa != 0)) goto loc_000A9FA6; /* jne: not equal / not zero */

loc_000AA094: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA0A0
 * Original: 0x000AA0A0 - 0x000AA255 (437 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000AA0A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x310068); /* mulss */
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    ebx = ecx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA0EFu); RECOMP_ABI_CALL(0x00264DC0u, sub_00264DC0); /* call 0x00264DC0 */

loc_000AA0EF: ;
    xmm0 = XMM_SCALAR(MEMF(0x310064)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x64;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA11Fu); RECOMP_ABI_CALL(0x00265BC0u, sub_00265BC0); /* call 0x00265BC0 */

loc_000AA11F: ;
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA24C; /* je: equal / zero */

loc_000AA12A: ;
    /* nop */

loc_000AA130: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x310060); /* comiss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AA1B9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x310060)) */

loc_000AA14E: ;
    eax = MEM32(esi + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA166; /* je: equal / zero */

loc_000AA158: ;
    edx = MEM32(esi + 0xD8);
    MEM32(eax + 0xD8) = edx;
    goto loc_000AA16F;

loc_000AA166: ;
    eax = MEM32(esi + 0xD8);
    MEM32(ebx + 4) = eax;

loc_000AA16F: ;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA185; /* je: equal / zero */

loc_000AA179: ;
    ecx = MEM32(esi + 0xDC);
    MEM32(eax + 0xDC) = ecx;

loc_000AA185: ;
    ecx = MEM32(esi + 0xD8);
    MEM8(esi + 0x6C) = 0;
    edx = MEM32(ebx + 8);
    MEM32(esi + 0xD8) = edx;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA1A5; /* je: equal / zero */

loc_000AA19F: ;
    MEM32(eax + 0xDC) = esi;

loc_000AA1A5: ;
    MEM32(esi + 0xDC) = 0;
    MEM32(ebx + 8) = esi;
    esi = ecx;
    goto loc_000AA244;

loc_000AA1B9: ;
    xmm0 = XMM_MEM(esi + 0xA0); /* movaps */
    xmm1 = XMM_MEM(esi + 0x90); /* movaps */
    edi = esi + 0x90;
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x30); /* movaps */
    xmm1 = XMM_MEM(edi + 0x20); /* movaps */
    PUSH32(esp, 0x534370);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = edi;
    XMM_STORE(0x534390, xmm1); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA202u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000AA202: ;
    xmm0 = XMM_MEM(edi + 0x10); /* movaps */
    xmm1 = XMM_MEM(edi); /* movaps */
    PUSH32(esp, 0x534370);
    ecx = esp + 0x64;
    XMM_STORE(0x534370, xmm1); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(edi + 0x30); /* movaps */
    xmm1 = XMM_MEM(edi + 0x20); /* movaps */
    PUSH32(esp, ecx);
    ecx = edi;
    XMM_STORE(0x534390, xmm1); /* movaps */
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AA23Eu); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000AA23E: ;
    esi = MEM32(esi + 0xD8);

loc_000AA244: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA130; /* jne: not equal / not zero */

loc_000AA24C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA260
 * Original: 0x000AA260 - 0x000AA416 (438 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AA260: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = edi + 0x10;
    esi = ebp + 0x98;
    MEM32(esp + 0x10) = 0x14;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000AA280: ;
    ecx = ebp;
    PUSH32(esp, 0x000AA287u); RECOMP_ABI_CALL(0x0012EF00u, sub_0012EF00); /* call 0x0012EF00 */

loc_000AA287: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x3C) = 2;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + -8) = xmm1.f[0]; /* movss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    MEM8(esi + -44) = LO8(ebx);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xE0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000AA280; /* jne: not equal / not zero */

loc_000AA311: ;
    MEM32(edi + 4) = ebx;
    eax = edi + 0xE8;
    edx = 4;
    /* nop */

loc_000AA320: ;
    MEM8(eax + -108) = LO8(ebx);
    ecx = MEM32(edi + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA33B; /* je: equal / zero */

loc_000AA32F: ;
    esi = eax + -216;
    MEM32(ecx + 0xDC) = esi;

loc_000AA33B: ;
    MEM32(eax + 4) = ebx;
    ecx = eax + -216;
    MEM32(edi + 8) = ecx;
    MEM8(eax + 0x74) = LO8(ebx);
    ecx = MEM32(edi + 8);
    MEM32(eax + 0xE0) = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA363; /* je: equal / zero */

loc_000AA35A: ;
    esi = eax + 8;
    MEM32(ecx + 0xDC) = esi;

loc_000AA363: ;
    MEM32(eax + 0xE4) = ebx;
    ecx = eax + 8;
    MEM32(edi + 8) = ecx;
    MEM8(eax + 0x154) = LO8(ebx);
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x1C0) = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA391; /* je: equal / zero */

loc_000AA385: ;
    esi = eax + 0xE8;
    MEM32(ecx + 0xDC) = esi;

loc_000AA391: ;
    MEM32(eax + 0x1C4) = ebx;
    ecx = eax + 0xE8;
    MEM32(edi + 8) = ecx;
    MEM8(eax + 0x234) = LO8(ebx);
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x2A0) = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA3C2; /* je: equal / zero */

loc_000AA3B6: ;
    esi = eax + 0x1C8;
    MEM32(ecx + 0xDC) = esi;

loc_000AA3C2: ;
    MEM32(eax + 0x2A4) = ebx;
    ecx = eax + 0x1C8;
    MEM32(edi + 8) = ecx;
    MEM8(eax + 0x314) = LO8(ebx);
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x380) = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA3F3; /* je: equal / zero */

loc_000AA3E7: ;
    esi = eax + 0x2A8;
    MEM32(ecx + 0xDC) = esi;

loc_000AA3F3: ;
    MEM32(eax + 0x384) = ebx;
    ecx = eax + 0x2A8;
    _fb = (uint32_t)(0x460) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x460;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 8) = ecx;
    if ((_fa != 0)) goto loc_000AA320; /* jne: not equal / not zero */

loc_000AA40E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA420
 * Original: 0x000AA420 - 0x000AA428 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AA420: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000AA430(); return; /* tail jmp 0x000AA430 */

}

/**
 * sub_000AA430
 * Original: 0x000AA430 - 0x000AA44E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA430: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000AA438u); RECOMP_ABI_CALL(0x000A9E20u, sub_000A9E20); /* call 0x000A9E20 */

loc_000AA438: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA448; /* je: equal / zero */

loc_000AA43F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AA445u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000AA445: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AA448: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA450
 * Original: 0x000AA450 - 0x000AA4A0 (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA450: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AA4F0
 * Original: 0x000AA4F0 - 0x000AA545 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA4F0(void)
{

loc_000AA4F0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    ecx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA550
 * Original: 0x000AA550 - 0x000AA5A3 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA550: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA5A0; /* je: equal / zero */

loc_000AA55A: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = ecx;

loc_000AA5A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA5B0
 * Original: 0x000AA5B0 - 0x000AA5BD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA5B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA5B0: ;
    eax = MEM32(ecx + 0x24);
    edx = MEM32(eax + 0x40);
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000AA5C0
 * Original: 0x000AA5C0 - 0x000AA5F4 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA5C0: ;
    eax = MEM32(ecx + 0x2C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000AA5E0; /* jne: not equal / not zero */

loc_000AA5CD: ;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(eax + 0x40) = edx;
    MEM32(ecx + 0x2C) = 1;
    esp += 8; return; /* ret 4 */

loc_000AA5E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    MEM32(esi + 0x40) = eax;
    MEM32(eax + 0x40) = edx;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA600
 * Original: 0x000AA600 - 0x000AA60C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA600: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA610
 * Original: 0x000AA610 - 0x000AA619 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA610(void)
{

loc_000AA610: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA620
 * Original: 0x000AA620 - 0x000AA638 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA620: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA62A; /* jne: not equal / not zero */

loc_000AA627: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000AA62A: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    _fb = (uint32_t)(0x3C3FE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C3FE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA640
 * Original: 0x000AA640 - 0x000AA65B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA640: ;
    ecx = MEM32(0x3C5A7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA65A; /* je: equal / zero */

loc_000AA64A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000AA650u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA64Eu); } /* indirect call */
    }

loc_000AA650: ;
    MEM32(0x3C5A7C) = 0;

loc_000AA65A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA660
 * Original: 0x000AA660 - 0x000AA67C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA660: ;
    ecx = MEM32(0x3C5A78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA67B; /* je: equal / zero */

loc_000AA66A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000AA671u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA66Eu); } /* indirect call */
    }

loc_000AA671: ;
    MEM32(0x3C5A78) = 0;

loc_000AA67B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA680
 * Original: 0x000AA680 - 0x000AA685 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AA680: ;
    g_seh_ebp = ebp; sub_001306B0(); return; /* tail jmp 0x001306B0 */

}

/**
 * sub_000AA690
 * Original: 0x000AA690 - 0x000AA6B9 (41 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AA690: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xB0;
    MEM32(esi) = 0x310258;
    MEM32(esi + 8) = 0x310250;
    MEM32(ecx) = 0x310200;
    PUSH32(esp, 0x000AA6B1u); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000AA6B1: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_000AA6C0
 * Original: 0x000AA6C0 - 0x000AA6C3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA6C0(void)
{

loc_000AA6C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA6D0
 * Original: 0x000AA6D0 - 0x000AA6D3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA6D0(void)
{

loc_000AA6D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA6E0
 * Original: 0x000AA6E0 - 0x000AA6E7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA6E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA6E0: ;
    eax = MEM32(ecx + eax * 8 + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AA6F0
 * Original: 0x000AA6F0 - 0x000AA75C (108 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA6F0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF084); /* mulss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA746; /* je: equal / zero */

loc_000AA70C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000AA71Cu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000AA716u); } /* indirect call */
    }

loc_000AA71C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA72D; /* je: equal / zero */

loc_000AA723: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000AA72Bu); RECOMP_ABI_CALL(0x001CDD00u, sub_001CDD00); /* call 0x001CDD00 */

loc_000AA72B: ;
    goto loc_000AA72F;

loc_000AA72D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AA72F: ;
    MEM32(edi + 0x30) = eax;
    ecx = 3;
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000AA746: ;
    PUSH32(esp, 0x310410);
    PUSH32(esp, 0x000AA750u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000AA750: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x30) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA760
 * Original: 0x000AA760 - 0x000AA77B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA760: ;
    ecx = MEM32(0x3C5A7C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA77A; /* je: equal / zero */

loc_000AA76A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000AA770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA76Eu); } /* indirect call */
    }

loc_000AA770: ;
    MEM32(0x3C5A7C) = 0;

loc_000AA77A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA780
 * Original: 0x000AA780 - 0x000AA79C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA780: ;
    ecx = MEM32(0x3C5A78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA79B; /* je: equal / zero */

loc_000AA78A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000AA791u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AA78Eu); } /* indirect call */
    }

loc_000AA791: ;
    MEM32(0x3C5A78) = 0;

loc_000AA79B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA7A0
 * Original: 0x000AA7A0 - 0x000AA800 (96 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA7A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3C5A7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA7FE; /* jne: not equal / not zero */

loc_000AA7AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 8);
    PUSH32(esp, 0x310434);
    PUSH32(esp, 0x000AA7BCu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000AA7BC: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA7F3; /* je: equal / zero */

loc_000AA7C5: ;
    PUSH32(esp, 0x3103D0);
    ecx = esp + 8;
    MEM32(esi) = 0x3103A4;
    PUSH32(esp, 0x000AA7D9u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000AA7D9: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AA7E0u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000AA7E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    MEM32(0x3C5A7C) = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000AA7F3: ;
    MEM32(0x3C5A7C) = 0;
    POP32(esp, esi);

loc_000AA7FE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA800
 * Original: 0x000AA800 - 0x000AA87B (123 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA800: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000AA80Au); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_000AA80A: ;
    PUSH32(esp, 0x310458);
    ebx = eax;
    PUSH32(esp, 0x000AA816u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_000AA816: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + 0x130;
    PUSH32(esp, 0x000AA824u); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_000AA824: ;
    esi = edi + 0x134;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000AA833u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000AA833: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000AA83Cu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000AA83C: ;
    PUSH32(esp, 0x203);
    ecx = esi;
    PUSH32(esp, 0x000AA848u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000AA848: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AA851u); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_000AA851: ;
    PUSH32(esp, 0x204);
    ecx = esi;
    PUSH32(esp, 0x000AA85Du); RECOMP_ABI_CALL(0x001CF200u, sub_001CF200); /* call 0x001CF200 */

loc_000AA85D: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AA866u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_000AA866: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000AA86Eu); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000AA86E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000AA874u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_000AA874: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA880
 * Original: 0x000AA880 - 0x000AA95D (221 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA880: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x124);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x128);
    edx = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA957; /* je: equal / zero */

loc_000AA89B: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_000AA8A0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA8AB; /* je: equal / zero */

loc_000AA8A4: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x34;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA8A0; /* jne: not equal / not zero */

loc_000AA8AB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA957; /* je: equal / zero */

loc_000AA8B3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x120), 0x64 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA8E6; /* jne: not equal / not zero */

loc_000AA8BC: ;
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA8D2; /* je: equal / zero */

loc_000AA8C2: ;
    ebx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x2C) (32-bit) */
    if (CMP_B(_fa, _fb)) esi = eax; /* cmovb */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA8C2; /* jne: not equal / not zero */

loc_000AA8D2: ;
    eax = MEM32(esi + 0x24);
    edi = MEM32(eax + 0x40);
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x120) = MEM32(ecx + 0x120) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000AA906;

loc_000AA8E6: ;
    esi = MEM32(0x3C5A80);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x64 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA8F5; /* jne: not equal / not zero */

loc_000AA8F1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000AA906;

loc_000AA8F5: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    _fb = (uint32_t)(0x3C3FE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C3FE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C5A80) = esi;

loc_000AA906: ;
    esi = MEM32(esp + 0x14);
    MEM32(esi) = edx;
    esi = MEM32(edx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA93A; /* jne: not equal / not zero */

loc_000AA913: ;
    MEM32(edx + 0x24) = eax;
    MEM32(edx + 0x28) = eax;
    MEM32(eax + 0x40) = 0;
    MEM32(edx + 0x2C) = 1;
    edx = MEM32(ecx + 0x120);
    POP32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx + 0x120) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000AA93A: ;
    esi = MEM32(edx + 0x28);
    MEM32(esi + 0x40) = eax;
    MEM32(eax + 0x40) = 0;
    esi = MEM32(edx + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x28) = eax;
    MEM32(edx + 0x2C) = esi;
    MEM32(ecx + 0x120) = MEM32(ecx + 0x120) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000AA957: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AA960
 * Original: 0x000AA960 - 0x000AA98C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA960: ;
    eax = MEM32(ecx + 0x124);
    ecx = MEM32(ecx + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA97F; /* je: equal / zero */

loc_000AA970: ;
    edx = MEM32(esp + 4);

loc_000AA974: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA97F; /* je: equal / zero */

loc_000AA978: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA974; /* jne: not equal / not zero */

loc_000AA97F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA990
 * Original: 0x000AA990 - 0x000AAD35 (933 bytes, 193 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AA990: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xD0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    ebx = MEM32(ebp + 0x124);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x128) (32-bit) */
    MEM32(esp + 0x4C) = ebp;
    MEM32(esp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000AAD21; /* je: equal / zero */

loc_000AA9BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_000AA9C0: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAD0A; /* je: equal / zero */

loc_000AA9CB: ;
    ecx = MEM32(ebx + 0x30);
    edi = ebp + 0x130;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000AA9DCu); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000AA9DC: ;
    PUSH32(esp, 5);
    ecx = edi;
    PUSH32(esp, 0x000AA9E5u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000AA9E5: ;
    esi = MEM32(ebx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAD03; /* je: equal / zero */

loc_000AA9F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    ebp = MEM32(esp + 0x74);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x50);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    goto loc_000AAA30;

    /* nop */
    /* nop */

loc_000AAA30: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(0x373530) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(0x373534) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(0x373540) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(0x373544) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(0x373550) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    MEMF(0x373554) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(0x373560) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    MEMF(0x373564) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    edx = MEM32(esp + 0x68);
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, 0x373530);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x74);
    MEM32(esp + 0x7C) = edx;
    PUSH32(esp, 0x373570);
    edx = esp + 0x80;
    MEM32(esp + 0x88) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x90) = ebp;
    PUSH32(esp, 0x000AAAF6u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AAAF6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x373540);
    MEM32(esp + 0x9C) = eax;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    PUSH32(esp, 0x373570);
    eax = esp + 0xA0;
    MEM32(esp + 0xA4) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xAC) = edx;
    MEM32(esp + 0xB0) = ebx;
    PUSH32(esp, 0x000AAB58u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AAB58: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    ecx = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEM32(esp + 0xB8) = ecx;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 0x373550);
    MEM32(esp + 0xC0) = edx;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x64);
    PUSH32(esp, 0x373570);
    edx = esp + 0xC0;
    MEM32(esp + 0xCC) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0xCC) = eax;
    PUSH32(esp, 0x000AABBEu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AABBE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    eax = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x373540);
    MEM32(esp + 0x90) = ecx;
    PUSH32(esp, 0x373570);
    ecx = esp + 0x90;
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x9C) = edx;
    MEM32(esp + 0xA0) = eax;
    PUSH32(esp, 0x000AAC24u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AAC24: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x373550);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0xB0) = eax;
    MEM32(esp + 0xAC) = edx;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x373570);
    eax = esp + 0xB0;
    MEM32(esp + 0xB8) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xC0) = edx;
    PUSH32(esp, 0x000AAC8Au); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AAC8A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEM32(esp + 0xC8) = ecx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x373560);
    MEM32(esp + 0xD0) = edx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0x373570);
    edx = esp + 0xD0;
    MEM32(esp + 0xDC) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0xDC) = eax;
    PUSH32(esp, 0x000AACF0u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AACF0: ;
    esi = MEM32(esi + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AAA30; /* jne: not equal / not zero */

loc_000AACFB: ;
    ebx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x54);

loc_000AAD03: ;
    ecx = edi;
    PUSH32(esp, 0x000AAD0Au); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000AAD0A: ;
    eax = MEM32(ebp + 0x128);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x34;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000AA9C0; /* jne: not equal / not zero */

loc_000AAD1F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000AAD21: ;
    ecx = ebp + 0x130;
    PUSH32(esp, 0x000AAD2Cu); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000AAD2C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AAD40
 * Original: 0x000AAD40 - 0x000AAD45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AAD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AAD40: ;
    g_seh_ebp = ebp; sub_000AA7A0(); return; /* tail jmp 0x000AA7A0 */

}

/**
 * sub_000AAD50
 * Original: 0x000AAD50 - 0x000AB386 (1590 bytes, 356 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AAD50(void)
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

loc_000AAD50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(eax + 0x20);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    PUSH32(esp, edi);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AADB3u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000AADB3: ;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AADBBu); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000AADBB: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AADCEu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000AADCE: ;
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AADDAu); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000AADDA: ;
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    esi = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    edi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ebp + 0x14));
    xmm6 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x20); /* divss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x34) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x3C) = xmm3.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAE95; /* je: equal / zero */

loc_000AAE77: ;
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */

loc_000AAE95: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000AAF30; /* jbe: below or equal (unsigned <=) */

loc_000AAEAF: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm5 = xmm3; /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    xmm6 = xmm5; /* movaps */
    xmm7 = xmm3; /* movaps */
    MEMF(esp + 0xA8) = xmm3.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xA4) = xmm5.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0xA0) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    goto loc_000AAFAC;

loc_000AAF30: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm4.f[0]; /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */
    xmm6 = xmm3; /* movaps */
    xmm7 = xmm4; /* movaps */
    MEMF(esp + 0xA8) = xmm4.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xA4) = xmm3.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0xA0) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm4.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_000AAFAC: ;
    edx = esp + 0x90;
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    MEMF(esp + 0x94) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAFD3u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_000AAFD3: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAFE4u); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_000AAFE4: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAFF2u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_000AAFF2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AAFFFu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000AAFFF: ;
    edx = MEM32(esp + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB018u); RECOMP_ABI_CALL(0x000E7080u, sub_000E7080); /* call 0x000E7080 */

loc_000AB018: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xB4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB02Bu); RECOMP_ABI_CALL(0x00265DA0u, sub_00265DA0); /* call 0x00265DA0 */

loc_000AB02B: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(0x534370, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    PUSH32(esp, 0x534370);
    eax = esp + 0xB4;
    XMM_STORE(0x534390, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x54); /* movaps */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB071u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000AB071: ;
    ecx = MEM32(esp + 0x84);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AB083u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000AB083: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x3101F8)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 8) = xmm3.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x88); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x84); /* mulss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm2.f[0]; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x28) = xmm4.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esi + 0x10) = xmm4.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x50); /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x54); /* addss */
    MEMF(esi + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x58); /* addss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esi) = xmm3.f[0]; /* movss */
    MEMF(esi + 8) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x50); /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x54); /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esi + 0x1C) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x58); /* addss */
    MEMF(esi + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm5.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x50); /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x54); /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x28) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esi + 0x24) = xmm3.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm7.f[0]; /* addss */
    MEMF(esi + 0x2C) = xmm5.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x54); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    POP32(esp, edi);
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AB390
 * Original: 0x000AB390 - 0x000AB3BE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB390: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x000AB39Fu); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000AB39F: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFF50u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFF50u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 7);
    ecx = edi;
    MEM32(eax + 0x58) = 0xAA990;
    MEM32(eax + 0x48) = esi;
    PUSH32(esp, 0x000AB3B9u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000AB3B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AB3C0
 * Original: 0x000AB3C0 - 0x000AB413 (83 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB3C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB3C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000AB3C9u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000AB3C9: ;
    edi = esi + 0xB0;
    ecx = edi;
    PUSH32(esp, 0x000AB3D6u); RECOMP_ABI_CALL(0x00131E70u, sub_00131E70); /* call 0x00131E70 */

loc_000AB3D6: ;
    MEM32(edi) = 0x3105D0;
    MEM32(esi) = 0x310480;
    MEM32(esi + 8) = 0x310474;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x124) = edi;
    MEM32(esi + 0x128) = edi;
    ecx = esi + 0x130;
    MEM32(esi + 0x12C) = edi;
    PUSH32(esp, 0x000AB408u); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_000AB408: ;
    MEM32(esi + 0x120) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AB420
 * Original: 0x000AB420 - 0x000AB4BB (155 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB420: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x128);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x124);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    ebp = esi + 0xB0;
    MEM32(esi) = 0x310480;
    MEM32(esi + 8) = 0x310474;
    MEM32(ebp) = 0x3105D0;
    if (CMP_EQ(_fa, _fb)) goto loc_000AB478; /* je: equal / zero */

loc_000AB44F: ;
    PUSH32(esp, ebx);

loc_000AB450: ;
    ebx = MEM32(edi + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB46A; /* je: equal / zero */

loc_000AB457: ;
    ecx = ebx;
    PUSH32(esp, 0x000AB45Eu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_000AB45E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000AB467u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000AB461u); } /* indirect call */
    }

loc_000AB467: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AB46A: ;
    eax = MEM32(esi + 0x128);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB450; /* jne: not equal / not zero */

loc_000AB477: ;
    POP32(esp, ebx);

loc_000AB478: ;
    ecx = esi + 0x130;
    PUSH32(esp, 0x000AB483u); RECOMP_ABI_CALL(0x001D0960u, sub_001D0960); /* call 0x001D0960 */

loc_000AB483: ;
    eax = MEM32(esi + 0x124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB496; /* je: equal / zero */

loc_000AB48D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB493u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000AB493: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AB496: ;
    ecx = ebp;
    MEM32(esi) = 0x310258;
    MEM32(esi + 8) = 0x310250;
    MEM32(ebp) = 0x310200;
    PUSH32(esp, 0x000AB4B1u); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000AB4B1: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_000AB4C0
 * Original: 0x000AB4C0 - 0x000AB510 (80 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB4C0: ;
    eax = MEM32(0x3C5A78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB50F; /* jne: not equal / not zero */

loc_000AB4C9: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x310620);
    MEM32(0x3C5A80) = 0;
    PUSH32(esp, 0x000AB4E7u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000AB4E7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB501; /* je: equal / zero */

loc_000AB4EE: ;
    ecx = eax;
    PUSH32(esp, 0x000AB4F5u); RECOMP_ABI_CALL(0x000AB3C0u, sub_000AB3C0); /* call 0x000AB3C0 */

loc_000AB4F5: ;
    MEM32(0x3C5A78) = eax;
    ecx = eax;
    g_seh_ebp = ebp; sub_000AA800(); return; /* tail jmp 0x000AA800 */

loc_000AB501: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3C5A78) = eax;
    ecx = eax;
    g_seh_ebp = ebp; sub_000AA800(); return; /* tail jmp 0x000AA800 */

loc_000AB50F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AB530
 * Original: 0x000AB530 - 0x000AB57A (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB530: ;
    ecx = MEM32(0x3C5A78);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB548; /* jne: not equal / not zero */

loc_000AB53D: ;
    PUSH32(esp, 0x000AB542u); RECOMP_ABI_CALL(0x000AB4C0u, sub_000AB4C0); /* call 0x000AB4C0 */

loc_000AB542: ;
    ecx = MEM32(0x3C5A78);

loc_000AB548: ;
    eax = MEM32(ecx + 0x124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x128)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x128) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB56C; /* je: equal / zero */

loc_000AB556: ;
    MEM32(eax + 0x24) = esi;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x2C) = esi;
    edx = MEM32(ecx + 0x128);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB556; /* jne: not equal / not zero */

loc_000AB56C: ;
    MEM32(ecx + 0x120) = esi;
    MEM32(0x3C5A80) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AB580
 * Original: 0x000AB580 - 0x000AB5DD (93 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB580: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB5DB; /* je: equal / zero */

loc_000AB58C: ;
    eax = MEM32(edi + 0x24);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB5A5; /* je: equal / zero */

loc_000AB596: ;
    ecx = ZX16(MEM16(eax + 6));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AB5A0u); RECOMP_ABI_CALL(0x000707D0u, sub_000707D0); /* call 0x000707D0 */

loc_000AB5A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_000AB5A5: ;
    ecx = MEM32(0x3C5A78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB5BA; /* jne: not equal / not zero */

loc_000AB5AF: ;
    PUSH32(esp, 0x000AB5B4u); RECOMP_ABI_CALL(0x000AB4C0u, sub_000AB4C0); /* call 0x000AB4C0 */

loc_000AB5B4: ;
    ecx = MEM32(0x3C5A78);

loc_000AB5BA: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AB5C5u); RECOMP_ABI_CALL(0x000AA880u, sub_000AA880); /* call 0x000AA880 */

loc_000AB5C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB5DB; /* je: equal / zero */

loc_000AB5CA: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB5DBu); RECOMP_ABI_CALL(0x000AAD50u, sub_000AAD50); /* call 0x000AAD50 */

loc_000AB5DB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AB5E0
 * Original: 0x000AB5E0 - 0x000AB5E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB5E0: ;
    g_seh_ebp = ebp; sub_000AB4C0(); return; /* tail jmp 0x000AB4C0 */

}

/**
 * sub_000AB5F0
 * Original: 0x000AB5F0 - 0x000AB604 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB5F0: ;
    eax = MEM32(0x3C5A78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB603; /* jne: not equal / not zero */

loc_000AB5F9: ;
    PUSH32(esp, 0x000AB5FEu); RECOMP_ABI_CALL(0x000AB4C0u, sub_000AB4C0); /* call 0x000AB4C0 */

loc_000AB5FE: ;
    eax = MEM32(0x3C5A78);

loc_000AB603: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AB610
 * Original: 0x000AB610 - 0x000AB615 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB610: ;
    g_seh_ebp = ebp; sub_000AB530(); return; /* tail jmp 0x000AB530 */

}

/**
 * sub_000AB620
 * Original: 0x000AB620 - 0x000AB668 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB620: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AB626u); RECOMP_ABI_CALL(0x000AB530u, sub_000AB530); /* call 0x000AB530 */

loc_000AB626: ;
    esi = MEM32(0x3C5A78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB63B; /* jne: not equal / not zero */

loc_000AB630: ;
    PUSH32(esp, 0x000AB635u); RECOMP_ABI_CALL(0x000AB4C0u, sub_000AB4C0); /* call 0x000AB4C0 */

loc_000AB635: ;
    esi = MEM32(0x3C5A78);

loc_000AB63B: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AB643u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000AB643: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB65B; /* je: equal / zero */

loc_000AB64A: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB656u); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_000AB656: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000AB65B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB663u); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_000AB663: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AB670
 * Original: 0x000AB670 - 0x000AB675 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB670: ;
    g_seh_ebp = ebp; sub_000AB580(); return; /* tail jmp 0x000AB580 */

}

/**
 * sub_000AB680
 * Original: 0x000AB680 - 0x000AB732 (178 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB680: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x128);
    edx = MEM32(edi + 0x12C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    esi = edi + 0x124;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000AB70D; /* je: equal / zero */

loc_000AB6EC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB6FA; /* je: equal / zero */

loc_000AB6F0: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB6FAu); RECOMP_ABI_CALL(0x000AA4F0u, sub_000AA4F0); /* call 0x000AA4F0 */

loc_000AB6FA: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 4) = MEM32(esi + 4) + 0x34;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x128);
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000AB70D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x13;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000AB723u); RECOMP_ABI_CALL(0x000ABB20u, sub_000ABB20); /* call 0x000ABB20 */

loc_000AB723: ;
    eax = MEM32(edi + 0x128);
    POP32(esp, edi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AB740
 * Original: 0x000AB740 - 0x000AB788 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB740: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AB746u); RECOMP_ABI_CALL(0x000AB530u, sub_000AB530); /* call 0x000AB530 */

loc_000AB746: ;
    esi = MEM32(0x3C5A78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB75B; /* jne: not equal / not zero */

loc_000AB750: ;
    PUSH32(esp, 0x000AB755u); RECOMP_ABI_CALL(0x000AB4C0u, sub_000AB4C0); /* call 0x000AB4C0 */

loc_000AB755: ;
    esi = MEM32(0x3C5A78);

loc_000AB75B: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AB763u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000AB763: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB77B; /* je: equal / zero */

loc_000AB76A: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB776u); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_000AB776: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000AB77B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB783u); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_000AB783: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AB790
 * Original: 0x000AB790 - 0x000AB795 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB790(void)
{

loc_000AB790: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AB7A0
 * Original: 0x000AB7A0 - 0x000AB7A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB7A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000AB7C0(); return; /* tail jmp 0x000AB7C0 */

}

/**
 * sub_000AB7B0
 * Original: 0x000AB7B0 - 0x000AB7BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB7B0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000AB7C0(); return; /* tail jmp 0x000AB7C0 */

}

/**
 * sub_000AB7C0
 * Original: 0x000AB7C0 - 0x000AB7FE (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xB0;
    MEM32(esi) = 0x310258;
    MEM32(esi + 8) = 0x310250;
    MEM32(ecx) = 0x310200;
    PUSH32(esp, 0x000AB7E1u); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000AB7E1: ;
    ecx = esi;
    PUSH32(esp, 0x000AB7E8u); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_000AB7E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AB7F8; /* je: equal / zero */

loc_000AB7EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AB7F5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000AB7F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AB7F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AB800
 * Original: 0x000AB800 - 0x000AB9D5 (469 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB800(void)
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

loc_000AB800: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x000AB80Fu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000AB80F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94C51280u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x94C51280u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000AB908; /* ja: above (unsigned >) */

loc_000AB81A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000AB8E5; /* je: equal / zero */

loc_000AB820: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7AB84F80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7AB84F80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000AB8A6; /* ja: above (unsigned >) */

loc_000AB827: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000AB883; /* je: equal / zero */

loc_000AB829: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30B1419E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30B1419E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB86F; /* je: equal / zero */

loc_000AB830: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5B02BB49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5B02BB49 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AB98E; /* jne: not equal / not zero */

loc_000AB83B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AB844u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000AB844: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x3210B0)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_000AB862; /* jae: above or equal (unsigned >=) */

loc_000AB85C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_000AB862: ;
    eax = MEM32(edi + 4);
    POP32(esp, edi);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AB86F: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AB878u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000AB878: ;
    ecx = MEM32(edi + 4);
    POP32(esp, edi);
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AB883: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AB88Cu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000AB88C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_000AB895; /* jg: greater (signed >) */

loc_000AB890: ;
    eax = 1;

loc_000AB895: ;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AB8A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C1A452Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8C1A452Fu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AB98E; /* jne: not equal / not zero */

loc_000AB8B1: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AB8BAu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000AB8BA: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x3210B0)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_000AB8D8; /* jae: above or equal (unsigned >=) */

loc_000AB8D2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_000AB8D8: ;
    eax = MEM32(edi + 4);
    POP32(esp, edi);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AB8E5: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AB8EEu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000AB8EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_000AB8F7; /* jg: greater (signed >) */

loc_000AB8F2: ;
    eax = 1;

loc_000AB8F7: ;
    ecx = MEM32(edi + 4);
    POP32(esp, edi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AB908: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9915EB8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9915EB8u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000AB987; /* ja: above (unsigned >) */

loc_000AB90F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000AB974; /* je: equal / zero */

loc_000AB911: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x970FC046u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x970FC046u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB940; /* je: equal / zero */

loc_000AB918: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD41B234Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD41B234Du (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AB98E; /* jne: not equal / not zero */

loc_000AB91F: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x000AB932u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000AB932: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AB940: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AB949u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000AB949: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x3210B0)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_000AB967; /* jae: above or equal (unsigned >=) */

loc_000AB961: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_000AB967: ;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AB974: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AB97Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000AB97D: ;
    ecx = MEM32(edi + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AB987: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF54DE50Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF54DE50Fu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000AB9A1; /* je: equal / zero */

loc_000AB98E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3103DC);
    PUSH32(esp, 0x000AB999u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000AB999: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AB9A1: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AB9AAu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000AB9AA: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x3210B0)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_000AB9C8; /* jae: above or equal (unsigned >=) */

loc_000AB9C2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_000AB9C8: ;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AB9E0
 * Original: 0x000AB9E0 - 0x000AB9FF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB9E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x2FF0D4;
    if (TEST_Z(_fa, _fb)) goto loc_000AB9F9; /* je: equal / zero */

loc_000AB9F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AB9F6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000AB9F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AB9F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ABA00
 * Original: 0x000ABA00 - 0x000ABA6D (109 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABA00: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000ABA6C; /* je: equal / zero */

loc_000ABA10: ;
    PUSH32(esp, esi);

loc_000ABA11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABA61; /* je: equal / zero */

loc_000ABA15: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = esi;
    esi = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = esi;
    esi = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = esi;
    esi = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = esi;
    esi = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = esi;
    esi = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = esi;

loc_000ABA61: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABA11; /* jne: not equal / not zero */

loc_000ABA6B: ;
    POP32(esp, esi);

loc_000ABA6C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ABA70
 * Original: 0x000ABA70 - 0x000ABADB (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABA70: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_BE(_fa, _fb)) goto loc_000ABADA; /* jbe: below or equal (unsigned <=) */

loc_000ABA7C: ;
    edx = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);

loc_000ABA83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABAD3; /* je: equal / zero */

loc_000ABA87: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = esi;
    esi = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = esi;
    esi = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = esi;
    esi = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = esi;
    esi = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = esi;
    esi = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = esi;

loc_000ABAD3: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000ABA83; /* jne: not equal / not zero */

loc_000ABAD9: ;
    POP32(esp, esi);

loc_000ABADA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ABAE0
 * Original: 0x000ABAE0 - 0x000ABAF6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABAE0(void)
{

loc_000ABAE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x000ABAEBu); RECOMP_ABI_CALL(0x000AA6F0u, sub_000AA6F0); /* call 0x000AA6F0 */

loc_000ABAEB: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ABB00
 * Original: 0x000ABB00 - 0x000ABB08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ABB00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000ABC00(); return; /* tail jmp 0x000ABC00 */

}

/**
 * sub_000ABB10
 * Original: 0x000ABB10 - 0x000ABB1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ABB10: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000ABC00(); return; /* tail jmp 0x000ABC00 */

}

/**
 * sub_000ABB20
 * Original: 0x000ABB20 - 0x000ABBFE (222 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ABB20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x4EC4EC4F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0x20);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    ecx = esp + 0x24;
    if (CMP_B(_fa, _fb)) goto loc_000ABB53; /* jb: below (unsigned <) */

loc_000ABB4F: ;
    ecx = esp + 0x10;

loc_000ABB53: ;
    ebx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_000ABB6B; /* je: equal / zero */

loc_000ABB59: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ABB64u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000ABB64: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    goto loc_000ABB6D;

loc_000ABB6B: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000ABB6D: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ABB80u); RECOMP_ABI_CALL(0x000ABA00u, sub_000ABA00); /* call 0x000ABA00 */

loc_000ABB80: ;
    edi = eax;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABBA3; /* jne: not equal / not zero */

loc_000ABB8E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABB9E; /* je: equal / zero */

loc_000ABB92: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000ABB9Eu); RECOMP_ABI_CALL(0x000AA4F0u, sub_000AA4F0); /* call 0x000AA4F0 */

loc_000ABB9E: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000ABBB9;

loc_000ABBA3: ;
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ABBB4u); RECOMP_ABI_CALL(0x000ABA70u, sub_000ABA70); /* call 0x000ABA70 */

loc_000ABBB4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_000ABBB9: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABBDA; /* jne: not equal / not zero */

loc_000ABBC1: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ABBD5u); RECOMP_ABI_CALL(0x000ABA00u, sub_000ABA00); /* call 0x000ABA00 */

loc_000ABBD5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_000ABBDA: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABBE9; /* je: equal / zero */

loc_000ABBE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ABBE6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000ABBE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ABBE9: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x34);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    MEM32(esi) = ebp;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000ABC00
 * Original: 0x000ABC00 - 0x000ABC1E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABC00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000ABC08u); RECOMP_ABI_CALL(0x000AB420u, sub_000AB420); /* call 0x000AB420 */

loc_000ABC08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ABC18; /* je: equal / zero */

loc_000ABC0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000ABC15u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000ABC15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ABC18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ABC20
 * Original: 0x000ABC20 - 0x000ABC45 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABC20: ;
    eax = MEM32(0x3C5A78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000ABC31; /* jne: not equal / not zero */

loc_000ABC2C: ;
    PUSH32(esp, 0x000ABC31u); RECOMP_ABI_CALL(0x000AB4C0u, sub_000AB4C0); /* call 0x000AB4C0 */

loc_000ABC31: ;
    ecx = MEM32(0x3C5A78);
    PUSH32(esp, 0x000ABC3Cu); RECOMP_ABI_CALL(0x000AB680u, sub_000AB680); /* call 0x000AB680 */

loc_000ABC3C: ;
    MEM32(esi + 4) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ABC50
 * Original: 0x000ABC50 - 0x000ABC9E (78 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABC50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABC50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = MEM32(esp);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ABCA0
 * Original: 0x000ABCA0 - 0x000ABCA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABCA0(void)
{

loc_000ABCA0: ;
    eax = MEM32(0x3C5A84);
    esp += 4; return; /* ret */

}

/**
 * sub_000ABCB0
 * Original: 0x000ABCB0 - 0x000ABCF1 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000ABCB0: ;
    eax = MEM32(0x3C5A84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABCEE; /* je: equal / zero */

loc_000ABCB9: ;
    ecx = MEM32(esp + 4);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(ecx + eax + 0x20)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000ABCD1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x28)) */

loc_000ABCCE: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000ABCD1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x310644); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000ABCEE; /* jnp: not parity */

loc_000ABCE3: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x20); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x28); /* comiss */
    if ((_fca > _fcb)) goto loc_000ABCCE; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x28)) */

loc_000ABCEE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ABD00
 * Original: 0x000ABD00 - 0x000ABD23 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABD00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x49C;
    edi = 5;
    /* nop */

loc_000ABD10: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xAC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x000ABD1Du); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_000ABD1D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000ABD10; /* jne: not equal / not zero */

loc_000ABD20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ABD30
 * Original: 0x000ABD30 - 0x000ABEDB (427 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABD30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABD30: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x2C) = LO8(eax);
    MEM32(ecx + 0x30) = eax;
    MEMF(ecx + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x58) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x50) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x64) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x68) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x6C) = LO8(eax);
    MEM32(ecx + 0x70) = eax;
    MEMF(ecx + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x88) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x84) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x80) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x94) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x90) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA8) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0xAC) = LO8(eax);
    MEM32(ecx + 0xB0) = eax;
    MEMF(ecx + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xE8) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0xEC) = LO8(eax);
    MEM32(ecx + 0xF0) = eax;
    MEMF(ecx + 0x10C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x108) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x104) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x100) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x11C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x118) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x114) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x110) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x120) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x124) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x128) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x12C) = LO8(eax);
    MEM32(ecx + 0x130) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000ABEE0
 * Original: 0x000ABEE0 - 0x000AC032 (338 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ABEE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x3C5A84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000AC02C; /* je: equal / zero */

loc_000ABEF9: ;
    SET_LO8(eax, MEM8(ebp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABFAA; /* jne: not equal / not zero */

loc_000ABF04: ;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    esi = MEM32(ebp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_000ABF2F; /* je: equal / zero */

loc_000ABF0F: ;
    eax = esi;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + edx + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx + 0x70), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABF2F; /* jne: not equal / not zero */

loc_000ABF1B: ;
    ecx = esi + 1;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABF24u); RECOMP_ABI_CALL(0x000ABCB0u, sub_000ABCB0); /* call 0x000ABCB0 */

loc_000ABF24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC02C; /* jne: not equal / not zero */

loc_000ABF2F: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAC);
    PUSH32(esp, 1);
    ecx = eax + edx + 0x1F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABF45u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000ABF45: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    SET_LO16(eax, MEM16(ebp + 0xA));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    eax = MEM32(0x3C5A84);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0x48) = xmm2.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x4C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x6C) = 0;
    MEM32(eax + 0x70) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000ABFAA: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ABFC6; /* je: equal / zero */

loc_000ABFB2: ;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ABFC6; /* jne: not equal / not zero */

loc_000ABFB8: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABFBFu); RECOMP_ABI_CALL(0x000ABCB0u, sub_000ABCB0); /* call 0x000ABCB0 */

loc_000ABFBF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC02C; /* jne: not equal / not zero */

loc_000ABFC6: ;
    PUSH32(esp, 1);
    ecx = edx + 0x144;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ABFD3u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000ABFD3: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    SET_LO16(eax, MEM16(ebp + 0xA));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    eax = MEM32(0x3C5A84);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x2C) = 0;
    MEM32(eax + 0x30) = esi;

loc_000AC02C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000AC040
 * Original: 0x000AC040 - 0x000AC1A2 (354 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AC040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x3C5A84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000AC19C; /* je: equal / zero */

loc_000AC059: ;
    SET_LO8(eax, MEM8(ebp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC112; /* jne: not equal / not zero */

loc_000AC064: ;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    esi = MEM32(ebp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_000AC08F; /* je: equal / zero */

loc_000AC06F: ;
    eax = esi;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + edx + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx + 0x70), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC08F; /* jne: not equal / not zero */

loc_000AC07B: ;
    ecx = esi + 1;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC084u); RECOMP_ABI_CALL(0x000ABCB0u, sub_000ABCB0); /* call 0x000ABCB0 */

loc_000AC084: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC19C; /* jne: not equal / not zero */

loc_000AC08F: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAC);
    PUSH32(esp, 1);
    ecx = eax + edx + 0x1F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC0A5u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000AC0A5: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    SET_LO16(eax, MEM16(ebp + 0xA));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    eax = MEM32(0x3C5A84);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(eax + 0x44) = xmm1.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0x48) = xmm2.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x4C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x310644)); /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x6C) = 0;
    MEM32(eax + 0x70) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000AC112: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC12E; /* je: equal / zero */

loc_000AC11A: ;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC12E; /* jne: not equal / not zero */

loc_000AC120: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC127u); RECOMP_ABI_CALL(0x000ABCB0u, sub_000ABCB0); /* call 0x000ABCB0 */

loc_000AC127: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC19C; /* jne: not equal / not zero */

loc_000AC12E: ;
    PUSH32(esp, 1);
    ecx = edx + 0x144;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC13Bu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000AC13B: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    SET_LO16(eax, MEM16(ebp + 0xA));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    eax = MEM32(0x3C5A84);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x310644)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x2C) = 0;
    MEM32(eax + 0x30) = esi;

loc_000AC19C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000AC1B0
 * Original: 0x000AC1B0 - 0x000AC30C (348 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AC1B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x3C5A84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000AC306; /* je: equal / zero */

loc_000AC1C9: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC27F; /* jne: not equal / not zero */

loc_000AC1D4: ;
    edi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    esi = MEM32(ebp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_000AC1FF; /* je: equal / zero */

loc_000AC1DF: ;
    eax = esi;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + edx + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx + 0x70), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC1FF; /* jne: not equal / not zero */

loc_000AC1EB: ;
    ecx = esi + 1;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC1F4u); RECOMP_ABI_CALL(0x000ABCB0u, sub_000ABCB0); /* call 0x000ABCB0 */

loc_000AC1F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC306; /* jne: not equal / not zero */

loc_000AC1FF: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAC);
    PUSH32(esp, 2);
    ecx = eax + edx + 0x1F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC215u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000AC215: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    SET_LO16(eax, MEM16(ebp + 0xA));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    eax = MEM32(0x3C5A84);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(eax + 0x44) = xmm1.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0x48) = xmm2.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x4C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x6C) = 0;
    MEM32(eax + 0x70) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000AC27F: ;
    esi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC29B; /* je: equal / zero */

loc_000AC287: ;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC29B; /* jne: not equal / not zero */

loc_000AC28D: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC294u); RECOMP_ABI_CALL(0x000ABCB0u, sub_000ABCB0); /* call 0x000ABCB0 */

loc_000AC294: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC306; /* jne: not equal / not zero */

loc_000AC29B: ;
    PUSH32(esp, 2);
    ecx = edx + 0x144;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC2A8u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000AC2A8: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    SET_LO16(eax, MEM16(ebp + 0xA));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = ZX8(LO8(eax));
    edx = ZX8(HI8(eax));
    eax = MEM32(0x3C5A84);
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x2C) = 0;
    MEM32(eax + 0x30) = esi;

loc_000AC306: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000AC310
 * Original: 0x000AC310 - 0x000AC4D4 (452 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AC310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x3C5A84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000AC4CE; /* je: equal / zero */

loc_000AC329: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC411; /* jne: not equal / not zero */

loc_000AC334: ;
    edi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    esi = MEM32(ebp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_000AC35F; /* je: equal / zero */

loc_000AC33F: ;
    eax = esi;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + edx + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx + 0x70), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC35F; /* jne: not equal / not zero */

loc_000AC34B: ;
    ecx = esi + 1;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC354u); RECOMP_ABI_CALL(0x000ABCB0u, sub_000ABCB0); /* call 0x000ABCB0 */

loc_000AC354: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC4CE; /* jne: not equal / not zero */

loc_000AC35F: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAC);
    PUSH32(esp, 1);
    ecx = eax + edx + 0x1F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC375u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000AC375: ;
    eax = MEM32(ebp + 8);
    ecx = ZX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    edx = ZX8(HI8(eax));
    SET_LO16(eax, MEM16(ebp + 0xA));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = ZX8(LO8(eax));
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(ebp + 0xC);
    edx = ZX8(HI8(eax));
    eax = MEM32(0x3C5A84);
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(LO8(ecx));
    ecx = ZX8(HI8(ecx));
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x54) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO16(ecx, MEM16(ebp + 0xE));
    MEMF(eax + 0x58) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm3.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(LO8(ecx));
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    ecx = ZX8(HI8(ecx));
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x48) = xmm2.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0x4C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x6C) = 1;
    MEM32(eax + 0x70) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000AC411: ;
    esi = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC431; /* je: equal / zero */

loc_000AC419: ;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC431; /* jne: not equal / not zero */

loc_000AC41F: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC426u); RECOMP_ABI_CALL(0x000ABCB0u, sub_000ABCB0); /* call 0x000ABCB0 */

loc_000AC426: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC4CE; /* jne: not equal / not zero */

loc_000AC431: ;
    PUSH32(esp, 1);
    ecx = edx + 0x144;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC43Eu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000AC43E: ;
    eax = MEM32(ebp + 8);
    edx = ZX8(LO8(eax));
    eax = ZX8(HI8(eax));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO16(eax, MEM16(ebp + 0xA));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = ZX8(LO8(eax));
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(ebp + 0xC);
    edx = ZX8(HI8(eax));
    eax = MEM32(0x3C5A84);
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    edx = ZX8(LO8(ecx));
    ecx = ZX8(HI8(ecx));
    MEMF(eax + 0x18) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm3.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO16(ecx, MEM16(ebp + 0xE));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(LO8(ecx));
    ecx = ZX8(HI8(ecx));
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x2C) = 1;
    MEM32(eax + 0x30) = esi;

loc_000AC4CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000AC4E0
 * Original: 0x000AC4E0 - 0x000AC66E (398 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AC4E0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x000AC4F2u); RECOMP_ABI_CALL(0x001D0BF0u, sub_001D0BF0); /* call 0x001D0BF0 */

loc_000AC4F2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    edi = MEM32(esp + 0x30);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000AC54Fu); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000AC54F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x000AC5A8u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000AC5A8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000AC601u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000AC601: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000AC65Au); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000AC65A: ;
    ecx = esi;
    PUSH32(esp, 0x000AC661u); RECOMP_ABI_CALL(0x001D0700u, sub_001D0700); /* call 0x001D0700 */

loc_000AC661: ;
    ecx = esi;
    PUSH32(esp, 0x000AC668u); RECOMP_ABI_CALL(0x001D0780u, sub_001D0780); /* call 0x001D0780 */

loc_000AC668: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AC670
 * Original: 0x000AC670 - 0x000AC94A (730 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC670(void)
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

loc_000AC670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(0x3C5A84);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x28); /* comiss */
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AC6ED; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x28)) */

loc_000AC6A7: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */

loc_000AC6D3: ;
    xmm4 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x28); /* addss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm4.f[0]; /* movss */
    goto loc_000AC833;

loc_000AC6ED: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x310644); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AC71D; /* jp: parity */

loc_000AC6FF: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    goto loc_000AC833;

loc_000AC71D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x20); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AC7F6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x28)) */

loc_000AC731: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esi + 0x20); /* subss */
    xmm4.f[0] = xmm4.f[0] / MEMF(esi + 0x24); /* divss */
    _fca = xmm5.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AC74A; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm4.f[0]) */

loc_000AC745: ;
    xmm4 = xmm5; /* movaps */
    goto loc_000AC75A;

loc_000AC74A: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AC75A; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000AC757: ;
    xmm4 = xmm0; /* movaps */

loc_000AC75A: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC79A; /* jne: not equal / not zero */

loc_000AC761: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm0 = xmm5; /* movaps */
    xmm3 = xmm5; /* movaps */
    goto loc_000AC7D9;

loc_000AC79A: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */

loc_000AC7D9: ;
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    goto loc_000AC6D3;

loc_000AC7F6: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC809; /* jne: not equal / not zero */

loc_000AC7FD: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    goto loc_000AC80F;

loc_000AC809: ;
    PUSH32(esp, esi);
    edx = esp + 0x34;
    PUSH32(esp, edx);

loc_000AC80F: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC818u); RECOMP_ABI_CALL(0x00075240u, sub_00075240); /* call 0x00075240 */

loc_000AC818: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */

loc_000AC833: ;
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AC944; /* jnp: not parity */

loc_000AC840: ;
    xmm3 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    fp_push(MEMD(0x310648)); /* fld double */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000AC884; /* jbe: below or equal (unsigned <=) */

loc_000AC87E: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_000AC884: ;
    fp_push(MEMD(0x310648)); /* fld double */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000AC89A; /* jbe: below or equal (unsigned <=) */

loc_000AC894: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000AC89A: ;
    fp_push(MEMD(0x310648)); /* fld double */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000AC8B0; /* jbe: below or equal (unsigned <=) */

loc_000AC8AA: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_000AC8B0: ;
    fp_push(MEMD(0x310648)); /* fld double */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000AC8C6; /* jbe: below or equal (unsigned <=) */

loc_000AC8C0: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000AC8C6: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC8CFu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000AC8CF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edi = eax;
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC8DDu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000AC8DD: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC8F0u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000AC8F0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC903u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000AC903: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x140;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AC941u); RECOMP_ABI_CALL(0x000AC4E0u, sub_000AC4E0); /* call 0x000AC4E0 */

loc_000AC941: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AC944: ;
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
 * sub_000AC950
 * Original: 0x000AC950 - 0x000AC9BB (107 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AC950: ;
    ecx = MEM32(esp + 4);
    edx = ecx;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(LO8(ecx));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(HI8(ecx));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(0x3C5A84);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x3F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3F0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi + 4;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x000AC989u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000AC989: ;
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC60); /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AC9B6u); RECOMP_ABI_CALL(0x000AC4E0u, sub_000AC4E0); /* call 0x000AC4E0 */

loc_000AC9B6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AC9C0
 * Original: 0x000AC9C0 - 0x000AC9F8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000AC9C0: ;
    ecx = MEM32(0x3C5A84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AC9F5; /* je: equal / zero */

loc_000AC9CA: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AC9D8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x28)) */

loc_000AC9D5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000AC9D8: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x310644); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AC9F5; /* jnp: not parity */

loc_000AC9EA: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x20); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x28); /* comiss */
    if ((_fca > _fcb)) goto loc_000AC9D5; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x28)) */

loc_000AC9F5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ACA00
 * Original: 0x000ACA00 - 0x000ACD1B (795 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACA00(void)
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

loc_000ACA00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3C5A84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000ACD15; /* je: equal / zero */

loc_000ACA18: ;
    esi = MEM32(ebp + 8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ACA22u); RECOMP_ABI_CALL(0x00194C60u, sub_00194C60); /* call 0x00194C60 */

loc_000ACA22: ;
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    ecx = eax;
    eax = MEM32(0x3C5A84);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(ecx + eax + 0x20)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x28); /* comiss */
    MEMF(esp + 0x30) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000ACA9C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x28)) */

loc_000ACA56: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */

loc_000ACA82: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ebp + 0xC); /* addss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm4.f[0]; /* movss */
    goto loc_000ACBE2;

loc_000ACA9C: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x310644); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000ACACC; /* jp: parity */

loc_000ACAAE: ;
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    goto loc_000ACBE2;

loc_000ACACC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x20); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000ACBA5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x28)) */

loc_000ACAE0: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ecx + 0x20); /* subss */
    xmm4.f[0] = xmm4.f[0] / MEMF(ecx + 0x24); /* divss */
    _fca = xmm5.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000ACAF9; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm4.f[0]) */

loc_000ACAF4: ;
    xmm4 = xmm5; /* movaps */
    goto loc_000ACB09;

loc_000ACAF9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000ACB09; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000ACB06: ;
    xmm4 = xmm0; /* movaps */

loc_000ACB09: ;
    SET_LO8(eax, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACB49; /* jne: not equal / not zero */

loc_000ACB10: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm0 = xmm5; /* movaps */
    xmm3 = xmm5; /* movaps */
    goto loc_000ACB88;

loc_000ACB49: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */

loc_000ACB88: ;
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    goto loc_000ACA82;

loc_000ACBA5: ;
    SET_LO8(eax, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACBB8; /* jne: not equal / not zero */

loc_000ACBAC: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    goto loc_000ACBBE;

loc_000ACBB8: ;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);

loc_000ACBBE: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ACBC7u); RECOMP_ABI_CALL(0x00075240u, sub_00075240); /* call 0x00075240 */

loc_000ACBC7: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */

loc_000ACBE2: ;
    _fca = xmm3.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000ACD15; /* jnp: not parity */

loc_000ACBEF: ;
    xmm3 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    fp_push(MEMD(0x310648)); /* fld double */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000ACC33; /* jbe: below or equal (unsigned <=) */

loc_000ACC2D: ;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */

loc_000ACC33: ;
    fp_push(MEMD(0x310648)); /* fld double */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000ACC49; /* jbe: below or equal (unsigned <=) */

loc_000ACC43: ;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_000ACC49: ;
    fp_push(MEMD(0x310648)); /* fld double */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000ACC5F; /* jbe: below or equal (unsigned <=) */

loc_000ACC59: ;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_000ACC5F: ;
    fp_push(MEMD(0x310648)); /* fld double */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000ACC75; /* jbe: below or equal (unsigned <=) */

loc_000ACC6F: ;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_000ACC75: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ACC7Eu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000ACC7E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edi = eax;
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ACC8Cu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000ACC8C: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ACC9Fu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000ACC9F: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ACCB2u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000ACCB2: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x44);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x40);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0x4C);
    MEM32(esp + 0x10) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ACCE0u); RECOMP_ABI_CALL(0x00194C60u, sub_00194C60); /* call 0x00194C60 */

loc_000ACCE0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAC);
    ecx = MEM32(0x3C5A84);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    eax = eax + ecx + 0x1EC;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ACD12u); RECOMP_ABI_CALL(0x000AC4E0u, sub_000AC4E0); /* call 0x000AC4E0 */

loc_000ACD12: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ACD15: ;
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
 * sub_000ACD20
 * Original: 0x000ACD20 - 0x000ACDAA (138 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACD20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x140;
    edi = 5;

loc_000ACD30: ;
    ecx = esi;
    PUSH32(esp, 0x000ACD37u); RECOMP_ABI_CALL(0x001D05C0u, sub_001D05C0); /* call 0x001D05C0 */

loc_000ACD37: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xAC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000ACD30; /* jne: not equal / not zero */

loc_000ACD40: ;
    esi = ebx + 0x144;
    edi = 5;
    goto loc_000ACD50;

    /* nop */

loc_000ACD50: ;
    ecx = esi + -4;
    PUSH32(esp, 0x000ACD58u); RECOMP_ABI_CALL(0x001D0630u, sub_001D0630); /* call 0x001D0630 */

loc_000ACD58: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000ACD61u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000ACD61: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000ACD6Au); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000ACD6A: ;
    PUSH32(esp, 0x207);
    ecx = esi;
    PUSH32(esp, 0x000ACD76u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000ACD76: ;
    PUSH32(esp, 0x207);
    ecx = esi;
    PUSH32(esp, 0x000ACD82u); RECOMP_ABI_CALL(0x001CF200u, sub_001CF200); /* call 0x001CF200 */

loc_000ACD82: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000ACD8Bu); RECOMP_ABI_CALL(0x001CF0B0u, sub_001CF0B0); /* call 0x001CF0B0 */

loc_000ACD8B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000ACD94u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_000ACD94: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xAC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000ACD50; /* jne: not equal / not zero */

loc_000ACD9D: ;
    ecx = ebx;
    PUSH32(esp, 0x000ACDA4u); RECOMP_ABI_CALL(0x000ABD30u, sub_000ABD30); /* call 0x000ABD30 */

loc_000ACDA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000ACDB0
 * Original: 0x000ACDB0 - 0x000ACDEC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACDB0: ;
    eax = MEM32(0x3C5A84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACDEB; /* jne: not equal / not zero */

loc_000ACDB9: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x4A0);
    PUSH32(esp, 0x310650);
    PUSH32(esp, 0x000ACDCDu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000ACDCD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ACDE1; /* je: equal / zero */

loc_000ACDD4: ;
    ecx = eax;
    PUSH32(esp, 0x000ACDDBu); RECOMP_ABI_CALL(0x000ACD20u, sub_000ACD20); /* call 0x000ACD20 */

loc_000ACDDB: ;
    MEM32(0x3C5A84) = eax;
    esp += 4; return; /* ret */

loc_000ACDE1: ;
    MEM32(0x3C5A84) = 0;

loc_000ACDEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ACDF0
 * Original: 0x000ACDF0 - 0x000ACE37 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACDF0: ;
    eax = MEM32(0x3C5A84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000ACE2B; /* je: equal / zero */

loc_000ACDFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + 0x49C;
    edi = 5;
    /* nop */

loc_000ACE10: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xAC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x000ACE1Du); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_000ACE1D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000ACE10; /* jne: not equal / not zero */

loc_000ACE20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000ACE26u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000ACE26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_000ACE2B: ;
    MEM32(0x3C5A84) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000ACE40
 * Original: 0x000ACE40 - 0x000ACE50 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ACE40: ;
    ecx = MEM32(0x3C5A84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ACE4F; /* je: equal / zero */

loc_000ACE4A: ;
    g_seh_ebp = ebp; sub_000ABD30(); return; /* tail jmp 0x000ABD30 */

loc_000ACE4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ACE50
 * Original: 0x000ACE50 - 0x000ACEAF (95 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACE50: ;
    eax = MEM32(0x3C5A84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ACEAE; /* je: equal / zero */

loc_000ACE59: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000ACE64u); RECOMP_ABI_CALL(0x000AC670u, sub_000AC670); /* call 0x000AC670 */

loc_000ACE64: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ACEAD; /* je: equal / zero */

loc_000ACE77: ;
    eax = MEM32(0x3E8D50);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000ACEAC; /* jle: less or equal (signed <=) */

loc_000ACE83: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000ACE89u); RECOMP_ABI_CALL(0x00130650u, sub_00130650); /* call 0x00130650 */

loc_000ACE89: ;
    ecx = MEM32(eax + 0x39E8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    _fb = (uint32_t)(0x3C2FD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C2FD0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ACE9Fu); RECOMP_ABI_CALL(0x000ACA00u, sub_000ACA00); /* call 0x000ACA00 */

loc_000ACE9F: ;
    eax = MEM32(0x3E8D50);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ACE83; /* jl: less (signed <) */

loc_000ACEAC: ;
    POP32(esp, esi);

loc_000ACEAD: ;
    POP32(esp, edi);

loc_000ACEAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ACEB0
 * Original: 0x000ACEB0 - 0x000ACEC1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACEB0(void)
{

loc_000ACEB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x3C5A84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ACEC0u); RECOMP_ABI_CALL(0x000ACED0u, sub_000ACED0); /* call 0x000ACED0 */

loc_000ACEC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ACED0
 * Original: 0x000ACED0 - 0x000ACF2D (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ecx;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    SET_LO8(edx, MEM8(ecx + 0x2C));
    MEM8(eax + 0x2C) = LO8(edx);
    ecx = MEM32(ecx + 0x30);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x30) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ACF30
 * Original: 0x000ACF30 - 0x000ACF4B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000ACF30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000ACF46; /* jbe: below or equal (unsigned <=) */

loc_000ACF42: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000ACF46: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ACF50
 * Original: 0x000ACF50 - 0x000ACF5A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACF50(void)
{

loc_000ACF50: ;
    eax = MEM32(esp + 4);
    MEM32(0x3C5C18) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000ACF60
 * Original: 0x000ACF60 - 0x000ACFC3 (99 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACF60: ;
    SET_LO8(eax, MEM8(0x3C5C1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACF6C; /* jne: not equal / not zero */

loc_000ACF69: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000ACF6C: ;
    eax = MEM32(0x3C5A90);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = 0x3C5A98;
    if (CMP_LE(_fas, _fbs)) goto loc_000ACF8F; /* jle: less or equal (signed <=) */

loc_000ACF82: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ACFB7; /* je: equal / zero */

loc_000ACF87: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ACF82; /* jl: less (signed <) */

loc_000ACF8F: ;
    esi = eax + eax * 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi * 4 + 0x3C5A98;
    PUSH32(esp, edi);
    MEM32(0x3C5A90) = eax;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x000ACFA8u); RECOMP_ABI_CALL(0x001B4580u, sub_001B4580); /* call 0x001B4580 */

loc_000ACFA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    MEM32(esi + 8) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000ACFB7: ;
    eax = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    eax = MEM32(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ACFD0
 * Original: 0x000ACFD0 - 0x000AD03A (106 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACFD0: ;
    SET_LO8(eax, MEM8(0x3C5C1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD039; /* je: equal / zero */

loc_000ACFD9: ;
    ecx = MEM32(0x3C5A90);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x3C5A98;
    if (CMP_LE(_fas, _fbs)) goto loc_000AD038; /* jle: less or equal (signed <=) */

loc_000ACFEB: ;
    edx = MEM32(esp + 8);
    /* nop */

loc_000ACFF0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ACFFE; /* je: equal / zero */

loc_000ACFF4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ACFF0; /* jl: less (signed <) */

loc_000ACFFC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000ACFFE: ;
    MEM32(esi + 8) = MEM32(esi + 8) - 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AD038; /* jne: not equal / not zero */

loc_000AD003: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AD00Bu); RECOMP_ABI_CALL(0x001B45A0u, sub_001B45A0); /* call 0x001B45A0 */

loc_000AD00B: ;
    eax = MEM32(0x3C5A90);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x3C5A90) = eax;
    eax = eax + eax * 2;
    ecx = MEM32(eax * 4 + 0x3C5A98);
    eax = eax * 4 + 0x3C5A98;
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;

loc_000AD038: ;
    POP32(esp, esi);

loc_000AD039: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD040
 * Original: 0x000AD040 - 0x000AD04A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD040(void)
{

loc_000AD040: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD050
 * Original: 0x000AD050 - 0x000AD054 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD050(void)
{

loc_000AD050: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD060
 * Original: 0x000AD060 - 0x000AD0BC (92 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD060: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000AD095u); RECOMP_ABI_CALL(0x001B5440u, sub_001B5440); /* call 0x001B5440 */

loc_000AD095: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEMF(esi) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AD0C0
 * Original: 0x000AD0C0 - 0x000AD162 (162 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD0C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000AD0F6u); RECOMP_ABI_CALL(0x001B5440u, sub_001B5440); /* call 0x001B5440 */

loc_000AD0F6: ;
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD126; /* je: equal / zero */

loc_000AD120: ;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    goto loc_000AD12A;

loc_000AD126: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD13A; /* je: equal / zero */

loc_000AD12A: ;
    eax = MEM32(esp + 0x14);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */

loc_000AD13A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000AD148; /* je: equal / zero */

loc_000AD142: ;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    goto loc_000AD14C;

loc_000AD148: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD15C; /* je: equal / zero */

loc_000AD14C: ;
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000AD15C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AD170
 * Original: 0x000AD170 - 0x000AD1CC (92 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD170: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000AD1A5u); RECOMP_ABI_CALL(0x001B5450u, sub_001B5450); /* call 0x001B5450 */

loc_000AD1A5: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEMF(esi) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AD1D0
 * Original: 0x000AD1D0 - 0x000AD272 (162 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD1D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000AD206u); RECOMP_ABI_CALL(0x001B5450u, sub_001B5450); /* call 0x001B5450 */

loc_000AD206: ;
    eax = MEM32(esi + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD236; /* je: equal / zero */

loc_000AD230: ;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    goto loc_000AD23A;

loc_000AD236: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD24A; /* je: equal / zero */

loc_000AD23A: ;
    eax = MEM32(esp + 0x14);
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */

loc_000AD24A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000AD258; /* je: equal / zero */

loc_000AD252: ;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    goto loc_000AD25C;

loc_000AD258: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD26C; /* je: equal / zero */

loc_000AD25C: ;
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000AD26C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AD280
 * Original: 0x000AD280 - 0x000AD29B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD280: ;
    ecx = MEM32(0x3C5C20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD290; /* je: equal / zero */

loc_000AD28A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000AD290u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AD28Eu); } /* indirect call */
    }

loc_000AD290: ;
    MEM32(0x3C5C20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD2A0
 * Original: 0x000AD2A0 - 0x000AD2BD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD2A0: ;
    eax = MEM32(0x3C5C20);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, 0xACF30);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000AD2B9u); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_000AD2B9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AD2C0
 * Original: 0x000AD2C0 - 0x000AD2C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD2C0(void)
{

loc_000AD2C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD2D0
 * Original: 0x000AD2D0 - 0x000AD2F3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD2D0: ;
    eax = MEM32(0x3C5C20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD2F2; /* je: equal / zero */

loc_000AD2D9: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AD2E2u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000AD2E2: ;
    ecx = MEM32(0x3C5C20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = 0;

loc_000AD2F2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD300
 * Original: 0x000AD300 - 0x000AD303 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD300: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AD310
 * Original: 0x000AD310 - 0x000AD315 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD310: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AD320
 * Original: 0x000AD320 - 0x000AD325 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD320: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AD330
 * Original: 0x000AD330 - 0x000AD367 (55 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD330(void)
{

loc_000AD330: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 4);
    eax = eax + eax * 2;
    MEM32(edx + eax * 4) = 0;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 4);
    eax = eax + eax * 2;
    MEM32(edx + eax * 4 + 4) = 0;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 2;
    MEM32(ecx + eax * 4 + 8) = edx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AD370
 * Original: 0x000AD370 - 0x000AD376 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD370: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AD380
 * Original: 0x000AD380 - 0x000AD3C7 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD380: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0xACF30);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x000AD3A6u); RECOMP_ABI_CALL(0x002BECF0u, sub_002BECF0); /* call 0x002BECF0 */

loc_000AD3A6: ;
    esi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AD3BD; /* jne: not equal / not zero */

loc_000AD3AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x310674);
    PUSH32(esp, 0x000AD3BAu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000AD3BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AD3BD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD3D0
 * Original: 0x000AD3D0 - 0x000AD3E5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD3D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD3D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AD3DFu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000AD3DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AD3F0
 * Original: 0x000AD3F0 - 0x000AD414 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD3F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD3F0: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edx) = LO8(ecx);
    edx = MEM32(esp + 4);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edx) = LO8(ecx);
    edx = MEM32(esp + 8);
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edx) = LO8(ecx);
    ecx = MEM32(esp + 0xC);
    MEM8(ecx) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD420
 * Original: 0x000AD420 - 0x000AD427 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD420(void)
{

loc_000AD420: ;
    MEM32(edx + ecx * 4 + 0x20) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD430
 * Original: 0x000AD430 - 0x000AD435 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD430(void)
{

loc_000AD430: ;
    eax = MEM32(ecx + eax * 4 + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD440
 * Original: 0x000AD440 - 0x000AD449 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD440(void)
{

loc_000AD440: ;
    MEMF(ecx + eax * 4 + 0x20) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD450
 * Original: 0x000AD450 - 0x000AD457 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD450(void)
{

loc_000AD450: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + eax * 4 + 0x20)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000AD460
 * Original: 0x000AD460 - 0x000AD47E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD460: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5245B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5245B4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD476; /* je: equal / zero */

loc_000AD46D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AD473u); RECOMP_ABI_CALL(0x000ACFD0u, sub_000ACFD0); /* call 0x000ACFD0 */

loc_000AD473: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AD476: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD480
 * Original: 0x000AD480 - 0x000AD50E (142 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000AD480: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    MEM32(eax + 0x48) = 1;
    ecx = MEM32(esi);
    MEM32(ecx + 0x4C) = 0;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 0;
    MEM8(esi + 4) = 1;
    MEM8(esi + 5) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000AD509; /* je: equal / zero */

loc_000AD4AD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3106A4);
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000AD4DBu); RECOMP_ABI_CALL(0x001B5440u, sub_001B5440); /* call 0x001B5440 */

loc_000AD4DB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3075DC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AD504; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000AD4F7: ;
    eax = 1;
    MEM8(esi + 6) = LO8(eax);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000AD504: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 6) = LO8(eax);

loc_000AD509: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AD510
 * Original: 0x000AD510 - 0x000AD569 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD510: ;
    eax = MEM32(0x3C5A90);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x3C5C18) = ebx;
    MEM8(0x3C5C1C) = LO8(ebx);
    edi = 0x3C5A98;
    if (CMP_LE(_fas, _fbs)) goto loc_000AD549; /* jle: less or equal (signed <=) */

loc_000AD531: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AD539u); RECOMP_ABI_CALL(0x001B45A0u, sub_001B45A0); /* call 0x001B45A0 */

loc_000AD539: ;
    eax = MEM32(0x3C5A90);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AD531; /* jl: less (signed <) */

loc_000AD549: ;
    ecx = MEM32(0x3C5C20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(0x3C5A90) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000AD55F; /* je: equal / zero */

loc_000AD559: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000AD55Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AD55Du); } /* indirect call */
    }

loc_000AD55F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x3C5C20) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD570
 * Original: 0x000AD570 - 0x000AD58D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD570: ;
    eax = MEM32(0x3C5C20);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, 0xACF30);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000AD589u); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_000AD589: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AD590
 * Original: 0x000AD590 - 0x000AD591 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD590(void)
{

loc_000AD590: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD5A0
 * Original: 0x000AD5A0 - 0x000AD5C3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD5A0: ;
    eax = MEM32(0x3C5C20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD5C2; /* je: equal / zero */

loc_000AD5A9: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AD5B2u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000AD5B2: ;
    ecx = MEM32(0x3C5C20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = 0;

loc_000AD5C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD5D0
 * Original: 0x000AD5D0 - 0x000AD5DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD5D0(void)
{

loc_000AD5D0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD5E0
 * Original: 0x000AD5E0 - 0x000AD612 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD5E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD5E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    esi = ZX8(HI8(eax));
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ZX8(LO8(edx));
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX8(HI8(edx));
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(LO8(eax));
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(ecx + 0x20) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD620
 * Original: 0x000AD620 - 0x000AD651 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD620: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x20);
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 3) = LO8(ecx);
    edx = eax;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 2) = LO8(eax);
    eax = MEM32(esp + 8);
    MEM8(esp) = LO8(edx);
    MEM8(esp + 1) = LO8(ecx);
    edx = MEM32(esp);
    MEM32(eax) = edx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD660
 * Original: 0x000AD660 - 0x000AD67A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD660(void)
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

loc_000AD660: ;
    eax = MEM32(esp + 4);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AD672; /* jge: greater or equal (signed >=) */

loc_000AD66C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_000AD672: ;
    ecx = MEM32(ecx);
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AD680
 * Original: 0x000AD680 - 0x000AD692 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD680(void)
{

loc_000AD680: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD6A0
 * Original: 0x000AD6A0 - 0x000AD6B9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD6A0(void)
{

loc_000AD6A0: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x38);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x3C);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AD6C0
 * Original: 0x000AD6C0 - 0x000AD6DD (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD6C0(void)
{

loc_000AD6C0: ;
    eax = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AD6E0
 * Original: 0x000AD6E0 - 0x000AD6F0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD6E0(void)
{

loc_000AD6E0: ;
    eax = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD6F0
 * Original: 0x000AD6F0 - 0x000AD6F6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD6F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AD6F0: ;
    eax = MEM32(ecx);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AD700
 * Original: 0x000AD700 - 0x000AD80C (268 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD700(void)
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

loc_000AD700: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD74E; /* je: equal / zero */

loc_000AD726: ;
    fp_push(MEMF(0x3727CC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC94)); /* fadd dword ptr [0x38dc94] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000AD747u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000AD747: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AD74E: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD791; /* je: equal / zero */

loc_000AD761: ;
    fp_push(MEMF(0x3727D0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC98)); /* fadd dword ptr [0x38dc98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000AD782u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000AD782: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000AD797;

loc_000AD791: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_000AD797: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x20);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD7BA; /* je: equal / zero */

loc_000AD7A8: ;
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000AD7BAu); RECOMP_ABI_CALL(0x000AD1D0u, sub_000AD1D0); /* call 0x000AD1D0 */

loc_000AD7BA: ;
    edx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(edx + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AD7E7u); RECOMP_ABI_CALL(0x001B5420u, sub_001B5420); /* call 0x001B5420 */

loc_000AD7E7: ;
    ecx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    POP32(esp, edi);
    MEMF(edx + 0x3C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AD810
 * Original: 0x000AD810 - 0x000AD889 (121 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD810: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000AD84Eu); RECOMP_ABI_CALL(0x001B5450u, sub_001B5450); /* call 0x001B5450 */

loc_000AD84E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000AD881u); RECOMP_ABI_CALL(0x000AD700u, sub_000AD700); /* call 0x000AD700 */

loc_000AD881: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AD890
 * Original: 0x000AD890 - 0x000AD8BF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD890: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x3106D0);
    ecx = esp + 8;
    MEM32(esi) = 0x3106A8;
    PUSH32(esp, 0x000AD8A8u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000AD8A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AD8AFu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000AD8AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD8C0
 * Original: 0x000AD8C0 - 0x000AD8E8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD8C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x3106A8;
    if (CMP_EQ(_fa, _fb)) goto loc_000AD8D9; /* je: equal / zero */

loc_000AD8D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AD8D6u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000AD8D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AD8D9: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x2FF0D4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD8F0
 * Original: 0x000AD8F0 - 0x000AD94E (94 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD8F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3106DC);
    PUSH32(esp, 0x000AD903u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000AD903: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD941; /* je: equal / zero */

loc_000AD90C: ;
    PUSH32(esp, 0x3106D0);
    ecx = esp + 8;
    MEM32(esi) = 0x3106A8;
    PUSH32(esp, 0x000AD920u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000AD920: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AD927u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000AD927: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(0x3C5C20) = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000AD941: ;
    MEM32(0x3C5C20) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD950
 * Original: 0x000AD950 - 0x000AD992 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD950: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x310728);
    esi = ecx;
    PUSH32(esp, 0x000AD965u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000AD965: ;
    eax = MEM32(edi);
    MEM32(esi + 8) = eax;
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x310700);
    PUSH32(esp, 0x000AD980u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000AD980: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AD9A0
 * Original: 0x000AD9A0 - 0x000AD9FE (94 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD9A0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = eax + eax * 2;
    esi = ecx + eax * 4;
    ecx = edi;
    PUSH32(esp, 0x000AD9B9u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000AD9B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2CAD992E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2CAD992E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD9DA; /* je: equal / zero */

loc_000AD9C0: ;
    ecx = edi;
    PUSH32(esp, 0x000AD9C7u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000AD9C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31076C);
    PUSH32(esp, 0x000AD9D2u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000AD9D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AD9DA: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x000AD9EDu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000AD9ED: ;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000ADA00
 * Original: 0x000ADA00 - 0x000ADA13 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADA00(void)
{

loc_000ADA00: ;
    eax = MEM32(0x5245B4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    PUSH32(esp, 0x000ADA0Fu); RECOMP_ABI_CALL(0x000AD480u, sub_000AD480); /* call 0x000AD480 */

loc_000ADA0F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ADA20
 * Original: 0x000ADA20 - 0x000ADA3F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADA20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADA20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000ADA2Du); RECOMP_ABI_CALL(0x000ACF60u, sub_000ACF60); /* call 0x000ACF60 */

loc_000ADA2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi) = eax;
    PUSH32(esp, 0x000ADA39u); RECOMP_ABI_CALL(0x000AD480u, sub_000AD480); /* call 0x000AD480 */

loc_000ADA39: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ADA40
 * Original: 0x000ADA40 - 0x000ADAB9 (121 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADA40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3C5C20);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0xACF30);
    esi = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x000ADA6Du); RECOMP_ABI_CALL(0x002BECF0u, sub_002BECF0); /* call 0x002BECF0 */

loc_000ADA6D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ADA9B; /* jne: not equal / not zero */

loc_000ADA74: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x310674);
    PUSH32(esp, 0x000ADA7Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000ADA7F: ;
    edx = MEM32(0x5245B4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi) = edx;
    PUSH32(esp, 0x000ADA91u); RECOMP_ABI_CALL(0x000AD480u, sub_000AD480); /* call 0x000AD480 */

loc_000ADA91: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000ADA9B: ;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ADAA3u); RECOMP_ABI_CALL(0x000ACF60u, sub_000ACF60); /* call 0x000ACF60 */

loc_000ADAA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi) = eax;
    PUSH32(esp, 0x000ADAAFu); RECOMP_ABI_CALL(0x000AD480u, sub_000AD480); /* call 0x000AD480 */

loc_000ADAAF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ADAC0
 * Original: 0x000ADAC0 - 0x000ADAFC (60 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADAC0: ;
    PUSH32(esp, 0x000ADAC5u); RECOMP_ABI_CALL(0x000AD8F0u, sub_000AD8F0); /* call 0x000AD8F0 */

loc_000ADAC5: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x37EFAC);
    MEM32(0x3C5C18) = eax;
    PUSH32(esp, 0x000ADAD8u); RECOMP_ABI_CALL(0x001B5460u, sub_001B5460); /* call 0x001B5460 */

loc_000ADAD8: ;
    PUSH32(esp, 0x37EFC0);
    PUSH32(esp, 0x000ADAE2u); RECOMP_ABI_CALL(0x001B5470u, sub_001B5470); /* call 0x001B5470 */

loc_000ADAE2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000ADAEAu); RECOMP_ABI_CALL(0x001B4550u, sub_001B4550); /* call 0x001B4550 */

loc_000ADAEA: ;
    MEM8(0x3C5C1C) = 1;
    MEM32(0x3C5A90) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000ADB00
 * Original: 0x000ADB00 - 0x000ADC0C (268 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADB00(void)
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

loc_000ADB00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000ADB4E; /* je: equal / zero */

loc_000ADB26: ;
    fp_push(MEMF(0x3727CC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC94)); /* fadd dword ptr [0x38dc94] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000ADB47u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000ADB47: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ADB4E: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000ADB91; /* je: equal / zero */

loc_000ADB61: ;
    fp_push(MEMF(0x3727D0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC98)); /* fadd dword ptr [0x38dc98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000ADB82u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000ADB82: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000ADB97;

loc_000ADB91: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */

loc_000ADB97: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x20);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000ADBBA; /* je: equal / zero */

loc_000ADBA8: ;
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000ADBBAu); RECOMP_ABI_CALL(0x000AD0C0u, sub_000AD0C0); /* call 0x000AD0C0 */

loc_000ADBBA: ;
    edx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(edx + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ADBE7u); RECOMP_ABI_CALL(0x001B5400u, sub_001B5400); /* call 0x001B5400 */

loc_000ADBE7: ;
    ecx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    POP32(esp, edi);
    MEMF(edx + 0x3C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000ADC10
 * Original: 0x000ADC10 - 0x000ADC7F (111 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADC10: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 0x418;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000ADC2Eu); RECOMP_ABI_CALL(0x002BF3D9u, sub_002BF3D9); /* call 0x002BF3D9 */

loc_000ADC2E: ;
    esi = MEM32(esp + 0x414);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ADC5B; /* je: equal / zero */

loc_000ADC3F: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x414;
    PUSH32(esp, ecx);
    edx = esp + 0x414;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000ADC5Bu); RECOMP_ABI_CALL(0x000AD0C0u, sub_000AD0C0); /* call 0x000AD0C0 */

loc_000ADC5B: ;
    ecx = MEM32(esp + 0x410);
    edx = MEM32(esp + 0x40C);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000ADC77u); RECOMP_ABI_CALL(0x000ADB00u, sub_000ADB00); /* call 0x000ADB00 */

loc_000ADC77: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ADC80
 * Original: 0x000ADC80 - 0x000ADCF9 (121 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADC80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADC80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)MEM32(0x38DC64); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000ADCBEu); RECOMP_ABI_CALL(0x001B5440u, sub_001B5440); /* call 0x001B5440 */

loc_000ADCBE: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000ADCF1u); RECOMP_ABI_CALL(0x000ADB00u, sub_000ADB00); /* call 0x000ADB00 */

loc_000ADCF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ADD00
 * Original: 0x000ADD00 - 0x000ADD3F (63 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADD00: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x410;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000ADD1Du); RECOMP_ABI_CALL(0x002BF3D9u, sub_002BF3D9); /* call 0x002BF3D9 */

loc_000ADD1D: ;
    ecx = MEM32(esp + 0x414);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40C);
    PUSH32(esp, 0x000ADD38u); RECOMP_ABI_CALL(0x000ADC80u, sub_000ADC80); /* call 0x000ADC80 */

loc_000ADD38: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ADD40
 * Original: 0x000ADD40 - 0x000ADD7C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADD40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x3106A8;
    if (CMP_EQ(_fa, _fb)) goto loc_000ADD59; /* je: equal / zero */

loc_000ADD50: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ADD56u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000ADD56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ADD59: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x2FF0D4;
    if (TEST_Z(_fa, _fb)) goto loc_000ADD76; /* je: equal / zero */

loc_000ADD6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000ADD73u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000ADD73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000ADD76: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ADD80
 * Original: 0x000ADD80 - 0x000ADDA9 (41 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ADD80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xB0;
    MEM32(esi) = 0x310800;
    MEM32(esi + 8) = 0x3107F8;
    MEM32(ecx) = 0x3107A8;
    PUSH32(esp, 0x000ADDA1u); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000ADDA1: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_000ADDB0
 * Original: 0x000ADDB0 - 0x000ADDC1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADDB0: ;
    ecx = MEM32(0x3C5FE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ADDC0; /* je: equal / zero */

loc_000ADDBA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000ADDC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000ADDBEu); } /* indirect call */
    }

loc_000ADDC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000ADDD0
 * Original: 0x000ADDD0 - 0x000ADDD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ADDD0: ;
    g_seh_ebp = ebp; sub_00131890(); return; /* tail jmp 0x00131890 */

}

/**
 * sub_000ADDE0
 * Original: 0x000ADDE0 - 0x000ADDEC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADDE0(void)
{

loc_000ADDE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000ADDE8u); RECOMP_ABI_CALL(0x001CD4C0u, sub_001CD4C0); /* call 0x001CD4C0 */

loc_000ADDE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ADDF0
 * Original: 0x000ADDF0 - 0x000ADE14 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADDF0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000ADE0E; /* jle: less or equal (signed <=) */

loc_000ADDFA: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 8);

loc_000ADE01: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x4C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ADE10; /* je: equal / zero */

loc_000ADE06: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ADE01; /* jl: less (signed <) */

loc_000ADE0E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000ADE10: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ADE20
 * Original: 0x000ADE20 - 0x000ADE26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADE20: ;
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ADE30
 * Original: 0x000ADE30 - 0x000ADE5E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADE30: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x54) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ADE60
 * Original: 0x000ADE60 - 0x000ADE75 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADE60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ADE6Fu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000ADE6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ADE80
 * Original: 0x000ADE80 - 0x000ADECE (78 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADE80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = MEM32(esp);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ADED0
 * Original: 0x000ADED0 - 0x000ADF18 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADED0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = MEM32(esp);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ADF20
 * Original: 0x000ADF20 - 0x000ADF27 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADF20: ;
    eax = MEM32(ecx + eax * 8 + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000ADF30
 * Original: 0x000ADF30 - 0x000ADFA5 (117 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADF30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31094C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x130)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x134)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x138)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = MEM32(ebp + 8);
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ADFB0
 * Original: 0x000ADFB0 - 0x000AE067 (183 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADFB0: ;
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
    SET_LO8(eax, MEM8(esi + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ADFCF; /* jne: not equal / not zero */

loc_000ADFC6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000ADFCF: ;
    ecx = MEM32(0x4F7414);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000ADFDAu); RECOMP_ABI_CALL(0x001C1A60u, sub_001C1A60); /* call 0x001C1A60 */

loc_000ADFDA: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31094C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x130)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x134)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x138)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x68)); /* movss */
    edx = MEM32(esi + 0x140);
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    ecx = MEM32(edx + 0x58);
    edx = ecx;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE060u); RECOMP_ABI_CALL(0x001C66F0u, sub_001C66F0); /* call 0x001C66F0 */

loc_000AE060: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AE070
 * Original: 0x000AE070 - 0x000AE166 (246 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE070(void)
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

loc_000AE070: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AE09B; /* jp: parity */

loc_000AE092: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AE0C6; /* jnp: not parity */

loc_000AE09B: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AE0A9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AE0A0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */

loc_000AE0A9: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AE0C6; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000AE0AE: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AE0C6; /* jnp: not parity */

loc_000AE0B7: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE99C)); /* fadd dword ptr [0x2fe99c] */
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */

loc_000AE0C6: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AE0EE; /* jp: parity */

loc_000AE0E5: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AE140; /* jnp: not parity */

loc_000AE0EE: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000AE0FC; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AE0F3: ;
    _fca = xmm1.f[0]; _fcb = MEMF(0x310950); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AE10A; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x310950)) */

loc_000AE0FC: ;
    xmm1 = xmm0; /* movaps */
    MEMF(esi + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000AE10A: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AE122; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000AE10F: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(0x300914); /* addss */
    MEMF(esi + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_000AE122: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */

loc_000AE140: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000AE150u); RECOMP_ABI_CALL(0x001CE640u, sub_001CE640); /* call 0x001CE640 */

loc_000AE150: ;
    eax = 3;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
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
 * sub_000AE170
 * Original: 0x000AE170 - 0x000AE1B8 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE170: ;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x310960;
    MEM8(esi + 4) = LO8(eax);
    MEM8(esi + 5) = 1;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x310954);
    ecx = esp + 8;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x000AE1A9u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000AE1A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AE1B0u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000AE1B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AE1C0
 * Original: 0x000AE1C0 - 0x000AE1D2 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AE1C0: ;
    MEM32(0x3C5C28) = 0;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000AF0D0(); return; /* tail jmp 0x000AF0D0 */

}

/**
 * sub_000AE1E0
 * Original: 0x000AE1E0 - 0x000AE246 (102 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE1E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    MEM32(ebx + 0xC) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000AE23A; /* jle: less or equal (signed <=) */

loc_000AE1F1: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x310988);
    PUSH32(esp, 0x000AE20Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000AE20A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE234; /* je: equal / zero */

loc_000AE211: ;
    PUSH32(esp, 0xADDE0);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0x6C);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x000AE224u); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_000AE224: ;
    MEM32(ebx + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x10) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000AE234: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 8) = edi;
    POP32(esp, edi);

loc_000AE23A: ;
    POP32(esp, esi);
    MEM32(ebx + 0x10) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AE250
 * Original: 0x000AE250 - 0x000AE294 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE250: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    ecx = MEM32(esp + 8);
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x4C) = ecx;
    ecx = MEM32(edx);
    MEM32(eax + 0x50) = ecx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AE2A0
 * Original: 0x000AE2A0 - 0x000AE34F (175 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE2A0(void)
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

loc_000AE2A0: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000AE2B8u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000AE2B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23001B2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23001B2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000AE31F; /* jg: greater (signed >) */

loc_000AE2BF: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000AE30E; /* je: equal / zero */

loc_000AE2C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81728B86u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81728B86u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE2F8; /* je: equal / zero */

loc_000AE2C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEF5BE371u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEF5BE371u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE2E7; /* je: equal / zero */

loc_000AE2CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0BB7D16u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF0BB7D16u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AE34A; /* jne: not equal / not zero */

loc_000AE2D6: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000AE2DFu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000AE2DF: ;
    MEMF(esi + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AE2E7: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000AE2F0u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000AE2F0: ;
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AE2F8: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000AE303u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000AE303: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x54) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AE30E: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000AE317u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000AE317: ;
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AE31F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3CD06B6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3CD06B6C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE33E; /* je: equal / zero */

loc_000AE326: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47AC0671) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47AC0671 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AE34A; /* jne: not equal / not zero */

loc_000AE32D: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000AE336u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000AE336: ;
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000AE33E: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000AE347u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000AE347: ;
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */

loc_000AE34A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AE350
 * Original: 0x000AE350 - 0x000AE984 (1588 bytes, 378 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE350(void)
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

loc_000AE350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3C5FF0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    PUSH32(esp, ebx);
    ebx = MEM32(0x4F7414);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0x10;
    ecx = edi;
    MEM32(esp + 0x24) = ebx;
    esi = edx;
    edx = MEM32(0x3C5FEC);
    MEM32(esp + 0x18) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE38Au); RECOMP_ABI_CALL(0x001C38A0u, sub_001C38A0); /* call 0x001C38A0 */

loc_000AE38A: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE393u); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_000AE393: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE39Cu); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000AE39C: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE3A5u); RECOMP_ABI_CALL(0x001C3D10u, sub_001C3D10); /* call 0x001C3D10 */

loc_000AE3A5: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE3AEu); RECOMP_ABI_CALL(0x001C3D70u, sub_001C3D70); /* call 0x001C3D70 */

loc_000AE3AE: ;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE3B9u); RECOMP_ABI_CALL(0x001C3B40u, sub_001C3B40); /* call 0x001C3B40 */

loc_000AE3B9: ;
    ecx = MEM32(0x3C5F30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x203);
    MEM32(esp + 0x2C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE3D0u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000AE3D0: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31094C); /* mulss */
    ebx = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x130)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x134)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x138)); /* movss */
    edx = MEM32(ebx + 0x140);
    ecx = MEM32(0x3C5F30);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE45Du); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000AE45D: ;
    ecx = MEM32(0x3C5F30);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE46Au); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000AE46A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x44) = ecx;
    ecx = esp + 0x40;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C5F30);
    edx = ebp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE4C6u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AE4C6: ;
    ecx = MEM32(0x3C5F30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE4D1u); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000AE4D1: ;
    ecx = MEM32(0x3C5F30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE4DCu); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000AE4DC: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE4E5u); RECOMP_ABI_CALL(0x001C3D10u, sub_001C3D10); /* call 0x001C3D10 */

loc_000AE4E5: ;
    eax = MEM32(ebx + 0x120);
    ecx = MEM32(esp + 0x18);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, MEM8(esi + 0x3C5C30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AE512; /* jne: not equal / not zero */

loc_000AE503: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE50Bu); RECOMP_ABI_CALL(0x001C38C0u, sub_001C38C0); /* call 0x001C38C0 */

loc_000AE50B: ;
    MEM8(esi + 0x3C5C30) = 1;

loc_000AE512: ;
    PUSH32(esp, 0x1010101);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE51Eu); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000AE51E: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE529u); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_000AE529: ;
    eax = MEM32(0x3C5FF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000AE97D; /* jb: below (unsigned <) */

loc_000AE537: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(ebx + 0x120);
    ecx = MEM32(esp + 0x18);
    esi = edx;
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esi + 0x3C5C30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x3C5C30), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AE97D; /* jne: not equal / not zero */

loc_000AE566: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE573u); RECOMP_ABI_CALL(0x001C38E0u, sub_001C38E0); /* call 0x001C38E0 */

loc_000AE573: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE97D; /* je: equal / zero */

loc_000AE57B: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x3C5C30) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000AE97D; /* je: equal / zero */

loc_000AE58E: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AE598u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AE595u); } /* indirect call */
    }

loc_000AE598: ;
    ecx = 0x389FD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE5A2u); RECOMP_ABI_CALL(0x000133F0u, sub_000133F0); /* call 0x000133F0 */

loc_000AE5A2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000AE5ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AE5A8u); } /* indirect call */
    }

loc_000AE5AB: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x207);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE5B9u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000AE5B9: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AE5CB; /* jge: greater or equal (signed >=) */

loc_000AE5C5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FEC08)); /* fadd dword ptr [0x2fec08] */

loc_000AE5CB: ;
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x20)); /* fmul dword ptr [ebp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000AE5F1; /* jbe: below or equal (unsigned <=) */

loc_000AE5E7: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    goto loc_000AE602;

loc_000AE5F1: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AE602; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AE5FF: ;
    xmm1 = xmm0; /* movaps */

loc_000AE602: ;
    ecx = ZX8(MEM8(ebp + 0x27));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x305FE4); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEC4C)); /* fmul dword ptr [0x2fec4c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE62Bu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000AE62B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x300764); /* mulss */
    edx = MEM32(ebx + 0x140);
    xmm0.f[0] = xmm0.f[0] + MEMF(0x31BE80); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A4); /* mulss */
    ecx = MEM32(0x3C5F30);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE66Du); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000AE66D: ;
    ecx = MEM32(0x3C5F30);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE67Au); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000AE67A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    ecx = MEM32(esp + 0x34);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x40) = eax;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = edx;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x40;
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x70) = ecx;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C5F30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE738u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AE738: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x10); /* addss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = edx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C5F30);
    MEM32(esp + 0x4C) = edx;
    edx = esp + 0x20;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE7E9u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AE7E9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebp + 0x14); /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x60) = ecx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x68) = eax;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x6C) = ecx;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x48) = ecx;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEM32(esp + 0x50) = edx;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C5F30);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE89Fu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AE89F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x3C);
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x68) = edx;
    MEM32(esp + 0x6C) = eax;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x60;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x50) = ecx;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C5F30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE94Du); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000AE94D: ;
    ecx = MEM32(0x3C5F30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE958u); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000AE958: ;
    ecx = MEM32(0x3C5F30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE963u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000AE963: ;
    ecx = 0x389FD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AE96Du); RECOMP_ABI_CALL(0x000133F0u, sub_000133F0); /* call 0x000133F0 */

loc_000AE96D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AE974u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AE971u); } /* indirect call */
    }

loc_000AE974: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000AE97Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AE97Au); } /* indirect call */
    }

loc_000AE97D: ;
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
 * sub_000AE990
 * Original: 0x000AE990 - 0x000AE9CA (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE990(void)
{

loc_000AE990: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000AE999u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000AE999: ;
    edi = esi + 0xB0;
    ecx = edi;
    PUSH32(esp, 0x000AE9A6u); RECOMP_ABI_CALL(0x00131E70u, sub_00131E70); /* call 0x00131E70 */

loc_000AE9A6: ;
    eax = MEM32(esp + 0xC);
    MEM32(edi) = 0x3107A8;
    MEM32(esi + 0x140) = eax;
    POP32(esp, edi);
    MEM32(esi) = 0x310800;
    MEM32(esi + 8) = 0x3107F8;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AE9D0
 * Original: 0x000AE9D0 - 0x000AEA14 (68 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE9D0: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3109CC);
    PUSH32(esp, 0x000AE9E1u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000AE9E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE9FF; /* je: equal / zero */

loc_000AE9E8: ;
    ecx = eax;
    PUSH32(esp, 0x000AE9EFu); RECOMP_ABI_CALL(0x000AE170u, sub_000AE170); /* call 0x000AE170 */

loc_000AE9EF: ;
    MEM32(0x3C5FE8) = eax;
    MEM32(0x3C5FF0) = 0;
    esp += 4; return; /* ret */

loc_000AE9FF: ;
    MEM32(0x3C5FE8) = 0;
    MEM32(0x3C5FF0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000AEA20
 * Original: 0x000AEA20 - 0x000AEA38 (24 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEA20: ;
    ecx = MEM32(0x3C5FE8);
    MEM32(0x3C5C28) = 0;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000AF0D0(); return; /* tail jmp 0x000AF0D0 */

}

/**
 * sub_000AEA40
 * Original: 0x000AEA40 - 0x000AEA45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEA40: ;
    g_seh_ebp = ebp; sub_000ADFB0(); return; /* tail jmp 0x000ADFB0 */

}

/**
 * sub_000AEA50
 * Original: 0x000AEA50 - 0x000AEA5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEA50: ;
    _fb = (uint32_t)(0xFFFFFF50u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFF50u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000ADFB0(); return; /* tail jmp 0x000ADFB0 */

}

/**
 * sub_000AEA60
 * Original: 0x000AEA60 - 0x000AEB3D (221 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AEA60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 4) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_000AEA8A; /* jle: less or equal (signed <=) */

loc_000AEA71: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AEA74: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000AEA7Eu); RECOMP_ABI_CALL(0x000AE070u, sub_000AE070); /* call 0x000AE070 */

loc_000AEA7E: ;
    eax = MEM32(esi + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x6C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AEA74; /* jl: less (signed <) */

loc_000AEA89: ;
    POP32(esp, ebx);

loc_000AEA8A: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x5800);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3109AC);
    MEM32(esi + 0xC) = 0x40;
    PUSH32(esp, 0x000AEAA8u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000AEAA8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi) = eax;
    PUSH32(esp, 0x000AEAB4u); RECOMP_ABI_CALL(0x000AF0D0u, sub_000AF0D0); /* call 0x000AF0D0 */

loc_000AEAB4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB0);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000AEAC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AEABBu); } /* indirect call */
    }

loc_000AEAC1: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AEAD5; /* je: equal / zero */

loc_000AEACA: ;
    ecx = esi;
    PUSH32(esp, 0x000AEAD1u); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_000AEAD1: ;
    ecx = esi;
    goto loc_000AEAD7;

loc_000AEAD5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AEAD7: ;
    MEM32(0x3C5F30) = ecx;
    PUSH32(esp, 0x000AEAE2u); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_000AEAE2: ;
    esi = MEM32(0x3C5F30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000AEAF4u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000AEAF4: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000AEAFDu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000AEAFD: ;
    PUSH32(esp, 0x203);
    ecx = esi;
    PUSH32(esp, 0x000AEB09u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000AEB09: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AEB12u); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_000AEB12: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000AEB1Bu); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000AEB1B: ;
    PUSH32(esp, 0x204);
    ecx = esi;
    PUSH32(esp, 0x000AEB27u); RECOMP_ABI_CALL(0x001CF200u, sub_001CF200); /* call 0x001CF200 */

loc_000AEB27: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC0;
    edi = 0x3C5C30;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(0x3C5C28) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AEB40
 * Original: 0x000AEB40 - 0x000AEBCC (140 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEB40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x3C5F30);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AEB56; /* je: equal / zero */

loc_000AEB51: ;
    PUSH32(esp, 0x000AEB56u); RECOMP_ABI_CALL(0x001D0960u, sub_001D0960); /* call 0x001D0960 */

loc_000AEB56: ;
    eax = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    MEM32(0x3C5F30) = ebx;
    PUSH32(esp, 0x000AEB65u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_000AEB65: ;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x24) = ebx;
    MEM32(edi + 0x14) = ebx;
    MEM32(edi + 0x18) = ebx;
    MEM32(edi + 0x1C) = ebx;
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AEBBC; /* je: equal / zero */

loc_000AEB7E: ;
    eax = MEM32(ecx + -4);
    edx = ecx + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = edx;
    if ((_fas < 0)) goto loc_000AEBB2; /* js: sign (negative) */

loc_000AEB93: ;
    PUSH32(esp, ebp);
    ebp = eax + 1;
    goto loc_000AEBA0;

    /* nop */

loc_000AEBA0: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x000AEBAAu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_000AEBAA: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AEBA0; /* jne: not equal / not zero */

loc_000AEBAD: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, ebp);

loc_000AEBB2: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000AEBB8u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000AEBB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_000AEBBC: ;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x10) = ebx;
    MEM8(edi + 4) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AEBD0
 * Original: 0x000AEBD0 - 0x000AEC3F (111 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AEBD0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000AEBF1; /* jle: less or equal (signed <=) */

loc_000AEBDD: ;
    edx = MEM32(eax + 8);
    edi = MEM32(esp + 0xC);

loc_000AEBE4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 0x4C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AEBF8; /* je: equal / zero */

loc_000AEBE9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x6C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AEBE4; /* jl: less (signed <) */

loc_000AEBF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000AEBF8: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AEBF1; /* je: equal / zero */

loc_000AEBFF: ;
    esi = MEM32(ecx + 0x150);
    MEM32(eax + 0x1C) = esi;
    esi = MEM32(eax + 0x18);
    MEM32(ecx + 0x150) = esi;
    edi = MEM32(eax + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x24) = edi;
    PUSH32(esp, 0x000AEC21u); RECOMP_ABI_CALL(0x000AE990u, sub_000AE990); /* call 0x000AE990 */

loc_000AEC21: ;
    ecx = MEM32(0x3C5C28);
    MEM32(eax + 0x120) = ecx;
    ecx = MEM32(0x3C5C28);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x3C5C28) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AEC40
 * Original: 0x000AEC40 - 0x000AEF91 (849 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEC40(void)
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

loc_000AEC40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(0x4F7414);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AEC5Fu); RECOMP_ABI_CALL(0x001C1A60u, sub_001C1A60); /* call 0x001C1A60 */

loc_000AEC5F: ;
    ebx = MEM32(ebp + 8);
    xmm2 = XMM_SCALAR(MEMF(esi + 0x130)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x134)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x138)); /* movss */
    ecx = MEM32(0x37DC3C);
    edi = eax;
    eax = MEM32(ebx + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31094C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x64) = xmm2.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x68) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x3C); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000AEF8A; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000AED0A: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AED41u); RECOMP_ABI_CALL(0x001C6420u, sub_001C6420); /* call 0x001C6420 */

loc_000AED41: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AED54u); RECOMP_ABI_CALL(0x001C6C00u, sub_001C6C00); /* call 0x001C6C00 */

loc_000AED54: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    ecx = MEM32(ebx + 0xE4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x60)); /* fsub dword ptr [ecx + 0x60] */
    eax = MEM32(esi + 0x140);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x64)); /* fsub dword ptr [ecx + 0x64] */
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x68)); /* fsub dword ptr [ecx + 0x68] */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(esp + 0x58) = (float)fp_top(); /* fst */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AEDF0; /* jp: parity */

loc_000AEDE7: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AEE19; /* jnp: not parity */

loc_000AEDF0: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AEE0B; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000AEE06: ;
    xmm0 = xmm3; /* movaps */
    goto loc_000AEE13;

loc_000AEE0B: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AEE13; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000AEE10: ;
    xmm0 = xmm4; /* movaps */

loc_000AEE13: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000AEE19: ;
    eax = MEM32(esi + 0x140);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AEE4B; /* jp: parity */

loc_000AEE3E: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AEEDA; /* jnp: not parity */

loc_000AEE4B: ;
    eax = esp + 0x80;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AEE58u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_000AEE58: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x1C); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AEEC6; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000AEEC1: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000AEECE;

loc_000AEEC6: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AEECE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AEECB: ;
    xmm0 = xmm1; /* movaps */

loc_000AEECE: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_000AEEDA: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FF460)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca > _fcb)) goto loc_000AEF8A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_000AEEED: ;
    ecx = MEM32(ebx + 0xE4);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x70); /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x3107A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0xB8); /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FE9A0); /* mulss */
    edx = MEM32(esi + 0x140);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 0x58); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x3107A4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AEF4B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AEF45: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_000AEF4B: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEC4C)); /* fmul dword ptr [0x2fec4c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AEF5Au); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000AEF5A: ;
    edx = MEM32(esp + 0x2C);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AEF87u); RECOMP_ABI_CALL(0x000AE350u, sub_000AE350); /* call 0x000AE350 */

loc_000AEF87: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AEF8A: ;
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
 * sub_000AEFA0
 * Original: 0x000AEFA0 - 0x000AEFAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEFA0: ;
    ecx = MEM32(0x3C5FE8);
    g_seh_ebp = ebp; sub_000AEA60(); return; /* tail jmp 0x000AEA60 */

}

/**
 * sub_000AEFB0
 * Original: 0x000AEFB0 - 0x000AEFBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEFB0: ;
    ecx = MEM32(0x3C5FE8);
    g_seh_ebp = ebp; sub_000AEB40(); return; /* tail jmp 0x000AEB40 */

}

/**
 * sub_000AEFC0
 * Original: 0x000AEFC0 - 0x000AEFEE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AEFC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x3C5FE8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AEFD1u); RECOMP_ABI_CALL(0x000AEBD0u, sub_000AEBD0); /* call 0x000AEBD0 */

loc_000AEFD1: ;
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AEFEA; /* je: equal / zero */

loc_000AEFDB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AEFEA; /* je: equal / zero */

loc_000AEFDF: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AEFE7u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000AEFE7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AEFEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AEFF0
 * Original: 0x000AEFF0 - 0x000AF028 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AEFF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx + -176;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AF004u); RECOMP_ABI_CALL(0x000ADFB0u, sub_000ADFB0); /* call 0x000ADFB0 */

loc_000AF004: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AF023; /* je: equal / zero */

loc_000AF008: ;
    ecx = edi;
    PUSH32(esp, 0x000AF00Fu); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000AF00F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    ecx = edi;
    MEM32(eax + 0x58) = 0xAEC40;
    MEM32(eax + 0x48) = esi;
    PUSH32(esp, 0x000AF023u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000AF023: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AF030
 * Original: 0x000AF030 - 0x000AF0B8 (136 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF030(void)
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

loc_000AF030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000AF0B0; /* jne: not equal / not zero */

loc_000AF042: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 4);
    PUSH32(esp, 0xC1252AEDu);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF055u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000AF055: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF05Bu); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000AF05B: ;
    ecx = MEM32(0x3C5FE8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF06Au); RECOMP_ABI_CALL(0x000AEBD0u, sub_000AEBD0); /* call 0x000AEBD0 */

loc_000AF06A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AF0B0; /* je: equal / zero */

loc_000AF070: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF078u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000AF078: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF088u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_000AF088: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF091u); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_000AF091: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x000AF0A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AF09Cu); } /* indirect call */
    }

loc_000AF0A2: ;
    SET_LO8(eax, 1);
    MEM8(esi + 0x11C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000AF0B0: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
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
 * sub_000AF0C0
 * Original: 0x000AF0C0 - 0x000AF0C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF0C0(void)
{

loc_000AF0C0: ;
    eax = ecx + -176;
    esp += 4; return; /* ret */

}

/**
 * sub_000AF0D0
 * Original: 0x000AF0D0 - 0x000AF123 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF0D0: ;
    eax = MEM32(ecx + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000AF121; /* jle: less or equal (signed <=) */

loc_000AF0E5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x160);
    MEM32(eax + edi + -16) = edx;
    eax = MEM32(ecx + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000AF121; /* jle: less or equal (signed <=) */

loc_000AF0F7: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000AF100: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x160;
    MEM32(eax + 0x150) = edi;
    eax = MEM32(ecx + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x160;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AF100; /* jl: less (signed <) */

loc_000AF120: ;
    POP32(esp, esi);

loc_000AF121: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AF130
 * Original: 0x000AF130 - 0x000AF138 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AF130: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000AF180(); return; /* tail jmp 0x000AF180 */

}

/**
 * sub_000AF140
 * Original: 0x000AF140 - 0x000AF14B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AF140: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000AF180(); return; /* tail jmp 0x000AF180 */

}

/**
 * sub_000AF150
 * Original: 0x000AF150 - 0x000AF179 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x130) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x134) = edx;
    eax = MEM32(eax + 8);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x138) = eax;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AF180
 * Original: 0x000AF180 - 0x000AF1BE (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF180: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xB0;
    MEM32(esi) = 0x310800;
    MEM32(esi + 8) = 0x3107F8;
    MEM32(ecx) = 0x3107A8;
    PUSH32(esp, 0x000AF1A1u); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000AF1A1: ;
    ecx = esi;
    PUSH32(esp, 0x000AF1A8u); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_000AF1A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AF1B8; /* je: equal / zero */

loc_000AF1AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AF1B5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000AF1B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AF1B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AF1C0
 * Original: 0x000AF1C0 - 0x000AF1CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AF1C0: ;
    MEM32(ecx) = 0x3109F8;
    g_seh_ebp = ebp; sub_000BCAD0(); return; /* tail jmp 0x000BCAD0 */

}

/**
 * sub_000AF1D0
 * Original: 0x000AF1D0 - 0x000AF1D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF1D0(void)
{

loc_000AF1D0: ;
    eax = MEM32(0x3C6010);
    esp += 4; return; /* ret */

}

/**
 * sub_000AF1E0
 * Original: 0x000AF1E0 - 0x000AF1F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF1E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AF1F4; /* jl: less (signed <) */

loc_000AF1E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AF1F4; /* jge: greater or equal (signed >=) */

loc_000AF1EF: ;
    MEM32(0x373580) = eax;

loc_000AF1F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AF200
 * Original: 0x000AF200 - 0x000AF216 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF200: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AF215; /* jl: less (signed <) */

loc_000AF209: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AF215; /* jge: greater or equal (signed >=) */

loc_000AF210: ;
    MEM32(0x373584) = eax;

loc_000AF215: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AF220
 * Original: 0x000AF220 - 0x000AF271 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF220(void)
{

loc_000AF220: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000AF229u); RECOMP_ABI_CALL(0x000BCBA0u, sub_000BCBA0); /* call 0x000BCBA0 */

loc_000AF229: ;
    esi = edi + 8;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(edi) = 0x3109F8;
    PUSH32(esp, 0x000AF23Bu); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000AF23B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AF244u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000AF244: ;
    PUSH32(esp, 0x207);
    ecx = esi;
    PUSH32(esp, 0x000AF250u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000AF250: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AF259u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_000AF259: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 1);
    PUSH32(esp, 0x302);
    ecx = esi;
    PUSH32(esp, 0x000AF26Cu); RECOMP_ABI_CALL(0x001CF320u, sub_001CF320); /* call 0x001CF320 */

loc_000AF26C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AF280
 * Original: 0x000AF280 - 0x000AF384 (260 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF280: ;
    eax = MEM32(0x3C6010);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AF2BF; /* jne: not equal / not zero */

loc_000AF28C: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x170);
    PUSH32(esp, 0x310A0C);
    PUSH32(esp, 0x000AF2A0u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000AF2A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AF2B5; /* je: equal / zero */

loc_000AF2A7: ;
    ecx = eax;
    PUSH32(esp, 0x000AF2AEu); RECOMP_ABI_CALL(0x000AF220u, sub_000AF220); /* call 0x000AF220 */

loc_000AF2AE: ;
    MEM32(0x3C6010) = eax;
    goto loc_000AF2BF;

loc_000AF2B5: ;
    MEM32(0x3C6010) = 0;

loc_000AF2BF: ;
    eax = MEM32(0x3C6004);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AF380; /* jne: not equal / not zero */

loc_000AF2CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000AF2D3u); RECOMP_ABI_CALL(0x0007C580u, sub_0007C580); /* call 0x0007C580 */

loc_000AF2D3: ;
    esi = eax;
    ecx = 7;
    edi = esp + 8;
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
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx + 0x14);
    esi = MEM32(eax + ecx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFDFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(eax + 0xC) = esi;
    PUSH32(esp, 0x000AF2FCu); RECOMP_ABI_CALL(0x001B3850u, sub_001B3850); /* call 0x001B3850 */

loc_000AF2FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    MEM32(0x3C6008) = eax;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000AF30Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000AF305u); } /* indirect call */
    }

loc_000AF30B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000AF324; /* je: equal / zero */

loc_000AF314: ;
    ecx = MEM32(0x3C6008);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000AF322u); RECOMP_ABI_CALL(0x001CDD00u, sub_001CDD00); /* call 0x001CDD00 */

loc_000AF322: ;
    goto loc_000AF326;

loc_000AF324: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000AF326: ;
    edx = MEM32(0x3C6008);
    MEM32(0x3C6004) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 4);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(0x3C600C) = xmm0.f[0]; /* movss */
    ecx = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x3C6004);
    MEM32(edx + 0x14) = 2;
    PUSH32(esp, 0x000AF364u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_000AF364: ;
    eax = MEM32(eax + 0x2C0);
    MEM32(0x373580) = eax;
    PUSH32(esp, 0x000AF374u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_000AF374: ;
    ecx = MEM32(eax + 0x2C4);
    MEM32(0x373584) = ecx;

loc_000AF380: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AF390
 * Original: 0x000AF390 - 0x000AF4B0 (288 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x373580);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000AF4A7; /* jle: less or equal (signed <=) */

loc_000AF3AB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF3B0u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000AF3B0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF3B7u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000AF3B7: ;
    ebx = eax;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF3C0u); RECOMP_ABI_CALL(0x001C1A60u, sub_001C1A60); /* call 0x001C1A60 */

loc_000AF3C0: ;
    ecx = eax;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF3CBu); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000AF3CB: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF3D4u); RECOMP_ABI_CALL(0x001C7670u, sub_001C7670); /* call 0x001C7670 */

loc_000AF3D4: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x11C);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(eax + 0x40);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x58);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x5C);
    MEM32(esp + 0x10) = ecx;
    ecx = ebx;
    MEM32(esp + 0xC) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF400u); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_000AF400: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF424u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000AF424: ;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF432u); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000AF432: ;
    eax = 0xFF000000u;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF43Fu); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000AF43F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF446u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000AF446: ;
    ecx = MEM32(0x373580);
    edx = MEM32(edi + 0x16C);
    eax = MEM32(edi + 0x168);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x160);
    ecx = ecx << 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ecx | 0xFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edi + 0x164);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF48Fu); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000AF48F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF496u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000AF496: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF49Eu); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_000AF49E: ;
    ecx = MEM32(esp + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF4A7u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000AF4A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AF4B0
 * Original: 0x000AF4B0 - 0x000AF504 (84 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF4B0: ;
    ecx = MEM32(0x3C6004);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000AF4D1; /* je: equal / zero */

loc_000AF4C0: ;
    PUSH32(esp, 0x000AF4C5u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_000AF4C5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000AF4CEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000AF4C8u); } /* indirect call */
    }

loc_000AF4CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AF4D1: ;
    eax = MEM32(0x3C6008);
    PUSH32(esp, eax);
    MEM32(0x3C6004) = edi;
    PUSH32(esp, 0x000AF4E2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000AF4E2: ;
    ecx = MEM32(0x3C6010);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x3C6008) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000AF4FB; /* je: equal / zero */

loc_000AF4F5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000AF4FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000AF4F9u); } /* indirect call */
    }

loc_000AF4FB: ;
    MEM32(0x3C6010) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AF510
 * Original: 0x000AF510 - 0x000AF7F9 (745 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x373580);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000AF7F2; /* jle: less or equal (signed <=) */

loc_000AF529: ;
    eax = MEM32(0x3C6004);
    PUSH32(esp, eax);
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF537u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000AF537: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x11C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x40); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x44); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF565u); RECOMP_ABI_CALL(0x002BE66Cu, sub_002BE66C); /* call 0x002BE66C */

loc_000AF565: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x310A38); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF57Cu); RECOMP_ABI_CALL(0x002BE66Cu, sub_002BE66C); /* call 0x002BE66C */

loc_000AF57C: ;
    SET_LO8(ecx, MEM8(0x3C6024));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x310A38); /* mulss */
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF5DB; /* jne: not equal / not zero */

loc_000AF59D: ;
    xmm0 = XMM_SCALAR(MEMF(0x3003A0)); /* movss */
    ecx = MEM32(0x3C6024);
    MEMF(0x3C6018) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x301050)); /* movss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(0x3C601C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x310A34)); /* movss */
    MEM32(0x3C6024) = ecx;
    MEMF(0x3C6020) = xmm0.f[0]; /* movss */

loc_000AF5DB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF5E0u); RECOMP_ABI_CALL(0x002BE66Cu, sub_002BE66C); /* call 0x002BE66C */

loc_000AF5E0: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm3.f[0] = (float)(int32_t)MEM32(0x373584); /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x310A38); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x310A30); /* mulss */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x3C6014;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x3C600C); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0xC); /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    ecx = esp + 0x20;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, ecx);
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    ecx = esp + 0x34;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF6D9u); RECOMP_ABI_CALL(0x00265060u, sub_00265060); /* call 0x00265060 */

loc_000AF6D9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    edx = esp + 0x24;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AF710u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000AF710: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x60) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x60); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x64); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x44); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x64); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(esi + 0x160) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x164) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x168) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x16C) = xmm2.f[0]; /* movss */

loc_000AF7F2: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AF800
 * Original: 0x000AF800 - 0x000AF824 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF800: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3109F8;
    PUSH32(esp, 0x000AF80Eu); RECOMP_ABI_CALL(0x000BCAD0u, sub_000BCAD0); /* call 0x000BCAD0 */

loc_000AF80E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AF81E; /* je: equal / zero */

loc_000AF815: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AF81Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000AF81B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000AF81E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AF830
 * Original: 0x000AF830 - 0x000AF833 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF830: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000AF840
 * Original: 0x000AF840 - 0x000AF8BE (126 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000AF840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE99C); /* addss */
    MEM32(esi + 4) = eax;
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x28); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, edi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AF86F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AF867: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_000AF86F: ;
    edi = (uint32_t)recomp_cvt_si32((double)MEMF(esi), g_mxcsr, 1); /* cvttss2si */
    eax = edi + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esi + 0x14) = edi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x28)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x28))); }
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esi + 0x18) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AF8AC; /* jl: less (signed <) */

loc_000AF897: ;
    ecx = MEM32(ecx + 0x28);
    eax = ecx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000AF8AC; /* jg: greater (signed >) */

loc_000AF8A1: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AF8AC; /* jl: less (signed <) */

loc_000AF8A8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000AF8B9; /* jle: less or equal (signed <=) */

loc_000AF8AC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = edx;
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_000AF8B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AF8C0
 * Original: 0x000AF8C0 - 0x000AF969 (169 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF8C0(void)
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

loc_000AF8C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AF8F2; /* jne: not equal / not zero */

loc_000AF8CD: ;
    eax = MEM32(esi + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000AF8DDu); RECOMP_ABI_CALL(0x000E7000u, sub_000E7000); /* call 0x000E7000 */

loc_000AF8DD: ;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM64(esp + 0x18)); /* fild */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000AF8FB;

loc_000AF8F2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_000AF8FB: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AF91D; /* jne: not equal / not zero */

loc_000AF902: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AF90Eu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000AF90E: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000AF921;

loc_000AF91D: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */

loc_000AF921: ;
    esi = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x14);
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0;
    MEM8(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x18) = 1;
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AF970
 * Original: 0x000AF970 - 0x000AFBA1 (561 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF970(void)
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

loc_000AF970: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AFB9C; /* je: equal / zero */

loc_000AF985: ;
    MEM32(esi + 4) = eax;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AFB9C; /* jne: not equal / not zero */

loc_000AF993: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(edi + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF020)); /* fmul dword ptr [0x2ff020] */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x300914)); /* fmul dword ptr [0x300914] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, 0x000AF9B7u); RECOMP_ABI_CALL(0x002BF43Au, sub_002BF43A); /* call 0x002BF43A */

loc_000AF9B7: ;
    edx = MEM32(esi + 0xC);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa == 0)) goto loc_000AFB1C; /* je: equal / zero */

loc_000AF9CC: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000AFA38; /* je: equal / zero */

loc_000AF9CF: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AFB6B; /* jne: not equal / not zero */

loc_000AF9D6: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000AFA1E; /* jne: not equal / not zero */

loc_000AF9EB: ;
    ecx = MEM32(edi + 0x28);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AFA12; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AF9F8: ;
    edx = MEM32(edi + 0x28);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x28);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + 1;
    goto loc_000AFB67;

loc_000AFA12: ;
    eax = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    ecx = eax + 1;
    goto loc_000AFB67;

loc_000AFA1E: ;
    eax = MEM32(edi + 0x28);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AFB61; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AFA2E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    goto loc_000AFB5D;

loc_000AFA38: ;
    eax = MEM32(edi + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000AFAB5; /* jne: not equal / not zero */

loc_000AFA46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AFA88; /* jne: not equal / not zero */

loc_000AFA4A: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AFA7C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AFA61: ;
    MEM32(esi + 8) = 1;
    ecx = MEM32(edi + 0x28);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi) = xmm1.f[0]; /* movss */

loc_000AFA7C: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esi), g_mxcsr, 1); /* cvttss2si */
    ecx = eax + 1;
    goto loc_000AFB67;

loc_000AFA88: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AFAA9; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000AFA97: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esi + 8) = 0;
    MEMF(esi) = xmm1.f[0]; /* movss */

loc_000AFAA9: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esi), g_mxcsr, 1); /* cvttss2si */
    ecx = eax + 1;
    goto loc_000AFB67;

loc_000AFAB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AFAF4; /* jne: not equal / not zero */

loc_000AFAB9: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(edi + 0x28); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AFB61; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AFAD1: ;
    MEM32(esi + 8) = 1;
    eax = MEM32(edi + 0x28);
    edx = eax + -1;
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    goto loc_000AFB61;

loc_000AFAF4: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AFB61; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000AFB03: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esi + 8) = 0;
    MEMF(esi) = xmm1.f[0]; /* movss */
    goto loc_000AFB61;

loc_000AFB1C: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000AFB4F; /* jne: not equal / not zero */

loc_000AFB31: ;
    eax = MEM32(edi + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AFB46; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AFB3E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_000AFB46: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esi), g_mxcsr, 1); /* cvttss2si */
    ecx = eax + 1;
    goto loc_000AFB67;

loc_000AFB4F: ;
    xmm1.f[0] = (float)(int32_t)MEM32(edi + 0x28); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000AFB61; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000AFB59: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000AFB5D: ;
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_000AFB61: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esi), g_mxcsr, 1); /* cvttss2si */
    ecx = eax;

loc_000AFB67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AFB7D; /* jl: less (signed <) */

loc_000AFB6B: ;
    edi = MEM32(edi + 0x28);
    edx = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000AFB7D; /* jg: greater (signed >) */

loc_000AFB75: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AFB7D; /* jl: less (signed <) */

loc_000AFB79: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000AFB85; /* jle: less or equal (signed <=) */

loc_000AFB7D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi) = xmm2.f[0]; /* movss */

loc_000AFB85: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */

loc_000AFB9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AFBB0
 * Original: 0x000AFBB0 - 0x000AFF81 (977 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AFBB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x174;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(esi + 0x18);
    ebx = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0xFFFFFFFCu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AFF78; /* je: equal / zero */

loc_000AFBE5: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm1 = XMM_SCALAR(MEMF(eax + esi + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + esi + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + esi + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + esi + 0x3C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + esi + 0x40)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + esi + 0x44)); /* movss */
    edi = ecx + 2;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm4 = XMM_SCALAR(MEMF(edi + esi)); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000AFD0E; /* jne: not equal / not zero */

loc_000AFC50: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AFD0E; /* je: equal / zero */

loc_000AFC58: ;
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    xmm7 = XMM_SCALAR(MEMF(ecx + esi + 0x2C)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */
    eax = ecx + esi;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */

loc_000AFD0E: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    ecx = esp + 0xC4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFD1Fu); RECOMP_ABI_CALL(0x00265DA0u, sub_00265DA0); /* call 0x00265DA0 */

loc_000AFD1F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    eax = esp + 0x14;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFD59u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000AFD59: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    ecx = esp + 0x14;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0xC8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFD93u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_000AFD93: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0x104;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFDCAu); RECOMP_ABI_CALL(0x00265BC0u, sub_00265BC0); /* call 0x00265BC0 */

loc_000AFDCA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x144;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFDFCu); RECOMP_ABI_CALL(0x00265E50u, sub_00265E50); /* call 0x00265E50 */

loc_000AFDFC: ;
    xmm0 = XMM_SCALAR(MEMF(0x3075DC)); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFE27u); RECOMP_ABI_CALL(0x00265E50u, sub_00265E50); /* call 0x00265E50 */

loc_000AFE27: ;
    edx = esp + 0x100;
    PUSH32(esp, edx);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFE40u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000AFE40: ;
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(0x534370, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    XMM_STORE(0x534390, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x74); /* movaps */
    PUSH32(esp, 0x534370);
    ecx = esp + 0x48;
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFE86u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000AFE86: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFEB1u); RECOMP_ABI_CALL(0x00265E50u, sub_00265E50); /* call 0x00265E50 */

loc_000AFEB1: ;
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(0x534370, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    eax = esp + 0x80;
    PUSH32(esp, eax);
    XMM_STORE(0x534390, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x74); /* movaps */
    PUSH32(esp, 0x534370);
    ecx = esp + 0x48;
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFEF7u); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000AFEF7: ;
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(0x534370, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    XMM_STORE(0x534380, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    PUSH32(esp, 0x534370);
    ecx = esp + 0x144;
    XMM_STORE(0x534390, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x74); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    XMM_STORE(0x5343A0, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000AFF3Du); RECOMP_ABI_CALL(0x00014560u, sub_00014560); /* call 0x00014560 */

loc_000AFF3D: ;
    esi = MEM32(esi + 0x18);
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AFF78; /* je: equal / zero */

loc_000AFF49: ;
    xmm0 = XMM_MEM(esp + 0x70); /* movaps */
    xmm1 = XMM_MEM(esp + 0x60); /* movaps */
    xmm2 = XMM_MEM(esp + 0x50); /* movaps */
    xmm3 = XMM_MEM(esp + 0x40); /* movaps */
    /* nop */

loc_000AFF60: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    XMM_STORE(eax, xmm3); /* movaps */
    XMM_STORE(eax + 0x10, xmm2); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000AFF60; /* jne: not equal / not zero */

loc_000AFF78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AFF90
 * Original: 0x000AFF90 - 0x000AFF95 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFF90(void)
{

loc_000AFF90: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000AFFA0
 * Original: 0x000AFFA0 - 0x000AFFA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFFA0(void)
{

loc_000AFFA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AFFB0
 * Original: 0x000AFFB0 - 0x000AFFCA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AFFB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000AFFBDu); RECOMP_ABI_CALL(0x00131F10u, sub_00131F10); /* call 0x00131F10 */

loc_000AFFBD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFFC3u); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_000AFFC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AFFD0
 * Original: 0x000AFFD0 - 0x000AFFD3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFFD0(void)
{

loc_000AFFD0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AFFE0
 * Original: 0x000AFFE0 - 0x000AFFE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFFE0(void)
{

loc_000AFFE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AFFF0
 * Original: 0x000AFFF0 - 0x000B004A (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AFFF0: ;
    ecx = MEM32(0x3C6030);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B001B; /* je: equal / zero */

loc_000AFFFD: ;
    PUSH32(esp, esi);
    edi = edi;

loc_000B0000: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14C)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x14C), 8 (8-bit) */
    esi = MEM32(ecx + 0x150);
    if (TEST_Z(_fa, _fb)) goto loc_000B0014; /* je: equal / zero */

loc_000B000F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B0014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B0011u); } /* indirect call */
    }

loc_000B0014: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000B0000; /* jne: not equal / not zero */

loc_000B001A: ;
    POP32(esp, esi);

loc_000B001B: ;
    ecx = MEM32(0x3C602C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B0027u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_000B0027: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C6038) = edi;
    MEM32(0x3C603C) = edi;
    MEM32(0x3C602C) = edi;
    MEM32(0x3C6030) = edi;
    MEM32(0x3C6034) = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B0050
 * Original: 0x000B0050 - 0x000B00B2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0050: ;
    edx = MEM32(0x3C603C);
    ecx = MEM32(0x3C6038);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B0075; /* jl: less (signed <) */

loc_000B0069: ;
    eax = MEM32(0x3C6034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B0087; /* jne: not equal / not zero */

loc_000B0072: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000B0075: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B00B1; /* jl: less (signed <) */

loc_000B0079: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B00B1; /* jb: below (unsigned <) */

loc_000B007E: ;
    eax = MEM32(0x3C6034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0072; /* je: equal / zero */

loc_000B0087: ;
    ecx = MEM32(eax + 0x150);
    edx = MEM32(0x3C6030);
    MEM32(0x3C6034) = ecx;
    MEM32(eax + 0x150) = edx;
    ecx = MEM32(0x3C603C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C6030) = eax;
    MEM32(0x3C603C) = ecx;

loc_000B00B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B0064
 * Original: 0x000B0064 - 0x000B00B2 (78 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0064(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0064: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B0075; /* jl: less (signed <) */

loc_000B0069: ;
    eax = MEM32(0x3C6034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B0087; /* jne: not equal / not zero */

loc_000B0072: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000B0075: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B00B1; /* jl: less (signed <) */

loc_000B0079: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B00B1; /* jb: below (unsigned <) */

loc_000B007E: ;
    eax = MEM32(0x3C6034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0072; /* je: equal / zero */

loc_000B0087: ;
    ecx = MEM32(eax + 0x150);
    edx = MEM32(0x3C6030);
    MEM32(0x3C6034) = ecx;
    MEM32(eax + 0x150) = edx;
    ecx = MEM32(0x3C603C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C6030) = eax;
    MEM32(0x3C603C) = ecx;

loc_000B00B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B006E
 * Original: 0x000B006E - 0x000B00B2 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B006E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B006E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B0087; /* jne: not equal / not zero */

loc_000B0072: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B00B1; /* jb: below (unsigned <) */

loc_000B007E: ;
    eax = MEM32(0x3C6034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0072; /* je: equal / zero */

loc_000B0087: ;
    ecx = MEM32(eax + 0x150);
    edx = MEM32(0x3C6030);
    MEM32(0x3C6034) = ecx;
    MEM32(eax + 0x150) = edx;
    ecx = MEM32(0x3C603C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C6030) = eax;
    MEM32(0x3C603C) = ecx;

loc_000B00B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B0072
 * Original: 0x000B0072 - 0x000B00B2 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0072(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0072: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B00B1; /* jb: below (unsigned <) */

loc_000B007E: ;
    eax = MEM32(0x3C6034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0072; /* je: equal / zero */

loc_000B0087: ;
    ecx = MEM32(eax + 0x150);
    edx = MEM32(0x3C6030);
    MEM32(0x3C6034) = ecx;
    MEM32(eax + 0x150) = edx;
    ecx = MEM32(0x3C603C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C6030) = eax;
    MEM32(0x3C603C) = ecx;

loc_000B00B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B007E
 * Original: 0x000B007E - 0x000B00B2 (52 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B007E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B007E: ;
    eax = MEM32(0x3C6034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000B0072(); return; } /* je: equal / zero */

loc_000B0087: ;
    ecx = MEM32(eax + 0x150);
    edx = MEM32(0x3C6030);
    MEM32(0x3C6034) = ecx;
    MEM32(eax + 0x150) = edx;
    ecx = MEM32(0x3C603C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C6030) = eax;
    MEM32(0x3C603C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B00C0
 * Original: 0x000B00C0 - 0x000B00DB (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B00C0(void)
{

loc_000B00C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B00CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B00CBu); } /* indirect call */
    }

loc_000B00CE: ;
    PUSH32(esp, esi);
    ecx = 0x3C602C;
    PUSH32(esp, 0x000B00D9u); RECOMP_ABI_CALL(0x000B1610u, sub_000B1610); /* call 0x000B1610 */

loc_000B00D9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B00E0
 * Original: 0x000B00E0 - 0x000B0128 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B00E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B00E0: ;
    ecx = MEM32(0x3C6038);
    _fb = (uint32_t)(MEM32(0x3C603C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x3C603C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B0127; /* jb: below (unsigned <) */

loc_000B00F3: ;
    eax = MEM32(0x3C6034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B00FD; /* jne: not equal / not zero */

loc_000B00FC: ;
    esp += 4; return; /* ret */

loc_000B00FD: ;
    edx = MEM32(eax + 0x150);
    ecx = MEM32(0x3C6030);
    MEM32(0x3C6034) = edx;
    MEM32(eax + 0x150) = ecx;
    ecx = MEM32(0x3C603C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C6030) = eax;
    MEM32(0x3C603C) = ecx;

loc_000B0127: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B0130
 * Original: 0x000B0130 - 0x000B01A9 (121 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0130: ;
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
    if (CMP_A(_fa, _fb)) goto loc_000B01A2; /* ja: above (unsigned >) */

loc_000B0143: ;
    eax = ZX8(MEM8(eax + 0xB01B8));
    { uint32_t _jt = MEM32(eax * 4 + 0xB01AC); /* switch: 3 entries, 3 targets */
    if (_jt == 0x000B0151u) goto loc_000B0151;
    if (_jt == 0x000B0190u) goto loc_000B0190;
    if (_jt == 0x000B01A2u) goto loc_000B01A2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B0151: ;
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
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000B0189u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B0183u); } /* indirect call */
    }

loc_000B0189: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000B0190: ;
    esi = ecx + -8;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B019Au); RECOMP_ABI_CALL(0x00132040u, sub_00132040); /* call 0x00132040 */

loc_000B019A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B01A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B01A0u); } /* indirect call */
    }

loc_000B01A2: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B01C0
 * Original: 0x000B01C0 - 0x000B01EC (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B01C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B01C0: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 0x11C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B01D1; /* jne: not equal / not zero */

loc_000B01CC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B01D1: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x13C);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B01E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B01E5u); } /* indirect call */
    }

loc_000B01E8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B01F0
 * Original: 0x000B01F0 - 0x000B0219 (41 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B01F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B01F0: ;
    SET_LO8(eax, MEM8(ecx + 0x14C));
    SET_LO8(eax, LO8(eax) & 0xFC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x14C) = LO8(eax);
    eax = MEM32(ecx + 0x134);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x24); /* addss */
    MEMF(ecx + 0x148) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B0220
 * Original: 0x000B0220 - 0x000B0271 (81 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0220: ;
    PUSH32(esp, 0x000B0225u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_000B0225: ;
    eax = MEM32(eax + 0x1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B0234; /* jle: less or equal (signed <=) */

loc_000B022F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B0239; /* jge: greater or equal (signed >=) */

loc_000B0234: ;
    eax = 0xA;

loc_000B0239: ;
    MEM32(0x3C6038) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x160);
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3109AC);
    PUSH32(esp, 0x000B0254u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000B0254: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3C602C;
    MEM32(0x3C602C) = eax;
    PUSH32(esp, 0x000B0266u); RECOMP_ABI_CALL(0x000AF0D0u, sub_000AF0D0); /* call 0x000AF0D0 */

loc_000B0266: ;
    MEM32(0x3C6028) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000B0280
 * Original: 0x000B0280 - 0x000B02AC (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0280: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 0x11C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B0291; /* jne: not equal / not zero */

loc_000B028C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B0291: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x13C);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B02A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B02A5u); } /* indirect call */
    }

loc_000B02A8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B02B0
 * Original: 0x000B02B0 - 0x000B02D7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B02B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B02B0: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 0x6C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B02BE; /* jne: not equal / not zero */

loc_000B02B9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000B02BE: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x8C);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B02D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B02D0u); } /* indirect call */
    }

loc_000B02D3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B02E0
 * Original: 0x000B02E0 - 0x000B04C6 (486 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B02E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B02E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xD0);
    edx = esp + 0x4C;
    MEM32(ecx + 0xD0) = edx;
    edx = MEM32(eax + 0x134);
    ebx = MEM32(edx + 0xD8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = 3;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = 1;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(eax + 0x130);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B04B9; /* je: equal / zero */

loc_000B0356: ;
    eax = MEM32(edi + 0x58);
    ecx = MEM32(edi + 0x54);
    edx = MEM32(edi + 0x50);
    esi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B036Eu); RECOMP_ABI_CALL(0x00266AA0u, sub_00266AA0); /* call 0x00266AA0 */

loc_000B036E: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B037Cu); RECOMP_ABI_CALL(0x00266780u, sub_00266780); /* call 0x00266780 */

loc_000B037C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    ecx = esp + 0x54;
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B045Du); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000B045D: ;
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0478; /* je: equal / zero */

loc_000B0467: ;
    eax = MEM32(ebp + 8);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B0475u); RECOMP_ABI_CALL(0x0014E510u, sub_0014E510); /* call 0x0014E510 */

loc_000B0475: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B0478: ;
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0493; /* je: equal / zero */

loc_000B0482: ;
    eax = MEM32(ebp + 8);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B0490u); RECOMP_ABI_CALL(0x0014E510u, sub_0014E510); /* call 0x0014E510 */

loc_000B0490: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B0493: ;
    ecx = MEM32(esp + 0x18);
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x130)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x130) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B0356; /* jne: not equal / not zero */

loc_000B04A5: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xD0) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B04B9: ;
    POP32(esp, edi);
    MEM32(ecx + 0xD0) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B04D0
 * Original: 0x000B04D0 - 0x000B0583 (179 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B04D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B04D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM8(ebx + 0x9C)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x9C), 8 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000B057A; /* je: equal / zero */

loc_000B04E9: ;
    SET_LO8(eax, MEM8(ebx + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = ebx + -176;
    if (CMP_EQ(_fa, _fb)) goto loc_000B057A; /* je: equal / zero */

loc_000B04FA: ;
    ecx = MEM32(edi + 0x13C);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = edi + 0x120;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B0512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B050Fu); } /* indirect call */
    }

loc_000B0512: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B057A; /* je: equal / zero */

loc_000B0516: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B051Du); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000B051D: ;
    ecx = MEM32(esi + 0xE4);
    xmm0 = XMM_SCALAR(MEMF(ebx + -80)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x60); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + -76)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x64); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebx + -72)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x68); /* subss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, 0x12);
    ecx = esi;
    MEMF(eax + 0x40) = xmm3.f[0]; /* movss */
    MEM32(eax + 0x58) = 0xB02E0;
    MEM32(eax + 0x48) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B057Au); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000B057A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B0590
 * Original: 0x000B0590 - 0x000B05B5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0590: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0x000B05A6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000B05A6: ;
    eax = MEM32(0x3C6028);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x3C6028) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000B05C0
 * Original: 0x000B05C0 - 0x000B09D5 (1045 bytes, 235 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B05C0(void)
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

loc_000B05C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x134);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    ecx = MEM32(edi + 0x130);
    xmm4 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x70); /* subss */
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x68)); /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x64)); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm7 = xmm3; /* movaps */
    xmm6 = xmm2; /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm6.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000B08D8; /* je: equal / zero */

loc_000B0664: ;
    esi = MEM32(eax);
    xmm7 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 0x70); /* addss */
    MEMF(eax + 0x70) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x48) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x14) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x18) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(eax + 0x10) = xmm7.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    MEMF(eax + 0x14) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x48); /* addss */
    MEMF(eax + 0x18) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 0x20) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 0x24) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 0x28) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(eax + 0x20) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(eax + 0x24) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(eax + 0x28) = xmm5.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    MEMF(esp + 0x48) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x50) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x54) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x58) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    MEMF(eax + 0x54) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x48); /* addss */
    MEMF(eax + 0x58) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm7.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 0x78); /* addss */
    MEMF(eax + 0x78) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x30) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x34) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x38) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x3C) = xmm5.f[0]; /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm5.f[0]; _fcb = MEMF(eax + 0x70); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B083A; /* jb: below (unsigned <) (xmm5.f[0] vs MEMF(eax + 0x70)) */

loc_000B07FD: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B080Du); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000B080D: ;
    eax = MEM32(0x3C6028);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x3C6028) = eax;
    goto loc_000B08B8;

loc_000B083A: ;
    xmm5 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B084D; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm4.f[0]) */

loc_000B0844: ;
    xmm4 = xmm5; /* movaps */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_000B084D: ;
    xmm5 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B0860; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm3.f[0]) */

loc_000B0857: ;
    xmm3 = xmm5; /* movaps */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */

loc_000B0860: ;
    xmm5 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fca = xmm5.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B0873; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm2.f[0]) */

loc_000B086A: ;
    xmm2 = xmm5; /* movaps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_000B0873: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fca = xmm5.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B088A; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs MEMF(eax + 0x10)) */

loc_000B087F: ;
    xmm5 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm5.f[0]; /* movss */

loc_000B088A: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm5.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B08A1; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs MEMF(eax + 0x14)) */

loc_000B0896: ;
    xmm5 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */

loc_000B08A1: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm5.f[0]; _fcb = MEMF(eax + 0x18); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B08B8; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs MEMF(eax + 0x18)) */

loc_000B08AD: ;
    xmm5 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */

loc_000B08B8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x130)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x130) (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000B0664; /* jne: not equal / not zero */

loc_000B08C6: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */

loc_000B08D8: ;
    xmm3.f[0] = xmm3.f[0] - xmm7.f[0]; /* subss */
    xmm1 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = MEM32(edi + 0x134);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0xA4); /* addss */
    xmm3 = xmm0; /* movaps */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B0962; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B0962: ;
    eax = MEM32(eax + 0xD8);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B097C; /* je: equal / zero */

loc_000B0972: ;
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x98)); /* movss */
    goto loc_000B098B;

loc_000B097C: ;
    eax = MEM32(eax + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B098B; /* je: equal / zero */

loc_000B0983: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */

loc_000B098B: ;
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x310A3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B09AD; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B09AA: ;
    xmm0 = xmm3; /* movaps */

loc_000B09AD: ;
    MEMF(edi + 0x120) = xmm5.f[0]; /* movss */
    MEMF(edi + 0x124) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x128) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x13C) = xmm0.f[0]; /* movss */
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
 * sub_000B09E0
 * Original: 0x000B09E0 - 0x000B0A1D (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B09E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B09E0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x130);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0A1B; /* je: equal / zero */

loc_000B09EF: ;
    PUSH32(esp, esi);

loc_000B09F0: ;
    esi = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(ecx) = esi;
    PUSH32(esp, eax);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x000B0A00u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000B0A00: ;
    edx = MEM32(0x3C6028);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x3C6028) = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x130)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x130) (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000B09F0; /* jne: not equal / not zero */

loc_000B0A1A: ;
    POP32(esp, esi);

loc_000B0A1B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B0A20
 * Original: 0x000B0A20 - 0x000B0A3E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0A20(void)
{

loc_000B0A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B0A28u); RECOMP_ABI_CALL(0x000B09E0u, sub_000B09E0); /* call 0x000B09E0 */

loc_000B0A28: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B0A31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B0A2Eu); } /* indirect call */
    }

loc_000B0A31: ;
    PUSH32(esp, esi);
    ecx = 0x3C602C;
    PUSH32(esp, 0x000B0A3Cu); RECOMP_ABI_CALL(0x000B1610u, sub_000B1610); /* call 0x000B1610 */

loc_000B0A3C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B0A40
 * Original: 0x000B0A40 - 0x000B0A59 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x14C) = MEM8(esi + 0x14C) & 0xF7;
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x000B0A4Fu); RECOMP_ABI_CALL(0x000B09E0u, sub_000B09E0); /* call 0x000B09E0 */

loc_000B0A4F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B0A57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B0A55u); } /* indirect call */
    }

loc_000B0A57: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B0A60
 * Original: 0x000B0A60 - 0x000B0BE4 (388 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0A60(void)
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

loc_000B0A60: ;
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
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B0A72u); RECOMP_ABI_CALL(0x000BBB90u, sub_000BBB90); /* call 0x000BBB90 */

loc_000B0A72: ;
    edi = esi + 0xB0;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B0A7Fu); RECOMP_ABI_CALL(0x00131E70u, sub_00131E70); /* call 0x00131E70 */

loc_000B0A7F: ;
    MEM32(esi) = 0x310A98;
    MEM32(esi + 8) = 0x310A90;
    MEM32(edi) = 0x310A40;
    PUSH32(esp, 0x80);
    MEM32(esi + 0x130) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B0AA6u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000B0AA6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x130) = eax;
    eax = MEM32(ebp + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x134) = eax;
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
    PUSH32(esp, 0x000B0B34u); RECOMP_ABI_CALL(0x00131B40u, sub_00131B40); /* call 0x00131B40 */

loc_000B0B34: ;
    SET_LO8(edx, MEM8(esi + 0x14C));
    eax = MEM32(esi + 0x134);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    SET_LO8(edx, LO8(edx) & 0xFA);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | 0xA);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEMF(esi + 0x140) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x14C) = LO8(edx);
    ecx = MEM32(eax + 0x30);
    MEM32(esi + 0x144) = ecx;
    MEMF(esi + 0x13C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esi + 0x148) = edx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B0B98u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B0B98: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x148)); /* fadd dword ptr [esi + 0x148] */
    ecx = MEM32(esi + 0x134);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, MEM8(esi + 0x14C));
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B0BD2; /* jp: parity */

loc_000B0BC0: ;
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x14C) = LO8(eax);
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000B0BD2: ;
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x14C) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
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
 * sub_000B0BF0
 * Original: 0x000B0BF0 - 0x000B0C36 (70 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B0BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x14C));
    PUSH32(esp, edi);
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edi = esi + 0xB0;
    ecx = esi + 0x130;
    MEM32(esi) = 0x310A98;
    MEM32(esi + 8) = 0x310A90;
    MEM32(edi) = 0x310A40;
    MEM8(esi + 0x14C) = LO8(eax);
    PUSH32(esp, 0x000B0C26u); RECOMP_ABI_CALL(0x0004FAF0u, sub_0004FAF0); /* call 0x0004FAF0 */

loc_000B0C26: ;
    ecx = edi;
    PUSH32(esp, 0x000B0C2Du); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000B0C2D: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000B9410(); return; /* tail jmp 0x000B9410 */

}

/**
 * sub_000B0C40
 * Original: 0x000B0C40 - 0x000B0CA7 (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x3C6028);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000B0CA0; /* jge: greater or equal (signed >=) */

loc_000B0C59: ;
    ebx = MEM32(ebp + 8);
    edi = MEM32(ebx);
    PUSH32(esp, 0x80);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B0C68u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000B0C68: ;
    esi = eax;
    ecx = esi + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0C7E; /* je: equal / zero */

loc_000B0C74: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B0C7Eu); RECOMP_ABI_CALL(0x000B1670u, sub_000B1670); /* call 0x000B1670 */

loc_000B0C7E: ;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    MEM32(esi) = edi;
    MEM32(eax) = esi;
    MEM32(edi + 4) = esi;
    ecx = MEM32(ebx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(0x3C6028);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C6028) = ecx;

loc_000B0CA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000B0CB0
 * Original: 0x000B0CB0 - 0x000B0CCF (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0CB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B0CBEu); RECOMP_ABI_CALL(0x000B0050u, sub_000B0050); /* call 0x000B0050 */

loc_000B0CBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0CCD; /* je: equal / zero */

loc_000B0CC5: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000B0CCDu); RECOMP_ABI_CALL(0x000B0A60u, sub_000B0A60); /* call 0x000B0A60 */

loc_000B0CCD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B0CD0
 * Original: 0x000B0CD0 - 0x000B1552 (2178 bytes, 455 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0CD0(void)
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

loc_000B0CD0: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x134);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x54)); /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x58)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x74)); /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x78)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x7C)); /* movss */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x80)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x84)); /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x8C)); /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    ecx = MEM32(eax + 0x18);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA4)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xA8)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xAC)); /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xBC)); /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC0)); /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC4)); /* movss */
    MEM32(esp + 0xC8) = ecx;
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xCC)); /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xD0)); /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x140)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi + 0x140) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1549; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B0F48: ;
    goto loc_000B0F50;

    /* nop */

loc_000B0F50: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x140)); /* movss */
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(edi + 0x144), g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x84); /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x144)); /* movss */
    MEMF(edi + 0x140) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0xD8); /* addss */
    MEM32(esp + 0xD0) = eax;
    MEMF(edi + 0x144) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x5C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000B1539; /* jle: less or equal (signed <=) */

loc_000B0FA9: ;
    /* nop */

loc_000B0FB0: ;
    _fa = (uint32_t)(MEM32(0x3C6028)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3C6028), 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B1539; /* jge: greater or equal (signed >=) */

loc_000B0FBD: ;
    ebx = MEM32(edi + 0x130);
    PUSH32(esp, 0x80);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B0FCDu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000B0FCD: ;
    esi = eax;
    ecx = esi + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0FE6; /* je: equal / zero */

loc_000B0FD9: ;
    edx = esp + 0xE0;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B0FE6u); RECOMP_ABI_CALL(0x000B1670u, sub_000B1670); /* call 0x000B1670 */

loc_000B0FE6: ;
    eax = MEM32(ebx + 4);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    MEM32(ebx + 4) = esi;
    eax = MEM32(edi + 0x130);
    esi = MEM32(eax + 4);
    ecx = MEM32(0x3C6028);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x3C6028) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B1539; /* je: equal / zero */

loc_000B1014: ;
    ecx = MEM32(esp + 0x48);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x48); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B102Du); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B102D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xCC)); /* fadd dword ptr [esp + 0xcc] */
    edx = MEM32(esp + 0x6C);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) / fp_top()); /* fdivr dword ptr [0x2fe99c] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x64); /* subss */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B1070u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B1070: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x7C)); /* fadd dword ptr [esp + 0x7c] */
    eax = MEM32(esp + 0x40);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B1094u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B1094: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xB4)); /* fadd dword ptr [esp + 0xb4] */
    ecx = MEM32(esp + 0x58);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x58); /* subss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B10BBu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B10BB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x84)); /* fadd dword ptr [esp + 0x84] */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x60); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x64); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x58)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x68); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(esp + 0x40);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B1198u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B1198: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xDC)); /* fadd dword ptr [esp + 0xdc] */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    MEMF(esp + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x74);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B11BFu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B11BF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC4)); /* fadd dword ptr [esp + 0xc4] */
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B11D5u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B11D5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xA4)); /* fadd dword ptr [esp + 0xa4] */
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B11EBu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B11EB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xEC)); /* fadd dword ptr [esp + 0xec] */
    eax = MEM32(esp + 0xB4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B120Au); RECOMP_ABI_CALL(0x00266200u, sub_00266200); /* call 0x00266200 */

loc_000B120A: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x54)); /* movss */
    ecx = MEM32(esp + 0x60);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x58)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x48)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x60); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B12CBu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B12CB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC4)); /* fadd dword ptr [esp + 0xc4] */
    edx = MEM32(esp + 0x38);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B12F2u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B12F2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xA4)); /* fadd dword ptr [esp + 0xa4] */
    eax = MEM32(esp + 0x60);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x60); /* subss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B1319u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B1319: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xE4)); /* fadd dword ptr [esp + 0xe4] */
    ecx = MEM32(esp + 0x3C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B1367u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B1367: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xAC)); /* fadd dword ptr [esp + 0xac] */
    edx = MEM32(esp + 0x44);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B138Eu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B138E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x74)); /* fadd dword ptr [esp + 0x74] */
    eax = MEM32(esp + 0x4C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x4C); /* subss */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B13B2u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B13B2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x78)); /* fadd dword ptr [esp + 0x78] */
    xmm0 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = MEM32(esp + 0x4C);
    MEMF(esi + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x4C); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esi + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B142Fu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B142F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x80)); /* fadd dword ptr [esp + 0x80] */
    edx = MEM32(esp + 0x5C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x5C); /* subss */
    MEMF(esi + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B1455u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000B1455: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x88)); /* fadd dword ptr [esp + 0x88] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x68)); /* fsub dword ptr [esi + 0x68] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x24); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x28); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0x2C); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x20); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm3.f[0]; /* movss */
    eax = MEM32(edi + 0x130);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1518; /* je: equal / zero */

loc_000B1511: ;
    ecx = MEM32(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1511; /* jne: not equal / not zero */

loc_000B1518: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B1539; /* jae: above or equal (unsigned >=) */

loc_000B1521: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0xD0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B0FB0; /* jl: less (signed <) */

loc_000B1539: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x140); /* comiss */
    if ((_fca >= _fcb)) goto loc_000B0F50; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(edi + 0x140)) */

loc_000B1549: ;
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
 * sub_000B1560
 * Original: 0x000B1560 - 0x000B160E (174 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1560(void)
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

loc_000B1560: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000B156Du); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_000B156D: ;
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14C), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B160A; /* je: equal / zero */

loc_000B157A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF020)); /* fmul dword ptr [0x2ff020] */
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B1595u); RECOMP_ABI_CALL(0x000B05C0u, sub_000B05C0); /* call 0x000B05C0 */

loc_000B1595: ;
    SET_LO8(eax, MEM8(esi + 0x14C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B15CC; /* je: equal / zero */

loc_000B159F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x148)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x148) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1609; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B15BD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x000B15C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B15C1u); } /* indirect call */
    }

loc_000B15C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B15CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B15D8; /* je: equal / zero */

loc_000B15D0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B15D8u); RECOMP_ABI_CALL(0x000B0CD0u, sub_000B0CD0); /* call 0x000B0CD0 */

loc_000B15D8: ;
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B1609; /* jne: not equal / not zero */

loc_000B15E1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x148)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x148) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1609; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B15FF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x000B1609u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B1603u); } /* indirect call */
    }

loc_000B1609: ;
    POP32(esp, edi);

loc_000B160A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B1610
 * Original: 0x000B1610 - 0x000B1661 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1610: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1627; /* jne: not equal / not zero */

loc_000B161C: ;
    eax = MEM32(esi + 0x150);
    MEM32(ecx + 4) = eax;
    goto loc_000B164E;

loc_000B1627: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B164E; /* je: equal / zero */

loc_000B162B: ;
    goto loc_000B1630;

    /* nop */

loc_000B1630: ;
    edx = MEM32(eax + 0x150);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1642; /* je: equal / zero */

loc_000B163A: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1630; /* jne: not equal / not zero */

loc_000B1640: ;
    goto loc_000B164E;

loc_000B1642: ;
    edx = MEM32(esi + 0x150);
    MEM32(eax + 0x150) = edx;

loc_000B164E: ;
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 8);
    MEM32(esi + 0x150) = eax;
    MEM32(ecx + 8) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1670
 * Original: 0x000B1670 - 0x000B1707 (151 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1670(void)
{

loc_000B1670: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0x58) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 0x64) = edx;
    edx = MEM32(ecx + 0x68);
    MEM32(eax + 0x68) = edx;
    ecx = MEM32(ecx + 0x6C);
    MEM32(eax + 0x6C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1710
 * Original: 0x000B1710 - 0x000B1718 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1710: ;
    MEM8(ecx + 0x14C) = MEM8(ecx + 0x14C) & 0xFD;
    _fa = (uint32_t)(MEM8(ecx + 0x14C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1720
 * Original: 0x000B1720 - 0x000B1733 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1720: ;
    SET_LO8(eax, MEM8(ecx + 0x14C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B1732; /* jne: not equal / not zero */

loc_000B172A: ;
    SET_LO8(eax, LO8(eax) | 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 0x14C) = LO8(eax);

loc_000B1732: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1740
 * Original: 0x000B1740 - 0x000B1749 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1740: ;
    SET_LO8(eax, MEM8(ecx + 0x14C));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1750
 * Original: 0x000B1750 - 0x000B175B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1750: ;
    SET_LO8(eax, MEM8(ecx + 0x14C));
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1760
 * Original: 0x000B1760 - 0x000B176C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1760: ;
    SET_LO8(eax, MEM8(ecx + 0x14C));
    SET_LO8(eax, LO8(eax) >> 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1770
 * Original: 0x000B1770 - 0x000B1778 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1770: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000B1790(); return; /* tail jmp 0x000B1790 */

}

/**
 * sub_000B1780
 * Original: 0x000B1780 - 0x000B178B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1780: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000B1790(); return; /* tail jmp 0x000B1790 */

}

/**
 * sub_000B1790
 * Original: 0x000B1790 - 0x000B17DB (75 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1790: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x14C));
    PUSH32(esp, edi);
    SET_LO8(eax, LO8(eax) & 0xF7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edi = esi + 0xB0;
    ecx = esi + 0x130;
    MEM32(esi) = 0x310A98;
    MEM32(esi + 8) = 0x310A90;
    MEM32(edi) = 0x310A40;
    MEM8(esi + 0x14C) = LO8(eax);
    PUSH32(esp, 0x000B17C6u); RECOMP_ABI_CALL(0x0004FAF0u, sub_0004FAF0); /* call 0x0004FAF0 */

loc_000B17C6: ;
    ecx = edi;
    PUSH32(esp, 0x000B17CDu); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000B17CD: ;
    ecx = esi;
    PUSH32(esp, 0x000B17D4u); RECOMP_ABI_CALL(0x000B9410u, sub_000B9410); /* call 0x000B9410 */

loc_000B17D4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B17E0
 * Original: 0x000B17E0 - 0x000B18C2 (226 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B17E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B17E0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1809; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000B17FE: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE99C); /* addss */
    xmm3 = xmm0; /* movaps */

loc_000B1809: ;
    xmm0 = XMM_SCALAR(MEMF(0x3C6048)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B18C1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_000B181A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(0x3C6054) = xmm2.f[0]; /* movss */
    MEMF(0x3C6058) = xmm1.f[0]; /* movss */
    MEMF(0x3C605C) = xmm4.f[0]; /* movss */
    MEMF(0x3C6060) = xmm3.f[0]; /* movss */
    MEMF(0x3C6048) = xmm0.f[0]; /* movss */
    MEM32(0x3C6064) = 1;
    MEMF(0x3C604C) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B1870; /* jp: parity */

loc_000B1866: ;
    MEMF(0x3C6050) = xmm2.f[0]; /* movss */
    goto loc_000B187F;

loc_000B1870: ;
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] / xmm1.f[0]; /* divss */
    MEMF(0x3C6050) = xmm5.f[0]; /* movss */

loc_000B187F: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B18C1; /* jp: parity */

loc_000B1888: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B18C1; /* jp: parity */

loc_000B1891: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B18B5; /* jp: parity */

loc_000B189A: ;
    MEM32(0x3C6064) = 0;
    MEMF(0x3C604C) = xmm0.f[0]; /* movss */
    MEMF(0x3C6050) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000B18B5: ;
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(0x3C6050) = xmm2.f[0]; /* movss */

loc_000B18C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B18D0
 * Original: 0x000B18D0 - 0x000B18D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B18D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B18D0: ;
    fp_push(MEMF(0x3C6048)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B18E0
 * Original: 0x000B18E0 - 0x000B18F6 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B18E0(void)
{

loc_000B18E0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(0x3C6064) = 0;
    MEMF(0x3C6048) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B1900
 * Original: 0x000B1900 - 0x000B1A57 (343 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B1900: ;
    xmm2 = XMM_SCALAR(MEMF(0x3C6048)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x31094C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM8(0x3C6068) = LO8(ecx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1925; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000B1920: ;
    xmm2 = xmm1; /* movaps */
    goto loc_000B192D;

loc_000B1925: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1935; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000B192A: ;
    xmm2 = xmm0; /* movaps */

loc_000B192D: ;
    MEMF(0x3C6048) = xmm2.f[0]; /* movss */

loc_000B1935: ;
    eax = MEM32(0x3C6064);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(0x3C6044) = xmm2.f[0]; /* movss */
    if ((_fa == 0)) goto loc_000B19E9; /* je: equal / zero */

loc_000B1949: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B197D; /* je: equal / zero */

loc_000B194C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B1A56; /* jne: not equal / not zero */

loc_000B1953: ;
    xmm1 = XMM_SCALAR(MEMF(0x3C6050)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x3C6048) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1A56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B1976: ;
    MEM32(0x3C6064) = ecx;
    esp += 4; return; /* ret */

loc_000B197D: ;
    xmm1 = XMM_SCALAR(MEMF(0x3C604C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 4); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x3C604C) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1A56; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000B199C: ;
    xmm1 = XMM_SCALAR(MEMF(0x3C605C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(0x3C6064) = 3;
    MEMF(0x3C604C) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B19D0; /* jp: parity */

loc_000B19BF: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3C6054); /* subss */
    MEMF(0x3C6050) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000B19D0: ;
    xmm2 = XMM_SCALAR(MEMF(0x3C6054)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x3C6050) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000B19E9: ;
    xmm1 = XMM_SCALAR(MEMF(0x3C6050)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x3C6054)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(0x3C6048) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B1A56; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000B1A10: ;
    xmm1 = XMM_SCALAR(MEMF(0x3C6060)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(0x3C6064) = 2;
    MEMF(0x3C604C) = xmm1.f[0]; /* movss */
    MEMF(0x3C6050) = xmm0.f[0]; /* movss */
    MEMF(0x3C6048) = xmm2.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B1A56; /* jp: parity */

loc_000B1A43: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3C605C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B1A56; /* jp: parity */

loc_000B1A50: ;
    MEM32(0x3C6064) = ecx;

loc_000B1A56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1A60
 * Original: 0x000B1A60 - 0x000B1A7F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1A60(void)
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

loc_000B1A60: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x3C6068));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_000B1A75; /* jne: not equal / not zero */

loc_000B1A6D: ;
    xmm0 = XMM_SCALAR(MEMF(0x3C6048)); /* movss */

loc_000B1A75: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
