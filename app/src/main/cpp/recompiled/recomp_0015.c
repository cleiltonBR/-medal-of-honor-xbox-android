/**
 * Medal of Honor European Assault - Recompiled code chunk 15
 * Functions: 250 (0x00084780 - 0x0008AC20)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00084780
 * Original: 0x00084780 - 0x000847D6 (86 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084780: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;
    MEM8(esp + 0x28) = LO8(eax);
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 4;
    MEM32(esp + 4) = 0x2FF9EC;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000847D2u); RECOMP_ABI_CALL(0x00149E90u, sub_00149E90); /* call 0x00149E90 */

loc_000847D2: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000847E0
 * Original: 0x000847E0 - 0x00084954 (372 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000847E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000847E0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(ecx + 0x1ED0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM32(esp) = 8;
    if (CMP_NE(_fa, _fb)) goto loc_00084810; /* jne: not equal / not zero */

loc_000847F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x1ED4));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp) = eax;
    goto loc_0008481B;

loc_00084810: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008481B; /* jne: not equal / not zero */

loc_00084814: ;
    MEM32(esp) = 5;

loc_0008481B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x307EAC);
    PUSH32(esp, 0x00084830u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00084830: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084844; /* je: equal / zero */

loc_00084837: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00084840u); RECOMP_ABI_CALL(0x00120C30u, sub_00120C30); /* call 0x00120C30 */

loc_00084840: ;
    edi = eax;
    goto loc_00084846;

loc_00084844: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00084846: ;
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00084852u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008484Fu); } /* indirect call */
    }

loc_00084852: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0008485Eu); RECOMP_ABI_CALL(0x001141F0u, sub_001141F0); /* call 0x001141F0 */

loc_0008485E: ;
    ecx = MEM32(0x3E8D50);
    edx = MEM32(esi);
    MEM32(esi + 0xFC) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x00084876u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084870u); } /* indirect call */
    }

loc_00084876: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008487Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008487Bu); } /* indirect call */
    }

loc_0008487E: ;
    ecx = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(ecx + 0x1ED0));
    eax = ebx + 0x1E9;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000848A8; /* jbe: below or equal (unsigned <=) */

loc_0008489C: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax + 0xD) = LO8(ecx);
    edi = ZX8(LO8(ecx));

loc_000848A8: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x3A80);
    PUSH32(esp, 0x307E74);
    PUSH32(esp, 0x000848BCu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000848BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000848CE; /* je: equal / zero */

loc_000848C3: ;
    ecx = eax;
    PUSH32(esp, 0x000848CAu); RECOMP_ABI_CALL(0x000149F0u, sub_000149F0); /* call 0x000149F0 */

loc_000848CA: ;
    ebp = eax;
    goto loc_000848D0;

loc_000848CE: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000848D0: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000848D8u); RECOMP_ABI_CALL(0x0018B2B0u, sub_0018B2B0); /* call 0x0018B2B0 */

loc_000848D8: ;
    MEM32(ebp + 0x424) = esi;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x1ED0), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0008491D; /* jbe: below or equal (unsigned <=) */

loc_000848ED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x3240A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x307E70); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00084916; /* jle: less or equal (signed <=) */

loc_00084907: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00084916; /* jg: greater (signed >) */

loc_0008490C: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FE9A0); /* mulss */
    goto loc_0008492D;

loc_00084916: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    goto loc_00084933;

loc_0008491D: ;
    xmm0 = XMM_SCALAR(MEMF(0x3240A4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x307E70); /* mulss */

loc_0008492D: ;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_00084933: ;
    ecx = ebp;
    PUSH32(esp, 0x3F1C61AA);
    PUSH32(esp, 0x0008493Fu); RECOMP_ABI_CALL(0x0018B480u, sub_0018B480); /* call 0x0018B480 */

loc_0008493F: ;
    PUSH32(esp, ebp);
    MEM8(ebp + 0x39EC) = LO8(ebx);
    PUSH32(esp, 0x0008494Bu); RECOMP_ABI_CALL(0x001315D0u, sub_001315D0); /* call 0x001315D0 */

loc_0008494B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00084960
 * Original: 0x00084960 - 0x00084AEE (398 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084960: ;
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
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x317A8C); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x307EE4); /* subss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm4 = XMM_MEM(esp); /* movaps */
    eax = esp + 0x50;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEA20);
    XMM_STORE(esp + 0x28, xmm4); /* movaps */
    MEM32(esp + 0x4C) = 0x13;
    MEM8(esp + 0x48) = 1;
    MEM32(esp + 0x58) = 0x307E40;
    MEM32(esp + 0x88) = 0;
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084A1Cu); RECOMP_ABI_CALL(0x00223510u, sub_00223510); /* call 0x00223510 */

loc_00084A1C: ;
    eax = MEM32(esp + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084A57; /* je: equal / zero */

loc_00084A27: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm3 = XMM_MEM(0x307E30); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp, xmm3); /* movaps */
    goto loc_00084A60;

loc_00084A57: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esp, xmm0); /* movaps */

loc_00084A60: ;
    ecx = MEM32(ebp + 0xC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, edx);
    MEMF(ecx) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084AEAu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00084AEA: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00084AF0
 * Original: 0x00084AF0 - 0x00084B11 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084AF0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 1) = LO8(edx);
    edx = ecx;
    MEM8(eax) = LO8(ecx);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084B20
 * Original: 0x00084B20 - 0x00084B28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B20(void)
{

loc_00084B20: ;
    eax = 0x3021CE;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084B30
 * Original: 0x00084B30 - 0x00084B31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B30(void)
{

loc_00084B30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00084B40
 * Original: 0x00084B40 - 0x00084B43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084B40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00084B50
 * Original: 0x00084B50 - 0x00084B51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B50(void)
{

loc_00084B50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00084B60
 * Original: 0x00084B60 - 0x00084B61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B60(void)
{

loc_00084B60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00084B70
 * Original: 0x00084B70 - 0x00084BAD (61 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084B70: ;
    eax = MEM32(0x3C36C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084B87; /* je: equal / zero */

loc_00084B79: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084B84u); RECOMP_ABI_CALL(0x000355A0u, sub_000355A0); /* call 0x000355A0 */

loc_00084B84: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00084B87: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x3C36BC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(0x3C36C0) = 0;
    MEMF(0x373300) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00084BB0
 * Original: 0x00084BB0 - 0x00084CB6 (262 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00084BB0: ;
    xmm1 = XMM_SCALAR(MEMF(0x3C36BC)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084C12; /* jb: below (unsigned <) (xmm4.f[0] vs xmm1.f[0]) */

loc_00084BC0: ;
    eax = MEM32(0x3C36C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(0x3C36BC) = xmm4.f[0]; /* movss */
    MEMF(0x373300) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00084CB5; /* je: equal / zero */

loc_00084BE5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084BF0u); RECOMP_ABI_CALL(0x000355A0u, sub_000355A0); /* call 0x000355A0 */

loc_00084BF0: ;
    xmm1 = XMM_SCALAR(MEMF(0x3C36BC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373300)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C36C0) = 0;
    goto loc_00084C87;

loc_00084C12: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x3732F8)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084C3D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00084C1F: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084C3D; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_00084C24: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm3 = XMM_SCALAR(MEMF(0x3732FC)); /* movss */
    goto loc_00084C73;

loc_00084C3D: ;
    xmm2 = XMM_SCALAR(MEMF(0x3732F4)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084C58; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00084C4E: ;
    xmm0 = XMM_SCALAR(MEMF(0x3732FC)); /* movss */
    goto loc_00084C7F;

loc_00084C58: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x3732FC)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */

loc_00084C73: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00084C7F: ;
    MEMF(0x373300) = xmm0.f[0]; /* movss */

loc_00084C87: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    ecx = MEM32(esp + 4);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084C9C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00084C90: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    MEMF(0x3C36BC) = xmm1.f[0]; /* movss */

loc_00084C9C: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FE99C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00084CB5; /* jnp: not parity */

loc_00084CA9: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */

loc_00084CB5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00084CC0
 * Original: 0x00084CC0 - 0x00084CC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084CC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00084CC0: ;
    fp_push(MEMF(0x373300)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00084CD0
 * Original: 0x00084CD0 - 0x00084DAA (218 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00084CD0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm4 = XMM_SCALAR(MEMF(0x307EEC)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084CEB; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00084CE6: ;
    xmm0 = xmm1; /* movaps */
    goto loc_00084CF3;

loc_00084CEB: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084CF3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_00084CF0: ;
    xmm0 = xmm4; /* movaps */

loc_00084CF3: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084D03; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_00084CFE: ;
    xmm3 = xmm1; /* movaps */
    goto loc_00084D13;

loc_00084D03: ;
    xmm2 = XMM_SCALAR(MEMF(0x307EE8)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084D13; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_00084D10: ;
    xmm3 = xmm2; /* movaps */

loc_00084D13: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084D23; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00084D1E: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00084D2B;

loc_00084D23: ;
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084D2B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_00084D28: ;
    xmm2 = xmm4; /* movaps */

loc_00084D2B: ;
    xmm4 = XMM_SCALAR(MEMF(0x2FEFB4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00084D4B; /* ja: above (unsigned >) (xmm4.f[0] vs xmm1.f[0]) */

loc_00084D3E: ;
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00084D4E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00084D4B: ;
    xmm1 = xmm4; /* movaps */

loc_00084D4E: ;
    eax = MEM32(0x3C36C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(0x3732F0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x3732F4) = xmm3.f[0]; /* movss */
    MEMF(0x3732F8) = xmm2.f[0]; /* movss */
    MEMF(0x3732FC) = xmm1.f[0]; /* movss */
    MEMF(0x3C36BC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00084D9F; /* je: equal / zero */

loc_00084D87: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00084D92u); RECOMP_ABI_CALL(0x000355A0u, sub_000355A0); /* call 0x000355A0 */

loc_00084D92: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C36C0) = eax;
    esp += 4; return; /* ret */

loc_00084D9F: ;
    ecx = MEM32(esp + 0x14);
    MEM32(0x3C36C0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00084DB0
 * Original: 0x00084DB0 - 0x00084DB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DB0(void)
{

loc_00084DB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00084DC0
 * Original: 0x00084DC0 - 0x00084DDB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DC0(void)
{

loc_00084DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00084DC8u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00084DC8: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi) = 0x307F20;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00084DE0
 * Original: 0x00084DE0 - 0x00084E58 (120 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084DE0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084E37; /* jne: not equal / not zero */

loc_00084DE8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x00084DF1u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00084DF1: ;
    ebx = MEM32(esp + 0x10);
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084E18; /* je: equal / zero */

loc_00084DFE: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    ecx = esi;
    PUSH32(esp, 0x00084E0Cu); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00084E0C: ;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi) = 0x307F20;
    POP32(esp, edi);
    goto loc_00084E1A;

loc_00084E18: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00084E1A: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0x00084E22u); RECOMP_ABI_CALL(0x00039DA0u, sub_00039DA0); /* call 0x00039DA0 */

loc_00084E22: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00084E2Au); RECOMP_ABI_CALL(0x0014C930u, sub_0014C930); /* call 0x0014C930 */

loc_00084E2A: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00084E32u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00084E32: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00084E37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084E55; /* jne: not equal / not zero */

loc_00084E3C: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00084E49u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00084E49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084E55; /* je: equal / zero */

loc_00084E4D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00084E55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084E53u); } /* indirect call */
    }

loc_00084E55: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00084E60
 * Original: 0x00084E60 - 0x00084E74 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084E60(void)
{

loc_00084E60: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00084E6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084E6Bu); } /* indirect call */
    }

loc_00084E6E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084E80
 * Original: 0x00084E80 - 0x00084E8C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084E80(void)
{

loc_00084E80: ;
    ecx = MEM32(ecx + 0x2C);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00084E90
 * Original: 0x00084E90 - 0x00084EC1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084E90: ;
    eax = MEM32(0x373304);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x373304;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00084EA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084EA0u); } /* indirect call */
    }

loc_00084EA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00084EBE; /* je: equal / zero */

loc_00084EA7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00084EAFu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_00084EAF: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00084EBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084EB7u); } /* indirect call */
    }

loc_00084EBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00084EA7; /* jne: not equal / not zero */

loc_00084EBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00084ED0
 * Original: 0x00084ED0 - 0x00084F06 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00084ED0: ;
    SET_LO8(ecx, MEM8(0x3C36C8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00084F00; /* jne: not equal / not zero */

loc_00084EDF: ;
    ecx = MEM32(0x3C36C8);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x307F50);
    MEM32(0x3C36C8) = ecx;
    PUSH32(esp, 0x00084EF7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00084EF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C36C4) = eax;
    esp += 4; return; /* ret */

loc_00084F00: ;
    eax = MEM32(0x3C36C4);
    esp += 4; return; /* ret */

}

/**
 * sub_00084F10
 * Original: 0x00084F10 - 0x00084F19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084F10(void)
{

loc_00084F10: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x20) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00084F20
 * Original: 0x00084F20 - 0x00084F29 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084F20(void)
{

loc_00084F20: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00084F30
 * Original: 0x00084F30 - 0x00084F31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084F30(void)
{

loc_00084F30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00084F40
 * Original: 0x00084F40 - 0x000850B1 (369 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00084F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00084F40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000850A8; /* je: equal / zero */

loc_00084F59: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x70EF42C1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00084F63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084F60u); } /* indirect call */
    }

loc_00084F63: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084F6Au); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00084F6A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAF4C61D5u);
    ecx = esi;
    MEM8(esp + 0x1E) = LO8(eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00084F7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084F77u); } /* indirect call */
    }

loc_00084F7A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084F81u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00084F81: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2E9C2D21);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00084F8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084F8Cu); } /* indirect call */
    }

loc_00084F8F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084F96u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00084F96: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE99EE44Au);
    ecx = esi;
    MEM8(esp + 0x1F) = LO8(eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00084FA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084FA3u); } /* indirect call */
    }

loc_00084FA6: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084FADu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00084FAD: ;
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB0169F62u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00084FBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084FB8u); } /* indirect call */
    }

loc_00084FBB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084FC2u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00084FC2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00084FEC; /* je: equal / zero */

loc_00084FCA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6CB0F372);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00084FD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084FD3u); } /* indirect call */
    }

loc_00084FD6: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084FDDu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_00084FDD: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00084FE9u); RECOMP_ABI_CALL(0x00148850u, sub_00148850); /* call 0x00148850 */

loc_00084FE9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00084FEC: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085041; /* je: equal / zero */

loc_00084FF4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8053B719u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00085000u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00084FFDu); } /* indirect call */
    }

loc_00085000: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085007u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00085007: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF460); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0008502E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00085021: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00085034; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008502E: ;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */

loc_00085034: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008503Eu); RECOMP_ABI_CALL(0x001479D0u, sub_001479D0); /* call 0x001479D0 */

loc_0008503E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085041: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085084; /* je: equal / zero */

loc_00085049: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1843ED20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00085055u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085052u); } /* indirect call */
    }

loc_00085055: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008505Cu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0008505C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008507A; /* je: equal / zero */

loc_00085060: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008506Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085069u); } /* indirect call */
    }

loc_0008506C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085073u); RECOMP_ABI_CALL(0x00036CE0u, sub_00036CE0); /* call 0x00036CE0 */

loc_00085073: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    goto loc_0008507C;

loc_0008507A: ;
    PUSH32(esp, 0);

loc_0008507C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085081u); RECOMP_ABI_CALL(0x001488C0u, sub_001488C0); /* call 0x001488C0 */

loc_00085081: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085084: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00085090u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008508Du); } /* indirect call */
    }

loc_00085090: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085097u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00085097: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000850A8; /* je: equal / zero */

loc_0008509B: ;
    PUSH32(esp, 0x307F60);
    ecx = esi + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000850A8u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000850A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000850C0
 * Original: 0x000850C0 - 0x000850EC (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000850C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000850C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000850E6; /* je: equal / zero */

loc_000850CB: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000850D4u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_000850D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000850E6; /* je: equal / zero */

loc_000850DB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000850E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000850DFu); } /* indirect call */
    }

loc_000850E2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000850E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000850F0
 * Original: 0x000850F0 - 0x0008516A (122 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000850F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000850F0: ;
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
    PUSH32(esp, 0x0008511Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008511B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00085136u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00085136: ;
    PUSH32(esp, 0x308008);
    ecx = ebx;
    PUSH32(esp, 0x00085142u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00085142: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00085148u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00085148: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00085152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008514Fu); } /* indirect call */
    }

loc_00085152: ;
    PUSH32(esp, 0xB48929F3u);
    ecx = eax + 8;
    PUSH32(esp, 0x0008515Fu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008515F: ;
    MEM8(esi + 0x20) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085170
 * Original: 0x00085170 - 0x000851A4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085170: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x00085189u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00085189: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x00085194u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00085194: ;
    ecx = edi;
    PUSH32(esp, 0x0008519Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008519B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000851B0
 * Original: 0x000851B0 - 0x000851B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000851B0: ;
    g_seh_ebp = ebp; sub_00084F40(); return; /* tail jmp 0x00084F40 */

}

/**
 * sub_000851C0
 * Original: 0x000851C0 - 0x00085225 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000851C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000851C0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085204; /* jne: not equal / not zero */

loc_000851C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x000851D0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000851D0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000851F6; /* je: equal / zero */

loc_000851DB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000851E3u); RECOMP_ABI_CALL(0x000850F0u, sub_000850F0); /* call 0x000850F0 */

loc_000851E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000851F6; /* je: equal / zero */

loc_000851E7: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000851F2u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000851F2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000851F6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085200u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00085200: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00085204: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085222; /* jne: not equal / not zero */

loc_00085209: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00085216u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00085216: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085222; /* je: equal / zero */

loc_0008521A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00085222u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085220u); } /* indirect call */
    }

loc_00085222: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00085230
 * Original: 0x00085230 - 0x00085269 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085230: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085267; /* je: equal / zero */

loc_0008523C: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085267; /* je: equal / zero */

loc_00085244: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008524Du); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_0008524D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085267; /* je: equal / zero */

loc_00085254: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008525Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085258u); } /* indirect call */
    }

loc_0008525B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085267; /* je: equal / zero */

loc_0008525F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00085267u); RECOMP_ABI_CALL(0x00084F40u, sub_00084F40); /* call 0x00084F40 */

loc_00085267: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085270
 * Original: 0x00085270 - 0x0008527D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085270: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00085279u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085276u); } /* indirect call */
    }

loc_00085279: ;
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00085280
 * Original: 0x00085280 - 0x0008528C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085280: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00085285u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085282u); } /* indirect call */
    }

loc_00085285: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_00085290
 * Original: 0x00085290 - 0x00085294 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085290(void)
{

loc_00085290: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_000852A0
 * Original: 0x000852A0 - 0x000852B7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000852A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000852A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000852AD; /* je: equal / zero */

loc_000852A8: ;
    MEM8(eax + 0x24) = 1;
    esp += 4; return; /* ret */

loc_000852AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0xD4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000852C0
 * Original: 0x000852C0 - 0x000852D5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000852C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000852C0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000852CE; /* je: equal / zero */

loc_000852CA: ;
    MEM8(ecx + 0x24) = LO8(eax);
    esp += 4; return; /* ret */

loc_000852CE: ;
    MEM8(eax + 0xD4) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000852E0
 * Original: 0x000852E0 - 0x000852E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000852E0(void)
{

loc_000852E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000852F0
 * Original: 0x000852F0 - 0x000852FA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000852F0(void)
{

loc_000852F0: ;
    eax = MEM32(ecx + 0xC0);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00085300
 * Original: 0x00085300 - 0x00085309 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085300: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00085310
 * Original: 0x00085310 - 0x00085385 (117 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085310: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xB4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x308158;
    MEM32(esi + 8) = 0x30814C;
    MEM32(esi + 0xB0) = 0x308148;
    MEM32(edi) = 0x308130;
    PUSH32(esp, 0x0008533Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008533D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00085343u); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_00085343: ;
    ecx = MEM32(0x3DEA20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085360; /* je: equal / zero */

loc_00085350: ;
    eax = MEM32(esi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085360; /* je: equal / zero */

loc_0008535A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085360u); RECOMP_ABI_CALL(0x00225350u, sub_00225350); /* call 0x00225350 */

loc_00085360: ;
    ecx = esi + 0xC4;
    PUSH32(esp, 0x0008536Bu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0008536B: ;
    ecx = edi;
    PUSH32(esp, 0x00085372u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00085372: ;
    POP32(esp, edi);
    MEM32(esi + 0xB0) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_00085390
 * Original: 0x00085390 - 0x0008539E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085390: ;
    eax = MEM32(ecx + 0xC0);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_000853A0
 * Original: 0x000853A0 - 0x000853AD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000853A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000853A0: ;
    eax = MEM32(ecx + 0xC0);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000853B0
 * Original: 0x000853B0 - 0x000853D8 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000853B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000853B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000853BF; /* je: equal / zero */

loc_000853B8: ;
    _fb = (uint32_t)(0xFFFFFF50u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF50u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000853C1;

loc_000853BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000853C1: ;
    eax = MEM32(eax + 0xC0);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x13EE9DC);
    ecx = eax + 8;
    PUSH32(esp, 0x000853D7u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000853D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000853E0
 * Original: 0x000853E0 - 0x0008540D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000853E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000853E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000853EF; /* je: equal / zero */

loc_000853E8: ;
    _fb = (uint32_t)(0xFFFFFF50u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF50u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000853F1;

loc_000853EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000853F1: ;
    eax = MEM32(eax + 0xC0);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xF0C0B7B1u);
    ecx = eax + 8;
    PUSH32(esp, 0x00085407u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00085407: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00085410
 * Original: 0x00085410 - 0x0008545A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085410: ;
    eax = MEM32(ecx + 0xC0);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x6E559369);
    ecx = eax + 8;
    PUSH32(esp, 0x00085427u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_00085427: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008542Du); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008542D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085437u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_00085437: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085456; /* je: equal / zero */

loc_00085440: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0008544Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085449u); } /* indirect call */
    }

loc_0008544F: ;
    ecx = esi;
    PUSH32(esp, 0x00085456u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_00085456: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00085460
 * Original: 0x00085460 - 0x000854DA (122 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xC0);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8530E114u);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085480u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_00085480: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085486u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_00085486: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085490u); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_00085490: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000854D3; /* je: equal / zero */

loc_00085499: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    edx = MEM32(esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x000854CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000854C6u); } /* indirect call */
    }

loc_000854CC: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000854D3u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_000854D3: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000854E0
 * Original: 0x000854E0 - 0x00085509 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000854E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000854E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000854F1; /* je: equal / zero */

loc_000854E9: ;
    esi = eax + -176;
    goto loc_000854F3;

loc_000854F1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000854F3: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000854FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000854F9u); } /* indirect call */
    }

loc_000854FC: ;
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00085507u); RECOMP_ABI_CALL(0x00085460u, sub_00085460); /* call 0x00085460 */

loc_00085507: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085510
 * Original: 0x00085510 - 0x00085551 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085510: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ecx + 0xD4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0008553E; /* je: equal / zero */

loc_00085527: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008553E; /* jl: less (signed <) */

loc_0008552D: ;
    edx = MEM32(esi + 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008553Eu); RECOMP_ABI_CALL(0x00085410u, sub_00085410); /* call 0x00085410 */

loc_0008553E: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x168); PUSH32(esp, 0x0008554Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085544u); } /* indirect call */
    }

loc_0008554A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00085560
 * Original: 0x00085560 - 0x00085A25 (1221 bytes, 272 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085560(void)
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

loc_00085560: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3DEA20);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC0);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x55E59C6);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085590u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_00085590: ;
    edi = eax;
    eax = MEM32(esi + 0xC0);
    ecx = MEM32(eax + 4);
    edx = esp + 0x120;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000855ABu); RECOMP_ABI_CALL(0x00036CE0u, sub_00036CE0); /* call 0x00036CE0 */

loc_000855AB: ;
    eax = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00085884; /* je: equal / zero */

loc_000855B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00085745; /* je: equal / zero */

loc_000855BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00085995; /* jne: not equal / not zero */

loc_000855C5: ;
    ecx = MEM32(esi + 0xC0);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xD184E98Fu);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000855DBu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000855DB: ;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0xC0);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0xA683D919u);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000855F5u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000855F5: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0xC0);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3F8A88A3);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008560Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008560F: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x382EB4)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    ecx = MEM32(0x530EB4);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    fp_top() = fabs(fp_top()); /* fabs */
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00085653u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085650u); } /* indirect call */
    }

loc_00085653: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085665u); RECOMP_ABI_CALL(0x001F9540u, sub_001F9540); /* call 0x001F9540 */

loc_00085665: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(0x530EB4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = eax;
    XMM_STORE(esp + 0xD0, xmm0); /* movaps */
    XMM_STORE(esp + 0xE0, xmm0); /* movaps */
    XMM_STORE(esp + 0xF0, xmm0); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = 0x80000000u;
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xFC) = xmm1.f[0]; /* movss */
    XMM_STORE(esp + 0x104, xmm0); /* movaps */
    MEM32(esp + 0xB4) = 0x1B;
    MEM32(esp + 0xB8) = edi;
    MEM8(esp + 0xBC) = 1;
    edx = MEM32(ecx);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000856F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000856EFu); } /* indirect call */
    }

loc_000856F2: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0xD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085707u); RECOMP_ABI_CALL(0x0022A790u, sub_0022A790); /* call 0x0022A790 */

loc_00085707: ;
    MEM32(esi + 0xBC) = eax;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008571F; /* jne: not equal / not zero */

loc_00085717: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008571Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008571Du); } /* indirect call */
    }

loc_0008571F: ;
    eax = MEM32(esp + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00085995; /* js: sign (negative) */

loc_0008572E: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC4);
    goto loc_00085989;

loc_00085745: ;
    xmm0 = XMM_SCALAR(MEMF(0x382EB4)); /* movss */
    ecx = MEM32(esi + 0xC0);
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xB0) = ebx;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x3CD06B6C);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000857C6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000857C6: ;
    edx = MEM32(esi + 0xC0);
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edx + 4);
    PUSH32(esp, 0xC5AF0932u);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000857E5u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000857E5: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0xC0);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x5A5FC396);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000857FFu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000857FF: ;
    fp_top() = fabs(fp_top()); /* fabs */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x530EB4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xB4)); /* fsub dword ptr [esp + 0xb4] */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xB4)); /* fadd dword ptr [esp + 0xb4] */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    XMM_STORE(esp + 0xC4, xmm1); /* movaps */
    XMM_STORE(esp + 0xD4, xmm0); /* movaps */
    edx = MEM32(ecx);
    PUSH32(esp, 0x30);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0008586Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008586Au); } /* indirect call */
    }

loc_0008586D: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085882u); RECOMP_ABI_CALL(0x001F77D0u, sub_001F77D0); /* call 0x001F77D0 */

loc_00085882: ;
    goto loc_000858D3;

loc_00085884: ;
    ecx = MEM32(esi + 0xC0);
    xmm0 = XMM_SCALAR(MEMF(0x382EB4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ebx;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x3CD06B6C);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000858ACu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000858AC: ;
    ecx = MEM32(0x530EB4);
    fp_top() = fabs(fp_top()); /* fabs */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000858C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000858BEu); } /* indirect call */
    }

loc_000858C1: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000858D3u); RECOMP_ABI_CALL(0x001F7370u, sub_001F7370); /* call 0x001F7370 */

loc_000858D3: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(0x530EB4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = eax;
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    MEM8(esp + 0x5C) = 1;
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x54) = 0x1B;
    XMM_STORE(esp + 0xA4, xmm0); /* movaps */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x68) = 0x80000000u;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x60) = ebx;
    edx = MEM32(ecx);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00085948u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085945u); } /* indirect call */
    }

loc_00085948: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0xD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008595Au); RECOMP_ABI_CALL(0x0022A790u, sub_0022A790); /* call 0x0022A790 */

loc_0008595A: ;
    MEM32(esi + 0xBC) = eax;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085972; /* jne: not equal / not zero */

loc_0008596A: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00085972u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085970u); } /* indirect call */
    }

loc_00085972: ;
    eax = MEM32(esp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00085995; /* js: sign (negative) */

loc_0008597A: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x64);

loc_00085989: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00085995u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085992u); } /* indirect call */
    }

loc_00085995: ;
    ecx = MEM32(esi + 0xBC);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000859A3u); RECOMP_ABI_CALL(0x00229C10u, sub_00229C10); /* call 0x00229C10 */

loc_000859A3: ;
    ecx = MEM32(esi + 0xBC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000859B3u); RECOMP_ABI_CALL(0x002251A0u, sub_002251A0); /* call 0x002251A0 */

loc_000859B3: ;
    ecx = MEM32(esi + 0xBC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000859C9; /* jne: not equal / not zero */

loc_000859C3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000859C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000859C7u); } /* indirect call */
    }

loc_000859C9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x120)); /* movss */
    ecx = MEM32(esi + 0xBC);
    MEMF(esp + 0x110) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x124)); /* movss */
    MEMF(esp + 0x114) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x128)); /* movss */
    eax = esp + 0x110;
    MEMF(esp + 0x118) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x120) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085A1Eu); RECOMP_ABI_CALL(0x0022A070u, sub_0022A070); /* call 0x0022A070 */

loc_00085A1E: ;
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
 * sub_00085A30
 * Original: 0x00085A30 - 0x00085B43 (275 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085A30: ;
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
    PUSH32(esp, 0x00085A43u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_00085A43: ;
    MEM32(esi + 0xB0) = 0x2FF77C;
    MEM32(esi + 0xB4) = 0x2FF764;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB8) = eax;
    ebx = esi + 0xB0;
    edi = esi + 0xB4;
    MEM32(esi + 0xBC) = eax;
    eax = MEM32(ebp + 8);
    ecx = esi + 0xC4;
    MEM32(esi) = 0x308158;
    MEM32(esi + 8) = 0x30814C;
    MEM32(ebx) = 0x308148;
    MEM32(edi) = 0x308130;
    MEM32(esi + 0xC0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085A9Eu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00085A9E: ;
    PUSH32(esp, ebx);
    ebx = esi + 0xC4;
    ecx = ebx;
    MEM8(esi + 0xD4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085AB3u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00085AB3: ;
    ecx = MEM32(esi + 0xC0);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085AC9u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00085AC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00085ADD; /* je: equal / zero */

loc_00085ACF: ;
    MEM8(esi + 0xD4) = 1;
    PUSH32(esp, 0x3080BC);
    goto loc_00085AE2;

loc_00085ADD: ;
    PUSH32(esp, 0x308110);

loc_00085AE2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085AE7u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00085AE7: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085AEDu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00085AED: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085AF5u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_00085AF5: ;
    eax = MEM32(esi + 0xC0);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085B0Bu); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_00085B0B: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085B17u); RECOMP_ABI_CALL(0x00131B40u, sub_00131B40); /* call 0x00131B40 */

loc_00085B17: ;
    edx = MEM32(esi + 0xC0);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x278E4C26);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085B2Du); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00085B2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085B38; /* je: equal / zero */

loc_00085B31: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085B38u); RECOMP_ABI_CALL(0x00085560u, sub_00085560); /* call 0x00085560 */

loc_00085B38: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085B50
 * Original: 0x00085B50 - 0x00085BD4 (132 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085B50: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00085B99; /* jne: not equal / not zero */

loc_00085B59: ;
    eax = MEM32(0x3C36F0);
    ecx = 0x3C36F0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00085B66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085B63u); } /* indirect call */
    }

loc_00085B66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00085B8B; /* je: equal / zero */

loc_00085B6E: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00085B76u); RECOMP_ABI_CALL(0x00085A30u, sub_00085A30); /* call 0x00085A30 */

loc_00085B76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085B8B; /* je: equal / zero */

loc_00085B7A: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085B87u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00085B87: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00085B8B: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085B95u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00085B95: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00085B99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085BD0; /* jne: not equal / not zero */

loc_00085B9E: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00085BABu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00085BAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085BB7; /* je: equal / zero */

loc_00085BAF: ;
    esi = eax + -180;
    goto loc_00085BB9;

loc_00085BB7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00085BB9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00085BC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085BBFu); } /* indirect call */
    }

loc_00085BC2: ;
    eax = MEM32(0x3C36F0);
    PUSH32(esp, esi);
    ecx = 0x3C36F0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00085BD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085BCDu); } /* indirect call */
    }

loc_00085BD0: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00085BE0
 * Original: 0x00085BE0 - 0x00085BE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085BE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00085C10(); return; /* tail jmp 0x00085C10 */

}

/**
 * sub_00085BF0
 * Original: 0x00085BF0 - 0x00085BFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085BF0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00085C10(); return; /* tail jmp 0x00085C10 */

}

/**
 * sub_00085C00
 * Original: 0x00085C00 - 0x00085C0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085C00: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00085C10(); return; /* tail jmp 0x00085C10 */

}

/**
 * sub_00085C10
 * Original: 0x00085C10 - 0x00085C2E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085C10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00085C18u); RECOMP_ABI_CALL(0x00085310u, sub_00085310); /* call 0x00085310 */

loc_00085C18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00085C28; /* je: equal / zero */

loc_00085C1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00085C25u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00085C25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00085C28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00085C30
 * Original: 0x00085C30 - 0x00085C31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C30(void)
{

loc_00085C30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00085C40
 * Original: 0x00085C40 - 0x00085C45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085C40: ;
    g_seh_ebp = ebp; sub_0013B780(); return; /* tail jmp 0x0013B780 */

}

/**
 * sub_00085C50
 * Original: 0x00085C50 - 0x00085C57 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C50(void)
{

loc_00085C50: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00085C60
 * Original: 0x00085C60 - 0x00085C69 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085C60: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00085C70
 * Original: 0x00085C70 - 0x00085C71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C70(void)
{

loc_00085C70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00085C80
 * Original: 0x00085C80 - 0x00085CB7 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30835C;
    MEM32(esi + 8) = 0x308358;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x00085C9Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00085C9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x00085CA8u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00085CA8: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_00085CC0
 * Original: 0x00085CC0 - 0x00085CCB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00085CC0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_00085CD0
 * Original: 0x00085CD0 - 0x00085CDA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085CD0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00085CE0
 * Original: 0x00085CE0 - 0x00085D55 (117 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085CE0: ;
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
    MEM32(esi) = 0x30835C;
    MEM32(edi) = 0x308358;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00085D12u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00085D12: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00085D1Au); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00085D1A: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x00085D2Du); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00085D2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00085D3A; /* je: equal / zero */

loc_00085D33: ;
    PUSH32(esp, 0x308300);
    goto loc_00085D3F;

loc_00085D3A: ;
    PUSH32(esp, 0x308340);

loc_00085D3F: ;
    PUSH32(esp, 0x00085D44u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00085D44: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00085D4Au); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00085D4A: ;
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
 * sub_00085D60
 * Original: 0x00085D60 - 0x00085DBE (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00085D60: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085D9D; /* jne: not equal / not zero */

loc_00085D68: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00085D70u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00085D70: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085D8F; /* je: equal / zero */

loc_00085D7B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00085D83u); RECOMP_ABI_CALL(0x00085CE0u, sub_00085CE0); /* call 0x00085CE0 */

loc_00085D83: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085D8Bu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00085D8B: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00085D8F: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00085D99u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00085D99: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00085D9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00085DBB; /* jne: not equal / not zero */

loc_00085DA2: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00085DAFu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00085DAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00085DBB; /* je: equal / zero */

loc_00085DB3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00085DBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085DB9u); } /* indirect call */
    }

loc_00085DBB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00085DC0
 * Original: 0x00085DC0 - 0x0008634E (1422 bytes, 314 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00085DC0(void)
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

loc_00085DC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x194) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x194;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00085DDD; /* je: equal / zero */

loc_00085DD8: ;
    esi = eax + -8;
    goto loc_00085DDF;

loc_00085DDD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00085DDF: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 8);
    PUSH32(esp, 0x55E59C6);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085DFAu); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_00085DFA: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 4);
    edi = eax;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085E10u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_00085E10: ;
    PUSH32(esp, 0xD184E98Fu);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085E1Eu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00085E1E: ;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xA683D919u);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085E32u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00085E32: ;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3F8A88A3);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085E46u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00085E46: ;
    fp_top() = fabs(fp_top()); /* fabs */
    eax = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa == 0)) goto loc_000861BC; /* je: equal / zero */

loc_00085E58: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00086004; /* je: equal / zero */

loc_00085E5F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000862CC; /* jne: not equal / not zero */

loc_00085E66: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    ecx = MEM32(0x530EB4);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm4 = XMM_MEM(esp + 0x10); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = 0x80000000u;
    MEM32(esp + 0x88) = ebx;
    MEM8(esp + 0x8C) = LO8(ebx);
    XMM_STORE(esp + 0xA4, xmm4); /* movaps */
    XMM_STORE(esp + 0xB4, xmm0); /* movaps */
    MEM32(esp + 0x84) = 0x14;
    edx = MEM32(ecx);
    PUSH32(esp, 0x90);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00085F26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00085F23u); } /* indirect call */
    }

loc_00085F26: ;
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085F3Bu); RECOMP_ABI_CALL(0x0022AC70u, sub_0022AC70); /* call 0x0022AC70 */

loc_00085F3B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    xmm7 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    esi = eax;
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    edx = esp + 0x180;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    PUSH32(esp, edx);
    ecx = esi;
    XMM_STORE(esp + 0x184, xmm7); /* movaps */
    XMM_STORE(esp + 0x194, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00085FDEu); RECOMP_ABI_CALL(0x0022A940u, sub_0022A940); /* call 0x0022A940 */

loc_00085FDE: ;
    eax = MEM32(esp + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000862CC; /* js: sign (negative) */

loc_00085FED: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x94);
    goto loc_000862C0;

loc_00086004: ;
    xmm0 = XMM_SCALAR(MEMF(0x382EB4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x3CD06B6C);
    ecx = esp + 0x10;
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x54) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00086062u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00086062: ;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x5A5FC396);
    ecx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00086083u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00086083: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    PUSH32(esp, 0xC5AF0932u);
    ecx = esp + 0x10;
    XMM_STORE(esp + 0x64, xmm1); /* movaps */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000860B8u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000860B8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x54)); /* fadd dword ptr [esp + 0x54] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(0x530EB4);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    edx = MEM32(ecx);
    PUSH32(esp, 0x30);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000860E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000860DFu); } /* indirect call */
    }

loc_000860E2: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000860F4u); RECOMP_ABI_CALL(0x001F77D0u, sub_001F77D0); /* call 0x001F77D0 */

loc_000860F4: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(0x530EB4);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0xE0, xmm1); /* movaps */
    XMM_STORE(esp + 0xF0, xmm1); /* movaps */
    XMM_STORE(esp + 0x100, xmm1); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    MEM32(esp + 0xD0) = ebx;
    MEM32(esp + 0xD4) = ebx;
    MEM32(esp + 0xD8) = 0x80000000u;
    MEMF(esp + 0xE4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10C) = xmm0.f[0]; /* movss */
    XMM_STORE(esp + 0x114, xmm1); /* movaps */
    MEM32(esp + 0xC4) = 0x14;
    MEM32(esp + 0xC8) = eax;
    MEM8(esp + 0xCC) = 1;
    edx = MEM32(ecx);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0008617Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008617Cu); } /* indirect call */
    }

loc_0008617F: ;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0xD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00086194u); RECOMP_ABI_CALL(0x0022A790u, sub_0022A790); /* call 0x0022A790 */

loc_00086194: ;
    esi = eax;
    eax = MEM32(esp + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000862CC; /* js: sign (negative) */

loc_000861A5: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xD4);
    goto loc_000862C0;

loc_000861BC: ;
    xmm0 = XMM_SCALAR(MEMF(0x382EB4)); /* movss */
    PUSH32(esp, 0x3CD06B6C);
    ecx = esp + 0x10;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000861DCu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000861DC: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000861EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000861ECu); } /* indirect call */
    }

loc_000861EF: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00086201u); RECOMP_ABI_CALL(0x001F7370u, sub_001F7370); /* call 0x001F7370 */

loc_00086201: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(0x530EB4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x140, xmm0); /* movaps */
    XMM_STORE(esp + 0x150, xmm0); /* movaps */
    XMM_STORE(esp + 0x160, xmm0); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    MEM32(esp + 0x130) = ebx;
    MEM32(esp + 0x134) = ebx;
    MEM32(esp + 0x138) = 0x80000000u;
    MEMF(esp + 0x144) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x158) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x16C) = xmm1.f[0]; /* movss */
    XMM_STORE(esp + 0x174, xmm0); /* movaps */
    MEM32(esp + 0x124) = 0x14;
    MEM32(esp + 0x128) = eax;
    MEM8(esp + 0x12C) = 1;
    edx = MEM32(ecx);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0008628Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086289u); } /* indirect call */
    }

loc_0008628C: ;
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0xD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000862A1u); RECOMP_ABI_CALL(0x0022A790u, sub_0022A790); /* call 0x0022A790 */

loc_000862A1: ;
    esi = eax;
    eax = MEM32(esp + 0x134);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000862CC; /* js: sign (negative) */

loc_000862AE: ;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x134);

loc_000862C0: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000862CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000862C9u); } /* indirect call */
    }

loc_000862CC: ;
    edi = MEM32(0x3DEA20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000862F0; /* je: equal / zero */

loc_000862D6: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000862DEu); RECOMP_ABI_CALL(0x002251A0u, sub_002251A0); /* call 0x002251A0 */

loc_000862DE: ;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000862F0; /* jne: not equal / not zero */

loc_000862E8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000862F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000862EEu); } /* indirect call */
    }

loc_000862F0: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00086336; /* jl: less (signed <) */

loc_000862F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00086336; /* jg: greater (signed >) */

loc_000862FD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00086336u); RECOMP_ABI_CALL(0x0022A070u, sub_0022A070); /* call 0x0022A070 */

loc_00086336: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008633Cu); RECOMP_ABI_CALL(0x000182E0u, sub_000182E0); /* call 0x000182E0 */

loc_0008633C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00086347u); RECOMP_ABI_CALL(0x00225350u, sub_00225350); /* call 0x00225350 */

loc_00086347: ;
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
 * sub_00086350
 * Original: 0x00086350 - 0x00086358 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086350: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00086360(); return; /* tail jmp 0x00086360 */

}

/**
 * sub_00086360
 * Original: 0x00086360 - 0x000863AC (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086360: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30835C;
    MEM32(esi + 8) = 0x308358;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0008637Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008637D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x00086388u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00086388: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x00086396u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00086396: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000863A6; /* je: equal / zero */

loc_0008639D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000863A3u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000863A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000863A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00086383
 * Original: 0x00086383 - 0x000863AC (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086383(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086383: ;
    PUSH32(esp, 0x00086388u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00086388: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x00086396u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00086396: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000863A6; /* je: equal / zero */

loc_0008639D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000863A3u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000863A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000863A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000863B0
 * Original: 0x000863B0 - 0x000863D6 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000863B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000863B0: ;
    edx = ecx;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_000863D5; /* js: sign (negative) */

loc_000863B9: ;
    ecx = MEM32(0x530EB4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x000863D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000863D1u); } /* indirect call */
    }

loc_000863D4: ;
    POP32(esp, esi);

loc_000863D5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000863E0
 * Original: 0x000863E0 - 0x000863E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000863E0(void)
{

loc_000863E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000863F0
 * Original: 0x000863F0 - 0x0008640E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000863F0(void)
{

loc_000863F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9871810Du);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000863FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000863F7u); } /* indirect call */
    }

loc_000863FA: ;
    ecx = eax;
    PUSH32(esp, 0x00086401u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086401: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008640Au); RECOMP_ABI_CALL(0x00147780u, sub_00147780); /* call 0x00147780 */

loc_0008640A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00086410
 * Original: 0x00086410 - 0x0008643C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086410: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086436; /* je: equal / zero */

loc_0008641B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086424u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_00086424: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086436; /* je: equal / zero */

loc_0008642B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00086432u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008642Fu); } /* indirect call */
    }

loc_00086432: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00086436: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00086440
 * Original: 0x00086440 - 0x0008647F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086440: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008645F; /* je: equal / zero */

loc_00086448: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086451u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_00086451: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008645F; /* je: equal / zero */

loc_00086458: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008645Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008645Cu); } /* indirect call */
    }

loc_0008645F: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9871810Du);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008646Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008646Au); } /* indirect call */
    }

loc_0008646D: ;
    ecx = eax;
    PUSH32(esp, 0x00086474u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086474: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008647Du); RECOMP_ABI_CALL(0x00147780u, sub_00147780); /* call 0x00147780 */

loc_0008647D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086480
 * Original: 0x00086480 - 0x000864E3 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086480: ;
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
    PUSH32(esp, 0x000864ABu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000864AB: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000864C6u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000864C6: ;
    PUSH32(esp, 0x3083F4);
    ecx = ebx;
    PUSH32(esp, 0x000864D2u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000864D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000864D8u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000864D8: ;
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
 * sub_000864F0
 * Original: 0x000864F0 - 0x00086524 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000864F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000864F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x00086509u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00086509: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x00086514u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00086514: ;
    ecx = edi;
    PUSH32(esp, 0x0008651Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008651B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086530
 * Original: 0x00086530 - 0x00086595 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086530: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086574; /* jne: not equal / not zero */

loc_00086538: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00086540u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00086540: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086566; /* je: equal / zero */

loc_0008654B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00086553u); RECOMP_ABI_CALL(0x00086480u, sub_00086480); /* call 0x00086480 */

loc_00086553: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086566; /* je: equal / zero */

loc_00086557: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086562u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00086562: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00086566: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086570u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00086570: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00086574: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086592; /* jne: not equal / not zero */

loc_00086579: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00086586u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00086586: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086592; /* je: equal / zero */

loc_0008658A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00086592u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086590u); } /* indirect call */
    }

loc_00086592: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000865A0
 * Original: 0x000865A0 - 0x000865A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000865A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000865A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000A26B0(); return; /* tail jmp 0x000A26B0 */

}

/**
 * sub_000865B0
 * Original: 0x000865B0 - 0x000865B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000865B0(void)
{

loc_000865B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000865C0
 * Original: 0x000865C0 - 0x000865CF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000865C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000865C0: ;
    MEM32(ecx + 0x20) = 0;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0014CBD0(); return; /* tail jmp 0x0014CBD0 */

}

/**
 * sub_000865D0
 * Original: 0x000865D0 - 0x000865E2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000865D0(void)
{

loc_000865D0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000865DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000865D7u); } /* indirect call */
    }

loc_000865DA: ;
    ecx = eax;
    PUSH32(esp, 0x000865E1u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000865E1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000865F0
 * Original: 0x000865F0 - 0x00086603 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000865F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000865F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0;
    ecx = eax + 0x2C;
    g_seh_ebp = ebp; sub_0014CBD0(); return; /* tail jmp 0x0014CBD0 */

}

/**
 * sub_00086610
 * Original: 0x00086610 - 0x00086626 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086610(void)
{

loc_00086610: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008661Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008661Bu); } /* indirect call */
    }

loc_0008661E: ;
    ecx = eax;
    PUSH32(esp, 0x00086625u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086625: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086630
 * Original: 0x00086630 - 0x0008664B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00086630: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008663Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008663Bu); } /* indirect call */
    }

loc_0008663E: ;
    ecx = eax;
    PUSH32(esp, 0x00086645u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086645: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00086650
 * Original: 0x00086650 - 0x0008669C (76 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086650: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2C;
    PUSH32(esp, 0x0008665Bu); RECOMP_ABI_CALL(0x0014CBD0u, sub_0014CBD0); /* call 0x0014CBD0 */

loc_0008665B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA2456844u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086667u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086664u); } /* indirect call */
    }

loc_00086667: ;
    ecx = eax;
    PUSH32(esp, 0x0008666Eu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008666E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008669B; /* je: equal / zero */

loc_00086673: ;
    ecx = MEM32(0x3E8D08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086687; /* je: equal / zero */

loc_0008667D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x00086687u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086681u); } /* indirect call */
    }

loc_00086687: ;
    eax = MEM32(0x51D65C);
    ecx = MEM32(eax + 0x3580);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008669Bu); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008669B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000866A0
 * Original: 0x000866A0 - 0x00086721 (129 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000866A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000866A0: ;
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
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA2456844u);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000866B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000866B5u); } /* indirect call */
    }

loc_000866B8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000866BFu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000866BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008671A; /* je: equal / zero */

loc_000866C3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x20); /* cvtsi2ss */
    ecx = MEM32(0x3E8D08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000866E5; /* je: equal / zero */

loc_000866DC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x000866E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000866DFu); } /* indirect call */
    }

loc_000866E5: ;
    eax = MEM32(0x51D65C);
    edi = MEM32(eax + 0x3580);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000866FAu); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_000866FA: ;
    edx = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00086706u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086703u); } /* indirect call */
    }

loc_00086706: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008670Du); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0008670D: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008671Au); RECOMP_ABI_CALL(0x0016D5E0u, sub_0016D5E0); /* call 0x0016D5E0 */

loc_0008671A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00086730
 * Original: 0x00086730 - 0x0008677F (79 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086730: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x34A6BA8A);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008673Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008673Cu); } /* indirect call */
    }

loc_0008673F: ;
    ecx = eax;
    PUSH32(esp, 0x00086746u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00086746: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00086751u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008674Eu); } /* indirect call */
    }

loc_00086751: ;
    ebx = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008677B; /* jle: less or equal (signed <=) */

loc_00086759: ;
    esi = edi + 4;
    edi = eax;
    edi = edi;

loc_00086760: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x42D59805);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086772u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_00086772: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00086760; /* jne: not equal / not zero */

loc_0008677B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086780
 * Original: 0x00086780 - 0x0008681A (154 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086780: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x77D103F9);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086792u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008678Fu); } /* indirect call */
    }

loc_00086792: ;
    ecx = eax;
    PUSH32(esp, 0x00086799u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00086799: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAFFBB6F6u);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000867A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000867A4u); } /* indirect call */
    }

loc_000867A7: ;
    ecx = eax;
    PUSH32(esp, 0x000867AEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000867AE: ;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3543808E);
    ecx = esi;
    MEM32(esi + 0x20) = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000867C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000867BDu); } /* indirect call */
    }

loc_000867C0: ;
    ecx = eax;
    PUSH32(esp, 0x000867C7u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000867C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086817; /* je: equal / zero */

loc_000867CB: ;
    SET_LO8(ecx, MEM8(0x3C3748));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00086809; /* jne: not equal / not zero */

loc_000867DA: ;
    edx = MEM32(0x3C3748);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6A50);
    MEM32(0x3C3748) = edx;
    MEM32(0x3C3740) = 0x2FF7D4;
    MEM32(0x3C3744) = 2;
    PUSH32(esp, 0x00086806u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_00086806: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00086809: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C3740);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00086817u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086814u); } /* indirect call */
    }

loc_00086817: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086820
 * Original: 0x00086820 - 0x0008686E (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x0008682Du); RECOMP_ABI_CALL(0x0014CBD0u, sub_0014CBD0); /* call 0x0014CBD0 */

loc_0008682D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA2456844u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086839u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086836u); } /* indirect call */
    }

loc_00086839: ;
    ecx = eax;
    PUSH32(esp, 0x00086840u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086840: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008686D; /* je: equal / zero */

loc_00086845: ;
    ecx = MEM32(0x3E8D08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086859; /* je: equal / zero */

loc_0008684F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x00086859u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086853u); } /* indirect call */
    }

loc_00086859: ;
    eax = MEM32(0x51D65C);
    ecx = MEM32(eax + 0x3580);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008686Du); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008686D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086870
 * Original: 0x00086870 - 0x00086896 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA2456844u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086881u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008687Eu); } /* indirect call */
    }

loc_00086881: ;
    ecx = eax;
    PUSH32(esp, 0x00086888u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086888: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086894; /* je: equal / zero */

loc_0008688C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000866A0(); return; /* tail jmp 0x000866A0 */

loc_00086894: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000868A0
 * Original: 0x000868A0 - 0x0008691D (125 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000868A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000868A0: ;
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
    PUSH32(esp, 0x000868CAu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000868CA: ;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = ebp;
    ebp = esi + 0x2C;
    ecx = ebp;
    MEM32(esi) = 0x30856C;
    MEM32(edi) = 0x308554;
    PUSH32(esp, 0x000868E9u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_000868E9: ;
    ecx = ebp;
    PUSH32(esp, 0x000868F0u); RECOMP_ABI_CALL(0x0014CBD0u, sub_0014CBD0); /* call 0x0014CBD0 */

loc_000868F0: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000868FFu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000868FF: ;
    PUSH32(esp, 0x308534);
    ecx = ebx;
    PUSH32(esp, 0x0008690Bu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008690B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086911u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00086911: ;
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
 * sub_00086920
 * Original: 0x00086920 - 0x00086968 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086920: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x2C;
    MEM32(esi) = 0x30856C;
    MEM32(edi) = 0x308554;
    PUSH32(esp, 0x0008693Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0008693B: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x0008694Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0008694D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x00086958u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00086958: ;
    ecx = edi;
    PUSH32(esp, 0x0008695Fu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008695F: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086970
 * Original: 0x00086970 - 0x0008699F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086970(void)
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

loc_00086970: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push((double)SMEM32(esi + 0x20)); /* fild */
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x00086994u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00086994: ;
    ecx = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000866A0(); return; /* tail jmp 0x000866A0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000869A0
 * Original: 0x000869A0 - 0x00086A6D (205 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000869A0(void)
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

loc_000869A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000869EC; /* jne: not equal / not zero */

loc_000869AD: ;
    PUSH32(esp, 0x000869B2u); RECOMP_ABI_CALL(0x00086730u, sub_00086730); /* call 0x00086730 */

loc_000869B2: ;
    PUSH32(esp, 0x378DA684);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x000869D0u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000869D0: ;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000869DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000869DBu); } /* indirect call */
    }

loc_000869DE: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000869E7u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000869E7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000869EC: ;
    edx = MEM32(esi + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x24) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_00086A2C; /* jg: greater (signed >) */

loc_000869F9: ;
    fp_push((double)SMEM32(esi + 0x20)); /* fild */
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x00086A19u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00086A19: ;
    ecx = esi;
    PUSH32(esp, 0x00086A20u); RECOMP_ABI_CALL(0x000866A0u, sub_000866A0); /* call 0x000866A0 */

loc_00086A20: ;
    ecx = esi;
    PUSH32(esp, 0x00086A27u); RECOMP_ABI_CALL(0x00086730u, sub_00086730); /* call 0x00086730 */

loc_00086A27: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00086A2C: ;
    PUSH32(esp, 0x378DA684);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00086A4Au); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_00086A4A: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00086A58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086A55u); } /* indirect call */
    }

loc_00086A58: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00086A61u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_00086A61: ;
    ecx = esi;
    PUSH32(esp, 0x00086A68u); RECOMP_ABI_CALL(0x00086730u, sub_00086730); /* call 0x00086730 */

loc_00086A68: ;
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
 * sub_00086A70
 * Original: 0x00086A70 - 0x00086AD5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086A70: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086AB4; /* jne: not equal / not zero */

loc_00086A78: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x00086A80u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00086A80: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086AA6; /* je: equal / zero */

loc_00086A8B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00086A93u); RECOMP_ABI_CALL(0x000868A0u, sub_000868A0); /* call 0x000868A0 */

loc_00086A93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086AA6; /* je: equal / zero */

loc_00086A97: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086AA2u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00086AA2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00086AA6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086AB0u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00086AB0: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00086AB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086AD2; /* jne: not equal / not zero */

loc_00086AB9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00086AC6u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00086AC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086AD2; /* je: equal / zero */

loc_00086ACA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00086AD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086AD0u); } /* indirect call */
    }

loc_00086AD2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00086AE0
 * Original: 0x00086AE0 - 0x00086B0D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086AE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push((double)SMEM32(esi + 0x20)); /* fild */
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x00086B05u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00086B05: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000866A0(); return; /* tail jmp 0x000866A0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00086B10
 * Original: 0x00086B10 - 0x00086B19 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086B10: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_000869A0(); return; /* tail jmp 0x000869A0 */

}

/**
 * sub_00086B20
 * Original: 0x00086B20 - 0x00086B28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086B20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00086B30(); return; /* tail jmp 0x00086B30 */

}

/**
 * sub_00086B30
 * Original: 0x00086B30 - 0x00086B8C (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x2C;
    MEM32(esi) = 0x30856C;
    MEM32(edi) = 0x308554;
    PUSH32(esp, 0x00086B4Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_00086B4B: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x00086B5Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00086B5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x00086B68u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00086B68: ;
    ecx = edi;
    PUSH32(esp, 0x00086B6Fu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00086B6F: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_00086B85; /* je: equal / zero */

loc_00086B7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00086B82u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00086B82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00086B85: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00086B90
 * Original: 0x00086B90 - 0x00086B99 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086B90: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00086BA0
 * Original: 0x00086BA0 - 0x00086BA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086BA0(void)
{

loc_00086BA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00086BB0
 * Original: 0x00086BB0 - 0x00086BFD (77 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086BB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00086BF3; /* jle: less or equal (signed <=) */

loc_00086BC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00086BD0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi);
    PUSH32(esp, 0xAC016BC1u);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00086BE4u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_00086BE4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00086BD0; /* jne: not equal / not zero */

loc_00086BED: ;
    edi = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00086BF3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086C00
 * Original: 0x00086C00 - 0x00086C8E (142 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086C00: ;
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
    MEM32(esi) = 0x3087D4;
    MEM32(edi) = 0x3087BC;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00086C32u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00086C32: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00086C3Au); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00086C3A: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x5861A04C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00086C4Du); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086C4D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086C71; /* je: equal / zero */

loc_00086C51: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x3543808E);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00086C64u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086C64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00086C73; /* jne: not equal / not zero */

loc_00086C6A: ;
    PUSH32(esp, 0x30868C);
    goto loc_00086C78;

loc_00086C71: ;
    ecx = ebx;

loc_00086C73: ;
    PUSH32(esp, 0x30875C);

loc_00086C78: ;
    PUSH32(esp, 0x00086C7Du); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00086C7D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086C83u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00086C83: ;
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
 * sub_00086C90
 * Original: 0x00086C90 - 0x00086CC4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3087D4;
    MEM32(edi) = 0x3087BC;
    PUSH32(esp, 0x00086CA9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00086CA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x00086CB4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00086CB4: ;
    ecx = edi;
    PUSH32(esp, 0x00086CBBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00086CBB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086CD0
 * Original: 0x00086CD0 - 0x00086D19 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086CD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086CEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086CE7u); } /* indirect call */
    }

loc_00086CEA: ;
    edx = MEM32(esi);
    ebp = MEM32(eax + 4);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00086CF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086CF1u); } /* indirect call */
    }

loc_00086CF4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00086CFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086CF9u); } /* indirect call */
    }

loc_00086CFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E7F4C73);
    ecx = ebp + 8;
    PUSH32(esp, 0x00086D0Bu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00086D0B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086D11u); RECOMP_ABI_CALL(0x00086BB0u, sub_00086BB0); /* call 0x00086BB0 */

loc_00086D11: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086D20
 * Original: 0x00086D20 - 0x00086D69 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086D20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086D3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086D37u); } /* indirect call */
    }

loc_00086D3A: ;
    edx = MEM32(esi);
    ebp = MEM32(eax + 4);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00086D44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086D41u); } /* indirect call */
    }

loc_00086D44: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00086D4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086D49u); } /* indirect call */
    }

loc_00086D4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x93264B9Fu);
    ecx = ebp + 8;
    PUSH32(esp, 0x00086D5Bu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00086D5B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086D61u); RECOMP_ABI_CALL(0x00086BB0u, sub_00086BB0); /* call 0x00086BB0 */

loc_00086D61: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086D70
 * Original: 0x00086D70 - 0x00086DB9 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086D70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086D8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086D87u); } /* indirect call */
    }

loc_00086D8A: ;
    edx = MEM32(esi);
    ebp = MEM32(eax + 4);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00086D94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086D91u); } /* indirect call */
    }

loc_00086D94: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00086D9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086D99u); } /* indirect call */
    }

loc_00086D9C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x300737B0);
    ecx = ebp + 8;
    PUSH32(esp, 0x00086DABu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00086DAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086DB1u); RECOMP_ABI_CALL(0x00086BB0u, sub_00086BB0); /* call 0x00086BB0 */

loc_00086DB1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086DC0
 * Original: 0x00086DC0 - 0x00086E09 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00086DC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086DDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086DD7u); } /* indirect call */
    }

loc_00086DDA: ;
    edx = MEM32(esi);
    ebp = MEM32(eax + 4);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00086DE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086DE1u); } /* indirect call */
    }

loc_00086DE4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00086DECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086DE9u); } /* indirect call */
    }

loc_00086DEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30D5BA97);
    ecx = ebp + 8;
    PUSH32(esp, 0x00086DFBu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00086DFB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00086E01u); RECOMP_ABI_CALL(0x00086BB0u, sub_00086BB0); /* call 0x00086BB0 */

loc_00086E01: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00086E10
 * Original: 0x00086E10 - 0x00086E23 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086E10(void)
{

loc_00086E10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM8(eax + 0x20) = 1;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x24) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00086E30
 * Original: 0x00086E30 - 0x00086E43 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086E30(void)
{

loc_00086E30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM8(eax + 0x20) = 0;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x24) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00086E50
 * Original: 0x00086E50 - 0x00086EBD (109 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086E50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086E61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086E5Eu); } /* indirect call */
    }

loc_00086E61: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xD6942629u);
    ecx = eax + 8;
    PUSH32(esp, 0x00086E71u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086E71: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086E98; /* je: equal / zero */

loc_00086E75: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086E98; /* je: equal / zero */

loc_00086E80: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00086E87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086E84u); } /* indirect call */
    }

loc_00086E87: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086E8Eu); RECOMP_ABI_CALL(0x00035500u, sub_00035500); /* call 0x00035500 */

loc_00086E8E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086E98; /* jne: not equal / not zero */

loc_00086E95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086E98: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086E9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086E9Cu); } /* indirect call */
    }

loc_00086E9F: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3E7F4C73);
    ecx = eax + 8;
    PUSH32(esp, 0x00086EAFu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00086EAF: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086EC0
 * Original: 0x00086EC0 - 0x00086F2D (109 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086EC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086ED1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086ECEu); } /* indirect call */
    }

loc_00086ED1: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xD6942629u);
    ecx = eax + 8;
    PUSH32(esp, 0x00086EE1u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086EE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086F08; /* je: equal / zero */

loc_00086EE5: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086F08; /* je: equal / zero */

loc_00086EF0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00086EF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086EF4u); } /* indirect call */
    }

loc_00086EF7: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086EFEu); RECOMP_ABI_CALL(0x00035500u, sub_00035500); /* call 0x00035500 */

loc_00086EFE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086F08; /* jne: not equal / not zero */

loc_00086F05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086F08: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086F0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086F0Cu); } /* indirect call */
    }

loc_00086F0F: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x300737B0);
    ecx = eax + 8;
    PUSH32(esp, 0x00086F1Fu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00086F1F: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086F30
 * Original: 0x00086F30 - 0x00086F9D (109 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086F30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086F41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086F3Eu); } /* indirect call */
    }

loc_00086F41: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xD6942629u);
    ecx = eax + 8;
    PUSH32(esp, 0x00086F51u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086F51: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086F78; /* je: equal / zero */

loc_00086F55: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086F78; /* je: equal / zero */

loc_00086F60: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00086F67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086F64u); } /* indirect call */
    }

loc_00086F67: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086F6Eu); RECOMP_ABI_CALL(0x00035500u, sub_00035500); /* call 0x00035500 */

loc_00086F6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086F78; /* jne: not equal / not zero */

loc_00086F75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086F78: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086F7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086F7Cu); } /* indirect call */
    }

loc_00086F7F: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x93264B9Fu);
    ecx = eax + 8;
    PUSH32(esp, 0x00086F8Fu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00086F8F: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00086FA0
 * Original: 0x00086FA0 - 0x0008700D (109 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00086FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00086FA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086FB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086FAEu); } /* indirect call */
    }

loc_00086FB1: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xD6942629u);
    ecx = eax + 8;
    PUSH32(esp, 0x00086FC1u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00086FC1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086FE8; /* je: equal / zero */

loc_00086FC5: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00086FE8; /* je: equal / zero */

loc_00086FD0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00086FD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086FD4u); } /* indirect call */
    }

loc_00086FD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00086FDEu); RECOMP_ABI_CALL(0x00035500u, sub_00035500); /* call 0x00035500 */

loc_00086FDE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00086FE8; /* jne: not equal / not zero */

loc_00086FE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00086FE8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00086FEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00086FECu); } /* indirect call */
    }

loc_00086FEF: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x30D5BA97);
    ecx = eax + 8;
    PUSH32(esp, 0x00086FFFu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00086FFF: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087010
 * Original: 0x00087010 - 0x00087068 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087010: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = edi + 4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00087021u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008701Eu); } /* indirect call */
    }

loc_00087021: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x5861A04C);
    ecx = eax + 8;
    PUSH32(esp, 0x00087031u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00087031: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087038; /* jne: not equal / not zero */

loc_00087035: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00087038: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087063; /* je: equal / zero */

loc_0008703F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00087046u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087043u); } /* indirect call */
    }

loc_00087046: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3E7F4C73);
    ecx = eax + 8;
    PUSH32(esp, 0x00087056u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00087056: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00087063; /* jle: less or equal (signed <=) */

loc_0008705B: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00087063: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087070
 * Original: 0x00087070 - 0x000870C8 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087070: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = edi + 4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00087081u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008707Eu); } /* indirect call */
    }

loc_00087081: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x5861A04C);
    ecx = eax + 8;
    PUSH32(esp, 0x00087091u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00087091: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087098; /* jne: not equal / not zero */

loc_00087095: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00087098: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000870C0; /* je: equal / zero */

loc_0008709F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000870A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000870A3u); } /* indirect call */
    }

loc_000870A6: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3E7F4C73);
    ecx = eax + 8;
    PUSH32(esp, 0x000870B6u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_000870B6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000870C0; /* je: equal / zero */

loc_000870BB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000870C0: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000870D0
 * Original: 0x000870D0 - 0x000870EE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000870D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000870D0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000870DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000870DAu); } /* indirect call */
    }

loc_000870DD: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x77CB38D0);
    ecx = eax + 8;
    PUSH32(esp, 0x000870EDu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000870ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000870F0
 * Original: 0x000870F0 - 0x0008710E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000870F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000870F0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000870FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000870FAu); } /* indirect call */
    }

loc_000870FD: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    PUSH32(esp, 0x0008710Du); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008710D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087110
 * Original: 0x00087110 - 0x00087133 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00087110: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008711Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008711Au); } /* indirect call */
    }

loc_0008711D: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    PUSH32(esp, 0x0008712Du); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008712D: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00087140
 * Original: 0x00087140 - 0x000871A5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087140: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087184; /* jne: not equal / not zero */

loc_00087148: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00087150u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00087150: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087176; /* je: equal / zero */

loc_0008715B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00087163u); RECOMP_ABI_CALL(0x00086C00u, sub_00086C00); /* call 0x00086C00 */

loc_00087163: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087176; /* je: equal / zero */

loc_00087167: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087172u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00087172: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00087176: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087180u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00087180: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00087184: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000871A2; /* jne: not equal / not zero */

loc_00087189: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00087196u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00087196: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000871A2; /* je: equal / zero */

loc_0008719A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000871A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000871A0u); } /* indirect call */
    }

loc_000871A2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000871B0
 * Original: 0x000871B0 - 0x000871E0 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000871B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000871B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 4) = 0x2FF7D4;
    MEM32(esp + 8) = 0x896C77D0u;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000871D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000871D1u); } /* indirect call */
    }

loc_000871D4: ;
    ecx = esp;
    PUSH32(esp, 0x000871DCu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000871DC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000871E0
 * Original: 0x000871E0 - 0x000871F0 (16 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000871E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000871E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000871F0(); return; /* tail jmp 0x000871F0 */

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
 * sub_000871F0
 * Original: 0x000871F0 - 0x00087238 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000871F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000871F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3087D4;
    MEM32(edi) = 0x3087BC;
    PUSH32(esp, 0x00087209u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00087209: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x00087214u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00087214: ;
    ecx = edi;
    PUSH32(esp, 0x0008721Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0008721B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_00087231; /* je: equal / zero */

loc_00087228: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008722Eu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008722E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00087231: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087240
 * Original: 0x00087240 - 0x00087241 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087240(void)
{

loc_00087240: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087250
 * Original: 0x00087250 - 0x0008725C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087250(void)
{

loc_00087250: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0008725Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087258u); } /* indirect call */
    }

loc_0008725B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087260
 * Original: 0x00087260 - 0x00087285 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087260: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008726D; /* je: equal / zero */

loc_00087268: ;
    ecx = eax + 4;
    goto loc_0008726F;

loc_0008726D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008726F: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xF0);
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    ecx = eax + 0xD8;
    PUSH32(esp, 0x00087284u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00087284: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087290
 * Original: 0x00087290 - 0x0008729E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087290: ;
    ecx = MEM32(ecx + 0x108);
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00039EF0(); return; /* tail jmp 0x00039EF0 */

}

/**
 * sub_000872A0
 * Original: 0x000872A0 - 0x000872AE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000872A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000872A0: ;
    ecx = MEM32(ecx + 0x108);
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00039ED0(); return; /* tail jmp 0x00039ED0 */

}

/**
 * sub_000872B0
 * Original: 0x000872B0 - 0x000872DF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000872B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000872B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C0);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000872DA; /* jne: not equal / not zero */

loc_000872C5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000872CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000872C9u); } /* indirect call */
    }

loc_000872CC: ;
    eax = MEM32(esi + 0x108);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000872DAu); RECOMP_ABI_CALL(0x001153B0u, sub_001153B0); /* call 0x001153B0 */

loc_000872DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000872E0
 * Original: 0x000872E0 - 0x00087340 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000872E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000872E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC016BC1u);
    ecx = esi + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(esi + 0xD4) = 0;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000872FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000872FAu); } /* indirect call */
    }

loc_000872FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80F874CDu);
    PUSH32(esp, 0x00087308u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_00087308: ;
    eax = MEM32(esi + 0xF4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008733D; /* jle: less or equal (signed <=) */

loc_00087317: ;
    PUSH32(esp, ebx);
    ebx = esi + 0xF8;
    edi = edi;

loc_00087320: ;
    ecx = MEM32(esi + 0x108);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    PUSH32(esp, 0x0008732Eu); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008732E: ;
    eax = MEM32(esi + 0xF4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00087320; /* jl: less (signed <) */

loc_0008733C: ;
    POP32(esp, ebx);

loc_0008733D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087360
 * Original: 0x00087360 - 0x000873E1 (129 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087360: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xF4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000873DD; /* jle: less or equal (signed <=) */

loc_0008736D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = ecx + 0xF8;
    PUSH32(esp, ebx);
    /* nop */

loc_00087380: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087398; /* je: equal / zero */

loc_00087384: ;
    ebx = MEM32(ecx + 0xF4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00087380; /* jl: less (signed <) */

loc_00087392: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00087398: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000873DB; /* je: equal / zero */

loc_0008739D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000873C4; /* jge: greater or equal (signed >=) */

loc_000873A4: ;
    eax = ecx + eax * 4 + 0xF8;
    goto loc_000873B0;

    /* nop */

loc_000873B0: ;
    esi = MEM32(eax + 4);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 0xF4);
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
    if (CMP_L(_fas, _fbs)) goto loc_000873B0; /* jl: less (signed <) */

loc_000873C4: ;
    eax = MEM32(ecx + 0xF4);
    MEM32(ecx + eax * 4 + 0xF4) = 0;
    MEM32(ecx + 0xF4) = MEM32(ecx + 0xF4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000873DB: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_000873DD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000873F0
 * Original: 0x000873F0 - 0x0008740A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000873F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000873F0: ;
    _fa = (uint32_t)(MEM32(0x389414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x389414), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087409; /* jne: not equal / not zero */

loc_000873F9: ;
    ecx = MEM32(0x3C3B64);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00087409u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087406u); } /* indirect call */
    }

loc_00087409: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087410
 * Original: 0x00087410 - 0x0008742D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087410: ;
    _fa = (uint32_t)(MEM32(0x389414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x389414), 0xB (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00087425; /* jne: not equal / not zero */

loc_0008741D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00087424u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087421u); } /* indirect call */
    }

loc_00087424: ;
    esp += 4; return; /* ret */

loc_00087425: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0008742Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087429u); } /* indirect call */
    }

loc_0008742C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087430
 * Original: 0x00087430 - 0x0008745D (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087430: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087457; /* je: equal / zero */

loc_0008743B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087444u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_00087444: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087457; /* je: equal / zero */

loc_0008744B: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00087453u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087450u); } /* indirect call */
    }

loc_00087453: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00087457: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087460
 * Original: 0x00087460 - 0x0008749C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087460: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008749B; /* je: equal / zero */

loc_00087468: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087471u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_00087471: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008749B; /* je: equal / zero */

loc_00087478: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00087480u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008747Du); } /* indirect call */
    }

loc_00087480: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008749B; /* je: equal / zero */

loc_00087484: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0xF4);
    MEM32(ecx + edx * 4 + 0xF8) = eax;
    MEM32(ecx + 0xF4) = MEM32(ecx + 0xF4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008749B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000874A0
 * Original: 0x000874A0 - 0x000874E1 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000874A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000874A0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000874E0; /* je: equal / zero */

loc_000874A8: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000874B1u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_000874B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000874E0; /* je: equal / zero */

loc_000874B8: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x000874C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000874BEu); } /* indirect call */
    }

loc_000874C1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000874DF; /* je: equal / zero */

loc_000874C7: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000874D1u); RECOMP_ABI_CALL(0x00087360u, sub_00087360); /* call 0x00087360 */

loc_000874D1: ;
    ecx = MEM32(ecx + 0x108);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000874DFu); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_000874DF: ;
    POP32(esp, esi);

loc_000874E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000874F0
 * Original: 0x000874F0 - 0x00087529 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000874F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000874F0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087528; /* je: equal / zero */

loc_000874F8: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087501u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_00087501: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087528; /* je: equal / zero */

loc_00087508: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00087510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008750Du); } /* indirect call */
    }

loc_00087510: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087528; /* je: equal / zero */

loc_00087514: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0xD4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087528; /* je: equal / zero */

loc_00087522: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00087528u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087525u); } /* indirect call */
    }

loc_00087528: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087530
 * Original: 0x00087530 - 0x0008755E (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087530: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087555; /* je: equal / zero */

loc_0008753B: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087544u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_00087544: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087555; /* je: equal / zero */

loc_0008754B: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00087553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087550u); } /* indirect call */
    }

loc_00087553: ;
    esi = eax;

loc_00087555: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087560
 * Original: 0x00087560 - 0x0008767B (283 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087560(void)
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

loc_00087560: ;
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
    PUSH32(esp, 0x0008758Du); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0008758D: ;
    ebp = esi + 0x20;
    ecx = ebp;
    PUSH32(esp, 0x00087597u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_00087597: ;
    ecx = esi + 0xD8;
    MEM32(esi) = 0x308A2C;
    MEM32(edi) = 0x308A14;
    MEM32(ebp) = 0x3088C8;
    MEM32(esi + 0x28) = 0x3088BC;
    MEM32(esi + 0xD0) = 0;
    MEM8(esi + 0xD4) = 1;
    PUSH32(esp, 0x000875CDu); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_000875CD: ;
    ecx = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x108) = ecx;
    MEM32(esi + 0xF4) = eax;
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xFC) = eax;
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00087602u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00087602: ;
    PUSH32(esp, 0x3088A4);
    ecx = ebx;
    PUSH32(esp, 0x0008760Eu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008760E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00087614u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00087614: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008761Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008761Bu); } /* indirect call */
    }

loc_0008761E: ;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0xEB7EA942u);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00087633u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_00087633: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087639u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_00087639: ;
    edx = MEM32(0x3727C4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xAB11F11Eu);
    ecx = esp + 0x14;
    edi = eax;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x00087656u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00087656: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    MEMF(esi + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x3C376C) = edi;
    PUSH32(esp, 0x0008766Eu); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_0008766E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
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
 * sub_00087680
 * Original: 0x00087680 - 0x000876ED (109 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = esi + 0x20;
    edi = esi + 4;
    PUSH32(esp, ebx);
    MEM32(esi) = 0x308A2C;
    MEM32(edi) = 0x308A14;
    MEM32(ebx) = 0x3088C8;
    MEM32(esi + 0x28) = 0x3088BC;
    PUSH32(esp, 0x000876AAu); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_000876AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xD8;
    PUSH32(esp, 0x000876B8u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000876B8: ;
    ecx = ebx;
    PUSH32(esp, 0x000876BFu); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_000876BF: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000876D1u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000876D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000876DCu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000876DC: ;
    ecx = edi;
    PUSH32(esp, 0x000876E3u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000876E3: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000876F0
 * Original: 0x000876F0 - 0x00087773 (131 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000876F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000876F0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087752; /* jne: not equal / not zero */

loc_000876F8: ;
    PUSH32(esp, esi);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00087703u); RECOMP_ABI_CALL(0x00079E60u, sub_00079E60); /* call 0x00079E60 */

loc_00087703: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087711u); RECOMP_ABI_CALL(0x00084360u, sub_00084360); /* call 0x00084360 */

loc_00087711: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008774E; /* je: equal / zero */

loc_00087718: ;
    PUSH32(esp, 0x110);
    PUSH32(esp, 0x00087722u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00087722: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087744; /* je: equal / zero */

loc_00087729: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00087731u); RECOMP_ABI_CALL(0x00087560u, sub_00087560); /* call 0x00087560 */

loc_00087731: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087744; /* je: equal / zero */

loc_00087735: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087740u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00087740: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00087744: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008774Eu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008774E: ;
    POP32(esp, esi);

loc_0008774F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00087752: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008774F; /* jne: not equal / not zero */

loc_00087757: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00087764u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00087764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008774F; /* je: equal / zero */

loc_00087768: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00087770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008776Eu); } /* indirect call */
    }

loc_00087770: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00087780
 * Original: 0x00087780 - 0x000878A0 (288 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087780: ;
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
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xCCDCD4C);
    edi = ecx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM16(esp + 0x20) = 0x20;
    MEM16(esp + 0x22) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000877DDu); RECOMP_ABI_CALL(0x00154E80u, sub_00154E80); /* call 0x00154E80 */

loc_000877DD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000877E8; /* jne: not equal / not zero */

loc_000877E4: ;
    eax = esp + 0xC;

loc_000877E8: ;
    ecx = MEM32(edi + 0x108);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E4467B9);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    ecx = esp + 0x64;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008782Cu); RECOMP_ABI_CALL(0x000EEAD0u, sub_000EEAD0); /* call 0x000EEAD0 */

loc_0008782C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087835; /* je: equal / zero */

loc_00087830: ;
    edi = esi + 0x30;
    goto loc_00087837;

loc_00087835: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00087837: ;
    ecx = MEM32(esp + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008784F; /* je: equal / zero */

loc_00087842: ;
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008784Fu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0008784F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xC8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00087869; /* je: equal / zero */

loc_0008785A: ;
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00087869u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_00087869: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00087875u); RECOMP_ABI_CALL(0x00114250u, sub_00114250); /* call 0x00114250 */

loc_00087875: ;
    ecx = MEM32(esp + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC4) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00087898; /* je: equal / zero */

loc_0008788B: ;
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00087898u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00087898: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000878A0
 * Original: 0x000878A0 - 0x00087912 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000878A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000878A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008790D; /* jle: less or equal (signed <=) */

loc_000878B0: ;
    PUSH32(esp, edi);
    edi = esi + 0xD8;
    goto loc_000878C0;

    /* nop */

loc_000878C0: ;
    SET_LO8(eax, MEM8(esi + 0xB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000878F0; /* je: equal / zero */

loc_000878CA: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x000878D1u); RECOMP_ABI_CALL(0x001211F0u, sub_001211F0); /* call 0x001211F0 */

loc_000878D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000878F0; /* jne: not equal / not zero */

loc_000878D5: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x1C0);
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000878F0; /* jne: not equal / not zero */

loc_000878E5: ;
    PUSH32(esp, eax);
    ecx = esi + -32;
    PUSH32(esp, 0x000878EEu); RECOMP_ABI_CALL(0x00087780u, sub_00087780); /* call 0x00087780 */

loc_000878EE: ;
    goto loc_000878FE;

loc_000878F0: ;
    edx = MEM32(esi + 0xE8);
    ecx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000878FEu); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_000878FE: ;
    eax = MEM32(esi + 0xD4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000878C0; /* jl: less (signed <) */

loc_0008790C: ;
    POP32(esp, edi);

loc_0008790D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087920
 * Original: 0x00087920 - 0x0008797C (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087920: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC016BC1u);
    ecx = esi + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(esi + 0xD4) = 1;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008793Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008793Au); } /* indirect call */
    }

loc_0008793D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF40CCD04u);
    PUSH32(esp, 0x00087948u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_00087948: ;
    eax = MEM32(esi + 0xF4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00087979; /* jle: less or equal (signed <=) */

loc_00087957: ;
    PUSH32(esp, ebx);
    ebx = esi + 0xF8;
    edi = edi;

loc_00087960: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008796Au); RECOMP_ABI_CALL(0x00087780u, sub_00087780); /* call 0x00087780 */

loc_0008796A: ;
    eax = MEM32(esi + 0xF4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00087960; /* jl: less (signed <) */

loc_00087978: ;
    POP32(esp, ebx);

loc_00087979: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087980
 * Original: 0x00087980 - 0x00087998 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087980: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087990; /* je: equal / zero */

loc_00087988: ;
    PUSH32(esp, 0x0008798Du); RECOMP_ABI_CALL(0x00087920u, sub_00087920); /* call 0x00087920 */

loc_0008798D: ;
    esp += 8; return; /* ret 4 */

loc_00087990: ;
    PUSH32(esp, 0x00087995u); RECOMP_ABI_CALL(0x000872E0u, sub_000872E0); /* call 0x000872E0 */

loc_00087995: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000879A0
 * Original: 0x000879A0 - 0x000879A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000879A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000879A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000879D0(); return; /* tail jmp 0x000879D0 */

}

/**
 * sub_000879B0
 * Original: 0x000879B0 - 0x000879B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000879B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000879B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000879D0(); return; /* tail jmp 0x000879D0 */

}

/**
 * sub_000879C0
 * Original: 0x000879C0 - 0x000879C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000879C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000879C0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000879D0(); return; /* tail jmp 0x000879D0 */

}

/**
 * sub_000879D0
 * Original: 0x000879D0 - 0x000879EE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000879D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000879D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000879D8u); RECOMP_ABI_CALL(0x00087680u, sub_00087680); /* call 0x00087680 */

loc_000879D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000879E8; /* je: equal / zero */

loc_000879DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000879E5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000879E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000879E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000879F0
 * Original: 0x000879F0 - 0x000879F7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000879F0(void)
{

loc_000879F0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00087A00
 * Original: 0x00087A00 - 0x00087A09 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087A00: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00087A10
 * Original: 0x00087A10 - 0x00087A11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A10(void)
{

loc_00087A10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087A20
 * Original: 0x00087A20 - 0x00087A21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A20(void)
{

loc_00087A20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087A30
 * Original: 0x00087A30 - 0x00087A31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A30(void)
{

loc_00087A30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087A40
 * Original: 0x00087A40 - 0x00087A48 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A40(void)
{

loc_00087A40: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x20));
    esp += 4; return; /* ret */

}

/**
 * sub_00087A50
 * Original: 0x00087A50 - 0x00087A5F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087A50: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x20));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00087A60
 * Original: 0x00087A60 - 0x00087B68 (264 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087A60: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 4;
    MEM32(ebp) = 0x2FF764;
    MEM32(ebp + 4) = 0;
    ebx = esi + 0x10;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(esi) = 0x308B90;
    MEM32(ebp) = 0x308B78;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00087A96u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00087A96: ;
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x6672B460);
    ecx = edi;
    PUSH32(esp, 0x00087AA9u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00087AA9: ;
    PUSH32(esp, 0xBD78C7A3u);
    ecx = edi;
    MEM8(esi + 0x20) = LO8(eax);
    PUSH32(esp, 0x00087AB8u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00087AB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x21) = LO8(ecx);
    PUSH32(esp, 0x70C521F);
    ecx = edi;
    PUSH32(esp, 0x00087ACCu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00087ACC: ;
    PUSH32(esp, 0xC8E5D1E);
    ecx = edi;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x00087ADBu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00087ADB: ;
    PUSH32(esp, 0xE60B1C40u);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00087AEBu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00087AEB: ;
    PUSH32(esp, 0x90786E43u);
    ecx = edi;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00087AFBu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00087AFB: ;
    PUSH32(esp, 0xE671CB0Bu);
    ecx = edi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00087B0Bu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00087B0B: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM8(esi + 0x28) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(esi + 0x29) = LO8(ecx);
    PUSH32(esp, 0x5B2BE317);
    ecx = edi;
    MEM8(esi + 0x2A) = LO8(edx);
    MEM8(esi + 0x2B) = LO8(eax);
    PUSH32(esp, 0x00087B2Fu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00087B2F: ;
    PUSH32(esp, 0x43C1EA72);
    ecx = edi;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x00087B3Eu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00087B3E: ;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x00087B49u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00087B49: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00087B4Fu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00087B4F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x308B58);
    ecx = ebx;
    PUSH32(esp, 0x00087B5Eu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00087B5E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00087B70
 * Original: 0x00087B70 - 0x00087BAB (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x308B90;
    MEM32(edi) = 0x308B78;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x00087B90u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00087B90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x00087B9Bu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00087B9B: ;
    ecx = edi;
    PUSH32(esp, 0x00087BA2u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00087BA2: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087BB0
 * Original: 0x00087BB0 - 0x00087BBB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087BB0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_00087BC0
 * Original: 0x00087BC0 - 0x00087BCA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087BC0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00087BD0
 * Original: 0x00087BD0 - 0x00087BD9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087BD0: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00087C50(); return; /* tail jmp 0x00087C50 */

}

/**
 * sub_00087BE0
 * Original: 0x00087BE0 - 0x00087C49 (105 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087BE0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087C28; /* jne: not equal / not zero */

loc_00087BE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x00087BF0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00087BF0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087C1A; /* je: equal / zero */

loc_00087BFB: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00087C07u); RECOMP_ABI_CALL(0x00087A60u, sub_00087A60); /* call 0x00087A60 */

loc_00087C07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087C1A; /* je: equal / zero */

loc_00087C0B: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087C16u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00087C16: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00087C1A: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087C24u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00087C24: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00087C28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00087C46; /* jne: not equal / not zero */

loc_00087C2D: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00087C3Au); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00087C3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087C46; /* je: equal / zero */

loc_00087C3E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00087C46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087C44u); } /* indirect call */
    }

loc_00087C46: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00087C50
 * Original: 0x00087C50 - 0x00087C9F (79 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087C50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00087C5Au); RECOMP_ABI_CALL(0x000A6DA0u, sub_000A6DA0); /* call 0x000A6DA0 */

loc_00087C5A: ;
    ebx = eax;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00087C9B; /* jbe: below or equal (unsigned <=) */

loc_00087C6D: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x28;

loc_00087C71: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00087C88u); RECOMP_ABI_CALL(0x000A6EE0u, sub_000A6EE0); /* call 0x000A6EE0 */

loc_00087C88: ;
    ecx = MEM32(0x3888C0);
    edx = ZX8(MEM8(ecx + 0x1ED0));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00087C71; /* jl: less (signed <) */

loc_00087C9A: ;
    POP32(esp, ebp);

loc_00087C9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00087CA0
 * Original: 0x00087CA0 - 0x00087CA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00087CA0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00087CB0(); return; /* tail jmp 0x00087CB0 */

}

/**
 * sub_00087CB0
 * Original: 0x00087CB0 - 0x00087CFF (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x308B90;
    MEM32(edi) = 0x308B78;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x00087CD0u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00087CD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x00087CDBu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00087CDB: ;
    ecx = edi;
    PUSH32(esp, 0x00087CE2u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00087CE2: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_00087CF8; /* je: equal / zero */

loc_00087CEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00087CF5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00087CF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00087CF8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087D00
 * Original: 0x00087D00 - 0x00087D01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087D00(void)
{

loc_00087D00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00087D10
 * Original: 0x00087D10 - 0x00087D18 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087D10(void)
{

loc_00087D10: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x20));
    esp += 4; return; /* ret */

}

/**
 * sub_00087D20
 * Original: 0x00087D20 - 0x00087D9A (122 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087D20: ;
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
    PUSH32(esp, 0x00087D4Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00087D4B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00087D66u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00087D66: ;
    PUSH32(esp, 0x308C98);
    ecx = ebx;
    PUSH32(esp, 0x00087D72u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00087D72: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00087D78u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00087D78: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00087D82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087D7Fu); } /* indirect call */
    }

loc_00087D82: ;
    PUSH32(esp, 0xC500FB4Du);
    ecx = eax + 8;
    PUSH32(esp, 0x00087D8Fu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00087D8F: ;
    MEM8(esi + 0x20) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00087DA0
 * Original: 0x00087DA0 - 0x00087DD4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087DA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x00087DB9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00087DB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x00087DC4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00087DC4: ;
    ecx = edi;
    PUSH32(esp, 0x00087DCBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00087DCB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00087DE0
 * Original: 0x00087DE0 - 0x00087FBA (474 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087DE0(void)
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

loc_00087DE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBDB7136Du);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00087DF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087DEDu); } /* indirect call */
    }

loc_00087DF0: ;
    ecx = eax;
    PUSH32(esp, 0x00087DF7u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00087DF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    PUSH32(esp, 0x641A477A);
    if (CMP_EQ(_fa, _fb)) goto loc_00087F37; /* je: equal / zero */

loc_00087E06: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00087E0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087E08u); } /* indirect call */
    }

loc_00087E0B: ;
    ecx = eax;
    PUSH32(esp, 0x00087E12u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00087E12: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCD8A472Du);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00087E22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087E1Fu); } /* indirect call */
    }

loc_00087E22: ;
    ecx = eax;
    PUSH32(esp, 0x00087E29u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00087E29: ;
    edx = MEM32(esi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCD8A472Du);
    ecx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00087E3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087E3Cu); } /* indirect call */
    }

loc_00087E3F: ;
    ecx = eax;
    PUSH32(esp, 0x00087E46u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00087E46: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x297D738F);
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00087E5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087E59u); } /* indirect call */
    }

loc_00087E5C: ;
    ecx = eax;
    PUSH32(esp, 0x00087E63u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00087E63: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00087E8A; /* jbe: below or equal (unsigned <=) */

loc_00087E7A: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    goto loc_00087E97;

loc_00087E8A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087E97; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_00087E91: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00087E97: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00087EA8; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00087EA2: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00087EA8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00087EB9; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00087EB3: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_00087EB9: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00087ECA; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00087EC4: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00087ECA: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00087EE3u); RECOMP_ABI_CALL(0x000B17E0u, sub_000B17E0); /* call 0x000B17E0 */

loc_00087EE3: ;
    SET_LO8(ecx, MEM8(0x3C379C));
    eax = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00087F24; /* jne: not equal / not zero */

loc_00087EF5: ;
    edx = MEM32(0x3C379C);
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6A60);
    MEM32(0x3C379C) = edx;
    MEM32(0x3C3794) = 0x2FF7D4;
    MEM32(0x3C3798) = 3;
    PUSH32(esp, 0x00087F21u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_00087F21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00087F24: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C3794);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00087F32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087F2Fu); } /* indirect call */
    }

loc_00087F32: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00087F37: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00087F3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087F39u); } /* indirect call */
    }

loc_00087F3C: ;
    ecx = eax;
    PUSH32(esp, 0x00087F43u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00087F43: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCD8A472Du);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00087F53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00087F50u); } /* indirect call */
    }

loc_00087F53: ;
    ecx = eax;
    PUSH32(esp, 0x00087F5Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00087F5A: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00087F81; /* jbe: below or equal (unsigned <=) */

loc_00087F71: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    goto loc_00087F8E;

loc_00087F81: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00087F8E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_00087F88: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00087F8E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00087F9F; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00087F99: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00087F9F: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00087FB2u); RECOMP_ABI_CALL(0x000B17E0u, sub_000B17E0); /* call 0x000B17E0 */

loc_00087FB2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00087FC0
 * Original: 0x00087FC0 - 0x00088025 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00087FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00087FC0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088004; /* jne: not equal / not zero */

loc_00087FC8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00087FD0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00087FD0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087FF6; /* je: equal / zero */

loc_00087FDB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00087FE3u); RECOMP_ABI_CALL(0x00087D20u, sub_00087D20); /* call 0x00087D20 */

loc_00087FE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00087FF6; /* je: equal / zero */

loc_00087FE7: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00087FF2u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00087FF2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00087FF6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088000u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00088000: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00088004: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088022; /* jne: not equal / not zero */

loc_00088009: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00088016u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00088016: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088022; /* je: equal / zero */

loc_0008801A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00088022u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088020u); } /* indirect call */
    }

loc_00088022: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00088030
 * Original: 0x00088030 - 0x00088039 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00088030: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00087DE0(); return; /* tail jmp 0x00087DE0 */

}

/**
 * sub_00088040
 * Original: 0x00088040 - 0x00088045 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088040(void)
{

loc_00088040: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088050
 * Original: 0x00088050 - 0x0008806F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088050: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x308DA0;
    if (TEST_Z(_fa, _fb)) goto loc_00088069; /* je: equal / zero */

loc_00088060: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00088066u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00088066: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00088069: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088070
 * Original: 0x00088070 - 0x00088071 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088070(void)
{

loc_00088070: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00088080
 * Original: 0x00088080 - 0x000880A6 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088080: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD1);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00088095u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008808Fu); } /* indirect call */
    }

loc_00088095: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x000880A0u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_000880A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000880B0
 * Original: 0x000880B0 - 0x000880C7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000880B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000880B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000880B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000880B6u); } /* indirect call */
    }

loc_000880B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000880C4; /* je: equal / zero */

loc_000880BD: ;
    SET_LO8(eax, MEM8(eax + 0x3B8));
    esp += 4; return; /* ret */

loc_000880C4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000880D0
 * Original: 0x000880D0 - 0x000880F7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000880D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000880D0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000880F1; /* je: equal / zero */

loc_000880D9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000880EB; /* je: equal / zero */

loc_000880DC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000880E5; /* je: equal / zero */

loc_000880DF: ;
    eax = 0x308DD4;
    esp += 4; return; /* ret */

loc_000880E5: ;
    eax = 0x308DCC;
    esp += 4; return; /* ret */

loc_000880EB: ;
    eax = 0x308DC4;
    esp += 4; return; /* ret */

loc_000880F1: ;
    eax = 0x308DBC;
    esp += 4; return; /* ret */

}

/**
 * sub_00088100
 * Original: 0x00088100 - 0x00088101 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088100(void)
{

loc_00088100: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00088110
 * Original: 0x00088110 - 0x00088111 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088110(void)
{

loc_00088110: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00088120
 * Original: 0x00088120 - 0x00088138 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088120: ;
    eax = MEM32(0x3C37B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088135; /* je: equal / zero */

loc_00088129: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088135; /* je: equal / zero */

loc_0008812F: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00088135: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00088140
 * Original: 0x00088140 - 0x0008815A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088140: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x308DA0;
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088160
 * Original: 0x00088160 - 0x00088188 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088160: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088171; /* je: equal / zero */

loc_00088168: ;
    edx = MEM32(ecx + 4);
    MEM32(edx + 0x130) = eax;

loc_00088171: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00088177u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088174u); } /* indirect call */
    }

loc_00088177: ;
    esi = MEM32(esp + 8);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00088182u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008817Fu); } /* indirect call */
    }

loc_00088182: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00088190
 * Original: 0x00088190 - 0x000881AF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00088190: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000881AC; /* je: equal / zero */

loc_0008819A: ;
    eax = MEM32(eax + 4);
    edx = MEM32(eax + 0x16C);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00114260(); return; /* tail jmp 0x00114260 */

loc_000881AC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000881B0
 * Original: 0x000881B0 - 0x000881C4 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000881B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000881B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC4)); return; /* indirect tail jmp */

}

/**
 * sub_000881D0
 * Original: 0x000881D0 - 0x000881D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000881D0(void)
{

loc_000881D0: ;
    eax = MEM32(esp + 4);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000881E0
 * Original: 0x000881E0 - 0x000881FC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000881E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000881E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xE95A860);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7ECDD775);
    PUSH32(esp, 0x000881F8u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_000881F8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00088200
 * Original: 0x00088200 - 0x00088227 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088200: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xE95A860);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x16C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7ECDD775);
    PUSH32(esp, 0x00088220u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_00088220: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00088230
 * Original: 0x00088230 - 0x00088243 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088230(void)
{

loc_00088230: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0008823Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088236u); } /* indirect call */
    }

loc_0008823C: ;
    eax = MEM32(eax + 0x39A4);
    esp += 4; return; /* ret */

}

/**
 * sub_00088250
 * Original: 0x00088250 - 0x000882C3 (115 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088250: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_BE(_fa, _fb)) goto loc_000882A5; /* jbe: below or equal (unsigned <=) */

loc_0008826C: ;
    /* nop */

loc_00088270: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00088276u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00088276: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088283u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008827Du); } /* indirect call */
    }

loc_00088283: ;
    ecx = MEM32(eax + edi * 4 + 0x3984);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088294; /* je: equal / zero */

loc_0008828E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00088294u); RECOMP_ABI_CALL(0x001639A0u, sub_001639A0); /* call 0x001639A0 */

loc_00088294: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1ED0));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088270; /* jl: less (signed <) */

loc_000882A5: ;
    eax = MEM32(0x51D660);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000882BF; /* je: equal / zero */

loc_000882AE: ;
    ecx = MEM32(eax + edi * 4 + 0x3560);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000882BF; /* je: equal / zero */

loc_000882B9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000882BFu); RECOMP_ABI_CALL(0x001639A0u, sub_001639A0); /* call 0x001639A0 */

loc_000882BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000882D0
 * Original: 0x000882D0 - 0x00088343 (115 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000882D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000882D0: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_BE(_fa, _fb)) goto loc_00088325; /* jbe: below or equal (unsigned <=) */

loc_000882EC: ;
    /* nop */

loc_000882F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000882F6u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_000882F6: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088303u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000882FDu); } /* indirect call */
    }

loc_00088303: ;
    ecx = MEM32(eax + edi * 4 + 0x3990);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088314; /* je: equal / zero */

loc_0008830E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00088314u); RECOMP_ABI_CALL(0x001639A0u, sub_001639A0); /* call 0x001639A0 */

loc_00088314: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1ED0));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000882F0; /* jl: less (signed <) */

loc_00088325: ;
    eax = MEM32(0x51D660);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008833F; /* je: equal / zero */

loc_0008832E: ;
    ecx = MEM32(eax + edi * 4 + 0x356C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008833F; /* je: equal / zero */

loc_00088339: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008833Fu); RECOMP_ABI_CALL(0x001639A0u, sub_001639A0); /* call 0x001639A0 */

loc_0008833F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00088350
 * Original: 0x00088350 - 0x000883EE (158 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00088350: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_BE(_fa, _fb)) goto loc_000883B9; /* jbe: below or equal (unsigned <=) */

loc_0008836F: ;
    /* nop */

loc_00088370: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00088376u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00088376: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088383u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008837Du); } /* indirect call */
    }

loc_00088383: ;
    eax = MEM32(eax + edi * 4 + 0x3984);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000883A8; /* je: equal / zero */

loc_0008838E: ;
    ecx = MEM32(ebp);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0xC) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = 1;

loc_000883A8: ;
    eax = MEM32(0x3888C0);
    ecx = ZX8(MEM8(eax + 0x1ED0));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088370; /* jl: less (signed <) */

loc_000883B9: ;
    eax = MEM32(0x51D660);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000883E7; /* je: equal / zero */

loc_000883C2: ;
    eax = MEM32(eax + edi * 4 + 0x3560);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000883E7; /* je: equal / zero */

loc_000883CD: ;
    ecx = MEM32(ebp);
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = HI8(ecx);
    MEM32(esp + 0xC) = ecx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM8(eax + 0x4B) = HI8(ecx);
    MEM8(eax + 0x73) = 1;

loc_000883E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000883F0
 * Original: 0x000883F0 - 0x000884A6 (182 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000883F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000883F0: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00088463; /* jbe: below or equal (unsigned <=) */

loc_00088410: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00088416u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00088416: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088423u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008841Du); } /* indirect call */
    }

loc_00088423: ;
    esi = MEM32(eax + ebx * 4 + 0x3990);
    eax = esp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088435u); RECOMP_ABI_CALL(0x00083ED0u, sub_00083ED0); /* call 0x00083ED0 */

loc_00088435: ;
    eax = MEM32(eax);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    MEM32(esp + 0x1C) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = HI8(eax);
    MEM8(esi + 0x73) = 1;
    ecx = MEM32(0x3888C0);
    edx = ZX8(MEM8(ecx + 0x1ED0));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088410; /* jl: less (signed <) */

loc_00088463: ;
    eax = MEM32(0x51D660);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008849E; /* je: equal / zero */

loc_0008846C: ;
    esi = MEM32(eax + ebx * 4 + 0x356C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008849E; /* je: equal / zero */

loc_00088477: ;
    eax = esp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088482u); RECOMP_ABI_CALL(0x00083ED0u, sub_00083ED0); /* call 0x00083ED0 */

loc_00088482: ;
    eax = MEM32(eax);
    MEM8(esi + 0x48) = LO8(eax);
    MEM8(esi + 0x49) = HI8(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esi + 0x4A) = LO8(eax);
    MEM8(esi + 0x4B) = HI8(eax);
    MEM8(esi + 0x73) = 1;

loc_0008849E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000884B0
 * Original: 0x000884B0 - 0x0008857F (207 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000884B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000884B0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = 0xFC;
    /* nop */

loc_000884C0: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008855E; /* je: equal / zero */

loc_000884CE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000884D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000884D0u); } /* indirect call */
    }

loc_000884D3: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x000884DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000884D9u); } /* indirect call */
    }

loc_000884DF: ;
    ecx = MEM32(edi + 4);
    SET_LO8(edx, MEM8(eax + ecx + 0x10C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008851E; /* jne: not equal / not zero */

loc_000884ED: ;
    ecx = esi;
    PUSH32(esp, 0x000884F4u); RECOMP_ABI_CALL(0x00114110u, sub_00114110); /* call 0x00114110 */

loc_000884F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008851E; /* je: equal / zero */

loc_000884F8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00088502u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000884FCu); } /* indirect call */
    }

loc_00088502: ;
    ecx = MEM32(edi + 4);
    MEM8(eax + ecx + 0x10C) = 1;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 0x16C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008851Eu); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008851E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00088528u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088522u); } /* indirect call */
    }

loc_00088528: ;
    ecx = MEM32(edi + 4);
    SET_LO8(edx, MEM8(eax + ecx + 0x10C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008855E; /* je: equal / zero */

loc_00088536: ;
    ecx = esi;
    PUSH32(esp, 0x0008853Du); RECOMP_ABI_CALL(0x00114110u, sub_00114110); /* call 0x00114110 */

loc_0008853D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008855E; /* jne: not equal / not zero */

loc_00088541: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0008854Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088545u); } /* indirect call */
    }

loc_0008854B: ;
    ecx = MEM32(edi + 4);
    MEM8(eax + ecx + 0x10C) = 0;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0008855Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008855Bu); } /* indirect call */
    }

loc_0008855E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x10C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000884C0; /* jl: less (signed <) */

loc_0008856D: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00088579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088576u); } /* indirect call */
    }

loc_00088579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088580
 * Original: 0x00088580 - 0x000885ED (109 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0xFC);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000885A0; /* jne: not equal / not zero */

loc_0008859A: ;
    MEM32(eax) = 0;

loc_000885A0: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000885AC; /* jne: not equal / not zero */

loc_000885A5: ;
    MEM32(eax + 4) = 0;

loc_000885AC: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000885B8; /* jne: not equal / not zero */

loc_000885B1: ;
    MEM32(eax + 8) = 0;

loc_000885B8: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000885C4; /* jne: not equal / not zero */

loc_000885BD: ;
    MEM32(eax + 0xC) = 0;

loc_000885C4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000885CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000885C8u); } /* indirect call */
    }

loc_000885CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000885E0; /* je: equal / zero */

loc_000885CF: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 0x16C);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000885E0u); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_000885E0: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000885E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000885E5u); } /* indirect call */
    }

loc_000885E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000885F0
 * Original: 0x000885F0 - 0x000886C9 (217 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000885F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000885F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    ebx = 0xFC;
    goto loc_00088600;

    /* nop */

loc_00088600: ;
    eax = MEM32(ebp + 4);
    esi = MEM32(ebx + eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000886A8; /* je: equal / zero */

loc_0008860E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00088615u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088612u); } /* indirect call */
    }

loc_00088615: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088644; /* je: equal / zero */

loc_00088619: ;
    SET_LO8(ecx, MEM8(eax + 0x3B8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088644; /* je: equal / zero */

loc_00088623: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00088630: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008863C; /* jne: not equal / not zero */

loc_00088635: ;
    MEM32(ecx + eax * 4) = 0;

loc_0008863C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088630; /* jl: less (signed <) */

loc_00088642: ;
    goto loc_000886A8;

loc_00088644: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008865A; /* je: equal / zero */

loc_0008864C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00088656u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088650u); } /* indirect call */
    }

loc_00088656: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000886A8; /* jne: not equal / not zero */

loc_0008865A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00088661u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008865Eu); } /* indirect call */
    }

loc_00088661: ;
    ecx = eax;
    PUSH32(esp, 0x00088668u); RECOMP_ABI_CALL(0x00115990u, sub_00115990); /* call 0x00115990 */

loc_00088668: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0xD1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0008867Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088677u); } /* indirect call */
    }

loc_0008867D: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00088688u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00088688: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000886A8; /* je: equal / zero */

loc_0008868C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00088693u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088690u); } /* indirect call */
    }

loc_00088693: ;
    ecx = eax;
    PUSH32(esp, 0x0008869Au); RECOMP_ABI_CALL(0x00114110u, sub_00114110); /* call 0x00114110 */

loc_0008869A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000886A8; /* jne: not equal / not zero */

loc_0008869E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000886A8; /* je: equal / zero */

loc_000886A2: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000886C0; /* je: equal / zero */

loc_000886A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088600; /* jl: less (signed <) */

loc_000886B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000886C0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000886D0
 * Original: 0x000886D0 - 0x000886F7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000886D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000886D0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_000886E0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000886F2; /* je: equal / zero */

loc_000886E4: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000886E0; /* jl: less (signed <) */

loc_000886ED: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000886F2: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088700
 * Original: 0x00088700 - 0x0008875C (92 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00088700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = MEM32(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00088711: ;
    esi = MEM32(ebx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008874F; /* je: equal / zero */

loc_00088718: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008871Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008871Cu); } /* indirect call */
    }

loc_0008871F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008874F; /* je: equal / zero */

loc_00088723: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0008872Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088727u); } /* indirect call */
    }

loc_0008872D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008874F; /* jne: not equal / not zero */

loc_00088733: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008873Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088737u); } /* indirect call */
    }

loc_0008873A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008874F; /* je: equal / zero */

loc_0008873E: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx + 0x16C);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0008874Fu); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0008874F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088711; /* jl: less (signed <) */

loc_00088755: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088760
 * Original: 0x00088760 - 0x0008877C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00088760: ;
    eax = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x158)); /* movss */
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x158;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00088779; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_00088776: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00088779: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00088780
 * Original: 0x00088780 - 0x000887AA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088780: ;
    eax = MEM32(0x3C37B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00088790; /* je: equal / zero */

loc_0008878C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000887A6; /* jne: not equal / not zero */

loc_00088790: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0xD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000887A0u); RECOMP_ABI_CALL(0x000884B0u, sub_000884B0); /* call 0x000884B0 */

loc_000887A0: ;
    MEM32(esi + 0xD8) = eax;

loc_000887A6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000887B0
 * Original: 0x000887B0 - 0x00088805 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000887B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000887B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x000887C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000887BDu); } /* indirect call */
    }

loc_000887C3: ;
    ebx = MEM32(0x3E8D50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000887FF; /* jle: less or equal (signed <=) */

loc_000887CF: ;
    /* nop */

loc_000887D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000887D6u); RECOMP_ABI_CALL(0x00130650u, sub_00130650); /* call 0x00130650 */

loc_000887D6: ;
    ecx = MEM32(eax + 0x3980);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000887FA; /* je: equal / zero */

loc_000887E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = edi + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, 0xD1048261u);
    PUSH32(esp, 0x000887FAu); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_000887FA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000887D0; /* jl: less (signed <) */

loc_000887FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088810
 * Original: 0x00088810 - 0x00088878 (104 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088810: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x00088823u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008881Du); } /* indirect call */
    }

loc_00088823: ;
    edi = MEM32(0x3E8D50);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008884E; /* jle: less or equal (signed <=) */

loc_0008882F: ;
    /* nop */

loc_00088830: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00088836u); RECOMP_ABI_CALL(0x00130650u, sub_00130650); /* call 0x00130650 */

loc_00088836: ;
    ecx = MEM32(eax + 0x3980);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xD1048261u);
    PUSH32(esp, 0x00088849u); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_00088849: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088830; /* jl: less (signed <) */

loc_0008884E: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088858u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088852u); } /* indirect call */
    }

loc_00088858: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088872; /* je: equal / zero */

loc_0008885C: ;
    PUSH32(esp, 0x4ADCDA60);
    PUSH32(esp, 0x00088866u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00088866: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0008886Fu); RECOMP_ABI_CALL(0x0015FEB0u, sub_0015FEB0); /* call 0x0015FEB0 */

loc_0008886F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00088872: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00088880
 * Original: 0x00088880 - 0x00088929 (169 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088880(void)
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

loc_00088880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0xB4);
    PUSH32(esp, esi);
    esi = ecx + 0xB4;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000888A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008889Du); } /* indirect call */
    }

loc_000888A0: ;
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000888A8u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_000888A8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000888AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000888ACu); } /* indirect call */
    }

loc_000888AF: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x1664515A);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000888BFu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000888BF: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000888CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000888C7u); } /* indirect call */
    }

loc_000888CA: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xD28AC85Fu);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000888DAu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000888DA: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000888EEu); RECOMP_ABI_CALL(0x00182440u, sub_00182440); /* call 0x00182440 */

loc_000888EE: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x50) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0008890A; /* je: equal / zero */

loc_00088905: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008890C;

loc_0008890A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008890C: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x5C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088919u); RECOMP_ABI_CALL(0x00183050u, sub_00183050); /* call 0x00183050 */

loc_00088919: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088922u); RECOMP_ABI_CALL(0x00182520u, sub_00182520); /* call 0x00182520 */

loc_00088922: ;
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
 * sub_00088930
 * Original: 0x00088930 - 0x00088959 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088930(void)
{

loc_00088930: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xF4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00088944u); RECOMP_ABI_CALL(0x00088700u, sub_00088700); /* call 0x00088700 */

loc_00088944: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0xF8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00088955u); RECOMP_ABI_CALL(0x00088700u, sub_00088700); /* call 0x00088700 */

loc_00088955: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00088960
 * Original: 0x00088960 - 0x000889E4 (132 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088960: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00088971u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008896Eu); } /* indirect call */
    }

loc_00088971: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000889BC; /* je: equal / zero */

loc_00088975: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088986u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088980u); } /* indirect call */
    }

loc_00088986: ;
    ecx = MEM32(eax + 0x39A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088999; /* je: equal / zero */

loc_00088990: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00088999u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00088999: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000889A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000889A4u); } /* indirect call */
    }

loc_000889A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000889BC; /* je: equal / zero */

loc_000889AB: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x16C);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000889BCu); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_000889BC: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000889D3; /* je: equal / zero */

loc_000889C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000889C9u); RECOMP_ABI_CALL(0x00084780u, sub_00084780); /* call 0x00084780 */

loc_000889C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;

loc_000889D3: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 0x130) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000889F0
 * Original: 0x000889F0 - 0x00088BC3 (467 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000889F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000889F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fa != 0)) goto loc_00088B99; /* jne: not equal / not zero */

loc_00088A01: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x169));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088B99; /* jne: not equal / not zero */

loc_00088A12: ;
    ecx = eax;
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088A22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088A1Cu); } /* indirect call */
    }

loc_00088A22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088AA0; /* je: equal / zero */

loc_00088A26: ;
    _fa = (uint32_t)(MEM32(0x389414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x389414), 0xC (32-bit) */
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00088A54; /* jne: not equal / not zero */

loc_00088A3C: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088A42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088A3Cu); } /* indirect call */
    }

loc_00088A42: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xF0);
    edi = MEM32(eax + edx * 4 + 0x3990);
    goto loc_00088A6A;

loc_00088A54: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088A5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088A54u); } /* indirect call */
    }

loc_00088A5A: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xF4);
    edi = MEM32(eax + edx * 4 + 0x3984);

loc_00088A6A: ;
    ecx = MEM32(ecx + 0x130);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00088A78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088A72u); } /* indirect call */
    }

loc_00088A78: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ecx);
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088A8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088A85u); } /* indirect call */
    }

loc_00088A8B: ;
    ecx = MEM32(eax + 0x39AC);
    _fb = (uint32_t)(0x424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x424;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00088A9Eu); RECOMP_ABI_CALL(0x001641D0u, sub_001641D0); /* call 0x001641D0 */

loc_00088A9E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00088AA0: ;
    eax = MEM32(0x389414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088AC0; /* jne: not equal / not zero */

loc_00088AAA: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00088ABBu); RECOMP_ABI_CALL(0x00082C20u, sub_00082C20); /* call 0x00082C20 */

loc_00088ABB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00088ACF;

loc_00088AC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088AD8; /* jne: not equal / not zero */

loc_00088AC5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00088ACCu); RECOMP_ABI_CALL(0x00083610u, sub_00083610); /* call 0x00083610 */

loc_00088ACC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00088ACF: ;
    _fa = (uint32_t)(MEM32(0x389414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x389414), 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088B17; /* je: equal / zero */

loc_00088AD8: ;
    eax = MEM32(esi + 4);
    edx = MEM32(eax + 0x15C);
    eax = MEM32(eax + 0xF4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088AEEu); RECOMP_ABI_CALL(0x00088250u, sub_00088250); /* call 0x00088250 */

loc_00088AEE: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xF8);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088B02u); RECOMP_ABI_CALL(0x00083ED0u, sub_00083ED0); /* call 0x00083ED0 */

loc_00088B02: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xF4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088B12u); RECOMP_ABI_CALL(0x00088350u, sub_00088350); /* call 0x00088350 */

loc_00088B12: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00088B46;

loc_00088B17: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x15C);
    edx = MEM32(eax + 0xF0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088B2Du); RECOMP_ABI_CALL(0x000882D0u, sub_000882D0); /* call 0x000882D0 */

loc_00088B2D: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xF8);
    edx = MEM32(eax + 0xF0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088B43u); RECOMP_ABI_CALL(0x000883F0u, sub_000883F0); /* call 0x000883F0 */

loc_00088B43: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00088B46: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x6C);
    SET_LO8(eax, 0xFF);
    PUSH32(esp, 0);
    MEM8(esp + 0x18) = LO8(eax);
    MEM8(esp + 0x19) = LO8(eax);
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x1B) = 0xC8;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088B77u); RECOMP_ABI_CALL(0x00165D20u, sub_00165D20); /* call 0x00165D20 */

loc_00088B77: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x16A));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088B99; /* je: equal / zero */

loc_00088B87: ;
    ecx = eax;
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x00088B99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088B93u); } /* indirect call */
    }

loc_00088B99: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088BAA; /* je: equal / zero */

loc_00088BA1: ;
    ecx = MEM32(esi + 4);
    MEM32(ecx + 0x130) = eax;

loc_00088BAA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00088BB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088BAEu); } /* indirect call */
    }

loc_00088BB1: ;
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00088BBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088BB9u); } /* indirect call */
    }

loc_00088BBC: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00088BD0
 * Original: 0x00088BD0 - 0x00088BF9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088BD0(void)
{

loc_00088BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xF8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00088BE4u); RECOMP_ABI_CALL(0x00088700u, sub_00088700); /* call 0x00088700 */

loc_00088BE4: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0xF4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00088BF5u); RECOMP_ABI_CALL(0x00088700u, sub_00088700); /* call 0x00088700 */

loc_00088BF5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00088C00
 * Original: 0x00088C00 - 0x00088C6D (109 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00088C11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088C0Eu); } /* indirect call */
    }

loc_00088C11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088C5C; /* je: equal / zero */

loc_00088C15: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00088C26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088C20u); } /* indirect call */
    }

loc_00088C26: ;
    ecx = MEM32(eax + 0x39A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088C39; /* je: equal / zero */

loc_00088C30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00088C39u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00088C39: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00088C47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088C44u); } /* indirect call */
    }

loc_00088C47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088C5C; /* je: equal / zero */

loc_00088C4B: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x16C);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00088C5Cu); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_00088C5C: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 0x130) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00088C70
 * Original: 0x00088C70 - 0x00088D5E (238 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088C70: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fa != 0)) goto loc_00088D35; /* jne: not equal / not zero */

loc_00088C80: ;
    PUSH32(esp, 0xCF92761Fu);
    PUSH32(esp, 0x00088C8Au); RECOMP_ABI_CALL(0x00084720u, sub_00084720); /* call 0x00084720 */

loc_00088C8A: ;
    eax = MEM32(0x389414);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088CAD; /* jne: not equal / not zero */

loc_00088C97: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00088CA8u); RECOMP_ABI_CALL(0x00082C20u, sub_00082C20); /* call 0x00082C20 */

loc_00088CA8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00088CBC;

loc_00088CAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088CBC; /* jne: not equal / not zero */

loc_00088CB2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00088CB9u); RECOMP_ABI_CALL(0x00083610u, sub_00083610); /* call 0x00083610 */

loc_00088CB9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00088CBC: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x16A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088CF2; /* jne: not equal / not zero */

loc_00088CC9: ;
    edx = MEM32(eax + 0xF4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00088CD5u); RECOMP_ABI_CALL(0x00083720u, sub_00083720); /* call 0x00083720 */

loc_00088CD5: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088CF2; /* je: equal / zero */

loc_00088CDF: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xF0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00088CF0u); RECOMP_ABI_CALL(0x000882D0u, sub_000882D0); /* call 0x000882D0 */

loc_00088CF0: ;
    goto loc_00088D03;

loc_00088CF2: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0xF4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088D03u); RECOMP_ABI_CALL(0x00088250u, sub_00088250); /* call 0x00088250 */

loc_00088D03: ;
    edx = MEM32(esi + 4);
    SET_LO8(eax, 0xFF);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x11) = LO8(eax);
    MEM8(esp + 0x12) = LO8(eax);
    MEM8(esp + 0x13) = LO8(eax);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x6C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088D32u); RECOMP_ABI_CALL(0x00165D20u, sub_00165D20); /* call 0x00165D20 */

loc_00088D32: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00088D35: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088D46; /* je: equal / zero */

loc_00088D3D: ;
    ecx = MEM32(esi + 4);
    MEM32(ecx + 0x130) = eax;

loc_00088D46: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00088D4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088D4Au); } /* indirect call */
    }

loc_00088D4D: ;
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00088D58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088D55u); } /* indirect call */
    }

loc_00088D58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00088D60
 * Original: 0x00088D60 - 0x00088DA3 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088D60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00088D71; /* je: equal / zero */

loc_00088D69: ;
    esi = eax + -176;
    goto loc_00088D73;

loc_00088D71: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00088D73: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00088D7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088D79u); } /* indirect call */
    }

loc_00088D7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088DA1; /* je: equal / zero */

loc_00088D80: ;
    ecx = MEM32(eax + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00088D8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088D85u); } /* indirect call */
    }

loc_00088D8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088DA1; /* je: equal / zero */

loc_00088D8F: ;
    ecx = MEM32(esi + 0xD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00088D9Bu); RECOMP_ABI_CALL(0x00088580u, sub_00088580); /* call 0x00088580 */

loc_00088D9B: ;
    MEM32(esi + 0xD8) = eax;

loc_00088DA1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00088DB0
 * Original: 0x00088DB0 - 0x00088ED9 (297 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088DB0: ;
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
    edx = MEM32(esi + 0xB4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi + 0xB4;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00088DD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088DCFu); } /* indirect call */
    }

loc_00088DD2: ;
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088DDAu); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_00088DDA: ;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(eax + 0xF8);
    eax = MEM32(0x3E8D50);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00088E49; /* jle: less or equal (signed <=) */

loc_00088DFD: ;
    /* nop */

loc_00088E00: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088E06u); RECOMP_ABI_CALL(0x00130650u, sub_00130650); /* call 0x00130650 */

loc_00088E06: ;
    edi = MEM32(eax + 0x3980);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088E3C; /* je: equal / zero */

loc_00088E13: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esi + 0xD0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088E2Cu); RECOMP_ABI_CALL(0x00165340u, sub_00165340); /* call 0x00165340 */

loc_00088E2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088E38u); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_00088E38: ;
    ebx = MEM32(esp + 0x14);

loc_00088E3C: ;
    eax = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00088E00; /* jl: less (signed <) */

loc_00088E49: ;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(eax + 0xF4);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088E5Bu); RECOMP_ABI_CALL(0x00083720u, sub_00083720); /* call 0x00083720 */

loc_00088E5B: ;
    edx = MEM32(esi + 0xD0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088E6Eu); RECOMP_ABI_CALL(0x00083750u, sub_00083750); /* call 0x00083750 */

loc_00088E6E: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088ED2; /* jne: not equal / not zero */

loc_00088E73: ;
    eax = MEM32(esi + 0xD4);
    SET_LO8(ecx, MEM8(eax + 0x16A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088ED2; /* je: equal / zero */

loc_00088E83: ;
    eax = MEM32(0x3E8D54);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00088EC2; /* jle: less or equal (signed <=) */

loc_00088E8E: ;
    edi = edi;

loc_00088E90: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088E96u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00088E96: ;
    edx = MEM32(eax + 0x30);
    ecx = eax + 0x30;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00088EA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088E9Fu); } /* indirect call */
    }

loc_00088EA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00088EB8; /* je: equal / zero */

loc_00088EA6: ;
    ecx = MEM32(esi + 0xD4);
    edx = MEM32(ecx + 0xF4);
    MEM32(eax + 0x1518) = edx;

loc_00088EB8: ;
    eax = MEM32(0x3E8D54);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088E90; /* jl: less (signed <) */

loc_00088EC2: ;
    MEM32(0x3C37B4) = esi;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00088ED2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088ECCu); } /* indirect call */
    }

loc_00088ED2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00088EE0
 * Original: 0x00088EE0 - 0x00088F5C (124 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00088EE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 4);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00088EF6u); RECOMP_ABI_CALL(0x00079100u, sub_00079100); /* call 0x00079100 */

loc_00088EF6: ;
    eax = MEM32(0x3E8D54);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00088F3B; /* jle: less or equal (signed <=) */

loc_00088F03: ;
    PUSH32(esp, edi);

loc_00088F04: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00088F0Au); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_00088F0A: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    edi = MEM32(eax + 0xD4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00088F23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088F1Du); } /* indirect call */
    }

loc_00088F23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00088F30; /* jne: not equal / not zero */

loc_00088F2B: ;
    MEM32(esp + ebp * 4 + 0x14) = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00088F30: ;
    eax = MEM32(0x3E8D54);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00088F04; /* jl: less (signed <) */

loc_00088F3A: ;
    POP32(esp, edi);

loc_00088F3B: ;
    PUSH32(esp, 0x00088F40u); RECOMP_ABI_CALL(0x002BE66Cu, sub_002BE66C); /* call 0x002BE66C */

loc_00088F40: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    esi = MEM32(esp + edx * 4 + 0x14);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x00088F53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00088F4Du); } /* indirect call */
    }

loc_00088F53: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00088F60
 * Original: 0x00088F60 - 0x00089027 (199 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00088F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00088F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi + 0x90;
    esi = ecx;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00088FF3u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00088FF3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, 0xD1048261u);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00089014u); RECOMP_ABI_CALL(0x00037CD0u, sub_00037CD0); /* call 0x00037CD0 */

loc_00089014: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008901Fu); RECOMP_ABI_CALL(0x000887B0u, sub_000887B0); /* call 0x000887B0 */

loc_0008901F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089030
 * Original: 0x00089030 - 0x0008904B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089030: ;
    eax = MEM32(ecx + 0xD4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xD8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00089050
 * Original: 0x00089050 - 0x00089063 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089050(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00089050: ;
    eax = MEM32(ecx + 0xD4);
    fp_push(MEMF(eax + 0x15C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x158)); /* fsub dword ptr [eax + 0x158] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00089070
 * Original: 0x00089070 - 0x00089094 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089070: ;
    eax = MEM32(ecx + 0xD4);
    ecx = MEM32(eax + 0x16C);
    PUSH32(esp, 0x3C4D2B47);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4F1066FB);
    PUSH32(esp, 0x00089090u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_00089090: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000890A0
 * Original: 0x000890A0 - 0x000890DF (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000890A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000890A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000890B1; /* je: equal / zero */

loc_000890A9: ;
    esi = eax + -176;
    goto loc_000890B3;

loc_000890B1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000890B3: ;
    ecx = esi;
    PUSH32(esp, 0x000890BAu); RECOMP_ABI_CALL(0x00088DB0u, sub_00088DB0); /* call 0x00088DB0 */

loc_000890BA: ;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(eax + 0x16C);
    PUSH32(esp, 0xE95A860);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF40CCD04u);
    PUSH32(esp, 0x000890DAu); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_000890DA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000890E0
 * Original: 0x000890E0 - 0x0008920E (302 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000890E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000890E0: ;
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
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0xA8) = edi;
    MEM32(esp + 0xAC) = edi;
    MEM32(esp + 0xB0) = edi;
    MEM32(esp + 0xA4) = 0x2FF02C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008911Cu); RECOMP_ABI_CALL(0x000EEBB0u, sub_000EEBB0); /* call 0x000EEBB0 */

loc_0008911C: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000891E2; /* je: equal / zero */

loc_00089127: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008912Eu); RECOMP_ABI_CALL(0x00114110u, sub_00114110); /* call 0x00114110 */

loc_0008912E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000891E2; /* jne: not equal / not zero */

loc_00089136: ;
    edi = MEM32(esi + 4);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(edi + 0x16C);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0008915C; /* je: equal / zero */

loc_0008914A: ;
    edx = esp + 0x22;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00089152: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089152; /* jne: not equal / not zero */

loc_0008915C: ;
    MEM32(esp + 0x14) = 7;
    MEM32(esp + 0x18) = 2;
    edx = MEM32(edi + 0x16C);
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00089182u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_00089182: ;
    ecx = MEM32(esp + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = ebx + 0x30;
    if (CMP_EQ(_fa, _fb)) goto loc_0008919D; /* je: equal / zero */

loc_00089190: ;
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008919Du); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0008919D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xA8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000891B7; /* je: equal / zero */

loc_000891A8: ;
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000891B7u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_000891B7: ;
    edi = 0x3021CE;
    ecx = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000891CF; /* je: equal / zero */

loc_000891C7: ;
    MEM32(esp + 0x1C) = 0x3E4467B9;

loc_000891CF: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM8(esp + 0x25) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000891E0u); RECOMP_ABI_CALL(0x00114250u, sub_00114250); /* call 0x00114250 */

loc_000891E0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000891E2: ;
    ecx = MEM32(esp + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0xA4) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00089205; /* je: equal / zero */

loc_000891F8: ;
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00089205u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00089205: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00089210
 * Original: 0x00089210 - 0x0008923E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089210: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00089239; /* je: equal / zero */

loc_0008921C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00089226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089220u); } /* indirect call */
    }

loc_00089226: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089239; /* jne: not equal / not zero */

loc_0008922C: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00089239u); RECOMP_ABI_CALL(0x000890E0u, sub_000890E0); /* call 0x000890E0 */

loc_00089239: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00089240
 * Original: 0x00089240 - 0x00089294 (84 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = MEM32(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00089251: ;
    esi = MEM32(ebx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089287; /* je: equal / zero */

loc_00089258: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008925Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008925Cu); } /* indirect call */
    }

loc_0008925F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089287; /* je: equal / zero */

loc_00089263: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0008926Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089267u); } /* indirect call */
    }

loc_0008926D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089287; /* jne: not equal / not zero */

loc_00089273: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008927Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008927Cu); } /* indirect call */
    }

loc_0008927F: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00089287u); RECOMP_ABI_CALL(0x000890E0u, sub_000890E0); /* call 0x000890E0 */

loc_00089287: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089251; /* jl: less (signed <) */

loc_0008928D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000892A0
 * Original: 0x000892A0 - 0x00089355 (181 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000892A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000892A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000892AAu); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000892AA: ;
    esi = edi + 0xB0;
    MEM32(esi + 4) = 0x2FF764;
    MEM32(esi + 8) = 0;
    ecx = esi + 0xC;
    MEM32(esi) = 0x3097B4;
    MEM32(esi + 4) = 0x30803C;
    PUSH32(esp, 0x000892D3u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000892D3: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    MEM32(edi + 0xD0) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edi) = 0x308EB8;
    MEM32(edi + 8) = 0x308EAC;
    MEM32(esi) = 0x308E9C;
    MEM32(edi + 0xB4) = 0x308E84;
    MEM32(edi + 0xD4) = ecx;
    edx = ecx;
    ebx = esi + 0xC;
    MEM32(edi + 0xD8) = edx;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x0008931Eu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_0008931E: ;
    PUSH32(esp, 0x308D84);
    ecx = ebx;
    PUSH32(esp, 0x0008932Au); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0008932A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089342; /* je: equal / zero */

loc_0008932E: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089337u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00089337: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00089342: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008934Au); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_0008934A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00089360
 * Original: 0x00089360 - 0x000893F2 (146 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089360: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x308EB8;
    MEM32(esi + 8) = 0x308EAC;
    MEM32(esi + 0xB0) = 0x308E9C;
    MEM32(esi + 0xB4) = 0x308E84;
    if (CMP_EQ(_fa, _fb)) goto loc_000893AE; /* je: equal / zero */

loc_0008938F: ;
    ecx = 0x308DA0;
    PUSH32(esp, eax);
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000893ABu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000893AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000893AE: ;
    edi = esi + 0xB4;
    PUSH32(esp, edi);
    MEM32(esi + 0xB0) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000893CAu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000893CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xBC;
    PUSH32(esp, 0x000893D8u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000893D8: ;
    ecx = edi;
    PUSH32(esp, 0x000893DFu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000893DF: ;
    POP32(esp, edi);
    MEM32(esi + 0xB0) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_00089400
 * Original: 0x00089400 - 0x000894E3 (227 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00089400: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x130) = ebx;
    ecx = MEM32(esi + 4);
    MEM32(ecx + 0x134) = ebx;
    edx = MEM32(esi + 4);
    MEM8(esi + 8) = LO8(ebx);
    MEMF(edx + 0x158) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 4);
    PUSH32(esp, 0x41C4627B);
    MEM8(eax + 0x168) = LO8(ebx);
    PUSH32(esp, 0x0008943Cu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0008943C: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xF4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00089451u); RECOMP_ABI_CALL(0x00089240u, sub_00089240); /* call 0x00089240 */

loc_00089451: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x154); /* comiss */
    if ((_fca >= _fcb)) goto loc_0008947A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x154)) */

loc_00089465: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000894B7; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008946D: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x154); /* divss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000894B7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0008947A: ;
    _fa = (uint32_t)(MEM8(eax + 0x16A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x16A), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089498; /* je: equal / zero */

loc_00089482: ;
    eax = MEM32(eax + 0xF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008948Eu); RECOMP_ABI_CALL(0x00083720u, sub_00083720); /* call 0x00083720 */

loc_0008948E: ;
    SET_LO8(ecx, MEM8(eax + 9));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000894B7; /* jne: not equal / not zero */

loc_00089498: ;
    PUSH32(esp, 0x7FFED69F);
    PUSH32(esp, 0x000894A2u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000894A2: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xF8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000894B7u); RECOMP_ABI_CALL(0x00089240u, sub_00089240); /* call 0x00089240 */

loc_000894B7: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x16C);
    PUSH32(esp, 0xE95A860);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x926E82C0u);
    PUSH32(esp, 0x000894D2u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_000894D2: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    MEM8(edx + 0x169) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000894F0
 * Original: 0x000894F0 - 0x000895C1 (209 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000894F0(void)
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

loc_000894F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00089501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000894FEu); } /* indirect call */
    }

loc_00089501: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000895BA; /* je: equal / zero */

loc_0008950B: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0xF4);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00089520u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008951Au); } /* indirect call */
    }

loc_00089520: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089560; /* jne: not equal / not zero */

loc_00089524: ;
    PUSH32(esp, 0x41C4627B);
    PUSH32(esp, 0x0008952Eu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0008952E: ;
    ebx = eax;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x16A));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008954E; /* je: equal / zero */

loc_00089540: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x0008954Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089544u); } /* indirect call */
    }

loc_0008954A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000895B8; /* je: equal / zero */

loc_0008954E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00089557u); RECOMP_ABI_CALL(0x000890E0u, sub_000890E0); /* call 0x000890E0 */

loc_00089557: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00089560: ;
    SET_LO8(eax, MEM8(ebx + 0x16A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008957A; /* je: equal / zero */

loc_0008956A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00089570u); RECOMP_ABI_CALL(0x00083720u, sub_00083720); /* call 0x00083720 */

loc_00089570: ;
    SET_LO8(ecx, MEM8(eax + 9));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000895B8; /* jne: not equal / not zero */

loc_0008957A: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca >= _fcb)) goto loc_000895A2; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_00089590: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000895B8; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00089598: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 4); /* divss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000895B8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000895A2: ;
    PUSH32(esp, 0x7FFED69F);
    PUSH32(esp, 0x000895ACu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000895AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000895B8u); RECOMP_ABI_CALL(0x000890E0u, sub_000890E0); /* call 0x000890E0 */

loc_000895B8: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000895BA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000895D0
 * Original: 0x000895D0 - 0x00089729 (345 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000895D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000895D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    MEM32(eax + 0x134) = ecx;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x130);
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x000895FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000895FAu); } /* indirect call */
    }

loc_000895FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089631; /* je: equal / zero */

loc_00089601: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00089610: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089631; /* je: equal / zero */

loc_00089615: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089610; /* jl: less (signed <) */

loc_0008961B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00089620: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008962E; /* je: equal / zero */

loc_00089626: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089620; /* jl: less (signed <) */

loc_0008962C: ;
    goto loc_00089631;

loc_0008962E: ;
    MEM32(ecx + edx * 4) = eax;

loc_00089631: ;
    ecx = MEM32(esi + 4);
    MEM8(esi + 8) = 0;
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00089643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089640u); } /* indirect call */
    }

loc_00089643: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089711; /* je: equal / zero */

loc_0008964B: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0008965Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089656u); } /* indirect call */
    }

loc_0008965C: ;
    edi = MEM32(eax + 0x39A4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000896F6; /* je: equal / zero */

loc_0008966A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00089675u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00089675: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x16C);
    ecx = MEM32(edx + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000896A0u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_000896A0: ;
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000896B1u); RECOMP_ABI_CALL(0x0016D5E0u, sub_0016D5E0); /* call 0x0016D5E0 */

loc_000896B1: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000896D1; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000896C7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    goto loc_000896E2;

loc_000896D1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca > _fcb)) goto loc_000896E2; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax)) */

loc_000896D9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 4); /* divss */

loc_000896E2: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000896F6u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_000896F6: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(edx + 0x130);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3021CE);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00089709u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089706u); } /* indirect call */
    }

loc_00089709: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00089711u); RECOMP_ABI_CALL(0x000890E0u, sub_000890E0); /* call 0x000890E0 */

loc_00089711: ;
    PUSH32(esp, 0x4C8C56F6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008971Bu); RECOMP_ABI_CALL(0x00084720u, sub_00084720); /* call 0x00084720 */

loc_0008971B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00089730
 * Original: 0x00089730 - 0x00089817 (231 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00089730: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x130) = ebx;
    ecx = MEM32(esi + 4);
    MEM32(ecx + 0x138) = ebx;
    PUSH32(esp, 0xC8815EB);
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 0x10) = LO8(ebx);
    PUSH32(esp, 0x00089758u); RECOMP_ABI_CALL(0x00084720u, sub_00084720); /* call 0x00084720 */

loc_00089758: ;
    PUSH32(esp, 0x7FFED69F);
    PUSH32(esp, 0x00089762u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00089762: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xF8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00089777u); RECOMP_ABI_CALL(0x00089240u, sub_00089240); /* call 0x00089240 */

loc_00089777: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca >= _fcb)) goto loc_000897CA; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0008978D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca > _fcb)) goto loc_000897AB; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax)) */

loc_00089795: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 4); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000897CA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000897AB: ;
    PUSH32(esp, 0x41C4627B);
    PUSH32(esp, 0x000897B5u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000897B5: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xF4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000897CAu); RECOMP_ABI_CALL(0x00089240u, sub_00089240); /* call 0x00089240 */

loc_000897CA: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x16C);
    PUSH32(esp, 0xE95A860);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x6F8947E);
    PUSH32(esp, 0x000897E5u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_000897E5: ;
    edx = MEM32(esi + 4);
    MEM8(edx + 0x169) = 1;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x16A));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089812; /* je: equal / zero */

loc_000897FF: ;
    eax = MEM32(eax + 0xF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008980Bu); RECOMP_ABI_CALL(0x00083720u, sub_00083720); /* call 0x00083720 */

loc_0008980B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 9) = 1;

loc_00089812: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00089820
 * Original: 0x00089820 - 0x000898D1 (177 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00089820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008982Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008982Cu); } /* indirect call */
    }

loc_0008982F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000898CA; /* je: equal / zero */

loc_00089837: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00089845u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008983Fu); } /* indirect call */
    }

loc_00089845: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xF8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xF8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089872; /* jne: not equal / not zero */

loc_0008984D: ;
    PUSH32(esp, 0x7FFED69F);
    PUSH32(esp, 0x00089857u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00089857: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00089862u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008985Fu); } /* indirect call */
    }

loc_00089862: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0008986Au); RECOMP_ABI_CALL(0x000890E0u, sub_000890E0); /* call 0x000890E0 */

loc_0008986A: ;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00089872: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x150)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x154); /* comiss */
    if ((_fca >= _fcb)) goto loc_000898C9; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ebx + 0x154)) */

loc_00089883: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x150); /* comiss */
    if ((_fca > _fcb)) goto loc_000898AC; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ebx + 0x150)) */

loc_0008988F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x150)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 0x154); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000898C9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000898AC: ;
    PUSH32(esp, 0x41C4627B);
    PUSH32(esp, 0x000898B6u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000898B6: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000898C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000898BEu); } /* indirect call */
    }

loc_000898C1: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000898C9u); RECOMP_ABI_CALL(0x000890E0u, sub_000890E0); /* call 0x000890E0 */

loc_000898C9: ;
    POP32(esp, ebx);

loc_000898CA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000898E0
 * Original: 0x000898E0 - 0x00089A36 (342 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000898E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000898E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    MEM32(eax + 0x138) = ecx;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x130);
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0008990Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008990Au); } /* indirect call */
    }

loc_0008990D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089941; /* je: equal / zero */

loc_00089911: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x120;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00089920: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089941; /* je: equal / zero */

loc_00089925: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089920; /* jl: less (signed <) */

loc_0008992B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00089930: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008993E; /* je: equal / zero */

loc_00089936: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089930; /* jl: less (signed <) */

loc_0008993C: ;
    goto loc_00089941;

loc_0008993E: ;
    MEM32(ecx + edx * 4) = eax;

loc_00089941: ;
    ecx = MEM32(esi + 4);
    MEM8(esi + 8) = 0;
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00089953u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089950u); } /* indirect call */
    }

loc_00089953: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089A21; /* je: equal / zero */

loc_0008995B: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0008996Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089966u); } /* indirect call */
    }

loc_0008996C: ;
    edi = MEM32(eax + 0x39A4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089A06; /* je: equal / zero */

loc_0008997A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00089985u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00089985: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 4);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x16C);
    ecx = MEM32(edx + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000899B0u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_000899B0: ;
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000899C1u); RECOMP_ABI_CALL(0x0016D5E0u, sub_0016D5E0); /* call 0x0016D5E0 */

loc_000899C1: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000899E1; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000899D7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    goto loc_000899F2;

loc_000899E1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca > _fcb)) goto loc_000899F2; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax)) */

loc_000899E9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 4); /* divss */

loc_000899F2: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00089A06u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_00089A06: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(edx + 0x130);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3021CE);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00089A19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089A16u); } /* indirect call */
    }

loc_00089A19: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00089A21u); RECOMP_ABI_CALL(0x000890E0u, sub_000890E0); /* call 0x000890E0 */

loc_00089A21: ;
    PUSH32(esp, 0xDD28CB64u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00089A2Bu); RECOMP_ABI_CALL(0x00084720u, sub_00084720); /* call 0x00084720 */

loc_00089A2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00089A40
 * Original: 0x00089A40 - 0x00089A69 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089A40: ;
    PUSH32(esp, ecx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = 0x3C37C0;
    PUSH32(esp, 0x00089A55u); RECOMP_ABI_CALL(0x00081F50u, sub_00081F50); /* call 0x00081F50 */

loc_00089A55: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3C37C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3C37C0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089A64; /* jne: not equal / not zero */

loc_00089A60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00089A64: ;
    eax = MEM32(eax + 0x14);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00089A70
 * Original: 0x00089A70 - 0x00089B20 (176 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089A70: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089B1A; /* je: equal / zero */

loc_00089A7E: ;
    PUSH32(esp, ebx);
    MEM8(edi + 0x10) = 0;
    ebx = MEM32(0x3E8D50);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00089AB4; /* jle: less or equal (signed <=) */

loc_00089A90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00089A96u); RECOMP_ABI_CALL(0x00130650u, sub_00130650); /* call 0x00130650 */

loc_00089A96: ;
    ecx = MEM32(eax + 0x3980);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089AAF; /* je: equal / zero */

loc_00089AA3: ;
    eax = MEM32(edi + 4);
    edx = MEM32(eax + 0x6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00089AAFu); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_00089AAF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089A90; /* jl: less (signed <) */

loc_00089AB4: ;
    eax = MEM32(edi + 4);
    edx = MEM32(0x3C37C0);
    esi = MEM32(eax + 0x6C);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00089AEC; /* je: equal / zero */

loc_00089AC9: ;
    /* nop */

loc_00089AD0: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089ADC; /* jl: less (signed <) */

loc_00089AD5: ;
    ecx = eax;
    eax = MEM32(eax + 8);
    goto loc_00089ADF;

loc_00089ADC: ;
    eax = MEM32(eax + 0xC);

loc_00089ADF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089AD0; /* jne: not equal / not zero */

loc_00089AE3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089AEC; /* je: equal / zero */

loc_00089AE7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00089AF0; /* jge: greater or equal (signed >=) */

loc_00089AEC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00089AF3;

loc_00089AF0: ;
    ecx = MEM32(ecx + 0x14);

loc_00089AF3: ;
    MEM32(0x3C37B8) = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 0x164);
    edx = MEM32(eax + 0xF8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00089B15u); RECOMP_ABI_CALL(0x00082710u, sub_00082710); /* call 0x00082710 */

loc_00089B15: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00089B1A: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089B70
 * Original: 0x00089B70 - 0x00089C3B (203 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089B70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    eax = MEM32(edi + 0x6C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = 0x3C37C0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00089B95u); RECOMP_ABI_CALL(0x00081F50u, sub_00081F50); /* call 0x00081F50 */

loc_00089B95: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3C37C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3C37C0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089BA5; /* jne: not equal / not zero */

loc_00089BA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00089BA8;

loc_00089BA5: ;
    eax = MEM32(eax + 0x14);

loc_00089BA8: ;
    ecx = MEM32(0x3C37B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089BC0; /* je: equal / zero */

loc_00089BB2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089BC0; /* je: equal / zero */

loc_00089BB6: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00089BC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00089BD0;

    /* nop */

loc_00089BD0: ;
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0xFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4 + 0xFC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089BFB; /* je: equal / zero */

loc_00089BD9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089BD0; /* jl: less (signed <) */

loc_00089BDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00089BE1: ;
    ecx = MEM32(edi + eax * 4 + 0xFC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089BF4; /* je: equal / zero */

loc_00089BEC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00089BE1; /* jl: less (signed <) */

loc_00089BF2: ;
    goto loc_00089BFB;

loc_00089BF4: ;
    MEM32(edi + eax * 4 + 0xFC) = esi;

loc_00089BFB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00089C02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089BFFu); } /* indirect call */
    }

loc_00089C02: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00089C0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089C08u); } /* indirect call */
    }

loc_00089C0B: ;
    ecx = eax;
    PUSH32(esp, 0x00089C12u); RECOMP_ABI_CALL(0x00114110u, sub_00114110); /* call 0x00114110 */

loc_00089C12: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00089C1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089C18u); } /* indirect call */
    }

loc_00089C1E: ;
    ecx = MEM32(ebp + 4);
    MEM8(eax + ecx + 0x10C) = LO8(ebx);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00089C31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089C2Eu); } /* indirect call */
    }

loc_00089C31: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089C40
 * Original: 0x00089C40 - 0x00089C91 (81 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089C40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x6C);
    edx = esp;
    PUSH32(esp, edx);
    eax = esp + 8;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, eax);
    ecx = 0x3C37C0;
    PUSH32(esp, 0x00089C60u); RECOMP_ABI_CALL(0x00081F50u, sub_00081F50); /* call 0x00081F50 */

loc_00089C60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3C37C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3C37C0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089C7E; /* jne: not equal / not zero */

loc_00089C6C: ;
    edx = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00089C78u); RECOMP_ABI_CALL(0x00088880u, sub_00088880); /* call 0x00088880 */

loc_00089C78: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00089C7E: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00089C8Bu); RECOMP_ABI_CALL(0x00088880u, sub_00088880); /* call 0x00088880 */

loc_00089C8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00089CA0
 * Original: 0x00089CA0 - 0x00089D19 (121 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00089CA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x6C);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = 0x3C37C0;
    PUSH32(esp, 0x00089CC7u); RECOMP_ABI_CALL(0x00081F50u, sub_00081F50); /* call 0x00081F50 */

loc_00089CC7: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3C37C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3C37C0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089CD7; /* jne: not equal / not zero */

loc_00089CD3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00089CDA;

loc_00089CD7: ;
    ecx = MEM32(eax + 0x14);

loc_00089CDA: ;
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM8(esi + 8) = 1;
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x00089CF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089CEFu); } /* indirect call */
    }

loc_00089CF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089D0D; /* jne: not equal / not zero */

loc_00089CF9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00089D03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089D00u); } /* indirect call */
    }

loc_00089D03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00089D0D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00089D20
 * Original: 0x00089D20 - 0x00089D6E (78 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00089D20: ;
    eax = MEM32(0x3C37C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x3C37B8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00089D6D; /* je: equal / zero */

loc_00089D33: ;
    eax = MEM32(0x3C37C0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = 0x3C37C0;
    PUSH32(esp, 0x00089D46u); RECOMP_ABI_CALL(0x0008AAD0u, sub_0008AAD0); /* call 0x0008AAD0 */

loc_00089D46: ;
    eax = MEM32(0x3C37C0);
    MEM32(eax + 8) = eax;
    edx = MEM32(0x3C37C0);
    MEM32(edx + 4) = 0;
    eax = MEM32(0x3C37C0);
    MEM32(eax + 0xC) = eax;
    MEM32(0x3C37C4) = 0;

loc_00089D6D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00089D70
 * Original: 0x00089D70 - 0x00089EF7 (391 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089D70(void)
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

loc_00089D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x16A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089DBE; /* je: equal / zero */

loc_00089D80: ;
    eax = MEM32(eax + 0xF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089D8Cu); RECOMP_ABI_CALL(0x00083720u, sub_00083720); /* call 0x00083720 */

loc_00089D8C: ;
    SET_LO8(ecx, MEM8(eax + 9));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089DBE; /* je: equal / zero */

loc_00089D96: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xF4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00089DA7u); RECOMP_ABI_CALL(0x00088700u, sub_00088700); /* call 0x00088700 */

loc_00089DA7: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xF8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00089DB8u); RECOMP_ABI_CALL(0x00088700u, sub_00088700); /* call 0x00088700 */

loc_00089DB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00089DBE: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x154); /* comiss */
    if ((_fca >= _fcb)) goto loc_00089DE7; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x154)) */

loc_00089DD2: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00089E09; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00089DDA: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x154); /* divss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00089E09; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00089DE7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x308D9C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x150) = xmm1.f[0]; /* movss */

loc_00089E09: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0xF4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00089E1Du); RECOMP_ABI_CALL(0x000885F0u, sub_000885F0); /* call 0x000885F0 */

loc_00089E1D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089E3E; /* jne: not equal / not zero */

loc_00089E23: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xF8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00089E34u); RECOMP_ABI_CALL(0x000885F0u, sub_000885F0); /* call 0x000885F0 */

loc_00089E34: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089EEE; /* je: equal / zero */

loc_00089E3E: ;
    eax = MEM32(edi + 0x30);
    ecx = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00089E47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089E44u); } /* indirect call */
    }

loc_00089E47: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089EEE; /* je: equal / zero */

loc_00089E51: ;
    edx = MEM32(edi);
    ebp = MEM32(esi + 4);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00089E5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089E58u); } /* indirect call */
    }

loc_00089E5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089EAB; /* jne: not equal / not zero */

loc_00089E66: ;
    SET_LO8(eax, MEM8(ebp + 0x16A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089E96; /* je: equal / zero */

loc_00089E70: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00089E7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089E74u); } /* indirect call */
    }

loc_00089E7A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089EEE; /* je: equal / zero */

loc_00089E7E: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00089E8Fu); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_00089E8F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00089E96: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00089EA4u); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_00089EA4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00089EAB: ;
    edx = MEM32(edi);
    ebp = MEM32(esi + 4);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00089EB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089EB2u); } /* indirect call */
    }

loc_00089EB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xF8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xF8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089EEE; /* jne: not equal / not zero */

loc_00089EC0: ;
    ecx = ebp + 0x150;
    PUSH32(esp, 0x00089ECBu); RECOMP_ABI_CALL(0x0008A930u, sub_0008A930); /* call 0x0008A930 */

loc_00089ECB: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00089EEE; /* jbe: below or equal (unsigned <=) */

loc_00089ED9: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x34;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00089EE7u); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_00089EE7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00089EEE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00089F00
 * Original: 0x00089F00 - 0x0008A08C (396 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00089F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00089F00: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x169));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089F2A; /* je: equal / zero */

loc_00089F16: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x158)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x158) = xmm1.f[0]; /* movss */

loc_00089F2A: ;
    eax = MEM32(esi + 4);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00089F50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089F4Du); } /* indirect call */
    }

loc_00089F50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089FCE; /* je: equal / zero */

loc_00089F54: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00089F62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089F5Fu); } /* indirect call */
    }

loc_00089F62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089F70; /* je: equal / zero */

loc_00089F66: ;
    SET_LO8(ecx, MEM8(eax + 0x3B8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089FAE; /* jne: not equal / not zero */

loc_00089F70: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD1);
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00089F8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089F84u); } /* indirect call */
    }

loc_00089F8A: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00089F95u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00089F95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00089FAE; /* je: equal / zero */

loc_00089F99: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00089FAAu); RECOMP_ABI_CALL(0x000886D0u, sub_000886D0); /* call 0x000886D0 */

loc_00089FAA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00089FCE; /* jne: not equal / not zero */

loc_00089FAE: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x169));
    PUSH32(esp, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, 0);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00089FC4; /* je: equal / zero */

loc_00089FC1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00089FC4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00089FCAu); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_00089FCA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00089FCE: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(edx + 0x130);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00089FDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089FD9u); } /* indirect call */
    }

loc_00089FDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A03E; /* je: equal / zero */

loc_00089FE0: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00089FF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00089FEBu); } /* indirect call */
    }

loc_00089FF1: ;
    ecx = MEM32(eax + 0x39A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A03E; /* je: equal / zero */

loc_00089FFB: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A01B; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0008A011: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    goto loc_0008A02C;

loc_0008A01B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca > _fcb)) goto loc_0008A02C; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax)) */

loc_0008A023: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 4); /* divss */

loc_0008A02C: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A03Eu); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008A03E: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x154); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A06D; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x154)) */

loc_0008A052: ;
    SET_LO8(ecx, MEM8(eax + 0x169));
    PUSH32(esp, 2);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A069u); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_0008A069: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A06D: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A07Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A078u); } /* indirect call */
    }

loc_0008A07B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A086; /* je: equal / zero */

loc_0008A07F: ;
    MEM8(eax + 0x448) = 1;

loc_0008A086: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A090
 * Original: 0x0008A090 - 0x0008A2BA (554 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008A090: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x158)); /* movss */
    _fb = (uint32_t)(0x158) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x158;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0008A119; /* jne: not equal / not zero */

loc_0008A0BA: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x15C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x158); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A119; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0008A0E2: ;
    MEM8(esi + 0x10) = 1;
    ecx = MEM32(0x389414);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A104; /* jne: not equal / not zero */

loc_0008A0F1: ;
    eax = MEM32(eax + 0xF8);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0008A0FFu); RECOMP_ABI_CALL(0x00082C20u, sub_00082C20); /* call 0x00082C20 */

loc_0008A0FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0008A113;

loc_0008A104: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A119; /* jne: not equal / not zero */

loc_0008A109: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0008A110u); RECOMP_ABI_CALL(0x00083610u, sub_00083610); /* call 0x00083610 */

loc_0008A110: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A113: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0008A119: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x154); /* comiss */
    if ((_fca >= _fcb)) goto loc_0008A16E; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x154)) */

loc_0008A12D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x150); /* comiss */
    if ((_fca > _fcb)) goto loc_0008A156; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax + 0x150)) */

loc_0008A139: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x154); /* divss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A16E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0008A156: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x308D9C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x150); /* addss */
    MEMF(eax + 0x150) = xmm1.f[0]; /* movss */

loc_0008A16E: ;
    _fa = (uint32_t)(MEM32(0x389414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x389414), 0xC (32-bit) */
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x15C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x158); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0008A19E; /* jne: not equal / not zero */

loc_0008A190: ;
    ecx = MEM32(eax + 0xF0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008A19Cu); RECOMP_ABI_CALL(0x000882D0u, sub_000882D0); /* call 0x000882D0 */

loc_0008A19C: ;
    goto loc_0008A1AA;

loc_0008A19E: ;
    edx = MEM32(eax + 0xF4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008A1AAu); RECOMP_ABI_CALL(0x00088250u, sub_00088250); /* call 0x00088250 */

loc_0008A1AA: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xF8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008A1BEu); RECOMP_ABI_CALL(0x000885F0u, sub_000885F0); /* call 0x000885F0 */

loc_0008A1BE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A1DF; /* jne: not equal / not zero */

loc_0008A1C4: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0xF4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008A1D5u); RECOMP_ABI_CALL(0x000885F0u, sub_000885F0); /* call 0x000885F0 */

loc_0008A1D5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A27F; /* je: equal / zero */

loc_0008A1DF: ;
    edx = MEM32(edi);
    ebx = MEM32(esi + 4);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0008A1ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A1E6u); } /* indirect call */
    }

loc_0008A1EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xF4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A24C; /* jne: not equal / not zero */

loc_0008A1F4: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x150)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x154); /* comiss */
    if ((_fca >= _fcb)) goto loc_0008A24C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ebx + 0x154)) */

loc_0008A205: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x150); /* comiss */
    if ((_fca > _fcb)) goto loc_0008A22E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ebx + 0x150)) */

loc_0008A211: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x150)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 0x154); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A24C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008A22E: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008A237u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A234u); } /* indirect call */
    }

loc_0008A237: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008A246u); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_0008A246: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0008A24C: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0008A256u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A250u); } /* indirect call */
    }

loc_0008A256: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xF8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xF8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A27F; /* jne: not equal / not zero */

loc_0008A261: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A26Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A267u); } /* indirect call */
    }

loc_0008A26A: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008A279u); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_0008A279: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0008A27F: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x158)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x15C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A2B2; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 0x15C)) */

loc_0008A293: ;
    SET_LO8(ecx, MEM8(0x3C35A0));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A2B2; /* jne: not equal / not zero */

loc_0008A29D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008A2ACu); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_0008A2AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0008A2B2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A2C0
 * Original: 0x0008A2C0 - 0x0008A4D6 (534 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0008A2C0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x169));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A32A; /* je: equal / zero */

loc_0008A2EE: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x158)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x158) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x15C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x158); /* subss */
    eax = MEM32(eax + 0xF4);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A327u); RECOMP_ABI_CALL(0x00088250u, sub_00088250); /* call 0x00088250 */

loc_0008A327: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A32A: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A338u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A335u); } /* indirect call */
    }

loc_0008A338: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A3B6; /* je: equal / zero */

loc_0008A33C: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A34Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A347u); } /* indirect call */
    }

loc_0008A34A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A358; /* je: equal / zero */

loc_0008A34E: ;
    SET_LO8(ecx, MEM8(eax + 0x3B8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A396; /* jne: not equal / not zero */

loc_0008A358: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD1);
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0008A372u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A36Cu); } /* indirect call */
    }

loc_0008A372: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x0008A37Du); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0008A37D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A396; /* je: equal / zero */

loc_0008A381: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x130);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008A392u); RECOMP_ABI_CALL(0x000886D0u, sub_000886D0); /* call 0x000886D0 */

loc_0008A392: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A3B6; /* jne: not equal / not zero */

loc_0008A396: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x169));
    PUSH32(esp, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, 0);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0008A3AC; /* je: equal / zero */

loc_0008A3A9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A3AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A3B2u); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_0008A3B2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A3B6: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(edx + 0x130);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0008A3C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A3C1u); } /* indirect call */
    }

loc_0008A3C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A426; /* je: equal / zero */

loc_0008A3C8: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0008A3D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A3D3u); } /* indirect call */
    }

loc_0008A3D9: ;
    ecx = MEM32(eax + 0x39A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A426; /* je: equal / zero */

loc_0008A3E3: ;
    eax = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x150)); /* movss */
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x150;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A403; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_0008A3F9: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    goto loc_0008A414;

loc_0008A403: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca > _fcb)) goto loc_0008A414; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax)) */

loc_0008A40B: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 4); /* divss */

loc_0008A414: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A426u); RECOMP_ABI_CALL(0x0016D2F0u, sub_0016D2F0); /* call 0x0016D2F0 */

loc_0008A426: ;
    ecx = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x150)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x154); /* comiss */
    if ((_fca >= _fcb)) goto loc_0008A48A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ecx + 0x154)) */

loc_0008A43A: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0008A453; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0008A442: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x154); /* divss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008A48A; /* jp: parity */

loc_0008A453: ;
    SET_LO8(eax, MEM8(ecx + 0x169));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A47A; /* je: equal / zero */

loc_0008A45D: ;
    SET_LO8(eax, MEM8(ecx + 0x16A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_0008A4AB; /* je: equal / zero */

loc_0008A46B: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008A476u); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_0008A476: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A47A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008A486u); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_0008A486: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A48A: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x158)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x15C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A4B7; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x15C)) */

loc_0008A49B: ;
    SET_LO8(eax, MEM8(0x3C35A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A4B7; /* jne: not equal / not zero */

loc_0008A4A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A4AB: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008A4B3u); RECOMP_ABI_CALL(0x00089CA0u, sub_00089CA0); /* call 0x00089CA0 */

loc_0008A4B3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008A4B7: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x130);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0008A4C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A4C2u); } /* indirect call */
    }

loc_0008A4C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A4D0; /* je: equal / zero */

loc_0008A4C9: ;
    MEM8(eax + 0x448) = 1;

loc_0008A4D0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A4E0
 * Original: 0x0008A4E0 - 0x0008A637 (343 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A4E0: ;
    SET_LO8(eax, MEM8(0x3C35A0));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0008A62E; /* jne: not equal / not zero */

loc_0008A4F3: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A62E; /* je: equal / zero */

loc_0008A4FE: ;
    eax = MEM32(esi + 4);
    MEM8(esi + 0x10) = 0;
    eax = MEM32(eax + 0x134);
    edx = MEM32(eax + 0x30);
    PUSH32(esp, ebx);
    ecx = eax + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0008A516u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A513u); } /* indirect call */
    }

loc_0008A516: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008A51Eu); RECOMP_ABI_CALL(0x00089C40u, sub_00089C40); /* call 0x00089C40 */

loc_0008A51E: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x16C);
    PUSH32(esp, 0x3C4D2B47);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4F1066FB);
    PUSH32(esp, 0x0008A53Bu); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0008A53B: ;
    ebx = MEM32(0x3E8D50);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008A574; /* jle: less or equal (signed <=) */

loc_0008A54A: ;
    /* nop */

loc_0008A550: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008A556u); RECOMP_ABI_CALL(0x00130650u, sub_00130650); /* call 0x00130650 */

loc_0008A556: ;
    ecx = MEM32(eax + 0x3980);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A56F; /* je: equal / zero */

loc_0008A563: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A56Fu); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_0008A56F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008A550; /* jl: less (signed <) */

loc_0008A574: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0xF4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008A583u); RECOMP_ABI_CALL(0x00083720u, sub_00083720); /* call 0x00083720 */

loc_0008A583: ;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xF;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x6C);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0008A599u); RECOMP_ABI_CALL(0x00083790u, sub_00083790); /* call 0x00083790 */

loc_0008A599: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0008A5B0; /* jne: not equal / not zero */

loc_0008A5A3: ;
    edx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(edx + 0x16A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A62E; /* je: equal / zero */

loc_0008A5B0: ;
    _fa = (uint32_t)(MEM32(0x389414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x389414), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A5D9; /* jne: not equal / not zero */

loc_0008A5B9: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x16C);
    PUSH32(esp, 0xE2A17681u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4F1066FB);
    PUSH32(esp, 0x0008A5D6u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_0008A5D6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A5D9: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x6C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = 0x3C37C0;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0008A5F7u); RECOMP_ABI_CALL(0x00081F50u, sub_00081F50); /* call 0x00081F50 */

loc_0008A5F7: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3C37C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3C37C0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A607; /* jne: not equal / not zero */

loc_0008A603: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0008A60A;

loc_0008A607: ;
    eax = MEM32(eax + 0x14);

loc_0008A60A: ;
    MEM32(0x3C37B8) = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x164);
    edx = MEM32(eax + 0xF4);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008A62Bu); RECOMP_ABI_CALL(0x00082710u, sub_00082710); /* call 0x00082710 */

loc_0008A62B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A62E: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008A640
 * Original: 0x0008A640 - 0x0008A683 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A640: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008A651; /* je: equal / zero */

loc_0008A649: ;
    esi = eax + -176;
    goto loc_0008A653;

loc_0008A651: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008A653: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0008A65Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A659u); } /* indirect call */
    }

loc_0008A65C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A681; /* je: equal / zero */

loc_0008A660: ;
    ecx = MEM32(eax + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0008A66Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A665u); } /* indirect call */
    }

loc_0008A66B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A681; /* je: equal / zero */

loc_0008A66F: ;
    ecx = MEM32(esi + 0xD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A67Bu); RECOMP_ABI_CALL(0x00089B70u, sub_00089B70); /* call 0x00089B70 */

loc_0008A67B: ;
    MEM32(esi + 0xD8) = eax;

loc_0008A681: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008A690
 * Original: 0x0008A690 - 0x0008A7D2 (322 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x10) = 0;
    ecx = 0xFF;
    edi = esp + 0x11;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A6E1; /* je: equal / zero */

loc_0008A6BB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A6E1; /* je: equal / zero */

loc_0008A6C0: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x309014);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A6D0u); RECOMP_ABI_CALL(0x00154820u, sub_00154820); /* call 0x00154820 */

loc_0008A6D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A6DEu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0008A6DE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A6E1: ;
    PUSH32(esp, 0x170);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A6EBu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008A6EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A725; /* je: equal / zero */

loc_0008A6F2: ;
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(0x3C37C4);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A721u); RECOMP_ABI_CALL(0x0008A960u, sub_0008A960); /* call 0x0008A960 */

loc_0008A721: ;
    ebx = eax;
    goto loc_0008A727;

loc_0008A725: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008A727: ;
    edi = MEM32(ebp + 0x28);
    MEM32(ebx + 0x16C) = edi;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0x21AA0F3);
    ecx = eax + 8;
    esi = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A742u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008A742: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A761; /* je: equal / zero */

loc_0008A747: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A74Du); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_0008A74D: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x9ED0B804u);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A75Eu); RECOMP_ABI_CALL(0x00038AB0u, sub_00038AB0); /* call 0x00038AB0 */

loc_0008A75E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A761: ;
    PUSH32(esp, 0xE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A76Bu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0008A76B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A789; /* je: equal / zero */

loc_0008A772: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A785u); RECOMP_ABI_CALL(0x000892A0u, sub_000892A0); /* call 0x000892A0 */

loc_0008A785: ;
    edi = eax;
    goto loc_0008A78B;

loc_0008A789: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0008A78B: ;
    edx = ebp + 8;
    PUSH32(esp, edx);
    ecx = 0x3C37C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A799u); RECOMP_ABI_CALL(0x000F0720u, sub_000F0720); /* call 0x000F0720 */

loc_0008A799: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A7A3u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_0008A7A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A7C9; /* je: equal / zero */

loc_0008A7AA: ;
    eax = 0x308DA0;
    PUSH32(esp, esi);
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0008A7C6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008A7C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008A7C9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0008A7E0
 * Original: 0x0008A7E0 - 0x0008A92E (334 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A7E0(void)
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

loc_0008A7E0: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0008A903; /* jne: not equal / not zero */

loc_0008A7F1: ;
    edi = MEM32(esp + 0x1C);
    esi = MEM32(edi + 4);
    ecx = 0x3888C0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0008A805u); RECOMP_ABI_CALL(0x00079E60u, sub_00079E60); /* call 0x00079E60 */

loc_0008A805: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008A80Fu); RECOMP_ABI_CALL(0x00084360u, sub_00084360); /* call 0x00084360 */

loc_0008A80F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A926; /* je: equal / zero */

loc_0008A81A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBE919BB4u);
    ecx = esi;
    PUSH32(esp, 0x0008A828u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0008A828: ;
    PUSH32(esp, 0x3365E243);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0008A836u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0008A836: ;
    PUSH32(esp, 0x893BCFC8u);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0008A844u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008A844: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0x8844D519u);
    ecx = esi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008A85Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008A85A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0x55C45EC2);
    ecx = esi;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008A870u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008A870: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0x9E148976u);
    ecx = esi;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008A886u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0008A886: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0x8CD5B28Bu);
    ecx = esi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008A89Cu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0008A89C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    MEM8(esp + 0x30) = LO8(eax);
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008A8C2u); RECOMP_ABI_CALL(0x0008A690u, sub_0008A690); /* call 0x0008A690 */

loc_0008A8C2: ;
    esi = eax;
    ecx = MEM32(esi + 0xD8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008A8D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A8CFu); } /* indirect call */
    }

loc_0008A8D2: ;
    ecx = esi + 0xB4;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x0008A8E0u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_0008A8E0: ;
    POP32(esp, ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0008A8F5; /* jne: not equal / not zero */

loc_0008A8E7: ;
    POP32(esp, edi);
    MEM32(0x3C3B80) = esi;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008A8F5: ;
    POP32(esp, edi);
    MEM32(0x3C3B84) = esi;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0008A903: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008A926; /* jne: not equal / not zero */

loc_0008A908: ;
    PUSH32(esp, 0x0008A90Du); RECOMP_ABI_CALL(0x00089D20u, sub_00089D20); /* call 0x00089D20 */

loc_0008A90D: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008A91Au); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0008A91A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008A926; /* je: equal / zero */

loc_0008A91E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008A926u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008A924u); } /* indirect call */
    }

loc_0008A926: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008A930
 * Original: 0x0008A930 - 0x0008A956 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A930(void)
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

loc_0008A930: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A941; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_0008A93A: ;
    fp_push(MEMF(0x2FE99C)); /* fld float */
    esp += 4; return; /* ret */

loc_0008A941: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0008A950; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0008A949: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    esp += 4; return; /* ret */

loc_0008A950: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 4)); /* fdiv dword ptr [ecx + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008A960
 * Original: 0x0008A960 - 0x0008AAC8 (360 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008A960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008A960: ;
    eax = ecx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = 0x308DDC;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = eax;
    MEM8(eax + 0x18) = LO8(ecx);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x10) = 0x308DF8;
    MEM32(eax + 0x24) = eax;
    MEM8(eax + 0x28) = LO8(ecx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x20) = 0x308E14;
    MEM32(eax + 0x38) = eax;
    MEM8(eax + 0x3C) = LO8(ecx);
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x34) = 0x308E30;
    MEM32(eax + 0x48) = eax;
    MEM8(eax + 0x4C) = LO8(ecx);
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x44) = 0x308E4C;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x28));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = 1;
    MEM8(eax + 0x54) = LO8(edx);
    MEM32(eax + 0x5C) = eax;
    MEM8(eax + 0x60) = LO8(ecx);
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x58) = 0x308E68;
    MEM8(eax + 0x68) = LO8(edx);
    MEM32(eax + 0x6C) = esi;
    esi = MEM32(esp + 0x18);
    MEM32(eax + 0xF0) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(eax + 0xF4) = esi;
    MEM32(eax + 0xFC) = ecx;
    MEM32(eax + 0x100) = ecx;
    MEM32(eax + 0x104) = ecx;
    MEM32(eax + 0x108) = ecx;
    MEM32(eax + 0x110) = ecx;
    MEM32(eax + 0x114) = ecx;
    MEM32(eax + 0x118) = ecx;
    MEM32(eax + 0x11C) = ecx;
    MEM32(eax + 0x120) = ecx;
    MEM32(eax + 0x124) = ecx;
    MEM32(eax + 0x128) = ecx;
    MEM32(eax + 0x12C) = ecx;
    MEM32(eax + 0x130) = ecx;
    MEM32(eax + 0x134) = ecx;
    MEM32(eax + 0x138) = ecx;
    MEMF(eax + 0x154) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x150) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x158) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x15C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x160) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 0x164) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x16A) = LO8(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    esi = MEM32(esp + 0x10);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    edi = eax + 0x70;
    MEM8(eax + 0x168) = LO8(ecx);
    MEM8(eax + 0x169) = LO8(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xF8) = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0008AAB8: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + esi) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AAB8; /* jne: not equal / not zero */

loc_0008AAC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_0008AAD0
 * Original: 0x0008AAD0 - 0x0008AB03 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AAD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0008AAFE; /* je: equal / zero */

loc_0008AADC: ;
    PUSH32(esp, edi);
    /* nop */

loc_0008AAE0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0008AAEBu); RECOMP_ABI_CALL(0x0008AAD0u, sub_0008AAD0); /* call 0x0008AAD0 */

loc_0008AAEB: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008AAF4u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008AAF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0008AAE0; /* jne: not equal / not zero */

loc_0008AAFD: ;
    POP32(esp, edi);

loc_0008AAFE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008AB10
 * Original: 0x0008AB10 - 0x0008AB18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008AB10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008AB40(); return; /* tail jmp 0x0008AB40 */

}

/**
 * sub_0008AB20
 * Original: 0x0008AB20 - 0x0008AB2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008AB20: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008AB40(); return; /* tail jmp 0x0008AB40 */

}

/**
 * sub_0008AB30
 * Original: 0x0008AB30 - 0x0008AB3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008AB30: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0008AB40(); return; /* tail jmp 0x0008AB40 */

}

/**
 * sub_0008AB40
 * Original: 0x0008AB40 - 0x0008AB5E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008AB48u); RECOMP_ABI_CALL(0x00089360u, sub_00089360); /* call 0x00089360 */

loc_0008AB48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008AB58; /* je: equal / zero */

loc_0008AB4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008AB55u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0008AB55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0008AB58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008AB60
 * Original: 0x0008AB60 - 0x0008AC1D (189 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008AB60: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x34);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 4) = ecx;
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0008AC17; /* je: equal / zero */

loc_0008AB77: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x54);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0008AB85;

loc_0008AB81: ;
    eax = MEM32(esp + 0x10);

loc_0008AB85: ;
    ebp = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    MEM32(esp + 0x60) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0008AC04; /* je: equal / zero */

loc_0008AB92: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0xAC016BC1u);
    PUSH32(esp, 0x0008AB9Fu); RECOMP_ABI_CALL(0x00039EA0u, sub_00039EA0); /* call 0x00039EA0 */

loc_0008AB9F: ;
    esi = eax;
    eax = MEM32(ebx);
    edi = MEM32(esi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0008ABAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ABA7u); } /* indirect call */
    }

loc_0008ABAA: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008ABB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ABB0u); } /* indirect call */
    }

loc_0008ABB3: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0008ABBDu); RECOMP_ABI_CALL(0x00035740u, sub_00035740); /* call 0x00035740 */

loc_0008ABBD: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008ABE3; /* jle: less or equal (signed <=) */

loc_0008ABC5: ;
    ebp = esi + 4;

loc_0008ABC8: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0008ABD5u); RECOMP_ABI_CALL(0x0014B450u, sub_0014B450); /* call 0x0014B450 */

loc_0008ABD5: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008ABC8; /* jl: less (signed <) */

loc_0008ABDF: ;
    ebp = MEM32(esp + 0x60);

loc_0008ABE3: ;
    ebp = MEM32(ebp);
    edx = MEM32(ebp);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0008ABF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008ABF0u); } /* indirect call */
    }

loc_0008ABF3: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0008ABFCu); RECOMP_ABI_CALL(0x0014B420u, sub_0014B420); /* call 0x0014B420 */

loc_0008ABFC: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);

loc_0008AC04: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x34) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0008AB81; /* jne: not equal / not zero */

loc_0008AC13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0008AC17: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008AC20
 * Original: 0x0008AC20 - 0x0008ACA0 (128 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008AC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008AC20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    MEM8(esi + 0x30) = 0;
    PUSH32(esp, 0x0008AC32u); RECOMP_ABI_CALL(0x0014C470u, sub_0014C470); /* call 0x0014C470 */

loc_0008AC32: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008AC9B; /* jne: not equal / not zero */

loc_0008AC39: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0008AC40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008AC3Du); } /* indirect call */
    }

loc_0008AC40: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008AC9B; /* je: equal / zero */

loc_0008AC46: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC016BC1u);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0008AC5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008AC58u); } /* indirect call */
    }

loc_0008AC5B: ;
    ecx = eax;
    PUSH32(esp, 0x0008AC62u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0008AC62: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0008AC7C; /* je: equal / zero */

loc_0008AC67: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0xAC016BC1u);
    PUSH32(esp, 0x0008AC74u); RECOMP_ABI_CALL(0x00039EA0u, sub_00039EA0); /* call 0x00039EA0 */

loc_0008AC74: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008AC7Au); RECOMP_ABI_CALL(0x00035420u, sub_00035420); /* call 0x00035420 */

loc_0008AC7A: ;
    goto loc_0008AC8B;

loc_0008AC7C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008AC85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0008AC82u); } /* indirect call */
    }

loc_0008AC85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008AC8Bu); RECOMP_ABI_CALL(0x00035480u, sub_00035480); /* call 0x00035480 */

loc_0008AC8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0008AC9B; /* je: equal / zero */

loc_0008AC93: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008AC9Bu); RECOMP_ABI_CALL(0x0008AB60u, sub_0008AB60); /* call 0x0008AB60 */

loc_0008AC9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
