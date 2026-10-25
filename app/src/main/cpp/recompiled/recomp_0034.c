/**
 * Medal of Honor European Assault - Recompiled code chunk 34
 * Functions: 250 (0x001280B0 - 0x0012F6B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001280B0
 * Original: 0x001280B0 - 0x001280F8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001280B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001280B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    MEM8(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001280C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001280BDu); } /* indirect call */
    }

loc_001280C0: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001280E2; /* jne: not equal / not zero */

loc_001280C6: ;
    edx = MEM32(eax + 0x1C0);
    _fa = (uint32_t)(MEM16(edx + 4)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 4), 1 (16-bit) */
    SET_LO8(ecx, MEM8(0x376544));
    MEM8(esp + 4) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001280E2; /* jne: not equal / not zero */

loc_001280DD: ;
    MEM8(esp + 4) = 0;

loc_001280E2: ;
    ecx = MEM32(esi);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001280EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001280EBu); } /* indirect call */
    }

loc_001280EE: ;
    ecx = eax;
    PUSH32(esp, 0x001280F5u); RECOMP_ABI_CALL(0x00187FA0u, sub_00187FA0); /* call 0x00187FA0 */

loc_001280F5: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128100
 * Original: 0x00128100 - 0x00128138 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128100: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00128108u); RECOMP_ABI_CALL(0x00127BA0u, sub_00127BA0); /* call 0x00127BA0 */

loc_00128108: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00128114u); RECOMP_ABI_CALL(0x00127F20u, sub_00127F20); /* call 0x00127F20 */

loc_00128114: ;
    eax = MEM32(esi + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ecx = 0xA;
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00128131; /* jle: less or equal (signed <=) */

loc_00128127: ;
    PUSH32(esp, edi);
    edi = esi + 0x24;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00128131: ;
    MEM32(esi + 0x20) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128140
 * Original: 0x00128140 - 0x0012819C (92 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3888C0);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128197; /* jne: not equal / not zero */

loc_0012815A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012815Fu); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_0012815F: ;
    edx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x90)); /* movss */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128197u); RECOMP_ABI_CALL(0x00124CB0u, sub_00124CB0); /* call 0x00124CB0 */

loc_00128197: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001281A0
 * Original: 0x001281A0 - 0x001281E8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001281A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001281A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    MEM8(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001281B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001281ADu); } /* indirect call */
    }

loc_001281B0: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001281D2; /* jne: not equal / not zero */

loc_001281B6: ;
    edx = MEM32(eax + 0x1C0);
    _fa = (uint32_t)(MEM16(edx + 4)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 4), 1 (16-bit) */
    SET_LO8(ecx, MEM8(0x376544));
    MEM8(esp + 4) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001281D2; /* jne: not equal / not zero */

loc_001281CD: ;
    MEM8(esp + 4) = 0;

loc_001281D2: ;
    ecx = MEM32(esi);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001281DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001281DBu); } /* indirect call */
    }

loc_001281DE: ;
    ecx = eax;
    PUSH32(esp, 0x001281E5u); RECOMP_ABI_CALL(0x00187FA0u, sub_00187FA0); /* call 0x00187FA0 */

loc_001281E5: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001281F0
 * Original: 0x001281F0 - 0x00128238 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001281F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001281F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    MEM8(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00128200u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001281FDu); } /* indirect call */
    }

loc_00128200: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128222; /* jne: not equal / not zero */

loc_00128206: ;
    edx = MEM32(eax + 0x1C0);
    _fa = (uint32_t)(MEM16(edx + 4)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 4), 1 (16-bit) */
    SET_LO8(ecx, MEM8(0x376544));
    MEM8(esp + 4) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00128222; /* jne: not equal / not zero */

loc_0012821D: ;
    MEM8(esp + 4) = 0;

loc_00128222: ;
    ecx = MEM32(esi);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0012822Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012822Bu); } /* indirect call */
    }

loc_0012822E: ;
    ecx = eax;
    PUSH32(esp, 0x00128235u); RECOMP_ABI_CALL(0x00187FA0u, sub_00187FA0); /* call 0x00187FA0 */

loc_00128235: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128240
 * Original: 0x00128240 - 0x0012828D (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128240: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = ecx;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = eax;
    eax = MEM32(edx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = 0xA;
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(edx + 0x1A) = 1;
    MEM32(edx + 4) = ebx;
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    MEM8(edx + 0x18) = LO8(ebx);
    MEM8(edx + 0x19) = LO8(ebx);
    MEM32(edx + 0x1C) = ebx;
    MEM32(edx + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00128286; /* jle: less or equal (signed <=) */

loc_0012827C: ;
    PUSH32(esp, edi);
    edi = edx + 0x24;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00128286: ;
    MEM32(edx + 0x20) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128290
 * Original: 0x00128290 - 0x001282C8 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00128298u); RECOMP_ABI_CALL(0x00127BA0u, sub_00127BA0); /* call 0x00127BA0 */

loc_00128298: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001282A4u); RECOMP_ABI_CALL(0x00127F20u, sub_00127F20); /* call 0x00127F20 */

loc_001282A4: ;
    eax = MEM32(esi + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ecx = 0xA;
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001282C1; /* jle: less or equal (signed <=) */

loc_001282B7: ;
    PUSH32(esp, edi);
    edi = esi + 0x24;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_001282C1: ;
    MEM32(esi + 0x20) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001282D0
 * Original: 0x001282D0 - 0x001285B3 (739 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001282D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001282D0: ;
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
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x43200000);
    PUSH32(esp, 0x47AFC800);
    PUSH32(esp, 0x43200000);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001282FAu); RECOMP_ABI_CALL(0x00084CD0u, sub_00084CD0); /* call 0x00084CD0 */

loc_001282FA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128302u); RECOMP_ABI_CALL(0x000A6DA0u, sub_000A6DA0); /* call 0x000A6DA0 */

loc_00128302: ;
    MEM32(esp + 0x1C) = eax;
    MEM8(esp + 0x14) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEM8(esp + 0x17) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012831Cu); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012831C: ;
    SET_LO8(eax, MEM8(eax + 0x220));
    MEM8(esp + 0x14) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012832Bu); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012832B: ;
    SET_LO8(ecx, MEM8(eax + 0x224));
    MEM8(esp + 0x15) = LO8(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012833Au); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012833A: ;
    SET_LO8(edx, MEM8(eax + 0x228));
    edi = MEM32(esi);
    PUSH32(esp, 1);
    MEM8(esp + 0x1A) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012834Du); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012834D: ;
    eax = MEM32(eax + 0x22C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128359u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00128359: ;
    ecx = MEM32(eax + 0x21C);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012836Au); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012836A: ;
    eax = MEM32(eax + 0x218);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0012837Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128375u); } /* indirect call */
    }

loc_0012837B: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128385u); RECOMP_ABI_CALL(0x000A6EE0u, sub_000A6EE0); /* call 0x000A6EE0 */

loc_00128385: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0012839Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128396u); } /* indirect call */
    }

loc_0012839C: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001283A7u); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_001283A7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001283ACu); RECOMP_ABI_CALL(0x000A8570u, sub_000A8570); /* call 0x000A8570 */

loc_001283AC: ;
    MEM32(esp + 0x1C) = eax;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ebx);
    MEM8(esp + 0x1A) = LO8(ebx);
    MEM8(esp + 0x1B) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001283C6u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001283C6: ;
    SET_LO8(ecx, MEM8(eax + 0x24C));
    MEM8(esp + 0x18) = LO8(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001283D5u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001283D5: ;
    SET_LO8(edx, MEM8(eax + 0x250));
    MEM8(esp + 0x19) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001283E4u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001283E4: ;
    SET_LO8(eax, MEM8(eax + 0x254));
    edi = MEM32(esi);
    PUSH32(esp, 1);
    MEM8(esp + 0x1E) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001283F7u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001283F7: ;
    ecx = MEM32(eax + 0x258);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128403u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00128403: ;
    _fa = (uint32_t)(MEM32(eax + 0x260)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x260), ebx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128412u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00128412: ;
    _fa = (uint32_t)(MEM32(eax + 0x248)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x248), ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128421u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00128421: ;
    _fa = (uint32_t)(MEM32(eax + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x244), ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128430u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00128430: ;
    edx = MEM32(eax + 0x240);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012843Cu); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012843C: ;
    eax = MEM32(eax + 0x23C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128448u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00128448: ;
    ecx = MEM32(eax + 0x238);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128459u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00128459: ;
    eax = MEM32(eax + 0x234);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0012846Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128464u); } /* indirect call */
    }

loc_0012846A: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128474u); RECOMP_ABI_CALL(0x000A8760u, sub_000A8760); /* call 0x000A8760 */

loc_00128474: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128479u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_00128479: ;
    edx = MEM32(esi);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x90)); /* movss */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    ecx = esp + 0x20;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001284B1u); RECOMP_ABI_CALL(0x00124CB0u, sub_00124CB0); /* call 0x00124CB0 */

loc_001284B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001284C0; /* je: equal / zero */

loc_001284B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001284BDu); RECOMP_ABI_CALL(0x0002D910u, sub_0002D910); /* call 0x0002D910 */

loc_001284BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001284C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x77B281FC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001284CCu); RECOMP_ABI_CALL(0x00148480u, sub_00148480); /* call 0x00148480 */

loc_001284CC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x54) = 0x2FF9EC;
    MEM32(esp + 0x74) = ebx;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x7C) = LO8(ebx);
    MEM8(esp + 0x40) = LO8(ebx);
    MEM32(esp + 0x3C) = 0x2FFA54;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x44) = 0x2FF02C;
    if (CMP_EQ(_fa, _fb)) goto loc_00128539; /* je: equal / zero */

loc_00128534: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012853B;

loc_00128539: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012853B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128545u); RECOMP_ABI_CALL(0x00141AF0u, sub_00141AF0); /* call 0x00141AF0 */

loc_00128545: ;
    edx = esp + 0x3C;
    ecx = esp + 0x54;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x74) = 0x86720766u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012855Eu); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_0012855E: ;
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128565u); RECOMP_ABI_CALL(0x00147DF0u, sub_00147DF0); /* call 0x00147DF0 */

loc_00128565: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = 0xA;
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esi + 0x18) = LO8(ebx);
    MEM8(esi + 0x19) = LO8(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_00128587; /* jle: less or equal (signed <=) */

loc_0012857F: ;
    edi = esi + 0x24;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_00128587: ;
    ecx = MEM32(esp + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x20) = ebx;
    MEM32(esp + 0x3C) = 0x2FFA54;
    MEM32(esp + 0x44) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_001285AC; /* je: equal / zero */

loc_001285A2: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001285ACu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_001285AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001285C0
 * Original: 0x001285C0 - 0x0012870F (335 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001285C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001285C0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x001285D3u); RECOMP_ABI_CALL(0x00084B70u, sub_00084B70); /* call 0x00084B70 */

loc_001285D3: ;
    PUSH32(esp, 0x001285D8u); RECOMP_ABI_CALL(0x000A6DA0u, sub_000A6DA0); /* call 0x000A6DA0 */

loc_001285D8: ;
    edi = MEM32(esi);
    ebp = eax;
    PUSH32(esp, 0x001285E1u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001285E1: ;
    eax = MEM32(eax + 0x230);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x001285F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001285ECu); } /* indirect call */
    }

loc_001285F2: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001285FAu); RECOMP_ABI_CALL(0x000A7090u, sub_000A7090); /* call 0x000A7090 */

loc_001285FA: ;
    PUSH32(esp, 0x001285FFu); RECOMP_ABI_CALL(0x000A8570u, sub_000A8570); /* call 0x000A8570 */

loc_001285FF: ;
    edi = MEM32(esi);
    ebp = eax;
    PUSH32(esp, 0x00128608u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00128608: ;
    eax = MEM32(eax + 0x25C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00128619u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128613u); } /* indirect call */
    }

loc_00128619: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00128621u); RECOMP_ABI_CALL(0x000A8580u, sub_000A8580); /* call 0x000A8580 */

loc_00128621: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00128638u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128632u); } /* indirect call */
    }

loc_00128638: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00128643u); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_00128643: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x77B281FC);
    PUSH32(esp, 0x0012864Fu); RECOMP_ABI_CALL(0x00148500u, sub_00148500); /* call 0x00148500 */

loc_0012864F: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00128656u); RECOMP_ABI_CALL(0x00147DF0u, sub_00147DF0); /* call 0x00147DF0 */

loc_00128656: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edi = 0x2FFA54;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x28) = 0x2FF9EC;
    MEM32(esp + 0x48) = ebx;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x50) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x18) = 0x2FF02C;
    if (CMP_EQ(_fa, _fb)) goto loc_001286C4; /* je: equal / zero */

loc_001286BF: ;
    eax = esi + 0x30;
    goto loc_001286C6;

loc_001286C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001286C6: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001286D0u); RECOMP_ABI_CALL(0x00141AF0u, sub_00141AF0); /* call 0x00141AF0 */

loc_001286D0: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x28;
    MEM32(esp + 0x48) = 0x8C865BEAu;
    PUSH32(esp, 0x001286E9u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_001286E9: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0xC) = 0x2FEC40;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012870B; /* je: equal / zero */

loc_00128701: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012870Bu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0012870B: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00128710
 * Original: 0x00128710 - 0x001287CE (190 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128710: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001287CA; /* je: equal / zero */

loc_00128722: ;
    SET_LO8(edx, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001287CA; /* je: equal / zero */

loc_0012872D: ;
    edx = MEM32(0x3888C0);
    PUSH32(esp, ebx);
    _fa = (uint32_t)(MEM8(edx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001287C9; /* jne: not equal / not zero */

loc_00128741: ;
    edx = MEM32(esi);
    ebx = MEM32(edx + 0x1424);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001287C9; /* jne: not equal / not zero */

loc_0012874D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012877A; /* jne: not equal / not zero */

loc_00128751: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012875D; /* jne: not equal / not zero */

loc_00128756: ;
    ecx = esi;
    PUSH32(esp, 0x0012875Du); RECOMP_ABI_CALL(0x001285C0u, sub_001285C0); /* call 0x001285C0 */

loc_0012875D: ;
    ecx = esi;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0012876Bu); RECOMP_ABI_CALL(0x001281F0u, sub_001281F0); /* call 0x001281F0 */

loc_0012876B: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00128775u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012876Fu); } /* indirect call */
    }

loc_00128775: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012877A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001287A0; /* jne: not equal / not zero */

loc_0012877F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001287BF; /* jne: not equal / not zero */

loc_00128783: ;
    ecx = esi;
    PUSH32(esp, 0x0012878Au); RECOMP_ABI_CALL(0x00128140u, sub_00128140); /* call 0x00128140 */

loc_0012878A: ;
    ecx = MEM32(esi);
    MEM32(esi + 4) = 1;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x0012879Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128795u); } /* indirect call */
    }

loc_0012879B: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001287A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001287BF; /* jne: not equal / not zero */

loc_001287A5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001287BF; /* jne: not equal / not zero */

loc_001287AA: ;
    ecx = esi;
    PUSH32(esp, 0x001287B1u); RECOMP_ABI_CALL(0x001282D0u, sub_001282D0); /* call 0x001282D0 */

loc_001287B1: ;
    ecx = esi;
    MEM32(esi + 4) = 2;
    PUSH32(esp, 0x001287BFu); RECOMP_ABI_CALL(0x001281A0u, sub_001281A0); /* call 0x001281A0 */

loc_001287BF: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x001287C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001287C3u); } /* indirect call */
    }

loc_001287C9: ;
    POP32(esp, ebx);

loc_001287CA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001287D0
 * Original: 0x001287D0 - 0x00128A15 (581 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001287D0(void)
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

loc_001287D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x3727C8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x376540)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, edi);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00128820; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00128815: ;
    PUSH32(esp, ebx);
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128820u); RECOMP_ABI_CALL(0x00128710u, sub_00128710); /* call 0x00128710 */

loc_00128820: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128830u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00128830: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x270)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00128867; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_0012883F: ;
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128867; /* jne: not equal / not zero */

loc_00128844: ;
    MEM8(esi + 0x18) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012884Du); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012884D: ;
    eax = MEM32(eax + 0x268);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128859u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00128859: ;
    ecx = MEM32(eax + 0x264);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128867u); RECOMP_ABI_CALL(0x001145C0u, sub_001145C0); /* call 0x001145C0 */

loc_00128867: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012886Cu); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012886C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x274)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012887Fu); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012887F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x26C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001288B4; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_00128899: ;
    _fa = (uint32_t)(MEM8(esi + 0x19)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x19), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001288B4; /* jne: not equal / not zero */

loc_0012889E: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi);
    MEM8(esi + 0x19) = 1;
    eax = MEM32(0x376198);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001288B4u); RECOMP_ABI_CALL(0x001145C0u, sub_001145C0); /* call 0x001145C0 */

loc_001288B4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001289DE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001288D0: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x30);
    ecx = eax + 0x30;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001288E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001288DDu); } /* indirect call */
    }

loc_001288E0: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edi = 0x2FFA54;
    MEM32(esp + 0x58) = ebx;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x54) = 0x2FF9EC;
    MEM32(esp + 0x74) = ebx;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x7C) = LO8(ebx);
    MEM8(esp + 0x40) = LO8(ebx);
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x44) = 0x2FF02C;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3003A4)); /* fmul dword ptr [0x3003a4] */
    fp_push(MEMF(0x317A8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x302588)); /* fadd dword ptr [0x302588] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    fp_top() = RECOMP_FP_PC(MEMF(0x302588) - fp_top()); /* fsubr dword ptr [0x302588] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0012898F; /* je: equal / zero */

loc_0012898A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00128991;

loc_0012898F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00128991: ;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012899Bu); RECOMP_ABI_CALL(0x00141AF0u, sub_00141AF0); /* call 0x00141AF0 */

loc_0012899B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ecx = esp + 0x3C;
    MEM32(esp + 0x58) = ecx;
    ecx = esp + 0x54;
    MEM32(esp + 0x74) = 0xA19425D9u;
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001289C0u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_001289C0: ;
    ecx = MEM32(esp + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x44) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_001289DE; /* je: equal / zero */

loc_001289D4: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001289DEu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_001289DE: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001289E5u); RECOMP_ABI_CALL(0x00127BA0u, sub_00127BA0); /* call 0x00127BA0 */

loc_001289E5: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001289F0u); RECOMP_ABI_CALL(0x00127F20u, sub_00127F20); /* call 0x00127F20 */

loc_001289F0: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = 0xA;
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00128A09; /* jle: less or equal (signed <=) */

loc_00128A01: ;
    edi = esi + 0x24;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_00128A09: ;
    POP32(esp, edi);
    MEM32(esi + 0x20) = ebx;
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
 * sub_00128A20
 * Original: 0x00128A20 - 0x00128B12 (242 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00128A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00128A62; /* je: equal / zero */

loc_00128A2B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00128B0E; /* je: equal / zero */

loc_00128A32: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00128B0E; /* jne: not equal / not zero */

loc_00128A39: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128A43u); RECOMP_ABI_CALL(0x001287D0u, sub_001287D0); /* call 0x001287D0 */

loc_00128A43: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00128B0E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00128A59: ;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00128A62: ;
    ecx = esi;
    PUSH32(esp, 0x00128A69u); RECOMP_ABI_CALL(0x00127BA0u, sub_00127BA0); /* call 0x00127BA0 */

loc_00128A69: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00128A75u); RECOMP_ABI_CALL(0x00127F20u, sub_00127F20); /* call 0x00127F20 */

loc_00128A75: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 0xA;
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00128A90; /* jle: less or equal (signed <=) */

loc_00128A86: ;
    PUSH32(esp, edi);
    edi = esi + 0x24;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00128A90: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esi + 0x20) = 0;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00128B0E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00128AA9: ;
    edx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00128AC1u); RECOMP_ABI_CALL(0x00079180u, sub_00079180); /* call 0x00079180 */

loc_00128AC1: ;
    ecx = eax;
    PUSH32(esp, 0x00128AC8u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_00128AC8: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128B0E; /* je: equal / zero */

loc_00128AD0: ;
    SET_LO8(ecx, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128B0E; /* je: equal / zero */

loc_00128AD7: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00128B0E; /* jne: not equal / not zero */

loc_00128AE6: ;
    edx = MEM32(esi);
    ecx = MEM32(edx + 0x1424);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128B0E; /* jne: not equal / not zero */

loc_00128AF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128B04; /* jne: not equal / not zero */

loc_00128AF6: ;
    ecx = esi;
    PUSH32(esp, 0x00128AFDu); RECOMP_ABI_CALL(0x00128140u, sub_00128140); /* call 0x00128140 */

loc_00128AFD: ;
    MEM32(esi + 4) = 1;

loc_00128B04: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00128B0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128B08u); } /* indirect call */
    }

loc_00128B0E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128B20
 * Original: 0x00128B20 - 0x00128B37 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128B20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128B25: ;
    SET_LO8(edx, MEM8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128B36; /* je: equal / zero */

loc_00128B2C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00128B25; /* jl: less (signed <) */

loc_00128B34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00128B36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00128B40
 * Original: 0x00128B40 - 0x00128B4E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128B40: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + -16;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128B50
 * Original: 0x00128B50 - 0x00128B5E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128B50: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + -16;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128B60
 * Original: 0x00128B60 - 0x00128BDA (122 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128B60(void)
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

loc_00128B60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x31A178)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x20;
    /* nop */

loc_00128B80: ;
    SET_LO8(eax, MEM8(edi + -16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128BAF; /* je: equal / zero */

loc_00128B87: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00128B93u); RECOMP_ABI_CALL(0x00266270u, sub_00266270); /* call 0x00266270 */

loc_00128B93: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00128BAF; /* jbe: below or equal (unsigned <=) */

loc_00128BA1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ebx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00128BAF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00128B80; /* jl: less (signed <) */

loc_00128BB8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128BC9; /* jne: not equal / not zero */

loc_00128BBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00128BC9: ;
    POP32(esp, edi);
    ebx = ebx << 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    eax = ebx + ebp + 0x10;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00128BE0
 * Original: 0x00128BE0 - 0x00128BE6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128BE0(void)
{

loc_00128BE0: ;
    eax = ecx;
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00128BF0
 * Original: 0x00128BF0 - 0x00128D8F (415 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00128BF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00128C0A; /* jne: not equal / not zero */

loc_00128C01: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00128C0A: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    ecx = MEM32(0x3E8D08);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    MEM32(esp + 0x20) = 0x302260;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00128C4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128C49u); } /* indirect call */
    }

loc_00128C4C: ;
    ecx = MEM32(0x3E8CF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00128D86; /* je: equal / zero */

loc_00128C65: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00128C6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128C67u); } /* indirect call */
    }

loc_00128C6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128D60; /* je: equal / zero */

loc_00128C75: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00128C7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128C7Bu); } /* indirect call */
    }

loc_00128C7E: ;
    edx = MEM32(edi);
    ecx = edi;
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00128C8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128C84u); } /* indirect call */
    }

loc_00128C8A: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00128C93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128C90u); } /* indirect call */
    }

loc_00128C93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128D60; /* je: equal / zero */

loc_00128C9B: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00128CA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128CA1u); } /* indirect call */
    }

loc_00128CA7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x00128CB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128CABu); } /* indirect call */
    }

loc_00128CB1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00128CBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128CB5u); } /* indirect call */
    }

loc_00128CBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128D60; /* jne: not equal / not zero */

loc_00128CC3: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x00128CCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128CC9u); } /* indirect call */
    }

loc_00128CCF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x00128CD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128CD3u); } /* indirect call */
    }

loc_00128CD9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00128CE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128CDDu); } /* indirect call */
    }

loc_00128CE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x9C); /* comiss */
    if ((_fca >= _fcb)) goto loc_00128D60; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x9C)) */

loc_00128CEC: ;
    ecx = esp + 0x4C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128CF5u); RECOMP_ABI_CALL(0x0017F670u, sub_0017F670); /* call 0x0017F670 */

loc_00128CF5: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00128CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128CFBu); } /* indirect call */
    }

loc_00128CFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_00128D15; /* je: equal / zero */

loc_00128D04: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128D13u); RECOMP_ABI_CALL(0x00180D20u, sub_00180D20); /* call 0x00180D20 */

loc_00128D13: ;
    goto loc_00128D4D;

loc_00128D15: ;
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x64)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x68)); /* movss */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128D4Du); RECOMP_ABI_CALL(0x00180E50u, sub_00180E50); /* call 0x00180E50 */

loc_00128D4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esp + 0x4C;
    if (CMP_NE(_fa, _fb)) goto loc_00128D81; /* jne: not equal / not zero */

loc_00128D5B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128D60u); RECOMP_ABI_CALL(0x0017F6C0u, sub_0017F6C0); /* call 0x0017F6C0 */

loc_00128D60: ;
    ecx = esp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128D69u); RECOMP_ABI_CALL(0x001313C0u, sub_001313C0); /* call 0x001313C0 */

loc_00128D69: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128C65; /* jne: not equal / not zero */

loc_00128D7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00128D81: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00128D86u); RECOMP_ABI_CALL(0x0017F6C0u, sub_0017F6C0); /* call 0x0017F6C0 */

loc_00128D86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00128D90
 * Original: 0x00128D90 - 0x00128DBD (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128D90: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 1;
    MEM8(eax + 0x10) = 0;
    edx = eax + 0x10;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx) = 0;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx) = 0;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx) = 0;
    MEM8(edx + 0x20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00128DC0
 * Original: 0x00128DC0 - 0x00128DDB (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128DC0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(ecx + 4);
    if (CMP_GE(_fas, _fbs)) goto loc_00128DD2; /* jge: greater or equal (signed >=) */

loc_00128DCB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00128DCD: ;
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

loc_00128DD2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00128DCD; /* jg: greater (signed >) */

loc_00128DD6: ;
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128DE0
 * Original: 0x00128DE0 - 0x00128E0E (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128DE0: ;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00128DEE; /* jl: less (signed <) */

loc_00128DE9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00128DEE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    if ((_fas >= 0)) goto loc_00128E01; /* jns: not sign (positive) */

loc_00128DF8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00128E01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00128E07; /* jle: less or equal (signed <=) */

loc_00128E05: ;
    eax = edx;

loc_00128E07: ;
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128E10
 * Original: 0x00128E10 - 0x00128E2B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128E10: ;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00128E22; /* jns: not sign (positive) */

loc_00128E1B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00128E1D: ;
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

loc_00128E22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00128E1D; /* jle: less or equal (signed <=) */

loc_00128E26: ;
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128E30
 * Original: 0x00128E30 - 0x00128E3F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128E30: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(eax + ecx + -16) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128E40
 * Original: 0x00128E40 - 0x00128E95 (85 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x10;

loc_00128E50: ;
    SET_LO8(ebx, MEM8(edx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128E69; /* je: equal / zero */

loc_00128E57: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00128E50; /* jl: less (signed <) */

loc_00128E5F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00128E69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128E8D; /* je: equal / zero */

loc_00128E6D: ;
    edx = eax;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + ecx + -16;
    edx = MEM32(ebp + 8);
    MEM8(ecx) = 1;
    esi = MEM32(edx);
    MEM32(ecx + 0x10) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 0x14) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 0x18) = edx;

loc_00128E8D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128EA0
 * Original: 0x00128EA0 - 0x00128EC8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128EA0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx + 0x28;
    ecx = 5;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* nop */

loc_00128EB0: ;
    MEM8(eax + -24) = LO8(edx);
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00128EB0; /* jne: not equal / not zero */

loc_00128EC7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00128ED0
 * Original: 0x00128ED0 - 0x00128EEF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128ED0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00128EE6; /* jge: greater or equal (signed >=) */

loc_00128EDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00128EE1: ;
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

loc_00128EE6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00128EE1; /* jg: greater (signed >) */

loc_00128EEA: ;
    MEM32(ecx) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00128EF0
 * Original: 0x00128EF0 - 0x00128F12 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128EF0(void)
{

loc_00128EF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax + 4) = 0;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00128F20
 * Original: 0x00128F20 - 0x00128F21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128F20(void)
{

loc_00128F20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00128F30
 * Original: 0x00128F30 - 0x00128F47 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128F30(void)
{

loc_00128F30: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = 0;
    MEM32(ecx + 8) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00128F50
 * Original: 0x00128F50 - 0x00128FCC (124 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128F50: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fa == 0)) goto loc_00128F7B; /* je: equal / zero */

loc_00128F68: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00128F8F; /* jne: not equal / not zero */

loc_00128F6B: ;
    ebx = MEM32(0x376644);
    xmm0 = XMM_SCALAR(MEMF(0x376664)); /* movss */
    goto loc_00128F89;

loc_00128F7B: ;
    ebx = MEM32(0x3765F8);
    xmm0 = XMM_SCALAR(MEMF(0x376618)); /* movss */

loc_00128F89: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_00128F8F: ;
    PUSH32(esp, 0x00128F94u); RECOMP_ABI_CALL(0x000A6DA0u, sub_000A6DA0); /* call 0x000A6DA0 */

loc_00128F94: ;
    ecx = MEM32(esi);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00128FA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128F9Bu); } /* indirect call */
    }

loc_00128FA1: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00128FA9u); RECOMP_ABI_CALL(0x000A7090u, sub_000A7090); /* call 0x000A7090 */

loc_00128FA9: ;
    PUSH32(esp, 0x00128FAEu); RECOMP_ABI_CALL(0x000A8570u, sub_000A8570); /* call 0x000A8570 */

loc_00128FAE: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0xC);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00128FBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00128FB9u); } /* indirect call */
    }

loc_00128FBF: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00128FC7u); RECOMP_ABI_CALL(0x000A8580u, sub_000A8580); /* call 0x000A8580 */

loc_00128FC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128FD0
 * Original: 0x00128FD0 - 0x00128FFD (45 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128FD0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00128FD0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00128FFA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_00128FDE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */

loc_00128FFA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129000
 * Original: 0x00129000 - 0x0012954F (1359 bytes, 319 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129000(void)
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

loc_00129000: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012900Eu); RECOMP_ABI_CALL(0x000A6DA0u, sub_000A6DA0); /* call 0x000A6DA0 */

loc_0012900E: ;
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0x00129017u); RECOMP_ABI_CALL(0x000A8570u, sub_000A8570); /* call 0x000A8570 */

loc_00129017: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x6C) = eax;
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x17) = LO8(eax);
    MEM8(esp + 0x1B) = LO8(eax);
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(ebx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x14) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEM32(esp + 0x34) = ebx;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ebx);
    MEM8(esp + 0x1A) = LO8(ebx);
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x60) = ebx;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    MEM8(esp + 0x4C) = 1;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if ((_fa == 0)) goto loc_00129244; /* je: equal / zero */

loc_001290BD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00129401; /* jne: not equal / not zero */

loc_001290C4: ;
    xmm0 = XMM_SCALAR(MEMF(0x376634)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001290D7u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001290D7: ;
    SET_LO8(eax, MEM8(eax + 0x2B4));
    MEM8(esp + 0x10) = LO8(eax);
    PUSH32(esp, 0x001290E6u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001290E6: ;
    SET_LO8(ecx, MEM8(eax + 0x2B8));
    MEM8(esp + 0x11) = LO8(ecx);
    PUSH32(esp, 0x001290F5u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001290F5: ;
    xmm0 = XMM_SCALAR(MEMF(0x376678)); /* movss */
    SET_LO8(edx, MEM8(eax + 0x2BC));
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x37667C)); /* movss */
    MEM8(esp + 0x12) = LO8(edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00129120u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00129120: ;
    SET_LO8(eax, MEM8(eax + 0x29C));
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x0012912Fu); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012912F: ;
    SET_LO8(ecx, MEM8(eax + 0x2A0));
    MEM8(esp + 0x15) = LO8(ecx);
    PUSH32(esp, 0x0012913Eu); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_0012913E: ;
    xmm0 = XMM_SCALAR(MEMF(0x376668)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FF9B4)); /* movss */
    SET_LO8(edx, MEM8(eax + 0x2A4));
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x376670)); /* movss */
    eax = MEM32(0x376640);
    edi = MEM32(0x376638);
    ebp = MEM32(0x37663C);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x37666C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEM8(esp + 0x16) = LO8(edx);
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x001291B4u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001291B4: ;
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    MEM8(esp + 0x18) = LO8(ecx);
    PUSH32(esp, 0x001291C3u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001291C3: ;
    SET_LO8(edx, MEM8(eax + 0x2AC));
    MEM8(esp + 0x19) = LO8(edx);
    PUSH32(esp, 0x001291D2u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001291D2: ;
    SET_LO8(eax, MEM8(eax + 0x2B0));
    xmm0 = XMM_SCALAR(MEMF(0x376650)); /* movss */
    ecx = MEM32(0x376648);
    edx = MEM32(0x37664C);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376660)); /* movss */
    MEM8(esp + 0x1A) = LO8(eax);
    eax = MEM32(0x376654);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376664)); /* movss */
    PUSH32(esp, ebx);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(0x376658);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(0x37665C);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(0x376674);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    PUSH32(esp, 4);
    goto loc_001293BF;

loc_00129244: ;
    xmm0 = XMM_SCALAR(MEMF(0x3765E8)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00129257u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00129257: ;
    SET_LO8(eax, MEM8(eax + 0x290));
    MEM8(esp + 0x10) = LO8(eax);
    PUSH32(esp, 0x00129266u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00129266: ;
    SET_LO8(ecx, MEM8(eax + 0x294));
    MEM8(esp + 0x11) = LO8(ecx);
    PUSH32(esp, 0x00129275u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00129275: ;
    xmm0 = XMM_SCALAR(MEMF(0x37662C)); /* movss */
    SET_LO8(edx, MEM8(eax + 0x298));
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376630)); /* movss */
    MEM8(esp + 0x12) = LO8(edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001292A0u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001292A0: ;
    SET_LO8(eax, MEM8(eax + 0x278));
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x001292AFu); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001292AF: ;
    SET_LO8(ecx, MEM8(eax + 0x27C));
    MEM8(esp + 0x15) = LO8(ecx);
    PUSH32(esp, 0x001292BEu); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_001292BE: ;
    xmm0 = XMM_SCALAR(MEMF(0x37661C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FF9B4)); /* movss */
    SET_LO8(edx, MEM8(eax + 0x280));
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x376624)); /* movss */
    eax = MEM32(0x3765F4);
    edi = MEM32(0x3765EC);
    ebp = MEM32(0x3765F0);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376620)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEM8(esp + 0x16) = LO8(edx);
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x00129334u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00129334: ;
    SET_LO8(ecx, MEM8(eax + 0x284));
    MEM8(esp + 0x18) = LO8(ecx);
    PUSH32(esp, 0x00129343u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00129343: ;
    SET_LO8(edx, MEM8(eax + 0x288));
    MEM8(esp + 0x19) = LO8(edx);
    PUSH32(esp, 0x00129352u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_00129352: ;
    SET_LO8(eax, MEM8(eax + 0x28C));
    xmm0 = XMM_SCALAR(MEMF(0x376604)); /* movss */
    ecx = MEM32(0x3765FC);
    edx = MEM32(0x376600);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376614)); /* movss */
    MEM8(esp + 0x1A) = LO8(eax);
    eax = MEM32(0x376608);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376618)); /* movss */
    PUSH32(esp, ebx);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(0x37660C);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(0x376610);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(0x376628);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31A180)); /* movss */
    PUSH32(esp, 3);

loc_001293BF: ;
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x58) = edx;
    edx = MEM32(ecx);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x54) = LO8(eax);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x001293EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001293E8u); } /* indirect call */
    }

loc_001293EE: ;
    ecx = eax;
    PUSH32(esp, 0x001293F5u); RECOMP_ABI_CALL(0x0018CF70u, sub_0018CF70); /* call 0x0018CF70 */

loc_001293F5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_00129401: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00129425; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00129410: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FE99C); /* addss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */

loc_00129425: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0012943Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00129436u); } /* indirect call */
    }

loc_0012943C: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00129447u); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_00129447: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x1ED0), 1 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_A(_fa, _fb)) goto loc_0012946B; /* ja: above (unsigned >) */

loc_00129457: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_00129486;

loc_0012946B: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00129475u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012946Fu); } /* indirect call */
    }

loc_00129475: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_00129486: ;
    PUSH32(esp, 0x0012948Bu); RECOMP_ABI_CALL(0x000AC1B0u, sub_000AC1B0); /* call 0x000AC1B0 */

loc_0012948B: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x001294A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001294A0u); } /* indirect call */
    }

loc_001294A6: ;
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001294B0u); RECOMP_ABI_CALL(0x000A6EE0u, sub_000A6EE0); /* call 0x000A6EE0 */

loc_001294B0: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001294C9u); RECOMP_ABI_CALL(0x000B17E0u, sub_000B17E0); /* call 0x000B17E0 */

loc_001294C9: ;
    edx = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(edx + 0x1ED0));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001294F2; /* ja: above (unsigned >) */

loc_001294DC: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xAB2357B0u);
    PUSH32(esp, 0x001294E8u); RECOMP_ABI_CALL(0x00148480u, sub_00148480); /* call 0x00148480 */

loc_001294E8: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x001294EFu); RECOMP_ABI_CALL(0x00147DF0u, sub_00147DF0); /* call 0x00147DF0 */

loc_001294EF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001294F2: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    ebp = MEM32(esp + 0x54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    esi = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    ecx = MEM32(esp + 0x64);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x80);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0012953Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00129534u); } /* indirect call */
    }

loc_0012953A: ;
    ecx = MEM32(esp + 0x94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129547u); RECOMP_ABI_CALL(0x000A8760u, sub_000A8760); /* call 0x000A8760 */

loc_00129547: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00129550
 * Original: 0x00129550 - 0x0012959B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129550: ;
    eax = MEM32(0x3888C0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax + 0x1ED0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1ED0), 1 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00129578; /* ja: above (unsigned >) */

loc_00129562: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xAB2357B0u);
    PUSH32(esp, 0x0012956Eu); RECOMP_ABI_CALL(0x00148500u, sub_00148500); /* call 0x00148500 */

loc_0012956E: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00129575u); RECOMP_ABI_CALL(0x00147DF0u, sub_00147DF0); /* call 0x00147DF0 */

loc_00129575: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00129578: ;
    PUSH32(esp, 0x0012957Du); RECOMP_ABI_CALL(0x000B18E0u, sub_000B18E0); /* call 0x000B18E0 */

loc_0012957D: ;
    PUSH32(esp, 0x00129582u); RECOMP_ABI_CALL(0x000A8570u, sub_000A8570); /* call 0x000A8570 */

loc_00129582: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00129590u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012958Au); } /* indirect call */
    }

loc_00129590: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00129598u); RECOMP_ABI_CALL(0x000A8580u, sub_000A8580); /* call 0x000A8580 */

loc_00129598: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001295A0
 * Original: 0x001295A0 - 0x001295D8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001295A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001295A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001295D5; /* je: equal / zero */

loc_001295A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001295B9; /* jne: not equal / not zero */

loc_001295AE: ;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x001295B6u); RECOMP_ABI_CALL(0x00128F50u, sub_00128F50); /* call 0x00128F50 */

loc_001295B6: ;
    esp += 8; return; /* ret 4 */

loc_001295B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001295C9; /* jne: not equal / not zero */

loc_001295BE: ;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x001295C6u); RECOMP_ABI_CALL(0x00129000u, sub_00129000); /* call 0x00129000 */

loc_001295C6: ;
    esp += 8; return; /* ret 4 */

loc_001295C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001295D5; /* jne: not equal / not zero */

loc_001295CD: ;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x001295D5u); RECOMP_ABI_CALL(0x00129550u, sub_00129550); /* call 0x00129550 */

loc_001295D5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001295E0
 * Original: 0x001295E0 - 0x0012963B (91 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001295E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001295E0: ;
    xmm1 = XMM_SCALAR(MEMF(0x3727C8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012961A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00129604: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129638; /* je: equal / zero */

loc_0012960B: ;
    MEM32(ecx + 4) = 0;
    PUSH32(esp, 0x00129617u); RECOMP_ABI_CALL(0x00129550u, sub_00129550); /* call 0x00129550 */

loc_00129617: ;
    esp += 8; return; /* ret 4 */

loc_0012961A: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00129638; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00129624: ;
    edx = MEM32(ecx + 4);
    eax = 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129638; /* je: equal / zero */

loc_00129630: ;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x00129638u); RECOMP_ABI_CALL(0x00128F50u, sub_00128F50); /* call 0x00128F50 */

loc_00129638: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129640
 * Original: 0x00129640 - 0x0012968D (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00129640: ;
    SET_LO8(eax, MEM8(0x51D6C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012968A; /* jne: not equal / not zero */

loc_00129649: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM32(eax + 0x13D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x13D8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012968A; /* je: equal / zero */

loc_00129654: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca > _fcb)) goto loc_0012968A; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_00129662: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x31A17C)); /* movss */
    MEM32(ecx + 8) = edx;
    edx = MEM32(ecx + 4);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0012968A; /* je: equal / zero */

loc_00129682: ;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x0012968Au); RECOMP_ABI_CALL(0x00129000u, sub_00129000); /* call 0x00129000 */

loc_0012968A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129690
 * Original: 0x00129690 - 0x001296D0 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129690(void)
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

loc_00129690: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001296A3; /* je: equal / zero */

loc_00129697: ;
    if (CMP_LE(_fas, _fbs)) goto loc_001296CD; /* jle: less or equal (signed <=) */

loc_00129699: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001296CD; /* jg: greater (signed >) */

loc_0012969E: ;
    g_seh_ebp = ebp; sub_001295E0(); return; /* tail jmp 0x001295E0 */

loc_001296A3: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001296CD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_001296B1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */

loc_001296CD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001296D0
 * Original: 0x001296D0 - 0x00129733 (99 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001296D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001296D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_001296DF; /* jne: not equal / not zero */

loc_001296DB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001296DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x3021CE;
    esi = ebp;
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
    if ((_flags == 0)) goto loc_001296F9; /* jne: not equal / not zero */

loc_001296F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001296F9: ;
    ecx = ebp;
    esi = ecx + 1;
    edi = edi;

loc_00129700: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129700; /* jne: not equal / not zero */

loc_00129707: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_0012972C; /* jle: less or equal (signed <=) */

loc_00129710: ;
    SET_LO8(ebx, MEM8(edx + ebp));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012971C; /* je: equal / zero */

loc_00129718: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129728; /* jne: not equal / not zero */

loc_0012971C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00129710; /* jl: less (signed <) */

loc_00129721: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00129728: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012972E; /* jl: less (signed <) */

loc_0012972C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0012972E: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00129740
 * Original: 0x00129740 - 0x0012974A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129740(void)
{

loc_00129740: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129750
 * Original: 0x00129750 - 0x0012975A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129750(void)
{

loc_00129750: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129760
 * Original: 0x00129760 - 0x0012976A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129760(void)
{

loc_00129760: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129770
 * Original: 0x00129770 - 0x0012988D (285 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129770: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129851; /* jne: not equal / not zero */

loc_00129782: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00129855; /* jle: less or equal (signed <=) */

loc_0012978F: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001297DE; /* jge: greater or equal (signed >=) */

loc_00129798: ;
    esi = MEM32(ecx + 4);
    edx = MEM32(esp + 0xC);
    eax = eax + eax * 4;
    esi = esi + eax * 4;

loc_001297A5: ;
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001297A5; /* jne: not equal / not zero */

loc_001297AF: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edx);
    edx = MEM32(ecx + 4);
    eax = eax + eax * 4;
    MEM32(edx + eax * 4 + 0xC) = ebx;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax);
    edx = eax + eax * 4;
    eax = MEM32(ecx + 4);
    MEM32(eax + edx * 4 + 0x10) = 0;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001297DE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0012981C; /* jle: less or equal (signed <=) */

loc_001297EB: ;
    ebx = MEM32(ecx + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0x10;
    PUSH32(esp, ebp);

loc_001297F6: ;
    ebp = MEM32(esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + ebx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + ebx + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00129804; /* jae: above or equal (unsigned >=) */

loc_001297FE: ;
    MEM32(esp + 0x18) = eax;
    edi = edx;

loc_00129804: ;
    ebp = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001297F6; /* jl: less (signed <) */

loc_00129812: ;
    esi = MEM32(esp + 0x18);
    ebx = 8;
    POP32(esp, ebp);

loc_0012981C: ;
    eax = MEM32(ecx + 4);
    edx = esi + esi * 4;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + eax;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012984F; /* ja: above (unsigned >) */

loc_0012982F: ;
    esi = MEM32(esp + 0x10);

loc_00129833: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129833; /* jne: not equal / not zero */

loc_0012983D: ;
    eax = MEM32(ecx + 4);
    MEM32(edx + eax + 0xC) = ebx;
    ecx = MEM32(ecx + 4);
    MEM32(edx + ecx + 0x10) = 0;

loc_0012984F: ;
    POP32(esp, edi);

loc_00129850: ;
    POP32(esp, esi);

loc_00129851: ;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00129855: ;
    if (CMP_NE(_fa, _fb)) goto loc_00129850; /* jne: not equal / not zero */

loc_00129857: ;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129850; /* jne: not equal / not zero */

loc_0012985F: ;
    edx = MEM32(esp + 0xC);
    esi = MEM32(ecx + 4);

loc_00129866: ;
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129866; /* jne: not equal / not zero */

loc_00129870: ;
    eax = MEM32(ecx + 4);
    MEM32(eax + 0xC) = ebx;
    edx = MEM32(ecx + 4);
    MEM32(edx + 0x10) = 0;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00129890
 * Original: 0x00129890 - 0x001298D1 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00129890: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    /* nop */

loc_001298A0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001298C9; /* jne: not equal / not zero */

loc_001298AA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001298C4; /* je: equal / zero */

loc_001298AE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001298C9; /* jne: not equal / not zero */

loc_001298BA: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001298A0; /* jne: not equal / not zero */

loc_001298C4: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001298C9: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001298E0
 * Original: 0x001298E0 - 0x001298E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001298E0(void)
{

loc_001298E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001298F0
 * Original: 0x001298F0 - 0x00129913 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001298F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001298F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129901u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129901: ;
    SET_LO8(ebx, MEM8(esi + 0x19));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012990Au); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012990A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129920
 * Original: 0x00129920 - 0x00129940 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129920: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129930u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129930: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x19) = 1;
    PUSH32(esp, 0x0012993Au); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012993A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129940
 * Original: 0x00129940 - 0x00129960 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129940: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129950u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129950: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x19) = 0;
    PUSH32(esp, 0x0012995Au); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012995A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129960
 * Original: 0x00129960 - 0x00129983 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129971u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129971: ;
    SET_LO8(ebx, MEM8(esi + 0x7F));
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012997Au); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012997A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129990
 * Original: 0x00129990 - 0x001299B0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129990: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001299A0u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001299A0: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x7F) = 1;
    PUSH32(esp, 0x001299AAu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001299AA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001299B0
 * Original: 0x001299B0 - 0x001299D0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001299B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001299B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001299C0u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001299C0: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x7F) = 0;
    PUSH32(esp, 0x001299CAu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001299CA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001299D0
 * Original: 0x001299D0 - 0x001299D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001299D0(void)
{

loc_001299D0: ;
    eax = 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001299E0
 * Original: 0x001299E0 - 0x00129A06 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001299E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001299E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001299F1u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_001299F1: ;
    SET_LO8(ebx, MEM8(esi + 0xE5));
    PUSH32(esp, edi);
    PUSH32(esp, 0x001299FDu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_001299FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129A10
 * Original: 0x00129A10 - 0x00129A33 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129A20u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129A20: ;
    PUSH32(esp, edi);
    MEM8(esi + 0xE5) = 1;
    PUSH32(esp, 0x00129A2Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129A2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129A40
 * Original: 0x00129A40 - 0x00129A63 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129A50u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129A50: ;
    PUSH32(esp, edi);
    MEM8(esi + 0xE5) = 0;
    PUSH32(esp, 0x00129A5Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129A5D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129A70
 * Original: 0x00129A70 - 0x00129A96 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129A70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129A81u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129A81: ;
    SET_LO8(ebx, MEM8(esi + 0x14B));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129A8Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129A8D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129AA0
 * Original: 0x00129AA0 - 0x00129AC3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129AB0u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129AB0: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x14B) = 1;
    PUSH32(esp, 0x00129ABDu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129ABD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129AD0
 * Original: 0x00129AD0 - 0x00129AF3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129AE0u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129AE0: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x14B) = 0;
    PUSH32(esp, 0x00129AEDu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129AED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129B00
 * Original: 0x00129B00 - 0x00129B26 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129B00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129B11u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129B11: ;
    SET_LO8(ebx, MEM8(esi + 0x1B1));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129B1Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129B1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129B30
 * Original: 0x00129B30 - 0x00129B53 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129B40u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129B40: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x1B1) = 1;
    PUSH32(esp, 0x00129B4Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129B4D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129B60
 * Original: 0x00129B60 - 0x00129B83 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129B70u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129B70: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x1B1) = 0;
    PUSH32(esp, 0x00129B7Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129B7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129B90
 * Original: 0x00129B90 - 0x00129C88 (248 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129B90: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x218);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00129C81; /* je: equal / zero */

loc_00129BA8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129C4B; /* je: equal / zero */

loc_00129BB5: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129C4B; /* je: equal / zero */

loc_00129BC1: ;
    PUSH32(esp, esi);
    MEM8(eax) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00129C23; /* jle: less or equal (signed <=) */

loc_00129BC7: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    /* nop */

loc_00129BD0: ;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, 0x31A398);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129BE0u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00129BE0: ;
    eax = esp + 0x20;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    /* nop */

loc_00129BF0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129BF0; /* jne: not equal / not zero */

loc_00129BF7: ;
    edi = MEM32(edi + 0x218);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00129C02: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129C02; /* jne: not equal / not zero */

loc_00129C0A: ;
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
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
    edi = MEM32(esp + 0x10);
    if ((_fa != 0)) goto loc_00129BD0; /* jne: not equal / not zero */

loc_00129C22: ;
    POP32(esp, ebp);

loc_00129C23: ;
    edx = MEM32(edi + 0x218);
    eax = edx;
    esi = eax + 1;
    edi = edi;

loc_00129C30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129C30; /* jne: not equal / not zero */

loc_00129C37: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00129C80; /* jle: less or equal (signed <=) */

loc_00129C3F: ;
    POP32(esp, ebx);
    MEM8(edx + eax + -1) = LO8(ecx);
    POP32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00129C4B: ;
    ecx = MEM32(0x31A380);
    MEM32(eax) = ecx;
    edx = MEM32(0x31A384);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x31A388);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x31A38C);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x31A390);
    MEM32(eax + 0x10) = ecx;
    SET_LO8(edx, MEM8(0x31A394));
    MEM8(eax + 0x14) = LO8(edx);

loc_00129C80: ;
    POP32(esp, ebx);

loc_00129C81: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00129C90
 * Original: 0x00129C90 - 0x00129D55 (197 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10A6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129D51; /* je: equal / zero */

loc_00129CA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = esi + 0x1694;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00129CAFu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129CAF: ;
    SET_LO8(ebx, MEM8(esi + 0x109D));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00129CBBu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129CBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129D4F; /* je: equal / zero */

loc_00129CC6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00129CCCu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129CCC: ;
    PUSH32(esp, ebp);
    MEM8(esi + 0x109C) = 0;
    MEM8(esi + 0x109E) = 0;
    PUSH32(esp, 0x00129CE0u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129CE0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x10D0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129D4F; /* jne: not equal / not zero */

loc_00129CF1: ;
    eax = MEM32(esi + 0x14BC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00129D4E; /* jbe: below or equal (unsigned <=) */

loc_00129CFE: ;
    ecx = MEM32(esp + 0x18);
    eax = esi + 0x14C0;

loc_00129D08: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129D21; /* je: equal / zero */

loc_00129D0C: ;
    edx = MEM32(esi + 0x14BC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00129D08; /* jb: below (unsigned <) */

loc_00129D1A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00129D21: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00129D27u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129D27: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6C);
    MEM8(esi + 0x109C) = 1;
    MEM8(esi + 0x109D) = 0;
    SET_LO8(ecx, MEM8(edi + esi + 0x1528));
    PUSH32(esp, ebp);
    MEM8(esi + 0x109E) = LO8(ecx);
    PUSH32(esp, 0x00129D4Bu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129D4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00129D4E: ;
    POP32(esp, edi);

loc_00129D4F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00129D51: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00129D60
 * Original: 0x00129D60 - 0x00129D85 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1694;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129D70u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129D70: ;
    esi = ZX8(MEM8(esi + 0x109E));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129D7Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129D7D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129D90
 * Original: 0x00129D90 - 0x00129DB6 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129D90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1694;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129DA1u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129DA1: ;
    SET_LO8(ebx, MEM8(esi + 0x109C));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129DADu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129DAD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129DC0
 * Original: 0x00129DC0 - 0x00129DEA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1694;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129DD0u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129DD0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM8(esi + 0x109D) = LO8(eax);
    MEM8(esi + 0x109C) = LO8(eax);
    PUSH32(esp, 0x00129DE4u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129DE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129DF0
 * Original: 0x00129DF0 - 0x00129E16 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129DF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129E01u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129E01: ;
    SET_LO8(ebx, MEM8(esi + 0x109F));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129E0Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129E0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129E20
 * Original: 0x00129E20 - 0x00129E43 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129E30u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129E30: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 1;
    PUSH32(esp, 0x00129E3Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129E3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129E50
 * Original: 0x00129E50 - 0x00129E73 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129E50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129E60u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129E60: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 0;
    PUSH32(esp, 0x00129E6Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129E6D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129E80
 * Original: 0x00129E80 - 0x00129E93 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129E80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x19);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00129E8Du); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_00129E8D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129EA0
 * Original: 0x00129EA0 - 0x00129EAA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129EA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129EA6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00129EA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00129EB0
 * Original: 0x00129EB0 - 0x00129ED6 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129EB0(void)
{

loc_00129EB0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x31A39C;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(ecx) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00129EE0
 * Original: 0x00129EE0 - 0x00129EEB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129EE0: ;
    ecx = MEM32(0x3DEED8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00129EF0
 * Original: 0x00129EF0 - 0x00129F1E (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129EF0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129EF8u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00129EF8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129EFEu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00129EFE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F1A; /* je: equal / zero */

loc_00129F07: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129F17u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_00129F17: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00129F1A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129F20
 * Original: 0x00129F20 - 0x00129F2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129F20: ;
    ecx = MEM32(0x3DEED8);
    g_seh_ebp = ebp; sub_0012CD30(); return; /* tail jmp 0x0012CD30 */

}

/**
 * sub_00129F30
 * Original: 0x00129F30 - 0x00129F5F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129F41u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129F41: ;
    eax = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10A8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10A8) (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x00129F56u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129F56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129F60
 * Original: 0x00129F60 - 0x0012A085 (293 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129F60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129F72u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_00129F72: ;
    ecx = MEM32(esi + 0x10B0);
    eax = MEM32(esi + 0x10A8);
    ebx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F95; /* je: equal / zero */

loc_00129F8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10A8) = eax;
    goto loc_00129FD6;

loc_00129F95: ;
    eax = MEM32(esi + 0x10AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129FA8; /* je: equal / zero */

loc_00129F9F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00129FA5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00129FA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00129FA8: ;
    eax = MEM32(esi + 0x10B4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10B4) = eax;
    eax = MEM32(eax);
    MEM32(esi + 0x10AC) = eax;
    edx = MEM32(esi + 0x10AC);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10B0) = eax;
    MEM32(esi + 0x10A8) = edx;

loc_00129FD6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00129FDCu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_00129FDC: ;
    eax = ebx + 4;
    PUSH32(esp, eax);
    ecx = esi + 0x10D4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00129FECu); RECOMP_ABI_CALL(0x002BF685u, sub_002BF685); /* call 0x002BF685 */

loc_00129FEC: ;
    edx = MEM32(ebx);
    MEM32(esi + 0x10D0) = edx;
    eax = MEM32(ebx + 0x3EC);
    MEM32(esi + 0x14BC) = eax;
    eax = MEM32(ebx + 0x3EC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0012A057; /* jbe: below or equal (unsigned <=) */

loc_0012A015: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x14C0;
    edi = ebx + 0x3F0;

loc_0012A022: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    edx = ebp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A02Fu); RECOMP_ABI_CALL(0x002BF685u, sub_002BF685); /* call 0x002BF685 */

loc_0012A02F: ;
    eax = MEM32(edi);
    MEM32(ebp) = eax;
    ecx = MEM32(edi + 0x68);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x68) = ecx;
    ecx = MEM32(ebx + 0x3EC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x6C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x6C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0012A022; /* jb: below (unsigned <) */

loc_0012A056: ;
    POP32(esp, ebp);

loc_0012A057: ;
    SET_LO8(eax, MEM8(ebx + 0x5A0));
    PUSH32(esp, ebx);
    MEM8(esi + 0x1670) = LO8(eax);
    MEM8(esi + 0x109D) = LO8(eax);
    MEM8(esi + 0x10A6) = 0;
    MEM8(esi + 0x10A7) = 0;
    PUSH32(esp, 0x0012A07Du); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012A07D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A090
 * Original: 0x0012A090 - 0x0012A1D2 (322 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A090: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 0x230;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x7F) = LO8(ebx);
    MEM8(esi + 0xE5) = LO8(ebx);
    MEM8(esi + 0x14B) = LO8(ebx);
    MEM8(esi + 0x1B1) = LO8(ebx);
    MEM32(esi + 0x218) = ebx;
    MEM32(esi + 0x21C) = ebx;
    MEM32(esi + 0x22C) = ebx;
    PUSH32(esp, 0x0012A0CFu); RECOMP_ABI_CALL(0x0007C2F0u, sub_0007C2F0); /* call 0x0007C2F0 */

loc_0012A0CF: ;
    ecx = esi + 0x10A8;
    MEM8(esi + 0x109C) = LO8(ebx);
    MEM8(esi + 0x109D) = LO8(ebx);
    MEM8(esi + 0x109E) = LO8(ebx);
    MEM8(esi + 0x109F) = LO8(ebx);
    MEM16(esi + 0x10A0) = LO16(ebx);
    MEM8(esi + 0x10A2) = LO8(ebx);
    MEM8(esi + 0x10A3) = 1;
    MEM8(esi + 0x10A4) = LO8(ebx);
    MEM8(esi + 0x10A5) = LO8(ebx);
    MEM8(esi + 0x10A6) = LO8(ebx);
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = ebx;
    MEM32(ecx + 0x14) = ebx;
    MEM32(ecx + 0x18) = ebx;
    MEM32(ecx + 0x1C) = ebx;
    MEM32(ecx + 0x20) = ebx;
    PUSH32(esp, ebx);
    MEM32(ecx + 0x24) = ebx;
    PUSH32(esp, 0x0012A136u); RECOMP_ABI_CALL(0x0012BCD0u, sub_0012BCD0); /* call 0x0012BCD0 */

loc_0012A136: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x19;
    edi = esi + 0x1A;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x19;
    edi = esi + 0x80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x19;
    edi = esi + 0xE6;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x169;
    edi = esi + 0x10D0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x31A3A4);
    eax = esi + 0x220;
    MEM32(eax) = ecx;
    SET_LO16(edx, MEM16(0x31A3A8));
    ecx = ebp;
    MEM16(eax + 4) = LO16(edx);
    PUSH32(esp, 0x0012A192u); RECOMP_ABI_CALL(0x0007A770u, sub_0007A770); /* call 0x0007A770 */

loc_0012A192: ;
    eax = esi + 0x1674;
    PUSH32(esp, eax);
    MEM32(esi + 0x22C) = ebx;
    PUSH32(esp, 0x0012A1A4u); RECOMP_ABI_CALL(0x001C01A7u, sub_001C01A7); /* call 0x001C01A7 */

loc_0012A1A4: ;
    ecx = esi + 0x1694;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012A1B0u); RECOMP_ABI_CALL(0x001C01A7u, sub_001C01A7); /* call 0x001C01A7 */

loc_0012A1B0: ;
    edx = esi + 0x16D4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A1BCu); RECOMP_ABI_CALL(0x001C01A7u, sub_001C01A7); /* call 0x001C01A7 */

loc_0012A1BC: ;
    eax = esi + 0x16B4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A1C8u); RECOMP_ABI_CALL(0x001C01A7u, sub_001C01A7); /* call 0x001C01A7 */

loc_0012A1C8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A1E0
 * Original: 0x0012A1E0 - 0x0012A275 (149 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A1E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3DEED4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A215; /* jne: not equal / not zero */

loc_0012A1EA: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x16F4);
    PUSH32(esp, 0x31A3AC);
    PUSH32(esp, 0x0012A1FEu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012A1FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A20E; /* je: equal / zero */

loc_0012A205: ;
    ecx = eax;
    PUSH32(esp, 0x0012A20Cu); RECOMP_ABI_CALL(0x0012A090u, sub_0012A090); /* call 0x0012A090 */

loc_0012A20C: ;
    goto loc_0012A210;

loc_0012A20E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012A210: ;
    MEM32(0x3DEED4) = eax;

loc_0012A215: ;
    ecx = MEM32(0x3DEED8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A273; /* jne: not equal / not zero */

loc_0012A21F: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A228u); RECOMP_ABI_CALL(0x0012ECB0u, sub_0012ECB0); /* call 0x0012ECB0 */

loc_0012A228: ;
    eax = MEM32(eax);
    ecx = MEM32(0x3DEED8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A252; /* je: equal / zero */

loc_0012A237: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x3DEED8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A243; /* je: equal / zero */

loc_0012A240: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012A243: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A252; /* je: equal / zero */

loc_0012A247: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012A252; /* jne: not equal / not zero */

loc_0012A24C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0012A252u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A250u); } /* indirect call */
    }

loc_0012A252: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A26E; /* je: equal / zero */

loc_0012A259: ;
    edx = MEM32(eax + 4);
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0012A26E; /* jne: not equal / not zero */

loc_0012A268: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0012A26Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A26Cu); } /* indirect call */
    }

loc_0012A26E: ;
    eax = MEM32(0x3DEED4);

loc_0012A273: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A280
 * Original: 0x0012A280 - 0x0012A584 (772 bytes, 235 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012A28Bu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A28B: ;
    edi = eax;
    ebp = edi + 0x16B4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A299u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A299: ;
    SET_LO8(ebx, MEM8(edi + 0x109F));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A2A5u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A2A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012A2ADu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A2AD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A353; /* je: equal / zero */

loc_0012A2B5: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A2C3u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A2C3: ;
    ebx = MEM32(esi + 0x10A8);
    eax = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012A2DAu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A2DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A33D; /* je: equal / zero */

loc_0012A2E1: ;
    PUSH32(esp, 0x31A4A8);
    PUSH32(esp, 0x0012A2EBu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012A2EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012A2F3u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A2F3: ;
    ecx = eax;
    PUSH32(esp, 0x0012A2FAu); RECOMP_ABI_CALL(0x00129F60u, sub_00129F60); /* call 0x00129F60 */

loc_0012A2FA: ;
    PUSH32(esp, 0x31A460);
    PUSH32(esp, 0x0012A304u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012A304: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012A30Cu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A30C: ;
    SET_LO8(ecx, MEM8(eax + 0x10A4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A33D; /* je: equal / zero */

loc_0012A316: ;
    PUSH32(esp, 0x31A42C);
    PUSH32(esp, 0x0012A320u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012A320: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x31A418);
    PUSH32(esp, 0x0012A330u); RECOMP_ABI_CALL(0x00278CF0u, sub_00278CF0); /* call 0x00278CF0 */

loc_0012A330: ;
    PUSH32(esp, 0x31A3DC);
    PUSH32(esp, 0x0012A33Au); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012A33A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A33D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012A344u); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012A344: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012A34Bu); RECOMP_ABI_CALL(0x001BFB5Fu, sub_001BFB5F); /* call 0x001BFB5F */

loc_0012A34B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012A353: ;
    edi = eax;
    ebp = edi + 0x16D4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A361u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A361: ;
    SET_LO8(ebx, MEM8(edi + 0x19));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A36Au); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A36A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A3A6; /* jne: not equal / not zero */

loc_0012A372: ;
    PUSH32(esp, 0x0012A377u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A377: ;
    edi = eax;
    ebp = edi + 0x16D4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A385u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A385: ;
    PUSH32(esp, ebp);
    MEM8(edi + 0x19) = 0;
    PUSH32(esp, 0x0012A38Fu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A38F: ;
    eax = MEM32(esi + 0x21C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A3A6; /* je: equal / zero */

loc_0012A39C: ;
    ecx = esi + 0x1A;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012A3A3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012A3A1u); } /* indirect call */
    }

loc_0012A3A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A3A6: ;
    PUSH32(esp, 0x0012A3ABu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A3AB: ;
    edi = eax;
    ebp = edi + 0x16D4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A3B9u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A3B9: ;
    SET_LO8(ebx, MEM8(edi + 0x7F));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A3C2u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A3C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A401; /* jne: not equal / not zero */

loc_0012A3CA: ;
    PUSH32(esp, 0x0012A3CFu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A3CF: ;
    edi = eax;
    ebp = edi + 0x16D4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A3DDu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A3DD: ;
    PUSH32(esp, ebp);
    MEM8(edi + 0x7F) = 0;
    PUSH32(esp, 0x0012A3E7u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A3E7: ;
    eax = MEM32(esi + 0x21C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A401; /* je: equal / zero */

loc_0012A3F4: ;
    edx = esi + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012A3FEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012A3FCu); } /* indirect call */
    }

loc_0012A3FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A401: ;
    PUSH32(esp, 0x0012A406u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A406: ;
    edi = eax;
    ebp = edi + 0x16D4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A414u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A414: ;
    SET_LO8(ebx, MEM8(edi + 0xE5));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A420u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A420: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A462; /* jne: not equal / not zero */

loc_0012A428: ;
    PUSH32(esp, 0x0012A42Du); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A42D: ;
    edi = eax;
    ebp = edi + 0x16D4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A43Bu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A43B: ;
    PUSH32(esp, ebp);
    MEM8(edi + 0xE5) = 0;
    PUSH32(esp, 0x0012A448u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A448: ;
    eax = MEM32(esi + 0x21C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A462; /* je: equal / zero */

loc_0012A455: ;
    ecx = esi + 0xE6;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012A45Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012A45Du); } /* indirect call */
    }

loc_0012A45F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A462: ;
    PUSH32(esp, 0x0012A467u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A467: ;
    edi = eax;
    ebp = edi + 0x16D4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A475u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A475: ;
    SET_LO8(ebx, MEM8(edi + 0x14B));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A481u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A481: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A4C3; /* jne: not equal / not zero */

loc_0012A489: ;
    PUSH32(esp, 0x0012A48Eu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A48E: ;
    edi = eax;
    ebp = edi + 0x16D4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A49Cu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A49C: ;
    PUSH32(esp, ebp);
    MEM8(edi + 0x14B) = 0;
    PUSH32(esp, 0x0012A4A9u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A4A9: ;
    eax = MEM32(esi + 0x21C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A4C3; /* je: equal / zero */

loc_0012A4B6: ;
    edx = esi + 0x14C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012A4C0u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012A4BEu); } /* indirect call */
    }

loc_0012A4C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A4C3: ;
    PUSH32(esp, 0x0012A4C8u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A4C8: ;
    edi = eax;
    ebp = edi + 0x16D4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A4D6u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A4D6: ;
    SET_LO8(ebx, MEM8(edi + 0x1B1));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A4E2u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A4E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A570; /* jne: not equal / not zero */

loc_0012A4EE: ;
    PUSH32(esp, 0x0012A4F3u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A4F3: ;
    edi = eax;
    ebp = edi + 0x16D4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A501u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A501: ;
    PUSH32(esp, ebp);
    MEM8(edi + 0x1B1) = 0;
    PUSH32(esp, 0x0012A50Eu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A50E: ;
    eax = MEM32(esi + 0x218);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A555; /* je: equal / zero */

loc_0012A51B: ;
    ecx = MEM32(esi + 0x21C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A532; /* je: equal / zero */

loc_0012A525: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x1B2;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0012A52Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012A52Du); } /* indirect call */
    }

loc_0012A52F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A532: ;
    ecx = MEM32(esi + 0x218);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012A53Eu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0012A53E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x10D0;
    ecx = 0x169;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012A555: ;
    eax = MEM32(esi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A570; /* je: equal / zero */

loc_0012A55F: ;
    edx = esi + 0x1B2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31A380);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012A56Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012A56Bu); } /* indirect call */
    }

loc_0012A56D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A570: ;
    edi = esi + 0x10D0;
    ecx = 0x169;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A590
 * Original: 0x0012A590 - 0x0012A5AF (31 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A590(void)
{

loc_0012A590: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x2041) = 1;
    PUSH32(esp, 0x0012A5A1u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A5A1: ;
    ecx = MEM32(0x3888C0);
    MEM8(ecx + 0x2042) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A5B0
 * Original: 0x0012A5B0 - 0x0012A5CF (31 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A5B0(void)
{

loc_0012A5B0: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x2041) = 0;
    PUSH32(esp, 0x0012A5C1u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A5C1: ;
    ecx = MEM32(0x3888C0);
    MEM8(ecx + 0x2042) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A5D0
 * Original: 0x0012A5D0 - 0x0012A642 (114 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A5D0: ;
    eax = MEM32(ecx + 0x10B8);
    PUSH32(esp, esi);
    esi = ecx + 0x10A8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A637; /* je: equal / zero */

loc_0012A5E1: ;
    PUSH32(esp, edi);

loc_0012A5E2: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 8);
    edi = MEM32(ecx);
    eax = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A5F7; /* je: equal / zero */

loc_0012A5F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012A620;

loc_0012A5F7: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A607; /* je: equal / zero */

loc_0012A5FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A604u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012A604: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A607: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    eax = MEM32(eax);
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    eax = MEM32(esi + 4);

loc_0012A620: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A62F; /* je: equal / zero */

loc_0012A626: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A62Cu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012A62C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A62F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A5E2; /* jne: not equal / not zero */

loc_0012A636: ;
    POP32(esp, edi);

loc_0012A637: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A63Du); RECOMP_ABI_CALL(0x0012BED0u, sub_0012BED0); /* call 0x0012BED0 */

loc_0012A63D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A650
 * Original: 0x0012A650 - 0x0012A767 (279 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A650: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x31A530);
    PUSH32(esp, 0x0012A65Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012A65E: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x3DEED8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A671u); RECOMP_ABI_CALL(0x0012C660u, sub_0012C660); /* call 0x0012C660 */

loc_0012A671: ;
    MEM8(esp + 0xF) = LO8(eax);
    PUSH32(esp, 0x0012A67Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A67A: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A688u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A688: ;
    ebx = MEM32(esi + 0x10A8);
    ecx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012A69Fu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A69F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A6DE; /* je: equal / zero */

loc_0012A6A6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012A6ADu); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012A6AD: ;
    PUSH32(esp, 0x0012A6B2u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A6B2: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A6C0u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A6C0: ;
    ebx = MEM32(esi + 0x10A8);
    edx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012A6D7u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A6D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A6A6; /* jne: not equal / not zero */

loc_0012A6DE: ;
    PUSH32(esp, 0x0012A6E3u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A6E3: ;
    ecx = eax;
    PUSH32(esp, 0x0012A6EAu); RECOMP_ABI_CALL(0x0012A5D0u, sub_0012A5D0); /* call 0x0012A5D0 */

loc_0012A6EA: ;
    _fa = (uint32_t)(MEM8(esp + 0xF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xF), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A6FF; /* jne: not equal / not zero */

loc_0012A6F1: ;
    PUSH32(esp, 0x0012A6F6u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A6F6: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x31A528);
    goto loc_0012A70B;

loc_0012A6FF: ;
    PUSH32(esp, 0x0012A704u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A704: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x31A520);

loc_0012A70B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A711u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0012A711: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012A719u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A719: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A727u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A727: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x19) = 1;
    PUSH32(esp, 0x0012A731u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A731: ;
    PUSH32(esp, 0x0012A736u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A736: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A744u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A744: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 0;
    PUSH32(esp, 0x0012A751u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A751: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x31A4E4;
    g_seh_ebp = ebp; sub_00264150(); return; /* tail jmp 0x00264150 */

}

/**
 * sub_0012A770
 * Original: 0x0012A770 - 0x0012A867 (247 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x31A5B8);
    PUSH32(esp, 0x0012A77Du); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012A77D: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x3DEED8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A790u); RECOMP_ABI_CALL(0x0012C740u, sub_0012C740); /* call 0x0012C740 */

loc_0012A790: ;
    PUSH32(esp, 0x0012A795u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A795: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A7A3u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A7A3: ;
    ebx = MEM32(esi + 0x10A8);
    ecx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012A7BAu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A7BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A7F9; /* je: equal / zero */

loc_0012A7C1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012A7C8u); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012A7C8: ;
    PUSH32(esp, 0x0012A7CDu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A7CD: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A7DBu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A7DB: ;
    ebx = MEM32(esi + 0x10A8);
    edx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012A7F2u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A7F2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A7C1; /* jne: not equal / not zero */

loc_0012A7F9: ;
    PUSH32(esp, 0x0012A7FEu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A7FE: ;
    ecx = eax;
    PUSH32(esp, 0x0012A805u); RECOMP_ABI_CALL(0x0012A5D0u, sub_0012A5D0); /* call 0x0012A5D0 */

loc_0012A805: ;
    PUSH32(esp, 0x0012A80Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A80A: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x31A528);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A817u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0012A817: ;
    PUSH32(esp, 0x0012A81Cu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A81C: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A82Au); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A82A: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x19) = 1;
    PUSH32(esp, 0x0012A834u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A834: ;
    PUSH32(esp, 0x0012A839u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A839: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A847u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A847: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 0;
    PUSH32(esp, 0x0012A854u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A854: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x31A570;
    g_seh_ebp = ebp; sub_00264150(); return; /* tail jmp 0x00264150 */

}

/**
 * sub_0012A870
 * Original: 0x0012A870 - 0x0012A9B1 (321 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x31A67C);
    PUSH32(esp, 0x0012A87Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012A87E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012A886u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A886: ;
    esi = eax;
    PUSH32(esp, 0x0012A88Du); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A88D: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax + 0x22C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEED8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x220;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A8ABu); RECOMP_ABI_CALL(0x0012C9E0u, sub_0012C9E0); /* call 0x0012C9E0 */

loc_0012A8AB: ;
    ebp = eax;
    PUSH32(esp, 0x0012A8B2u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A8B2: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A8C0u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A8C0: ;
    ebx = MEM32(esi + 0x10A8);
    edx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012A8D7u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A8D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A918; /* je: equal / zero */

loc_0012A8DE: ;
    edi = edi;

loc_0012A8E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012A8E7u); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012A8E7: ;
    PUSH32(esp, 0x0012A8ECu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A8EC: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A8FAu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A8FA: ;
    ebx = MEM32(esi + 0x10A8);
    eax = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012A911u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A911: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A8E0; /* jne: not equal / not zero */

loc_0012A918: ;
    PUSH32(esp, 0x0012A91Du); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A91D: ;
    ecx = eax;
    PUSH32(esp, 0x0012A924u); RECOMP_ABI_CALL(0x0012A5D0u, sub_0012A5D0); /* call 0x0012A5D0 */

loc_0012A924: ;
    PUSH32(esp, 0x0012A929u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A929: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, 0x19);
    if (CMP_EQ(_fa, _fb)) goto loc_0012A94F; /* je: equal / zero */

loc_0012A930: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A948; /* je: equal / zero */

loc_0012A935: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A941; /* je: equal / zero */

loc_0012A93A: ;
    PUSH32(esp, 0x31A66C);
    goto loc_0012A954;

loc_0012A941: ;
    PUSH32(esp, 0x31A65C);
    goto loc_0012A954;

loc_0012A948: ;
    PUSH32(esp, 0x31A64C);
    goto loc_0012A954;

loc_0012A94F: ;
    PUSH32(esp, 0x31A63C);

loc_0012A954: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A95Au); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0012A95A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012A962u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A962: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A970u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A970: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x14B) = 1;
    PUSH32(esp, 0x0012A97Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A97D: ;
    PUSH32(esp, 0x0012A982u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012A982: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012A990u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012A990: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 0;
    PUSH32(esp, 0x0012A99Du); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012A99D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x31A600;
    g_seh_ebp = ebp; sub_00264150(); return; /* tail jmp 0x00264150 */

}

/**
 * sub_0012A9C0
 * Original: 0x0012A9C0 - 0x0012AA2F (111 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A9C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0012A9C8u); RECOMP_ABI_CALL(0x0012A5D0u, sub_0012A5D0); /* call 0x0012A5D0 */

loc_0012A9C8: ;
    eax = esi + 0x1674;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A9D4u); RECOMP_ABI_CALL(0x001C01B8u, sub_001C01B8); /* call 0x001C01B8 */

loc_0012A9D4: ;
    ecx = esi + 0x1694;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012A9E0u); RECOMP_ABI_CALL(0x001C01B8u, sub_001C01B8); /* call 0x001C01B8 */

loc_0012A9E0: ;
    edx = esi + 0x16D4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A9ECu); RECOMP_ABI_CALL(0x001C01B8u, sub_001C01B8); /* call 0x001C01B8 */

loc_0012A9EC: ;
    eax = esi + 0x16B4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A9F8u); RECOMP_ABI_CALL(0x001C01B8u, sub_001C01B8); /* call 0x001C01B8 */

loc_0012A9F8: ;
    eax = MEM32(esi + 0x10C8);
    _fb = (uint32_t)(0x10A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10A8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AA2D; /* je: equal / zero */

loc_0012AA0B: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0012AA1Du); RECOMP_ABI_CALL(0x00155D00u, sub_00155D00); /* call 0x00155D00 */

loc_0012AA1D: ;
    esi = MEM32(esi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AA2D; /* je: equal / zero */

loc_0012AA24: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AA2Au); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012AA2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012AA2D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AA30
 * Original: 0x0012AA30 - 0x0012AAB1 (129 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AA30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0012AA3Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012AA3A: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AA48u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012AA48: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 1;
    PUSH32(esp, 0x0012AA55u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AA55: ;
    PUSH32(esp, 0x0012AA5Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012AA5A: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AA68u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012AA68: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x19) = 0;
    PUSH32(esp, 0x0012AA72u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AA72: ;
    eax = MEM32(esp + 0x20);
    ecx = ebx + 0x1A;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_0012AA80: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AA80; /* jne: not equal / not zero */

loc_0012AA8A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12A650);
    ecx = 0x3C2470;
    MEM32(ebx + 0x21C) = eax;
    PUSH32(esp, 0x0012AAABu); RECOMP_ABI_CALL(0x00155A80u, sub_00155A80); /* call 0x00155A80 */

loc_0012AAAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012AAC0
 * Original: 0x0012AAC0 - 0x0012AB41 (129 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AAC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0012AACAu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012AACA: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AAD8u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012AAD8: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 1;
    PUSH32(esp, 0x0012AAE5u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AAE5: ;
    PUSH32(esp, 0x0012AAEAu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012AAEA: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AAF8u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012AAF8: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x19) = 0;
    PUSH32(esp, 0x0012AB02u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AB02: ;
    eax = MEM32(esp + 0x20);
    ecx = ebx + 0x1A;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_0012AB10: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AB10; /* jne: not equal / not zero */

loc_0012AB1A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12A770);
    ecx = 0x3C2470;
    MEM32(ebx + 0x21C) = eax;
    PUSH32(esp, 0x0012AB3Bu); RECOMP_ABI_CALL(0x00155A80u, sub_00155A80); /* call 0x00155A80 */

loc_0012AB3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012AB50
 * Original: 0x0012AB50 - 0x0012AD1C (460 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012AB50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x5A4);
    PUSH32(esp, 0x31A6B8);
    ebp = ecx;
    PUSH32(esp, 0x0012AB6Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012AB6A: ;
    edi = MEM32(esp + 0x24);
    esi = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x0012AB7Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012AB7D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AB83u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012AB83: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x1F3);
    if (CMP_EQ(_fa, _fb)) goto loc_0012AB96; /* je: equal / zero */

loc_0012AB8F: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    goto loc_0012AB9B;

loc_0012AB96: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, edi);

loc_0012AB9B: ;
    PUSH32(esp, 0x0012ABA0u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0012ABA0: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    MEM32(esi) = 0x64;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esi + 0x5A0) = LO8(eax);
    MEM32(esi + 0x3EC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0012ACBB; /* je: equal / zero */

loc_0012ABC5: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012AC3B; /* je: equal / zero */

loc_0012ABCE: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ebx = esi + 0x3F4;
    PUSH32(esp, 0x0012ABDDu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012ABDD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012ABE3u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012ABE3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x31);
    if (CMP_EQ(_fa, _fb)) goto loc_0012ABF0; /* je: equal / zero */

loc_0012ABEC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    goto loc_0012AC02;

loc_0012ABF0: ;
    ecx = MEM32(esi + 0x3EC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    edx = ecx + esi + 0x3F4;
    PUSH32(esp, edx);
    PUSH32(esp, edi);

loc_0012AC02: ;
    PUSH32(esp, 0x0012AC07u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0012AC07: ;
    eax = MEM32(esi + 0x3EC);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    MEM32(ecx + esi + 0x3F0) = eax;
    eax = MEM32(esi + 0x3EC);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    MEM32(edx + esi + 0x458) = eax;
    eax = MEM32(esi + 0x3EC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x3EC) = eax;

loc_0012AC3B: ;
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012ACBA; /* je: equal / zero */

loc_0012AC43: ;
    eax = MEM32(esi + 0x3EC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ebx = eax + esi + 0x3F4;
    PUSH32(esp, 0x0012AC5Cu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012AC5C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AC62u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012AC62: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0x31);
    if (CMP_EQ(_fa, _fb)) goto loc_0012AC6F; /* je: equal / zero */

loc_0012AC6B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    goto loc_0012AC81;

loc_0012AC6F: ;
    edx = MEM32(esi + 0x3EC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    eax = edx + esi + 0x3F4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);

loc_0012AC81: ;
    PUSH32(esp, 0x0012AC86u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0012AC86: ;
    eax = MEM32(esi + 0x3EC);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    MEM32(ecx + esi + 0x3F0) = eax;
    eax = MEM32(esi + 0x3EC);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    MEM32(edx + esi + 0x458) = eax;
    eax = MEM32(esi + 0x3EC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x3EC) = eax;

loc_0012ACBA: ;
    POP32(esp, ebx);

loc_0012ACBB: ;
    edi = ebp + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012ACC7u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012ACC7: ;
    edx = MEM32(ebp + 0x10C0);
    eax = MEM32(ebp + 0x10B8);
    ecx = ebp + 0x10A8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AD02; /* je: equal / zero */

loc_0012ACE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012ACE9; /* je: equal / zero */

loc_0012ACE7: ;
    MEM32(eax) = esi;

loc_0012ACE9: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, 0x0012ACF8u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012ACF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_0012AD02: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AD0Cu); RECOMP_ABI_CALL(0x00155D30u, sub_00155D30); /* call 0x00155D30 */

loc_0012AD0C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AD12u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AD12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0012AD20
 * Original: 0x0012AD20 - 0x0012ADE7 (199 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AD20: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0012AD3Du); RECOMP_ABI_CALL(0x0012AB50u, sub_0012AB50); /* call 0x0012AB50 */

loc_0012AD3D: ;
    PUSH32(esp, 0x0012AD42u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012AD42: ;
    SET_LO8(ecx, MEM8(eax + 0x10A3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AD67; /* je: equal / zero */

loc_0012AD4C: ;
    PUSH32(esp, 0x31A6E8);
    PUSH32(esp, 0x0012AD56u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012AD56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0x109C) = 1;
    MEM8(edi + 0x109E) = 1;

loc_0012AD67: ;
    esi = edi + 0x1694;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AD73u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012AD73: ;
    SET_LO8(ebx, MEM8(edi + 0x109C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AD7Fu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AD7F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012ADA6; /* jne: not equal / not zero */

loc_0012AD86: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012AD8Du); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012AD8D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AD93u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012AD93: ;
    SET_LO8(ebx, MEM8(edi + 0x109C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AD9Fu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AD9F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AD86; /* je: equal / zero */

loc_0012ADA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ADACu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012ADAC: ;
    PUSH32(esp, esi);
    MEM8(edi + 0x109D) = 0;
    MEM8(edi + 0x109C) = 0;
    PUSH32(esp, 0x0012ADC0u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012ADC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ADC6u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012ADC6: ;
    edi = ZX8(MEM8(edi + 0x109E));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ADD3u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012ADD3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0012ADE2; /* jne: not equal / not zero */

loc_0012ADDD: ;
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

loc_0012ADE2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0012ADF0
 * Original: 0x0012ADF0 - 0x0012AE95 (165 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ADF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012ADF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0012ADFAu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012ADFA: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AE08u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012AE08: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 1;
    PUSH32(esp, 0x0012AE15u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AE15: ;
    PUSH32(esp, 0x0012AE1Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012AE1A: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012AE28u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012AE28: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x14B) = 0;
    PUSH32(esp, 0x0012AE35u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AE35: ;
    eax = MEM32(esp + 0x20);
    ecx = ebx + 0x220;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012AE44: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AE44; /* jne: not equal / not zero */

loc_0012AE4E: ;
    eax = MEM32(esp + 0x14);
    MEM32(ebx + 0x22C) = eax;
    eax = MEM32(esp + 0x18);
    edx = ebx + 0x14C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012AE64: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AE64; /* jne: not equal / not zero */

loc_0012AE6E: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, 0);
    MEM32(ebx + 0x21C) = ecx;
    PUSH32(esp, 0x12A870);
    ecx = 0x3C2470;
    PUSH32(esp, 0x0012AE8Fu); RECOMP_ABI_CALL(0x00155A80u, sub_00155A80); /* call 0x00155A80 */

loc_0012AE8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0012AEA0
 * Original: 0x0012AEA0 - 0x0012AFF2 (338 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AEA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x5A4);
    PUSH32(esp, 0x31A728);
    edi = ecx;
    PUSH32(esp, 0x0012AEBAu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012AEBA: ;
    esi = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x0012AECEu); RECOMP_ABI_CALL(0x002BF685u, sub_002BF685); /* call 0x002BF685 */

loc_0012AECE: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    SET_LO8(eax, MEM8(esp + 0x38));
    MEM32(esi) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x3EC) = 0;
    MEM8(esi + 0x5A0) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0012AF3E; /* je: equal / zero */

loc_0012AEF3: ;
    eax = MEM32(esi + 0x3EC);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    MEM32(edx + esi + 0x3F0) = eax;
    eax = MEM32(esi + 0x3EC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    PUSH32(esp, ecx);
    ecx = eax + esi + 0x3F4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012AF1Cu); RECOMP_ABI_CALL(0x002BF685u, sub_002BF685); /* call 0x002BF685 */

loc_0012AF1C: ;
    eax = MEM32(esi + 0x3EC);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    MEM32(edx + esi + 0x458) = eax;
    eax = MEM32(esi + 0x3EC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x3EC) = eax;

loc_0012AF3E: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AF91; /* je: equal / zero */

loc_0012AF46: ;
    eax = MEM32(esi + 0x3EC);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    MEM32(edx + esi + 0x3F0) = eax;
    eax = MEM32(esi + 0x3EC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    PUSH32(esp, ecx);
    ecx = eax + esi + 0x3F4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012AF6Fu); RECOMP_ABI_CALL(0x002BF685u, sub_002BF685); /* call 0x002BF685 */

loc_0012AF6F: ;
    eax = MEM32(esi + 0x3EC);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    MEM32(edx + esi + 0x458) = eax;
    eax = MEM32(esi + 0x3EC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x3EC) = eax;

loc_0012AF91: ;
    ebx = edi + 0x1674;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012AF9Du); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012AF9D: ;
    edx = MEM32(edi + 0x10C0);
    eax = MEM32(edi + 0x10B8);
    ecx = edi + 0x10A8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AFD8; /* je: equal / zero */

loc_0012AFB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AFBF; /* je: equal / zero */

loc_0012AFBD: ;
    MEM32(eax) = esi;

loc_0012AFBF: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, 0x0012AFCEu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AFCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

loc_0012AFD8: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AFE2u); RECOMP_ABI_CALL(0x00155D30u, sub_00155D30); /* call 0x00155D30 */

loc_0012AFE2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012AFE8u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012AFE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0012B000
 * Original: 0x0012B000 - 0x0012B230 (560 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B000: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x31A7E8);
    PUSH32(esp, 0x0012B00Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012B00F: ;
    PUSH32(esp, 0x0012B014u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B014: ;
    esi = eax;
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x230;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM8(esp + 0x1B) = 1;
    PUSH32(esp, 0x0012B02Au); RECOMP_ABI_CALL(0x001296D0u, sub_001296D0); /* call 0x001296D0 */

loc_0012B02A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0012B034u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B034: ;
    SET_LO8(ecx, MEM8(eax + 0x10A5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ebp = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B17D; /* je: equal / zero */

loc_0012B046: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B14A; /* jne: not equal / not zero */

loc_0012B04E: ;
    edx = MEM32(0x3766CC);
    eax = MEM32(0x376704);
    ecx = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B065u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B065: ;
    ecx = eax;
    PUSH32(esp, 0x0012B06Cu); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_0012B06C: ;
    PUSH32(esp, 0x0012B071u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B071: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x31A7D0);

loc_0012B078: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B07Eu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0012B07E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012B086u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B086: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B094u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B094: ;
    ebx = MEM32(esi + 0x10A8);
    edx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012B0ABu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B0AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B0EA; /* je: equal / zero */

loc_0012B0B2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012B0B9u); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012B0B9: ;
    PUSH32(esp, 0x0012B0BEu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B0BE: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B0CCu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B0CC: ;
    ebx = MEM32(esi + 0x10A8);
    eax = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012B0E3u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B0E3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B0B2; /* jne: not equal / not zero */

loc_0012B0EA: ;
    PUSH32(esp, 0x0012B0EFu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B0EF: ;
    ecx = eax;
    PUSH32(esp, 0x0012B0F6u); RECOMP_ABI_CALL(0x0012A5D0u, sub_0012A5D0); /* call 0x0012A5D0 */

loc_0012B0F6: ;
    PUSH32(esp, 0x0012B0FBu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B0FB: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B109u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B109: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x7F) = 1;
    PUSH32(esp, 0x0012B113u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B113: ;
    PUSH32(esp, 0x0012B118u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B118: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B126u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B126: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 0;
    PUSH32(esp, 0x0012B133u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B133: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x31A798;
    g_seh_ebp = ebp; sub_00264150(); return; /* tail jmp 0x00264150 */

loc_0012B14A: ;
    ecx = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(ecx + 0x2040));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B17D; /* je: equal / zero */

loc_0012B15A: ;
    edx = MEM32(0x3766C4);
    eax = MEM32(0x3766C8);
    ecx = MEM32(0x3766FC);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B174u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B174: ;
    ecx = eax;
    PUSH32(esp, 0x0012B17Bu); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_0012B17B: ;
    goto loc_0012B181;

loc_0012B17D: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_0012B181: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B06C; /* je: equal / zero */

loc_0012B189: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B06C; /* je: equal / zero */

loc_0012B191: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012B194: ;
    edx = MEM32(0x3766C4);
    eax = MEM32(0x3766C8);
    ecx = MEM32(0x376700);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B1AEu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B1AE: ;
    ecx = eax;
    PUSH32(esp, 0x0012B1B5u); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_0012B1B5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B1CD; /* je: equal / zero */

loc_0012B1B9: ;
    ecx = MEM32(0x3DEED8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012B1C6u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012B1C6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B1F2; /* je: equal / zero */

loc_0012B1CD: ;
    edx = MEM32(0x3766C4);
    eax = MEM32(0x3766C8);
    ecx = MEM32(0x3766D0);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B1E7u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B1E7: ;
    ecx = eax;
    PUSH32(esp, 0x0012B1EEu); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_0012B1EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B194; /* je: equal / zero */

loc_0012B1F2: ;
    PUSH32(esp, 0x0012B1F7u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B1F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, 0x19);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B226; /* je: equal / zero */

loc_0012B1FE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B21C; /* je: equal / zero */

loc_0012B203: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B212; /* je: equal / zero */

loc_0012B208: ;
    PUSH32(esp, 0x31A788);
    goto loc_0012B078;

loc_0012B212: ;
    PUSH32(esp, 0x31A778);
    goto loc_0012B078;

loc_0012B21C: ;
    PUSH32(esp, 0x31A768);
    goto loc_0012B078;

loc_0012B226: ;
    PUSH32(esp, 0x31A758);
    goto loc_0012B078;

}

/**
 * sub_0012B230
 * Original: 0x0012B230 - 0x0012B5C2 (914 bytes, 264 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x31A85C);
    PUSH32(esp, 0x0012B23Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012B23F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012B247u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B247: ;
    edi = eax;
    _fb = (uint32_t)(0x230) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x230)) >> 32) & 1);
    edi = edi + 0x230;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012B254u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B254: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(esp + 0x13) = LO8(ebx);
    PUSH32(esp, 0x0012B262u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B262: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x2041));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0012B2C9; /* jne: not equal / not zero */

loc_0012B271: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(0x3766C4);
    edx = MEM32(0x3766C8);
    eax = MEM32(0x3766E0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B28Fu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B28F: ;
    ecx = eax;
    PUSH32(esp, 0x0012B296u); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_0012B296: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012B3A0; /* jne: not equal / not zero */

loc_0012B2A1: ;
    PUSH32(esp, 0x0012B2A6u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B2A6: ;
    ecx = MEM32(0x3888C0);
    MEM8(ecx + 0x2041) = LO8(ebx);
    PUSH32(esp, 0x0012B2B7u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B2B7: ;
    edx = MEM32(0x3888C0);
    MEM8(edx + 0x2042) = 0;
    goto loc_0012B39B;

loc_0012B2C9: ;
    PUSH32(esp, 0x0012B2CEu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B2CE: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x2042)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2042), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012B308; /* jne: not equal / not zero */

loc_0012B2DC: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(0x3766C4);
    edx = MEM32(0x3766C8);
    eax = MEM32(0x3766D4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B2FAu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B2FA: ;
    ecx = eax;
    PUSH32(esp, 0x0012B301u); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_0012B301: ;
    SET_LO8(ebx, LO8(eax));
    goto loc_0012B3A0;

loc_0012B308: ;
    ecx = MEM32(0x3DEED8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0012B315u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012B312u); } /* indirect call */
    }

loc_0012B315: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012B321u); RECOMP_ABI_CALL(0x0012D680u, sub_0012D680); /* call 0x0012D680 */

loc_0012B321: ;
    ecx = MEM32(0x3DEED8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012B331u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012B32Eu); } /* indirect call */
    }

loc_0012B331: ;
    ecx = MEM32(0x3DEED8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0012B33Eu); RECOMP_ABI_CALL(0x0012C260u, sub_0012C260); /* call 0x0012C260 */

loc_0012B33E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0012B345u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012B342u); } /* indirect call */
    }

loc_0012B345: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B3B0; /* je: equal / zero */

loc_0012B349: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012B360; /* jne: not equal / not zero */

loc_0012B34E: ;
    eax = MEM32(0x3766CC);
    ecx = MEM32(0x3766DC);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_0012B38D;

loc_0012B360: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012B377; /* jne: not equal / not zero */

loc_0012B365: ;
    edx = MEM32(0x3766CC);
    eax = MEM32(0x3766E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0012B38D;

loc_0012B377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012B3B0; /* jne: not equal / not zero */

loc_0012B37C: ;
    ecx = MEM32(0x3766CC);
    edx = MEM32(0x3766D4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0012B38D: ;
    PUSH32(esp, 0x0012B392u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B392: ;
    ecx = eax;
    PUSH32(esp, 0x0012B399u); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_0012B399: ;
    SET_LO8(ebx, LO8(eax));

loc_0012B39B: ;
    MEM8(esp + 0x13) = 1;

loc_0012B3A0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B400; /* je: equal / zero */

loc_0012B3A4: ;
    SET_LO8(ebx, MEM8(esp + 0x13));
    goto loc_0012B3B0;

loc_0012B3B0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(0x3DEED8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B3C3; /* je: equal / zero */

loc_0012B3BC: ;
    PUSH32(esp, 0x0012B3C1u); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012B3C1: ;
    goto loc_0012B3C8;

loc_0012B3C3: ;
    PUSH32(esp, 0x0012B3C8u); RECOMP_ABI_CALL(0x0012C890u, sub_0012C890); /* call 0x0012C890 */

loc_0012B3C8: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B4C0; /* je: equal / zero */

loc_0012B3D3: ;
    eax = MEM32(0x3766C4);
    ecx = MEM32(0x3766C8);
    edx = MEM32(0x3766D0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012B3EDu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B3ED: ;
    ecx = eax;
    PUSH32(esp, 0x0012B3F4u); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_0012B3F4: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x13) = LO8(eax);
    if ((_fa != 0)) goto loc_0012B3B0; /* jne: not equal / not zero */

loc_0012B400: ;
    eax = MEM32(0x3766C4);
    ecx = MEM32(0x3766C8);
    edx = MEM32(0x3766D8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012B41Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B41A: ;
    ecx = eax;
    PUSH32(esp, 0x0012B421u); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_0012B421: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B44A; /* je: equal / zero */

loc_0012B425: ;
    PUSH32(esp, 0x0012B42Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B42A: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x2041) = 0;
    PUSH32(esp, 0x0012B43Bu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B43B: ;
    ecx = MEM32(0x3888C0);
    MEM8(ecx + 0x2042) = 1;
    goto loc_0012B4C0;

loc_0012B44A: ;
    PUSH32(esp, 0x0012B44Fu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B44F: ;
    edx = MEM32(0x3888C0);
    MEM8(edx + 0x2041) = 1;
    PUSH32(esp, 0x0012B461u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B461: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x2042) = 0;
    ecx = MEM32(0x3DEED8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0012B47Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012B477u); } /* indirect call */
    }

loc_0012B47A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012B482u); RECOMP_ABI_CALL(0x0012D680u, sub_0012D680); /* call 0x0012D680 */

loc_0012B482: ;
    ecx = MEM32(0x3DEED8);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012B492u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012B48Fu); } /* indirect call */
    }

loc_0012B492: ;
    PUSH32(esp, 0x0012B497u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B497: ;
    ecx = MEM32(0x3DEED8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0012B4A4u); RECOMP_ABI_CALL(0x0012C260u, sub_0012C260); /* call 0x0012C260 */

loc_0012B4A4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0012B4ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012B4A8u); } /* indirect call */
    }

loc_0012B4AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B4C0; /* je: equal / zero */

loc_0012B4AF: ;
    PUSH32(esp, 0x0012B4B4u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B4B4: ;
    eax = MEM32(0x3888C0);
    MEM8(eax + 0x2042) = 1;

loc_0012B4C0: ;
    PUSH32(esp, 0x0012B4C5u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B4C5: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B4D3u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B4D3: ;
    ebx = MEM32(esi + 0x10A8);
    ecx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012B4EAu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B4EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B529; /* je: equal / zero */

loc_0012B4F1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012B4F8u); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012B4F8: ;
    PUSH32(esp, 0x0012B4FDu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B4FD: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B50Bu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B50B: ;
    ebx = MEM32(esi + 0x10A8);
    edx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012B522u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B522: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0012B4F1; /* jne: not equal / not zero */

loc_0012B529: ;
    PUSH32(esp, 0x0012B52Eu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B52E: ;
    ecx = eax;
    PUSH32(esp, 0x0012B535u); RECOMP_ABI_CALL(0x0012A5D0u, sub_0012A5D0); /* call 0x0012A5D0 */

loc_0012B535: ;
    PUSH32(esp, 0x0012B53Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B53A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFEu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, 0x19);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B560; /* je: equal / zero */

loc_0012B541: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B559; /* je: equal / zero */

loc_0012B546: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B552; /* je: equal / zero */

loc_0012B54B: ;
    PUSH32(esp, 0x31A788);
    goto loc_0012B565;

loc_0012B552: ;
    PUSH32(esp, 0x31A778);
    goto loc_0012B565;

loc_0012B559: ;
    PUSH32(esp, 0x31A768);
    goto loc_0012B565;

loc_0012B560: ;
    PUSH32(esp, 0x31A758);

loc_0012B565: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B56Bu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0012B56B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012B573u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B573: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B581u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B581: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x7F) = 1;
    PUSH32(esp, 0x0012B58Bu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B58B: ;
    PUSH32(esp, 0x0012B590u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B590: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B59Eu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B59E: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 0;
    PUSH32(esp, 0x0012B5ABu); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B5AB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = 0x31A820;
    g_seh_ebp = ebp; sub_00264150(); return; /* tail jmp 0x00264150 */

}

/**
 * sub_0012B5D0
 * Original: 0x0012B5D0 - 0x0012B77C (428 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B5D0: ;
    _fb = (uint32_t)(0xE70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x31A8D0);
    PUSH32(esp, 0x0012B5E3u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012B5E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xF) = 0;
    PUSH32(esp, 0x0012B5F0u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B5F0: ;
    esi = eax;
    _fb = (uint32_t)(0x220) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x220;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012B5FDu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B5FD: ;
    edi = MEM32(eax + 0x22C);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0012B60Cu); RECOMP_ABI_CALL(0x0007C2F0u, sub_0007C2F0); /* call 0x0007C2F0 */

loc_0012B60C: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0012B615u); RECOMP_ABI_CALL(0x0007A770u, sub_0007A770); /* call 0x0007A770 */

loc_0012B615: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x2040));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ebx = MEM32(esp + 0xE80);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B650; /* je: equal / zero */

loc_0012B62B: ;
    ecx = MEM32(0x3766C4);
    edx = MEM32(0x3766C8);
    eax = MEM32(0x3766FC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B645u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B645: ;
    ecx = eax;
    PUSH32(esp, 0x0012B64Cu); RECOMP_ABI_CALL(0x0012AD20u, sub_0012AD20); /* call 0x0012AD20 */

loc_0012B64C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B667; /* je: equal / zero */

loc_0012B650: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEED8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012B663u); RECOMP_ABI_CALL(0x0012C950u, sub_0012C950); /* call 0x0012C950 */

loc_0012B663: ;
    MEM8(esp + 0xF) = LO8(eax);

loc_0012B667: ;
    PUSH32(esp, 0x0012B66Cu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B66C: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B67Au); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B67A: ;
    ebx = MEM32(esi + 0x10A8);
    edx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012B691u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B691: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B6D0; /* je: equal / zero */

loc_0012B698: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012B69Fu); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012B69F: ;
    PUSH32(esp, 0x0012B6A4u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B6A4: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B6B2u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B6B2: ;
    ebx = MEM32(esi + 0x10A8);
    eax = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012B6C9u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B6C9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B698; /* jne: not equal / not zero */

loc_0012B6D0: ;
    PUSH32(esp, 0x0012B6D5u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B6D5: ;
    ecx = eax;
    PUSH32(esp, 0x0012B6DCu); RECOMP_ABI_CALL(0x0012A5D0u, sub_0012A5D0); /* call 0x0012A5D0 */

loc_0012B6DC: ;
    _fa = (uint32_t)(MEM8(esp + 0xF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xF), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B710; /* jne: not equal / not zero */

loc_0012B6E3: ;
    PUSH32(esp, 0x0012B6E8u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B6E8: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x31A528);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B6F5u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0012B6F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012B6FDu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B6FD: ;
    edi = eax + 0x230;
    ecx = 0x39B;
    esi = esp + 0x10;
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
    goto loc_0012B725;

loc_0012B710: ;
    PUSH32(esp, 0x0012B715u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B715: ;
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x31A520);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B722u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0012B722: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012B725: ;
    PUSH32(esp, 0x0012B72Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B72A: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B738u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B738: ;
    PUSH32(esp, edi);
    MEM8(esi + 0xE5) = 1;
    PUSH32(esp, 0x0012B745u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B745: ;
    PUSH32(esp, 0x0012B74Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B74A: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B758u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B758: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 0;
    PUSH32(esp, 0x0012B765u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B765: ;
    PUSH32(esp, 0x31A898);
    PUSH32(esp, 0x0012B76Fu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012B76F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B780
 * Original: 0x0012B780 - 0x0012B9A6 (550 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B780: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x31A970);
    PUSH32(esp, 0x0012B790u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012B790: ;
    PUSH32(esp, 0x0012B795u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B795: ;
    SET_LO16(eax, MEM16(eax + 0x10A0));
    eax = SX16(LO16(eax));
    eax = eax + eax * 4;
    PUSH32(esp, 0x400);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x31A940);
    PUSH32(esp, 0x0012B7B5u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012B7B5: ;
    ebp = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B902; /* je: equal / zero */

loc_0012B7C2: ;
    ecx = MEM32(0x3766E8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012B7D5u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B7D5: ;
    ecx = eax;
    PUSH32(esp, 0x0012B7DCu); RECOMP_ABI_CALL(0x0012AB50u, sub_0012AB50); /* call 0x0012AB50 */

loc_0012B7DC: ;
    edi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012B7E8u); RECOMP_ABI_CALL(0x0012D680u, sub_0012D680); /* call 0x0012D680 */

loc_0012B7E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012B7F0u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B7F0: ;
    SET_LO16(esi, MEM16(eax + 0x10A0));
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0012B804u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B804: ;
    SET_LO8(ebx, MEM8(eax + 0x10A2));
    PUSH32(esp, 0x0012B80Fu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B80F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    edx = SX16(LO16(esi));
    eax = esp + 0x10;
    PUSH32(esp, 8);
    MEM32(esp + 0x18) = 0x31A39C;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0012B84B; /* jne: not equal / not zero */

loc_0012B839: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEED8);
    PUSH32(esp, 0x0012B849u); RECOMP_ABI_CALL(0x0012CB20u, sub_0012CB20); /* call 0x0012CB20 */

loc_0012B849: ;
    goto loc_0012B85B;

loc_0012B84B: ;
    ecx = MEM32(0x3DEED8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012B85Bu); RECOMP_ABI_CALL(0x0012CA70u, sub_0012CA70); /* call 0x0012CA70 */

loc_0012B85B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x129890);
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012B86Du); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_0012B86D: ;
    PUSH32(esp, 0x0012B872u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B872: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B880u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B880: ;
    ebx = MEM32(esi + 0x10A8);
    ecx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012B897u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B897: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B8D8; /* je: equal / zero */

loc_0012B89E: ;
    edi = edi;

loc_0012B8A0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012B8A7u); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012B8A7: ;
    PUSH32(esp, 0x0012B8ACu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B8AC: ;
    esi = eax;
    edi = esi + 0x1674;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B8BAu); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B8BA: ;
    ebx = MEM32(esi + 0x10A8);
    edx = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0012B8D1u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B8D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B8A0; /* jne: not equal / not zero */

loc_0012B8D8: ;
    PUSH32(esp, 0x0012B8DDu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B8DD: ;
    ecx = eax;
    PUSH32(esp, 0x0012B8E4u); RECOMP_ABI_CALL(0x0012A5D0u, sub_0012A5D0); /* call 0x0012A5D0 */

loc_0012B8E4: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B8EFu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B8EF: ;
    ecx = eax;
    PUSH32(esp, 0x0012B8F6u); RECOMP_ABI_CALL(0x00129B90u, sub_00129B90); /* call 0x00129B90 */

loc_0012B8F6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012B8FCu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0012B8FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    goto loc_0012B952;

loc_0012B902: ;
    PUSH32(esp, 0x0012B907u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B907: ;
    ecx = eax;
    PUSH32(esp, 0x0012B90Eu); RECOMP_ABI_CALL(0x0012A5D0u, sub_0012A5D0); /* call 0x0012A5D0 */

loc_0012B90E: ;
    PUSH32(esp, 0x0012B913u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B913: ;
    eax = MEM32(eax + 0x218);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B952; /* je: equal / zero */

loc_0012B91D: ;
    ecx = MEM32(0x31A380);
    MEM32(eax) = ecx;
    edx = MEM32(0x31A384);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x31A388);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x31A38C);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x31A390);
    MEM32(eax + 0x10) = ecx;
    SET_LO8(edx, MEM8(0x31A394));
    MEM8(eax + 0x14) = LO8(edx);

loc_0012B952: ;
    PUSH32(esp, 0x0012B957u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B957: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B965u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B965: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x1B1) = 1;
    PUSH32(esp, 0x0012B972u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B972: ;
    PUSH32(esp, 0x0012B977u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012B977: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012B985u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012B985: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 0;
    PUSH32(esp, 0x0012B992u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012B992: ;
    PUSH32(esp, 0x31A908);
    PUSH32(esp, 0x0012B99Cu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012B99C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B9B0
 * Original: 0x0012B9B0 - 0x0012B9F6 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B9B0: ;
    ecx = MEM32(0x3DEED4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012B9CB; /* je: equal / zero */

loc_0012B9BD: ;
    PUSH32(esp, 0x0012B9C2u); RECOMP_ABI_CALL(0x0012A9C0u, sub_0012A9C0); /* call 0x0012A9C0 */

loc_0012B9C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012B9C8u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012B9C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012B9CB: ;
    ecx = MEM32(0x3DEED8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x3DEED4) = 0;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B9F5; /* je: equal / zero */

loc_0012B9E0: ;
    MEM32(0x3DEED8) = 0;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012B9F5; /* jne: not equal / not zero */

loc_0012B9EF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0012B9F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012B9F3u); } /* indirect call */
    }

loc_0012B9F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BA00
 * Original: 0x0012BA00 - 0x0012BA93 (147 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012BA00: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0012BA0Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012BA0A: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012BA18u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012BA18: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 1;
    PUSH32(esp, 0x0012BA25u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012BA25: ;
    PUSH32(esp, 0x0012BA2Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012BA2A: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012BA38u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012BA38: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x7F) = 0;
    PUSH32(esp, 0x0012BA42u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012BA42: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    edi = ebp + 0x230;
    ecx = 0x39B;
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
    ecx = ebp + 0x80;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012BA62: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BA62; /* jne: not equal / not zero */

loc_0012BA6C: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12B000);
    ecx = 0x3C2470;
    MEM32(ebp + 0x21C) = eax;
    PUSH32(esp, 0x0012BA8Du); RECOMP_ABI_CALL(0x00155A80u, sub_00155A80); /* call 0x00155A80 */

loc_0012BA8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012BAA0
 * Original: 0x0012BAA0 - 0x0012BB33 (147 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012BAA0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0012BAAAu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012BAAA: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012BAB8u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012BAB8: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 1;
    PUSH32(esp, 0x0012BAC5u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012BAC5: ;
    PUSH32(esp, 0x0012BACAu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012BACA: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012BAD8u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012BAD8: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x7F) = 0;
    PUSH32(esp, 0x0012BAE2u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012BAE2: ;
    esi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    edi = ebp + 0x230;
    ecx = 0x39B;
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
    ecx = ebp + 0x80;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012BB02: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BB02; /* jne: not equal / not zero */

loc_0012BB0C: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12B230);
    ecx = 0x3C2470;
    MEM32(ebp + 0x21C) = eax;
    PUSH32(esp, 0x0012BB2Du); RECOMP_ABI_CALL(0x00155A80u, sub_00155A80); /* call 0x00155A80 */

loc_0012BB2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012BB40
 * Original: 0x0012BB40 - 0x0012BBE5 (165 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BB40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0012BB4Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012BB4A: ;
    esi = eax;
    edi = esi + 0x16B4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012BB58u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012BB58: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x109F) = 1;
    PUSH32(esp, 0x0012BB65u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012BB65: ;
    PUSH32(esp, 0x0012BB6Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012BB6A: ;
    esi = eax;
    edi = esi + 0x16D4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012BB78u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012BB78: ;
    PUSH32(esp, edi);
    MEM8(esi + 0xE5) = 0;
    PUSH32(esp, 0x0012BB85u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012BB85: ;
    eax = MEM32(esp + 0x20);
    ecx = ebx + 0x220;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012BB94: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BB94; /* jne: not equal / not zero */

loc_0012BB9E: ;
    eax = MEM32(esp + 0x14);
    MEM32(ebx + 0x22C) = eax;
    eax = MEM32(esp + 0x18);
    edx = ebx + 0xE6;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012BBB4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BBB4; /* jne: not equal / not zero */

loc_0012BBBE: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, 0);
    MEM32(ebx + 0x21C) = ecx;
    PUSH32(esp, 0x12B5D0);
    ecx = 0x3C2470;
    PUSH32(esp, 0x0012BBDFu); RECOMP_ABI_CALL(0x00155A80u, sub_00155A80); /* call 0x00155A80 */

loc_0012BBDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0012BBF0
 * Original: 0x0012BBF0 - 0x0012BCB0 (192 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BBF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012BBFAu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012BBFA: ;
    edi = eax;
    ebx = edi + 0x16B4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012BC08u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012BC08: ;
    PUSH32(esp, ebx);
    MEM8(edi + 0x109F) = 1;
    PUSH32(esp, 0x0012BC15u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012BC15: ;
    PUSH32(esp, 0x0012BC1Au); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012BC1A: ;
    edi = eax;
    ebx = edi + 0x16D4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012BC28u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012BC28: ;
    PUSH32(esp, ebx);
    MEM8(edi + 0x1B1) = 0;
    PUSH32(esp, 0x0012BC35u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012BC35: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    SET_LO16(edi, MEM16(esp + 0x20));
    MEM8(esi + 0x10A2) = LO8(eax);
    eax = MEM32(esp + 0x28);
    ecx = esi + 0x1B2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x10A0) = LO16(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0012BC60: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BC60; /* jne: not equal / not zero */

loc_0012BC6A: ;
    ecx = MEM32(esp + 0x1C);
    eax = SX16(LO16(edi));
    PUSH32(esp, 0x400);
    edx = eax + eax * 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x31A9A8);
    MEM32(esi + 0x21C) = ecx;
    PUSH32(esp, 0x0012BC8Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012BC8A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFDu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12B780);
    ecx = 0x3C2470;
    MEM32(esi + 0x218) = eax;
    PUSH32(esp, 0x0012BCAAu); RECOMP_ABI_CALL(0x00155A80u, sub_00155A80); /* call 0x00155A80 */

loc_0012BCAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0012BCB0
 * Original: 0x0012BCB0 - 0x0012BCD0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BCB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31A378;
    if (TEST_Z(_fa, _fb)) goto loc_0012BCC9; /* je: equal / zero */

loc_0012BCC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012BCC6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012BCC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012BCC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012BCD0
 * Original: 0x0012BCD0 - 0x0012BD8B (187 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BCD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012BCD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    ebx = ebx >> 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    eax = ebx + 2;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x14) = 8;
    eax = esp + 0x10;
    if (CMP_A(_fa, _fb)) goto loc_0012BCFD; /* ja: above (unsigned >) */

loc_0012BCF9: ;
    eax = esp + 0x14;

loc_0012BCFD: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012BD14; /* je: equal / zero */

loc_0012BD06: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012BD0Fu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0012BD0F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012BD16;

loc_0012BD14: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012BD16: ;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + ecx * 4;
    ebp = edi + ebx * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi + 0x20) = eax;
    ebx = edi;
    if (CMP_AE(_fa, _fb)) goto loc_0012BD46; /* jae: above or equal (unsigned >=) */

loc_0012BD2C: ;
    /* nop */

loc_0012BD30: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0012BD3Au); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0012BD3A: ;
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012BD30; /* jb: below (unsigned <) */

loc_0012BD46: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0xC) = edi;
    edi = MEM32(edi);
    MEM32(esi + 4) = edi;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xFFFFFFFCu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x1C) = ebp;
    ebp = MEM32(ebp);
    MEM32(esi + 0x14) = ebp;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x80;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ebp;
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 0x14);
    MEM32(esi) = edx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    edx = ecx + eax * 4;
    MEM32(esi + 0x10) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012BD90
 * Original: 0x0012BD90 - 0x0012BECE (318 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012BD90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0xC);
    ebp = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(ecx));
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((2) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ebp)) >> ((((2) & 31u)) - 1)) & 1);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((2) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = eax + ebp;
    eax = MEM32(esi + 0x24);
    ebx = edi + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0012BE19; /* jbe: below or equal (unsigned <=) */

loc_0012BDB6: ;
    SET_LO8(ebx, MEM8(esp + 0x1C));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esp + 0x18);
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(0u - (uint32_t)(LO8(ebx))));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(esi + 0x20);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012BDF1; /* jae: above or equal (unsigned >=) */

loc_0012BDD4: ;
    eax = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012BEA2; /* je: equal / zero */

loc_0012BDDF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012BDE9u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0012BDE9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012BEA2;

loc_0012BDF1: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0012BEA2; /* jle: less or equal (signed <=) */

loc_0012BDFE: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebp * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012BE11u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0012BE11: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012BEA2;

loc_0012BE19: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi + 0x24;
    if (CMP_AE(_fa, _fb)) goto loc_0012BE29; /* jae: above or equal (unsigned >=) */

loc_0012BE25: ;
    ecx = esp + 0x18;

loc_0012BE29: ;
    ecx = MEM32(ecx);
    ebx = eax + ecx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012BE49; /* je: equal / zero */

loc_0012BE33: ;
    edx = ebx * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012BE40u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0012BE40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    goto loc_0012BE51;

loc_0012BE49: ;
    MEM32(esp + 0x10) = 0;

loc_0012BE51: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    edx = MEM32(esp + 0x10);
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esp + 0x18);
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0xC);
    edi = edx + eax * 4;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012BE88; /* je: equal / zero */

loc_0012BE7B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012BE85u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0012BE85: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012BE88: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012BE98; /* je: equal / zero */

loc_0012BE8F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012BE95u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012BE95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012BE98: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = ebx;

loc_0012BEA2: ;
    MEM32(esi + 0xC) = edi;
    eax = MEM32(edi);
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80)) >> 32) & 1);
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    eax = edi + ebp * 4 + -4;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(eax);
    MEM32(esi + 0x14) = eax;
    POP32(esp, edi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80)) >> 32) & 1);
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012BED0
 * Original: 0x0012BED0 - 0x0012BF29 (89 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BED0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012BF01; /* je: equal / zero */

loc_0012BEDF: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0012BEF1u); RECOMP_ABI_CALL(0x00155D00u, sub_00155D00); /* call 0x00155D00 */

loc_0012BEF1: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012BF01; /* je: equal / zero */

loc_0012BEF8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012BEFEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012BEFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012BF01: ;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x24) = edi;
    PUSH32(esp, 0x0012BF26u); RECOMP_ABI_CALL(0x0012BCD0u, sub_0012BCD0); /* call 0x0012BCD0 */

loc_0012BF26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012BF30
 * Original: 0x0012BF30 - 0x0012BF5A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BF30: ;
    eax = MEM32(0x3E7D58);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012BF41u); RECOMP_ABI_CALL(0x001BF981u, sub_001BF981); /* call 0x001BF981 */

loc_0012BF41: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BF58; /* jne: not equal / not zero */

loc_0012BF48: ;
    ecx = MEM32(0x3E7D5C);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012BF55u); RECOMP_ABI_CALL(0x001BF981u, sub_001BF981); /* call 0x001BF981 */

loc_0012BF55: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012BF58: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012BF60
 * Original: 0x0012BF60 - 0x0012BF78 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BF60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BF60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012BF72u); RECOMP_ABI_CALL(0x001B9F5Bu, sub_001B9F5B); /* call 0x001B9F5B */

loc_0012BF72: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012BF80
 * Original: 0x0012BF80 - 0x0012BF8E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BF80(void)
{

loc_0012BF80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012BF8Au); RECOMP_ABI_CALL(0x001BA030u, sub_001BA030); /* call 0x001BA030 */

loc_0012BF8A: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012BF90
 * Original: 0x0012BF90 - 0x0012BF93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BF90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BF90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012BFA0
 * Original: 0x0012BFA0 - 0x0012BFA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BFA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012BFB0
 * Original: 0x0012BFB0 - 0x0012BFC1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BFB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BFB0: ;
    MEM32(ecx) = 0x31A9EC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012BFBFu); RECOMP_ABI_CALL(0x001C01B8u, sub_001C01B8); /* call 0x001C01B8 */

loc_0012BFBF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012BFD0
 * Original: 0x0012BFD0 - 0x0012BFD8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BFD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BFD0: ;
    eax = MEM32(ecx + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BFE0
 * Original: 0x0012BFE0 - 0x0012BFF5 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BFE0: ;
    eax = MEM32(ecx + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x24) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0012BFF4; /* jg: greater (signed >) */

loc_0012BFEB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0012BFF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012BFEFu); } /* indirect call */
    }

loc_0012BFF2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012BFF4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012C000
 * Original: 0x0012C000 - 0x0012C00B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C000: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C009u); RECOMP_ABI_CALL(0x001C01C3u, sub_001C01C3); /* call 0x001C01C3 */

loc_0012C009: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C010
 * Original: 0x0012C010 - 0x0012C01B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C010: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C019u); RECOMP_ABI_CALL(0x001C01D2u, sub_001C01D2); /* call 0x001C01D2 */

loc_0012C019: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C020
 * Original: 0x0012C020 - 0x0012C028 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C020: ;
    eax = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012C030
 * Original: 0x0012C030 - 0x0012C045 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C030: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0012C044; /* jg: greater (signed >) */

loc_0012C03B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0012C042u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C03Fu); } /* indirect call */
    }

loc_0012C042: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012C044: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012C050
 * Original: 0x0012C050 - 0x0012C05A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C050(void)
{

loc_0012C050: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C060
 * Original: 0x0012C060 - 0x0012C082 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C060: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C06Eu); RECOMP_ABI_CALL(0x001C0074u, sub_001C0074); /* call 0x001C0074 */

loc_0012C06E: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C077u); RECOMP_ABI_CALL(0x001BA030u, sub_001BA030); /* call 0x001BA030 */

loc_0012C077: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x24) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C090
 * Original: 0x0012C090 - 0x0012C09E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C090(void)
{

loc_0012C090: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C09Au); RECOMP_ABI_CALL(0x001BFF14u, sub_001BFF14); /* call 0x001BFF14 */

loc_0012C09A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C0A0
 * Original: 0x0012C0A0 - 0x0012C0B7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C0A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C0B1u); RECOMP_ABI_CALL(0x001BFFDBu, sub_001BFFDB); /* call 0x001BFFDB */

loc_0012C0B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C0C0
 * Original: 0x0012C0C0 - 0x0012C0C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C0C0(void)
{

loc_0012C0C0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C0D0
 * Original: 0x0012C0D0 - 0x0012C0D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C0D0(void)
{

loc_0012C0D0: ;
    SET_LO8(eax, MEM8(ecx + 0x24));
    esp += 4; return; /* ret */

}

/**
 * sub_0012C0E0
 * Original: 0x0012C0E0 - 0x0012C0E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C0E0(void)
{

loc_0012C0E0: ;
    SET_LO8(eax, MEM8(0x3E7D61));
    esp += 4; return; /* ret */

}

/**
 * sub_0012C0F0
 * Original: 0x0012C0F0 - 0x0012C0F5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C0F0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x3C)); return; /* indirect tail jmp */

}

/**
 * sub_0012C100
 * Original: 0x0012C100 - 0x0012C105 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C100: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x40)); return; /* indirect tail jmp */

}

/**
 * sub_0012C110
 * Original: 0x0012C110 - 0x0012C134 (36 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C110: ;
    SET_LO8(eax, MEM8(0x3E7D54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C12B; /* je: equal / zero */

loc_0012C11C: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x0012C122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C11Fu); } /* indirect call */
    }

loc_0012C122: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x4C); PUSH32(esp, 0x0012C128u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C125u); } /* indirect call */
    }

loc_0012C128: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C12B: ;
    MEM8(0x3E7D60) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C140
 * Original: 0x0012C140 - 0x0012C148 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C140(void)
{

loc_0012C140: ;
    MEM8(0x3E7D60) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012C150
 * Original: 0x0012C150 - 0x0012C156 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C150(void)
{

loc_0012C150: ;
    SET_LO8(eax, MEM8(0x3E7D60));
    esp += 4; return; /* ret */

}

/**
 * sub_0012C160
 * Original: 0x0012C160 - 0x0012C1F9 (153 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C160: ;
    SET_LO8(eax, MEM8(0x3E7D54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C17A; /* je: equal / zero */

loc_0012C16C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012C173u); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012C173: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012C17A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012C180u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012C180: ;
    SET_LO8(ecx, MEM8(eax + 0x10A3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, MEM8(0x3E7D60));
    if (CMP_EQ(_fa, _fb)) goto loc_0012C1AF; /* je: equal / zero */

loc_0012C18F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C1EA; /* je: equal / zero */

loc_0012C193: ;
    PUSH32(esp, 0x31AA04);
    PUSH32(esp, 0x0012C19Du); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012C19D: ;
    edi = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x0012C1A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C1A4u); } /* indirect call */
    }

loc_0012C1A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x4C); PUSH32(esp, 0x0012C1ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C1AAu); } /* indirect call */
    }

loc_0012C1AD: ;
    goto loc_0012C1E3;

loc_0012C1AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C1EA; /* je: equal / zero */

loc_0012C1B3: ;
    PUSH32(esp, 0x0012C1B8u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012C1B8: ;
    ecx = eax;
    PUSH32(esp, 0x0012C1BFu); RECOMP_ABI_CALL(0x00129D90u, sub_00129D90); /* call 0x00129D90 */

loc_0012C1BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C1EA; /* je: equal / zero */

loc_0012C1C3: ;
    edi = MEM32(esi);
    PUSH32(esp, 0x0012C1CAu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012C1CA: ;
    ecx = eax;
    PUSH32(esp, 0x0012C1D1u); RECOMP_ABI_CALL(0x00129D60u, sub_00129D60); /* call 0x00129D60 */

loc_0012C1D1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x4C); PUSH32(esp, 0x0012C1D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C1D4u); } /* indirect call */
    }

loc_0012C1D7: ;
    PUSH32(esp, 0x0012C1DCu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012C1DC: ;
    ecx = eax;
    PUSH32(esp, 0x0012C1E3u); RECOMP_ABI_CALL(0x00129DC0u, sub_00129DC0); /* call 0x00129DC0 */

loc_0012C1E3: ;
    MEM8(0x3E7D60) = 0;

loc_0012C1EA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012C1F1u); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012C1F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C200
 * Original: 0x0012C200 - 0x0012C206 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C200(void)
{

loc_0012C200: ;
    eax = MEM32(0x3E7D58);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C210
 * Original: 0x0012C210 - 0x0012C216 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C210(void)
{

loc_0012C210: ;
    eax = MEM32(0x3E7D5C);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C220
 * Original: 0x0012C220 - 0x0012C226 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C220(void)
{

loc_0012C220: ;
    eax = MEM32(0x376718);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C230
 * Original: 0x0012C230 - 0x0012C236 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C230(void)
{

loc_0012C230: ;
    eax = 0x8E74;
    esp += 4; return; /* ret */

}

/**
 * sub_0012C240
 * Original: 0x0012C240 - 0x0012C245 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C240: ;
    g_seh_ebp = ebp; sub_001BA030(); return; /* tail jmp 0x001BA030 */

}

/**
 * sub_0012C250
 * Original: 0x0012C250 - 0x0012C255 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C250: ;
    g_seh_ebp = ebp; sub_0012D420(); return; /* tail jmp 0x0012D420 */

}

/**
 * sub_0012C260
 * Original: 0x0012C260 - 0x0012C270 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C260: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C26Au); RECOMP_ABI_CALL(0x0012D430u, sub_0012D430); /* call 0x0012D430 */

loc_0012C26A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C290
 * Original: 0x0012C290 - 0x0012C2DF (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C290: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    MEM8(0x3E7D61) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0012C2A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C2A0u); } /* indirect call */
    }

loc_0012C2A3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0012C2AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C2A7u); } /* indirect call */
    }

loc_0012C2AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C2CD; /* je: equal / zero */

loc_0012C2AF: ;
    /* nop */

loc_0012C2B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012C2B7u); RECOMP_ABI_CALL(0x001BFB5Fu, sub_001BFB5F); /* call 0x001BFB5F */

loc_0012C2B7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012C2BEu); RECOMP_ABI_CALL(0x001BFF14u, sub_001BFF14); /* call 0x001BFF14 */

loc_0012C2BE: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0012C2C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C2C5u); } /* indirect call */
    }

loc_0012C2C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C2B0; /* jne: not equal / not zero */

loc_0012C2CD: ;
    MEM8(0x3E7D61) = 0;
    MEM8(0x3E7D60) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C2E0
 * Original: 0x0012C2E0 - 0x0012C2ED (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C2E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C2E9u); RECOMP_ABI_CALL(0x00194E40u, sub_00194E40); /* call 0x00194E40 */

loc_0012C2E9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C2F0
 * Original: 0x0012C2F0 - 0x0012C31C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C2F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C2F0: ;
    eax = MEM32(0x376714);
    ecx = MEM32(0x376718);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = eax + ecx;
    PUSH32(esp, 0x0012C308u); RECOMP_ABI_CALL(0x00194E40u, sub_00194E40); /* call 0x00194E40 */

loc_0012C308: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x389F58;
    MEM32(esi) = eax;
    PUSH32(esp, 0x0012C317u); RECOMP_ABI_CALL(0x00079AA0u, sub_00079AA0); /* call 0x00079AA0 */

loc_0012C317: ;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C320
 * Original: 0x0012C320 - 0x0012C372 (82 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C320: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31A9EC;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 4;
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(esi + 0x24) = 1;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    PUSH32(esp, eax);
    MEM32(edx + 0x1C) = ecx;
    PUSH32(esp, 0x0012C36Bu); RECOMP_ABI_CALL(0x001C01A7u, sub_001C01A7); /* call 0x001C01A7 */

loc_0012C36B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C380
 * Original: 0x0012C380 - 0x0012C3A2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C380: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x31AA44);
    PUSH32(esp, 0x0012C391u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012C391: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C39F; /* je: equal / zero */

loc_0012C398: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0012C320(); return; /* tail jmp 0x0012C320 */

loc_0012C39F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C3B0
 * Original: 0x0012C3B0 - 0x0012C3E1 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C3B0: ;
    eax = ecx;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x31AA70;
    MEM32(eax + 4) = 1;
    MEM32(eax + 0xC) = 0x4000;
    MEM32(eax + 0x10) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + 0x14;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM8(eax + 0x24) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C3F0
 * Original: 0x0012C3F0 - 0x0012C425 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0x31AA70;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C423; /* je: equal / zero */

loc_0012C400: ;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012C40Cu); RECOMP_ABI_CALL(0x001C0074u, sub_001C0074); /* call 0x001C0074 */

loc_0012C40C: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C415u); RECOMP_ABI_CALL(0x001BA030u, sub_001BA030); /* call 0x001BA030 */

loc_0012C415: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x24) = 0;
    PUSH32(esp, 0x0012C41Fu); RECOMP_ABI_CALL(0x001BFED5u, sub_001BFED5); /* call 0x001BFED5 */

loc_0012C41F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0012C423: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C430
 * Original: 0x0012C430 - 0x0012C47A (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C430: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x31AA94);
    PUSH32(esp, 0x0012C441u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012C441: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C477; /* je: equal / zero */

loc_0012C44A: ;
    PUSH32(esp, esi);
    MEM32(eax) = 0x31AA70;
    MEM32(eax + 4) = 1;
    MEM32(eax + 0xC) = 0x4000;
    MEM32(eax + 0x10) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + 0x14;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM8(eax + 0x24) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C477: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012C480
 * Original: 0x0012C480 - 0x0012C4AA (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C480: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C4A1; /* jne: not equal / not zero */

loc_0012C48C: ;
    /* nop */

loc_0012C490: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012C497u); RECOMP_ABI_CALL(0x001BFF14u, sub_001BFF14); /* call 0x001BFF14 */

loc_0012C497: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C490; /* je: equal / zero */

loc_0012C4A1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x0012C4A5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012C4A2u); } /* indirect call */
    }

loc_0012C4A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C4B0
 * Original: 0x0012C4B0 - 0x0012C4F4 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C4B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x31AAC0);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0012C4CEu); RECOMP_ABI_CALL(0x001B9F5Bu, sub_001B9F5B); /* call 0x001B9F5B */

loc_0012C4CE: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = esi + 0x14;
    PUSH32(esp, 0x12C480);
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0012C4E9u); RECOMP_ABI_CALL(0x001C0113u, sub_001C0113); /* call 0x001C0113 */

loc_0012C4E9: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x24) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C500
 * Original: 0x0012C500 - 0x0012C5F7 (247 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C500: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x31ABD8);
    MEM32(esi + 4) = ebx;
    MEM32(esi) = 0x31AB70;
    PUSH32(esp, 0x0012C51Bu); RECOMP_ABI_CALL(0x00151FD0u, sub_00151FD0); /* call 0x00151FD0 */

loc_0012C51B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x31AB50);
    MEM32(0x3E7D58) = eax;
    PUSH32(esp, 0x0012C52Cu); RECOMP_ABI_CALL(0x00151FD0u, sub_00151FD0); /* call 0x00151FD0 */

loc_0012C52C: ;
    MEM32(0x3E7D5C) = eax;
    eax = MEM32(0x3E7D58);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C53Eu); RECOMP_ABI_CALL(0x001BF9BFu, sub_001BF9BF); /* call 0x001BF9BF */

loc_0012C53E: ;
    ecx = MEM32(0x3E7D5C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C54Cu); RECOMP_ABI_CALL(0x001BF9BFu, sub_001BF9BF); /* call 0x001BF9BF */

loc_0012C54C: ;
    edx = MEM32(0x3E7D58);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012C55Au); RECOMP_ABI_CALL(0x001BF92Fu, sub_001BF92F); /* call 0x001BF92F */

loc_0012C55A: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 4);
    PUSH32(esp, 0x31AB24);
    PUSH32(esp, 0x0012C56Bu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012C56B: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C57A; /* je: equal / zero */

loc_0012C572: ;
    MEM32(eax) = 0x31AA30;
    goto loc_0012C57C;

loc_0012C57A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012C57C: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x31AAF8);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0012C590u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012C590: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C5C3; /* je: equal / zero */

loc_0012C597: ;
    MEM32(eax) = 0x31AA70;
    MEM32(eax + 4) = 1;
    MEM32(eax + 0xC) = 0x4000;
    MEM32(eax + 0x10) = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 0x14;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(eax + 0x20) = ebx;
    MEM8(eax + 0x24) = LO8(ebx);
    goto loc_0012C5C5;

loc_0012C5C3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012C5C5: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x31AACC);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0012C5D9u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012C5D9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C5EF; /* je: equal / zero */

loc_0012C5E0: ;
    ecx = eax;
    PUSH32(esp, 0x0012C5E7u); RECOMP_ABI_CALL(0x0012C320u, sub_0012C320); /* call 0x0012C320 */

loc_0012C5E7: ;
    MEM32(esi + 0x10) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012C5EF: ;
    MEM32(esi + 0x10) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C600
 * Original: 0x0012C600 - 0x0012C655 (85 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C600: ;
    eax = MEM32(0x3E7D58);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esi) = 0x31AB70;
    PUSH32(esp, 0x0012C614u); RECOMP_ABI_CALL(0x00152060u, sub_00152060); /* call 0x00152060 */

loc_0012C614: ;
    ecx = MEM32(0x3E7D5C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C620u); RECOMP_ABI_CALL(0x00152060u, sub_00152060); /* call 0x00152060 */

loc_0012C620: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C631; /* je: equal / zero */

loc_0012C62A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0012C631u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C62Eu); } /* indirect call */
    }

loc_0012C631: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C63F; /* je: equal / zero */

loc_0012C638: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0012C63Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C63Cu); } /* indirect call */
    }

loc_0012C63F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C64D; /* je: equal / zero */

loc_0012C646: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0012C64Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C64Au); } /* indirect call */
    }

loc_0012C64D: ;
    MEM32(esi) = 0x3036AC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C660
 * Original: 0x0012C660 - 0x0012C736 (214 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C660: ;
    SET_LO8(eax, MEM8(0x3E7D62));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C67C; /* je: equal / zero */

loc_0012C672: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012C67C: ;
    MEM8(0x3E7D62) = 1;
    PUSH32(esp, 0x0012C688u); RECOMP_ABI_CALL(0x00011D40u, sub_00011D40); /* call 0x00011D40 */

loc_0012C688: ;
    SET_LO8(eax, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(0x3E7D54) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0012C6D8; /* jne: not equal / not zero */

loc_0012C694: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x31ABF4);
    PUSH32(esp, 0x0012C6ABu); RECOMP_ABI_CALL(0x001ED815u, sub_001ED815); /* call 0x001ED815 */

loc_0012C6AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C6D8; /* je: equal / zero */

loc_0012C6AF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0012C6B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C6B3u); } /* indirect call */
    }

loc_0012C6B6: ;
    edx = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012C6D8; /* ja: above (unsigned >) */

loc_0012C6C0: ;
    if (CMP_B(_fa, _fb)) goto loc_0012C6CA; /* jb: below (unsigned <) */

loc_0012C6C2: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012C6D8; /* jae: above or equal (unsigned >=) */

loc_0012C6CA: ;
    MEM8(esi + 0x14) = 1;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012C6D8: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esi + 0x14) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0012C6E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C6E1u); } /* indirect call */
    }

loc_0012C6E4: ;
    ebp = MEM32(esp + 0x24);

loc_0012C6E8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0012C6EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C6ECu); } /* indirect call */
    }

loc_0012C6EF: ;
    PUSH32(esp, ebp);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0012C6F9u); RECOMP_ABI_CALL(0x0012C160u, sub_0012C160); /* call 0x0012C160 */

loc_0012C6F9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C703; /* je: equal / zero */

loc_0012C6FE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C6E8; /* jne: not equal / not zero */

loc_0012C703: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    MEM8(0x3E7D54) = 1;
    PUSH32(esp, 0x0012C712u); RECOMP_ABI_CALL(0x0012D680u, sub_0012D680); /* call 0x0012D680 */

loc_0012C712: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    POP32(esp, edi);
    MEM8(0x3E7D54) = LO8(ebx);
    POP32(esp, ebp);
    MEM8(0x3E7D60) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012C672; /* je: equal / zero */

loc_0012C72C: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C740
 * Original: 0x0012C740 - 0x0012C781 (65 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C740: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C77D; /* je: equal / zero */

loc_0012C74A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esi + 0x14) = 0;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0012C754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C751u); } /* indirect call */
    }

loc_0012C754: ;
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    /* nop */

loc_0012C760: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0012C767u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C764u); } /* indirect call */
    }

loc_0012C767: ;
    PUSH32(esp, ebx);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0012C771u); RECOMP_ABI_CALL(0x0012C160u, sub_0012C160); /* call 0x0012C160 */

loc_0012C771: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C77B; /* je: equal / zero */

loc_0012C776: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C760; /* jne: not equal / not zero */

loc_0012C77B: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0012C77D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C790
 * Original: 0x0012C790 - 0x0012C88E (254 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C790: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBAD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0xBAD (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    MEM8(0x3E7D61) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0012C7E2; /* jne: not equal / not zero */

loc_0012C7A9: ;
    MEM32(ebx) = 0;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0012C7B6u); RECOMP_ABI_CALL(0x0012D420u, sub_0012D420); /* call 0x0012D420 */

loc_0012C7B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0012C7E2; /* jbe: below or equal (unsigned <=) */

loc_0012C7BA: ;
    /* nop */

loc_0012C7C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C7C6u); RECOMP_ABI_CALL(0x0012D430u, sub_0012D430); /* call 0x0012D430 */

loc_0012C7C6: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012C7D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C7CDu); } /* indirect call */
    }

loc_0012C7D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0012C7E0; /* jne: not equal / not zero */

loc_0012C7D4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0012C7DAu); RECOMP_ABI_CALL(0x0012D420u, sub_0012D420); /* call 0x0012D420 */

loc_0012C7DA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012C7C0; /* jb: below (unsigned <) */

loc_0012C7DE: ;
    goto loc_0012C7E2;

loc_0012C7E0: ;
    MEM32(ebx) = esi;

loc_0012C7E2: ;
    eax = MEM32(0x376718);
    edi = eax;
    ecx = 0x39B;
    esi = ebx;
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
    ecx = MEM32(0x376714);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    esi = ecx + eax;
    PUSH32(esp, 0x0012C804u); RECOMP_ABI_CALL(0x00194E40u, sub_00194E40); /* call 0x00194E40 */

loc_0012C804: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x389F58;
    MEM32(esi) = eax;
    PUSH32(esp, 0x0012C813u); RECOMP_ABI_CALL(0x00079AA0u, sub_00079AA0); /* call 0x00079AA0 */

loc_0012C813: ;
    edi = MEM32(esp + 0x18);
    MEM32(esi + 4) = eax;
    esi = ebx + 4;
    /* nop */

loc_0012C820: ;
    ecx = MEM32(ebx);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0012C82Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C829u); } /* indirect call */
    }

loc_0012C82C: ;
    /* nop */

loc_0012C830: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0012C838u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C835u); } /* indirect call */
    }

loc_0012C838: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012C84C; /* je: equal / zero */

loc_0012C83D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012C820; /* je: equal / zero */

loc_0012C842: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0012C84Au); RECOMP_ABI_CALL(0x0012C160u, sub_0012C160); /* call 0x0012C160 */

loc_0012C84A: ;
    goto loc_0012C830;

loc_0012C84C: ;
    eax = MEM32(ebp);
    ecx = ebp;
    MEM8(0x3E7D61) = 0;
    MEM8(0x3E7D60) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0012C862u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C85Fu); } /* indirect call */
    }

loc_0012C862: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C87C; /* je: equal / zero */

loc_0012C868: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0012C86Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C86Bu); } /* indirect call */
    }

loc_0012C86E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0012C87C: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0012C882u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C87Fu); } /* indirect call */
    }

loc_0012C882: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012C890
 * Original: 0x0012C890 - 0x0012C94E (190 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C890: ;
    eax = MEM32(0x376718);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = eax;
    ecx = 0x39B;
    esi = ebx;
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
    ecx = MEM32(0x376714);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(0x3E7D61) = 1;
    esi = ecx + eax;
    PUSH32(esp, 0x0012C8C3u); RECOMP_ABI_CALL(0x00194E40u, sub_00194E40); /* call 0x00194E40 */

loc_0012C8C3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x389F58;
    MEM32(esi) = eax;
    PUSH32(esp, 0x0012C8D2u); RECOMP_ABI_CALL(0x00079AA0u, sub_00079AA0); /* call 0x00079AA0 */

loc_0012C8D2: ;
    edi = MEM32(esp + 0x18);
    MEM32(esi + 4) = eax;
    esi = ebx + 4;
    /* nop */

loc_0012C8E0: ;
    ecx = MEM32(ebx);
    eax = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0012C8ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C8E9u); } /* indirect call */
    }

loc_0012C8EC: ;
    /* nop */

loc_0012C8F0: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0012C8F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C8F5u); } /* indirect call */
    }

loc_0012C8F8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012C90C; /* je: equal / zero */

loc_0012C8FD: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012C8E0; /* je: equal / zero */

loc_0012C902: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0012C90Au); RECOMP_ABI_CALL(0x0012C160u, sub_0012C160); /* call 0x0012C160 */

loc_0012C90A: ;
    goto loc_0012C8F0;

loc_0012C90C: ;
    eax = MEM32(ebp);
    ecx = ebp;
    MEM8(0x3E7D61) = 0;
    MEM8(0x3E7D60) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0012C922u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C91Fu); } /* indirect call */
    }

loc_0012C922: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C93C; /* je: equal / zero */

loc_0012C928: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0012C92Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C92Bu); } /* indirect call */
    }

loc_0012C92E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0012C93C: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0012C942u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C93Fu); } /* indirect call */
    }

loc_0012C942: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012C950
 * Original: 0x0012C950 - 0x0012C9DF (143 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = ecx;
    MEM8(0x3E7D61) = 1;

loc_0012C964: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0012C971u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C96Eu); } /* indirect call */
    }

loc_0012C971: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0012C978u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C975u); } /* indirect call */
    }

loc_0012C978: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012C98C; /* je: equal / zero */

loc_0012C97D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012C964; /* je: equal / zero */

loc_0012C982: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0012C98Au); RECOMP_ABI_CALL(0x0012C160u, sub_0012C160); /* call 0x0012C160 */

loc_0012C98A: ;
    goto loc_0012C971;

loc_0012C98C: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0012C993u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C990u); } /* indirect call */
    }

loc_0012C993: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C9C6; /* je: equal / zero */

loc_0012C997: ;
    ecx = MEM32(0x3888C0);
    eax = MEM32(ecx);
    esi = MEM32(0x376718);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    ecx = 0x39B;
    edi = ebp;
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
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    PUSH32(esp, 0x0012C9BEu); RECOMP_ABI_CALL(0x000790C0u, sub_000790C0); /* call 0x000790C0 */

loc_0012C9BE: ;
    edx = MEM32(esp + 0x18);
    MEM32(ebp) = edx;
    POP32(esp, ebp);

loc_0012C9C6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x3E7D61) = LO8(eax);
    MEM8(0x3E7D60) = LO8(eax);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0012C9D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012C9D6u); } /* indirect call */
    }

loc_0012C9D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0012C9E0
 * Original: 0x0012C9E0 - 0x0012CA68 (136 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C9E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    MEM8(0x3E7D61) = 1;
    /* nop */

loc_0012CA00: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0012CA09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CA06u); } /* indirect call */
    }

loc_0012CA09: ;
    /* nop */

loc_0012CA10: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0012CA17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CA14u); } /* indirect call */
    }

loc_0012CA17: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012CA2B; /* je: equal / zero */

loc_0012CA1C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012CA00; /* je: equal / zero */

loc_0012CA21: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0012CA29u); RECOMP_ABI_CALL(0x0012C160u, sub_0012C160); /* call 0x0012C160 */

loc_0012CA29: ;
    goto loc_0012CA10;

loc_0012CA2B: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x3E7D61) = LO8(eax);
    MEM8(0x3E7D60) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0012CA3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CA3Bu); } /* indirect call */
    }

loc_0012CA3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012CA57; /* je: equal / zero */

loc_0012CA44: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0012CA49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CA46u); } /* indirect call */
    }

loc_0012CA49: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0012CA57: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0012CA5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CA59u); } /* indirect call */
    }

loc_0012CA5C: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012CA70
 * Original: 0x0012CA70 - 0x0012CB1F (175 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012CA70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(0x3E7D61) = 1;
    PUSH32(esp, 0x0012CA81u); RECOMP_ABI_CALL(0x0012D420u, sub_0012D420); /* call 0x0012D420 */

loc_0012CA81: ;
    ecx = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM32(esp + 8) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012CB0B; /* jae: above or equal (unsigned >=) */

loc_0012CA99: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    /* nop */

loc_0012CAA0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012CAA6u); RECOMP_ABI_CALL(0x0012D430u, sub_0012D430); /* call 0x0012D430 */

loc_0012CAA6: ;
    edi = eax;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0012CAB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CAAFu); } /* indirect call */
    }

loc_0012CAB2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CAE4; /* je: equal / zero */

loc_0012CAB6: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0012CAC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CAC0u); } /* indirect call */
    }

loc_0012CAC3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0012CACAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CAC7u); } /* indirect call */
    }

loc_0012CACA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CAE4; /* je: equal / zero */

loc_0012CACF: ;
    /* nop */

loc_0012CAD0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0012CAD8u); RECOMP_ABI_CALL(0x0012C160u, sub_0012C160); /* call 0x0012C160 */

loc_0012CAD8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0012CADFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CADCu); } /* indirect call */
    }

loc_0012CADF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CAD0; /* jne: not equal / not zero */

loc_0012CAE4: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012CAF5; /* jge: greater or equal (signed >=) */

loc_0012CAEC: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012CAA0; /* jb: below (unsigned <) */

loc_0012CAF5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM8(0x3E7D61) = 0;
    MEM8(0x3E7D60) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0012CB0B: ;
    POP32(esp, esi);
    MEM8(0x3E7D61) = 0;
    MEM8(0x3E7D60) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012CB20
 * Original: 0x0012CB20 - 0x0012CC91 (369 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012CB20: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    MEM8(0x3E7D61) = 1;
    PUSH32(esp, 0x0012CB36u); RECOMP_ABI_CALL(0x0012D420u, sub_0012D420); /* call 0x0012D420 */

loc_0012CB36: ;
    ecx = MEM32(esp + 0x11C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM32(esp + 0xC) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_0012CC78; /* jae: above or equal (unsigned >=) */

loc_0012CB59: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_0012CB60;

    /* nop */

loc_0012CB60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012CB66u); RECOMP_ABI_CALL(0x0012D430u, sub_0012D430); /* call 0x0012D430 */

loc_0012CB66: ;
    PUSH32(esp, 0x237C38E3);
    ebx = eax;
    PUSH32(esp, 0x0012CB72u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012CB72: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CBCF; /* je: equal / zero */

loc_0012CB7B: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = esp + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_0012CBC6; /* je: equal / zero */

loc_0012CB85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x25 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CBB5; /* jne: not equal / not zero */

loc_0012CB89: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0012CB8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CB8Du); } /* indirect call */
    }

loc_0012CB8F: ;
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CBC0; /* je: equal / zero */

loc_0012CB9A: ;
    /* nop */

loc_0012CBA0: ;
    MEM16(esi) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CBA0; /* jne: not equal / not zero */

loc_0012CBB3: ;
    goto loc_0012CBC0;

loc_0012CBB5: ;
    SET_LO16(ecx, SX8(LO8(eax)));
    MEM16(esi) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CBC0: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CB85; /* jne: not equal / not zero */

loc_0012CBC6: ;
    MEM16(esi) = 0;
    esi = MEM32(esp + 0x10);

loc_0012CBCF: ;
    eax = MEM32(esp + 0x11C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0012CBE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CBDDu); } /* indirect call */
    }

loc_0012CBE0: ;
    PUSH32(esp, 0x0012CBE5u); RECOMP_ABI_CALL(0x001C01E1u, sub_001C01E1); /* call 0x001C01E1 */

loc_0012CBE5: ;
    edx = MEM32(ebp);
    ecx = ebp;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0012CBEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CBECu); } /* indirect call */
    }

loc_0012CBEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CC10; /* je: equal / zero */

loc_0012CBF4: ;
    eax = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0012CC03u); RECOMP_ABI_CALL(0x0012C160u, sub_0012C160); /* call 0x0012C160 */

loc_0012CC03: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0012CC0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CC08u); } /* indirect call */
    }

loc_0012CC0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CBF4; /* jne: not equal / not zero */

loc_0012CC10: ;
    eax = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0012CC1Fu); RECOMP_ABI_CALL(0x0012C160u, sub_0012C160); /* call 0x0012C160 */

loc_0012CC1F: ;
    PUSH32(esp, 0x0012CC24u); RECOMP_ABI_CALL(0x001C01E1u, sub_001C01E1); /* call 0x001C01E1 */

loc_0012CC24: ;
    ebx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3E8);
    PUSH32(esp, 0x0012CC33u); RECOMP_ABI_CALL(0x001C025Du, sub_001C025D); /* call 0x001C025D */

loc_0012CC33: ;
    ecx = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012CC10; /* jl: less (signed <) */

loc_0012CC41: ;
    eax = MEM32(esp + 0x124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012CC5D; /* jge: greater or equal (signed >=) */

loc_0012CC4C: ;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_B(_fa, _fb)) goto loc_0012CB60; /* jb: below (unsigned <) */

loc_0012CC5D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM8(0x3E7D61) = 0;
    MEM8(0x3E7D60) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0012CC78: ;
    POP32(esp, esi);
    MEM8(0x3E7D61) = 0;
    MEM8(0x3E7D60) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012CCA0
 * Original: 0x0012CCA0 - 0x0012CCDD (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CCA0: ;
    eax = MEM32(0x376714);
    ecx = MEM32(0x376718);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = eax + ecx;
    PUSH32(esp, 0x0012CCB8u); RECOMP_ABI_CALL(0x00194E40u, sub_00194E40); /* call 0x00194E40 */

loc_0012CCB8: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CCC5; /* je: equal / zero */

loc_0012CCC1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012CCC5: ;
    ecx = 0x389F58;
    PUSH32(esp, 0x0012CCCFu); RECOMP_ABI_CALL(0x00079AA0u, sub_00079AA0); /* call 0x00079AA0 */

loc_0012CCCF: ;
    edx = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012CCE0
 * Original: 0x0012CCE0 - 0x0012CD2D (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CCE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    MEM8(0x3E7D61) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0012CCF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CCF3u); } /* indirect call */
    }

loc_0012CCF6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0012CCFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CCFAu); } /* indirect call */
    }

loc_0012CCFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CD1C; /* je: equal / zero */

loc_0012CD02: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);

loc_0012CD07: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0012CD0Fu); RECOMP_ABI_CALL(0x0012C160u, sub_0012C160); /* call 0x0012C160 */

loc_0012CD0F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0012CD16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CD13u); } /* indirect call */
    }

loc_0012CD16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CD07; /* jne: not equal / not zero */

loc_0012CD1B: ;
    POP32(esp, ebx);

loc_0012CD1C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM8(0x3E7D61) = LO8(eax);
    MEM8(0x3E7D60) = LO8(eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012CD30
 * Original: 0x0012CD30 - 0x0012CDA1 (113 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012CD30: ;
    eax = MEM32(0x3888D0);
    PUSH32(esp, esi);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CD9F; /* jne: not equal / not zero */

loc_0012CD3F: ;
    eax = MEM32(0x3888C0);
    eax = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012CD7A; /* ja: above (unsigned >) */

loc_0012CD4E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x12CDA4); /* switch: 6 entries, 5 targets */
    if (_jt == 0x0012CD55u) goto loc_0012CD55;
    if (_jt == 0x0012CD5Cu) goto loc_0012CD5C;
    if (_jt == 0x0012CD65u) goto loc_0012CD65;
    if (_jt == 0x0012CD71u) goto loc_0012CD71;
    if (_jt == 0x0012CD7Au) goto loc_0012CD7A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012CD55: ;
    eax = 3;
    goto loc_0012CD7E;

loc_0012CD5C: ;
    eax = 2;
    esi = eax;
    goto loc_0012CD7E;

loc_0012CD65: ;
    eax = 4;
    esi = 3;
    goto loc_0012CD7E;

loc_0012CD71: ;
    eax = esi;
    esi = 4;
    goto loc_0012CD7E;

loc_0012CD7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012CD7E: ;
    ecx = MEM32(0x3E7D58);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012CD8Du); RECOMP_ABI_CALL(0x001BF92Fu, sub_001BF92F); /* call 0x001BF92F */

loc_0012CD8D: ;
    edx = MEM32(0x3E7D5C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012CD9Cu); RECOMP_ABI_CALL(0x001BF92Fu, sub_001BF92F); /* call 0x001BF92F */

loc_0012CD9C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012CD9F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012CDC0
 * Original: 0x0012CDC0 - 0x0012CE92 (210 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CDC0: ;
    SET_LO8(eax, MEM8(0x3E7D63));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012CDDA; /* je: equal / zero */

loc_0012CDD2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012CDDA: ;
    MEM8(0x3E7D63) = 1;
    PUSH32(esp, 0x0012CDE6u); RECOMP_ABI_CALL(0x00011D40u, sub_00011D40); /* call 0x00011D40 */

loc_0012CDE6: ;
    SET_LO8(eax, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(0x3E7D54) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0012CE34; /* jne: not equal / not zero */

loc_0012CDF2: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x31ABF4);
    PUSH32(esp, 0x0012CE09u); RECOMP_ABI_CALL(0x001ED815u, sub_001ED815); /* call 0x001ED815 */

loc_0012CE09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE34; /* je: equal / zero */

loc_0012CE0D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0012CE14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CE11u); } /* indirect call */
    }

loc_0012CE14: ;
    edx = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012CE34; /* ja: above (unsigned >) */

loc_0012CE1E: ;
    if (CMP_B(_fa, _fb)) goto loc_0012CE28; /* jb: below (unsigned <) */

loc_0012CE20: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012CE34; /* jae: above or equal (unsigned >=) */

loc_0012CE28: ;
    MEM8(esi + 0x14) = 1;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012CE34: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x14) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0012CE3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CE3Bu); } /* indirect call */
    }

loc_0012CE3E: ;
    PUSH32(esp, edi);
    /* nop */

loc_0012CE40: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0012CE47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CE44u); } /* indirect call */
    }

loc_0012CE47: ;
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0x0012CE4Fu); RECOMP_ABI_CALL(0x001BFB5Fu, sub_001BFB5F); /* call 0x001BFB5F */

loc_0012CE4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012CE56u); RECOMP_ABI_CALL(0x001BFF14u, sub_001BFF14); /* call 0x001BFF14 */

loc_0012CE56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE63; /* je: equal / zero */

loc_0012CE5E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CE40; /* jne: not equal / not zero */

loc_0012CE63: ;
    PUSH32(esp, 1);
    MEM8(0x3E7D54) = 1;
    PUSH32(esp, 0x0012CE71u); RECOMP_ABI_CALL(0x0012D820u, sub_0012D820); /* call 0x0012D820 */

loc_0012CE71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEM8(0x3E7D54) = LO8(ebx);
    POP32(esp, edi);
    MEM8(0x3E7D60) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012CDD2; /* je: equal / zero */

loc_0012CE8A: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012CEA0
 * Original: 0x0012CEA0 - 0x0012CF23 (131 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012CEA0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    ecx = 0x3888C0;
    MEM8(0x3E7D61) = 1;
    PUSH32(esp, 0x0012CEB6u); RECOMP_ABI_CALL(0x00079A60u, sub_00079A60); /* call 0x00079A60 */

loc_0012CEB6: ;
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012CEC8u); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0012CEC8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0xC) = 0;
    MEM32(esi) = 0;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0012CEDCu); RECOMP_ABI_CALL(0x0012D420u, sub_0012D420); /* call 0x0012D420 */

loc_0012CEDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012CF02; /* jbe: below or equal (unsigned <=) */

loc_0012CEE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012CEE6u); RECOMP_ABI_CALL(0x0012D430u, sub_0012D430); /* call 0x0012D430 */

loc_0012CEE6: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012CEF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012CEEDu); } /* indirect call */
    }

loc_0012CEF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012CF00; /* jne: not equal / not zero */

loc_0012CEF4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0012CEFAu); RECOMP_ABI_CALL(0x0012D420u, sub_0012D420); /* call 0x0012D420 */

loc_0012CEFA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012CEE0; /* jb: below (unsigned <) */

loc_0012CEFE: ;
    goto loc_0012CF02;

loc_0012CF00: ;
    MEM32(esi) = edi;

loc_0012CF02: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM8(0x3E7D61) = 0;
    MEM8(0x3E7D60) = 0;
    PUSH32(esp, 0x0012CF1Du); RECOMP_ABI_CALL(0x0012C790u, sub_0012C790); /* call 0x0012C790 */

loc_0012CF1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012CF30
 * Original: 0x0012CF30 - 0x0012CF4F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CF30: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31A9D8;
    if (TEST_Z(_fa, _fb)) goto loc_0012CF49; /* je: equal / zero */

loc_0012CF40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012CF46u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012CF46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012CF49: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012CF50
 * Original: 0x0012CF50 - 0x0012CF7C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CF50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(esi) = 0x31A9EC;
    PUSH32(esp, 0x0012CF62u); RECOMP_ABI_CALL(0x001C01B8u, sub_001C01B8); /* call 0x001C01B8 */

loc_0012CF62: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CF76; /* je: equal / zero */

loc_0012CF6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012CF73u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012CF73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012CF76: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012CF80
 * Original: 0x0012CF80 - 0x0012CF83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CF80(void)
{

loc_0012CF80: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0012CF90
 * Original: 0x0012CF90 - 0x0012CF95 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012CF90: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_0012CFA0
 * Original: 0x0012CFA0 - 0x0012CFA5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012CFA0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x38)); return; /* indirect tail jmp */

}

/**
 * sub_0012CFB0
 * Original: 0x0012CFB0 - 0x0012CFF9 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CFB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0x31AA70;
    if (CMP_EQ(_fa, _fb)) goto loc_0012CFE3; /* je: equal / zero */

loc_0012CFC0: ;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012CFCCu); RECOMP_ABI_CALL(0x001C0074u, sub_001C0074); /* call 0x001C0074 */

loc_0012CFCC: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012CFD5u); RECOMP_ABI_CALL(0x001BA030u, sub_001BA030); /* call 0x001BA030 */

loc_0012CFD5: ;
    PUSH32(esp, edi);
    MEM8(esi + 0x24) = 0;
    PUSH32(esp, 0x0012CFDFu); RECOMP_ABI_CALL(0x001BFED5u, sub_001BFED5); /* call 0x001BFED5 */

loc_0012CFDF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0012CFE3: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CFF3; /* je: equal / zero */

loc_0012CFEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012CFF0u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012CFF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012CFF3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012D000
 * Original: 0x0012D000 - 0x0012D01E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D000: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0012D008u); RECOMP_ABI_CALL(0x0012C600u, sub_0012C600); /* call 0x0012C600 */

loc_0012D008: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D018; /* je: equal / zero */

loc_0012D00F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012D015u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012D015: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012D018: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012D020
 * Original: 0x0012D020 - 0x0012D03B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D020(void)
{

loc_0012D020: ;
    eax = MEM32(ecx + 0x98);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x9C);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012D040
 * Original: 0x0012D040 - 0x0012D044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D040(void)
{

loc_0012D040: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0012D050
 * Original: 0x0012D050 - 0x0012D06F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D050: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31ABF8;
    if (TEST_Z(_fa, _fb)) goto loc_0012D069; /* je: equal / zero */

loc_0012D060: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012D066u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012D066: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012D069: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012D070
 * Original: 0x0012D070 - 0x0012D0B3 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D070: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012D0B0; /* ja: above (unsigned >) */

loc_0012D079: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x12D0B4); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0012D080u) goto loc_0012D080;
    if (_jt == 0x0012D086u) goto loc_0012D086;
    if (_jt == 0x0012D08Cu) goto loc_0012D08C;
    if (_jt == 0x0012D092u) goto loc_0012D092;
    if (_jt == 0x0012D098u) goto loc_0012D098;
    if (_jt == 0x0012D09Eu) goto loc_0012D09E;
    if (_jt == 0x0012D0A4u) goto loc_0012D0A4;
    if (_jt == 0x0012D0AAu) goto loc_0012D0AA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012D080: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0012D086: ;
    eax = 0x10000;
    esp += 4; return; /* ret */

loc_0012D08C: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_0012D092: ;
    eax = 0x20000;
    esp += 4; return; /* ret */

loc_0012D098: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_0012D09E: ;
    eax = 0x40000;
    esp += 4; return; /* ret */

loc_0012D0A4: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_0012D0AA: ;
    eax = 0x80000;
    esp += 4; return; /* ret */

loc_0012D0B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012D0E0
 * Original: 0x0012D0E0 - 0x0012D0ED (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D0E0(void)
{

loc_0012D0E0: ;
    SET_LO8(eax, MEM8(0x3E7D71));
    MEM8(0x3E7D71) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D0F0
 * Original: 0x0012D0F0 - 0x0012D161 (113 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D0F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D0F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(edx, MEM16(esp + 0x14));
    eax = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esp) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x18));
    MEM32(eax) = 0x31ABF8;
    MEM16(eax + 8) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ecx);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    PUSH32(esp, esi);
    MEM16(esp + 6) = LO16(edx);
    esi = MEM32(esp + 4);
    MEM32(eax + 8) = esi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = 1;
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0x9C) = ecx;
    MEM8(eax + 0xA0) = LO8(ecx);
    MEM8(eax + 0xA1) = LO8(ecx);
    MEM8(eax + 0xA2) = LO8(ecx);
    MEM32(eax + 0x10) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012D170
 * Original: 0x0012D170 - 0x0012D1B4 (68 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D170: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    edx = eax + 8;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 8) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(eax) = 0x31ABF8;
    MEM32(eax + 0x14) = 1;
    MEM8(eax + 0xA0) = LO8(ecx);
    MEM8(eax + 0xA1) = LO8(ecx);
    MEM8(eax + 0xA2) = LO8(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0012D1C0
 * Original: 0x0012D1C0 - 0x0012D1F7 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D1C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D1F5; /* je: equal / zero */

loc_0012D1CB: ;
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esp + 0x10));

loc_0012D1D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, 0x157);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012D1E1u); RECOMP_ABI_CALL(0x002BF6A1u, sub_002BF6A1); /* call 0x002BF6A1 */

loc_0012D1E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D1EB; /* jne: not equal / not zero */

loc_0012D1E8: ;
    MEM16(esi) = LO16(edi);

loc_0012D1EB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D1D1; /* jne: not equal / not zero */

loc_0012D1F4: ;
    POP32(esp, edi);

loc_0012D1F5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012D200
 * Original: 0x0012D200 - 0x0012D204 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D200(void)
{

loc_0012D200: ;
    eax = ecx + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D210
 * Original: 0x0012D210 - 0x0012D237 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D210: ;
    edx = ecx;
    _fb = (uint32_t)(0x376738) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x376738;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x63E7063F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((6) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x376C58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x376C58 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D236; /* jne: not equal / not zero */

loc_0012D231: ;
    eax = 8;

loc_0012D236: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D240
 * Original: 0x0012D240 - 0x0012D260 (32 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D240: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0xA1) = LO8(eax);
    MEM8(ecx + 0xA2) = LO8(edx);
    MEM32(ecx + 0x14) = 1;
    MEM16(ecx + 0x18) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012D260
 * Original: 0x0012D260 - 0x0012D3C8 (360 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D260: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    MEM8(esi + 0xA1) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esi + 8;
    MEM32(esi + 0x14) = 1;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0012D288u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D285u); } /* indirect call */
    }

loc_0012D288: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D2DE; /* je: equal / zero */

loc_0012D28E: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, eax);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012D29Au); RECOMP_ABI_CALL(0x002BF6E7u, sub_002BF6E7); /* call 0x002BF6E7 */

loc_0012D29A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012D2A0u); RECOMP_ABI_CALL(0x002BF6D1u, sub_002BF6D1); /* call 0x002BF6D1 */

loc_0012D2A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012D2D1; /* jbe: below or equal (unsigned <=) */

loc_0012D2A7: ;
    ebp = edi;
    /* nop */

loc_0012D2B0: ;
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp), 0xA0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D2BE; /* jne: not equal / not zero */

loc_0012D2B8: ;
    MEM16(ebp) = 0x20;

loc_0012D2BE: ;
    PUSH32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012D2C8u); RECOMP_ABI_CALL(0x002BF6D1u, sub_002BF6D1); /* call 0x002BF6D1 */

loc_0012D2C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012D2B0; /* jb: below (unsigned <) */

loc_0012D2CF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012D2D1: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012D2D9u); RECOMP_ABI_CALL(0x0012D1C0u, sub_0012D1C0); /* call 0x0012D1C0 */

loc_0012D2D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012D2E8;

loc_0012D2DE: ;
    MEM16(esi + 0x18) = 0x20;
    MEM16(esi + 0x1A) = LO16(ebx);

loc_0012D2E8: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    eax = esi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0012D2F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D2F1u); } /* indirect call */
    }

loc_0012D2F4: ;
    PUSH32(esp, 0x0012D2F9u); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012D2F9: ;
    edi = 5;
    edi = edi;

loc_0012D300: ;
    PUSH32(esp, 0x0012D305u); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012D305: ;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x3E8);
    PUSH32(esp, 0x0012D312u); RECOMP_ABI_CALL(0x001C025Du, sub_001C025D); /* call 0x001C025D */

loc_0012D312: ;
    ecx = eax;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0012D322u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D31Fu); } /* indirect call */
    }

loc_0012D322: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D3AB; /* je: equal / zero */

loc_0012D32A: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012D37C; /* je: equal / zero */

loc_0012D331: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012D340; /* je: equal / zero */

loc_0012D336: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012D3AB; /* jne: not equal / not zero */

loc_0012D339: ;
    MEM8(esp + 0x14) = 1;
    goto loc_0012D3AB;

loc_0012D340: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D36B; /* je: equal / zero */

loc_0012D347: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D35A; /* je: equal / zero */

loc_0012D34C: ;
    MEM32(esi + 0x14) = 6;
    MEM8(esp + 0x14) = 1;
    goto loc_0012D3AB;

loc_0012D35A: ;
    ecx = MEM32(esi + 4);
    eax = esi + 8;
    MEM32(esi + 0x14) = edi;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0012D369u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D366u); } /* indirect call */
    }

loc_0012D369: ;
    goto loc_0012D3AB;

loc_0012D36B: ;
    ecx = MEM32(esi + 4);
    eax = esi + 8;
    MEM32(esi + 0x14) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0012D37Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D377u); } /* indirect call */
    }

loc_0012D37A: ;
    goto loc_0012D3AB;

loc_0012D37C: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D384; /* jne: not equal / not zero */

loc_0012D381: ;
    MEM32(esi + 0x14) = ebx;

loc_0012D384: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D38D; /* jne: not equal / not zero */

loc_0012D38A: ;
    MEM32(esi + 0x14) = edi;

loc_0012D38D: ;
    ecx = MEM32(eax + 0x24);
    MEM32(esi + 0x98) = ecx;
    SET_LO8(edx, MEM8(eax + 0x2D));
    ecx = MEM32(esi + 4);
    eax = esi + 8;
    MEM8(esi + 0xA0) = LO8(edx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0012D3ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D3A8u); } /* indirect call */
    }

loc_0012D3AB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012D3B2u); RECOMP_ABI_CALL(0x001BFF20u, sub_001BFF20); /* call 0x001BFF20 */

loc_0012D3B2: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D300; /* je: equal / zero */

loc_0012D3C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012D3D0
 * Original: 0x0012D3D0 - 0x0012D3DC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D3D0: ;
    edx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0012D3E0
 * Original: 0x0012D3E0 - 0x0012D3F9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D3E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x376C58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x376C58 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D3EB; /* jne: not equal / not zero */

loc_0012D3E8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012D3EB: ;
    SET_LO8(eax, MEM8(ecx + 0xA1));
    MEM8(ecx + 0xA1) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D400
 * Original: 0x0012D400 - 0x0012D419 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D400: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x376C58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x376C58 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D40B; /* jne: not equal / not zero */

loc_0012D408: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012D40B: ;
    SET_LO8(eax, MEM8(ecx + 0xA2));
    MEM8(ecx + 0xA2) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D420
 * Original: 0x0012D420 - 0x0012D426 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D420(void)
{

loc_0012D420: ;
    eax = 9;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D430
 * Original: 0x0012D430 - 0x0012D44B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D430: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D43F; /* jne: not equal / not zero */

loc_0012D439: ;
    eax = 0x376C58;
    esp += 4; return; /* ret */

loc_0012D43F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA4);
    _fb = (uint32_t)(0x376738) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x376738;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012D450
 * Original: 0x0012D450 - 0x0012D4DF (143 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D450: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D494; /* jne: not equal / not zero */

loc_0012D45A: ;
    SET_LO8(eax, MEM8(esi + 0xA0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D46B; /* jne: not equal / not zero */

loc_0012D464: ;
    PUSH32(esp, 0xC8C90A44u);
    goto loc_0012D470;

loc_0012D46B: ;
    PUSH32(esp, 0x3276D1B0);

loc_0012D470: ;
    PUSH32(esp, 0x0012D475u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012D475: ;
    ecx = MEM32(esi + 0x98);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E7D78);
    PUSH32(esp, 0x0012D48Au); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0012D48A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E7D78;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012D494: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D4A0; /* jne: not equal / not zero */

loc_0012D499: ;
    PUSH32(esp, 0xE938AE);
    goto loc_0012D4AA;

loc_0012D4A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D4C6; /* jne: not equal / not zero */

loc_0012D4A5: ;
    PUSH32(esp, 0xB2B42645u);

loc_0012D4AA: ;
    PUSH32(esp, 0x0012D4AFu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012D4AF: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E7D78);
    PUSH32(esp, 0x0012D4BCu); RECOMP_ABI_CALL(0x002BE690u, sub_002BE690); /* call 0x002BE690 */

loc_0012D4BC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E7D78;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012D4C6: ;
    PUSH32(esp, 0x31AC28);
    PUSH32(esp, 0x3E7D78);
    PUSH32(esp, 0x0012D4D5u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0012D4D5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E7D78;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012D4E0
 * Original: 0x0012D4E0 - 0x0012D4E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D4E0(void)
{

loc_0012D4E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D4F0
 * Original: 0x0012D4F0 - 0x0012D4F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D4F0(void)
{

loc_0012D4F0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D500
 * Original: 0x0012D500 - 0x0012D50B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D500: ;
    edx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0012D510
 * Original: 0x0012D510 - 0x0012D678 (360 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D510: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    MEM8(esi + 0xA1) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esi + 8;
    MEM32(esi + 0x14) = 1;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    MEM8(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0012D538u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D535u); } /* indirect call */
    }

loc_0012D538: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D58E; /* je: equal / zero */

loc_0012D53E: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, eax);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012D54Au); RECOMP_ABI_CALL(0x002BF6E7u, sub_002BF6E7); /* call 0x002BF6E7 */

loc_0012D54A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012D550u); RECOMP_ABI_CALL(0x002BF6D1u, sub_002BF6D1); /* call 0x002BF6D1 */

loc_0012D550: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012D581; /* jbe: below or equal (unsigned <=) */

loc_0012D557: ;
    ebp = edi;
    /* nop */

loc_0012D560: ;
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp), 0xA0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D56E; /* jne: not equal / not zero */

loc_0012D568: ;
    MEM16(ebp) = 0x20;

loc_0012D56E: ;
    PUSH32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0012D578u); RECOMP_ABI_CALL(0x002BF6D1u, sub_002BF6D1); /* call 0x002BF6D1 */

loc_0012D578: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012D560; /* jb: below (unsigned <) */

loc_0012D57F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012D581: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012D589u); RECOMP_ABI_CALL(0x0012D1C0u, sub_0012D1C0); /* call 0x0012D1C0 */

loc_0012D589: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012D598;

loc_0012D58E: ;
    MEM16(esi + 0x18) = 0x20;
    MEM16(esi + 0x1A) = LO16(ebx);

loc_0012D598: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    eax = esi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0012D5A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D5A1u); } /* indirect call */
    }

loc_0012D5A4: ;
    PUSH32(esp, 0x0012D5A9u); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012D5A9: ;
    edi = 5;
    edi = edi;

loc_0012D5B0: ;
    PUSH32(esp, 0x0012D5B5u); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012D5B5: ;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x3E8);
    PUSH32(esp, 0x0012D5C2u); RECOMP_ABI_CALL(0x001C025Du, sub_001C025D); /* call 0x001C025D */

loc_0012D5C2: ;
    ecx = eax;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0012D5D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D5CFu); } /* indirect call */
    }

loc_0012D5D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D65B; /* je: equal / zero */

loc_0012D5DA: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012D62C; /* je: equal / zero */

loc_0012D5E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012D5F0; /* je: equal / zero */

loc_0012D5E6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012D65B; /* jne: not equal / not zero */

loc_0012D5E9: ;
    MEM8(esp + 0x14) = 1;
    goto loc_0012D65B;

loc_0012D5F0: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D61B; /* je: equal / zero */

loc_0012D5F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D60A; /* je: equal / zero */

loc_0012D5FC: ;
    MEM32(esi + 0x14) = 6;
    MEM8(esp + 0x14) = 1;
    goto loc_0012D65B;

loc_0012D60A: ;
    ecx = MEM32(esi + 4);
    eax = esi + 8;
    MEM32(esi + 0x14) = edi;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0012D619u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D616u); } /* indirect call */
    }

loc_0012D619: ;
    goto loc_0012D65B;

loc_0012D61B: ;
    ecx = MEM32(esi + 4);
    eax = esi + 8;
    MEM32(esi + 0x14) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0012D62Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D627u); } /* indirect call */
    }

loc_0012D62A: ;
    goto loc_0012D65B;

loc_0012D62C: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D634; /* jne: not equal / not zero */

loc_0012D631: ;
    MEM32(esi + 0x14) = ebx;

loc_0012D634: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D63D; /* jne: not equal / not zero */

loc_0012D63A: ;
    MEM32(esi + 0x14) = edi;

loc_0012D63D: ;
    ecx = MEM32(eax + 0x24);
    MEM32(esi + 0x98) = ecx;
    SET_LO8(edx, MEM8(eax + 0x2D));
    ecx = MEM32(esi + 4);
    eax = esi + 8;
    MEM8(esi + 0xA0) = LO8(edx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0012D65Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012D658u); } /* indirect call */
    }

loc_0012D65B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012D662u); RECOMP_ABI_CALL(0x001BFF14u, sub_001BFF14); /* call 0x001BFF14 */

loc_0012D662: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D5B0; /* je: equal / zero */

loc_0012D671: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012D680
 * Original: 0x0012D680 - 0x0012D7E0 (352 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D680: ;
    ecx = MEM32(0x3DEED8);
    PUSH32(esp, 0x0012D68Bu); RECOMP_ABI_CALL(0x0012C0E0u, sub_0012C0E0); /* call 0x0012C0E0 */

loc_0012D68B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D7DF; /* jne: not equal / not zero */

loc_0012D693: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(0x3E7D70));
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012D750; /* je: equal / zero */

loc_0012D6A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_0012D737; /* je: equal / zero */

loc_0012D6B4: ;
    PUSH32(esp, 0x2F6758);
    PUSH32(esp, 0x0012D6BEu); RECOMP_ABI_CALL(0x002F76DDu, sub_002F76DD); /* call 0x002F76DD */

loc_0012D6BE: ;
    MEM32(0x3E7D64) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x3767DA;
    ebp = 8;
    /* nop */

loc_0012D6D0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012D6D6u); RECOMP_ABI_CALL(0x0012D070u, sub_0012D070); /* call 0x0012D070 */

loc_0012D6D6: ;
    ecx = MEM32(0x3E7D64);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D6F3; /* je: equal / zero */

loc_0012D6E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esi + -162;
    PUSH32(esp, 0x0012D6F1u); RECOMP_ABI_CALL(0x0012D260u, sub_0012D260); /* call 0x0012D260 */

loc_0012D6F1: ;
    goto loc_0012D70D;

loc_0012D6F3: ;
    MEM8(esi + -1) = 0;
    MEM8(esi) = 0;
    MEM32(esi + -142) = 1;
    MEM16(esi + -138) = 0;

loc_0012D70D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012D6D0; /* jne: not equal / not zero */

loc_0012D717: ;
    PUSH32(esp, 0x3E7D6C);
    PUSH32(esp, 0x3E7D68);
    PUSH32(esp, 0x2F6758);
    PUSH32(esp, 0x0012D72Bu); RECOMP_ABI_CALL(0x002F76FFu, sub_002F76FF); /* call 0x002F76FF */

loc_0012D72B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3E7D68) = eax;
    MEM32(0x3E7D6C) = eax;

loc_0012D737: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = 0x376C58;
    PUSH32(esp, 0x0012D744u); RECOMP_ABI_CALL(0x0012D260u, sub_0012D260); /* call 0x0012D260 */

loc_0012D744: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x3E7D71) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012D750: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D7DB; /* je: equal / zero */

loc_0012D758: ;
    PUSH32(esp, 0x3E7D6C);
    PUSH32(esp, 0x3E7D68);
    PUSH32(esp, 0x2F6758);
    PUSH32(esp, 0x0012D76Cu); RECOMP_ABI_CALL(0x002F76FFu, sub_002F76FF); /* call 0x002F76FF */

loc_0012D76C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D7DB; /* je: equal / zero */

loc_0012D770: ;
    ebp = MEM32(esp + 0x18);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x3767DA;
    ebx = 8;

loc_0012D780: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012D786u); RECOMP_ABI_CALL(0x0012D070u, sub_0012D070); /* call 0x0012D070 */

loc_0012D786: ;
    ecx = MEM32(0x3E7D6C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D7B4; /* je: equal / zero */

loc_0012D793: ;
    MEM8(esi + -1) = 0;
    MEM8(esi) = 1;
    MEM32(esi + -142) = 1;
    MEM16(esi + -138) = 0;
    MEM8(0x3E7D71) = 1;

loc_0012D7B4: ;
    _fa = (uint32_t)(MEM32(0x3E7D68)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x3E7D68), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D7D1; /* je: equal / zero */

loc_0012D7BC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    ecx = esi + -162;
    PUSH32(esp, 0x0012D7CAu); RECOMP_ABI_CALL(0x0012D260u, sub_0012D260); /* call 0x0012D260 */

loc_0012D7CA: ;
    MEM8(0x3E7D71) = 1;

loc_0012D7D1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012D780; /* jne: not equal / not zero */

loc_0012D7DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0012D7DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D820
 * Original: 0x0012D820 - 0x0012D96C (332 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D820: ;
    ecx = MEM32(0x3DEED8);
    PUSH32(esp, 0x0012D82Bu); RECOMP_ABI_CALL(0x0012C0E0u, sub_0012C0E0); /* call 0x0012C0E0 */

loc_0012D82B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D96B; /* jne: not equal / not zero */

loc_0012D833: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    SET_LO8(eax, MEM8(0x3E7D70));
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012D8E8; /* je: equal / zero */

loc_0012D84A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D8D1; /* je: equal / zero */

loc_0012D852: ;
    PUSH32(esp, 0x2F6758);
    PUSH32(esp, 0x0012D85Cu); RECOMP_ABI_CALL(0x002F76DDu, sub_002F76DD); /* call 0x002F76DD */

loc_0012D85C: ;
    MEM32(0x3E7D64) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x3767DA;
    ebp = 8;
    /* nop */

loc_0012D870: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012D876u); RECOMP_ABI_CALL(0x0012D070u, sub_0012D070); /* call 0x0012D070 */

loc_0012D876: ;
    ecx = MEM32(0x3E7D64);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D891; /* je: equal / zero */

loc_0012D883: ;
    PUSH32(esp, ebx);
    ecx = esi + -162;
    PUSH32(esp, 0x0012D88Fu); RECOMP_ABI_CALL(0x0012D510u, sub_0012D510); /* call 0x0012D510 */

loc_0012D88F: ;
    goto loc_0012D8A7;

loc_0012D891: ;
    MEM8(esi + -1) = LO8(ebx);
    MEM8(esi) = LO8(ebx);
    MEM32(esi + -142) = 1;
    MEM16(esi + -138) = LO16(ebx);

loc_0012D8A7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012D870; /* jne: not equal / not zero */

loc_0012D8B1: ;
    PUSH32(esp, 0x3E7D6C);
    PUSH32(esp, 0x3E7D68);
    PUSH32(esp, 0x2F6758);
    PUSH32(esp, 0x0012D8C5u); RECOMP_ABI_CALL(0x002F76FFu, sub_002F76FF); /* call 0x002F76FF */

loc_0012D8C5: ;
    MEM32(0x3E7D68) = ebx;
    MEM32(0x3E7D6C) = ebx;

loc_0012D8D1: ;
    PUSH32(esp, 1);
    ecx = 0x376C58;
    PUSH32(esp, 0x0012D8DDu); RECOMP_ABI_CALL(0x0012D510u, sub_0012D510); /* call 0x0012D510 */

loc_0012D8DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(0x3E7D71) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012D8E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D967; /* je: equal / zero */

loc_0012D8EC: ;
    PUSH32(esp, 0x3E7D6C);
    PUSH32(esp, 0x3E7D68);
    PUSH32(esp, 0x2F6758);
    PUSH32(esp, 0x0012D900u); RECOMP_ABI_CALL(0x002F76FFu, sub_002F76FF); /* call 0x002F76FF */

loc_0012D900: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D967; /* je: equal / zero */

loc_0012D904: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x3767DA;
    ebp = 8;

loc_0012D910: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012D916u); RECOMP_ABI_CALL(0x0012D070u, sub_0012D070); /* call 0x0012D070 */

loc_0012D916: ;
    ecx = MEM32(0x3E7D6C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D941; /* je: equal / zero */

loc_0012D923: ;
    MEM8(esi + -1) = LO8(ebx);
    MEM8(esi) = 1;
    MEM32(esi + -142) = 1;
    MEM16(esi + -138) = LO16(ebx);
    MEM8(0x3E7D71) = 1;

loc_0012D941: ;
    _fa = (uint32_t)(MEM32(0x3E7D68)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x3E7D68), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D95D; /* je: equal / zero */

loc_0012D949: ;
    PUSH32(esp, 1);
    ecx = esi + -162;
    PUSH32(esp, 0x0012D956u); RECOMP_ABI_CALL(0x0012D510u, sub_0012D510); /* call 0x0012D510 */

loc_0012D956: ;
    MEM8(0x3E7D71) = 1;

loc_0012D95D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012D910; /* jne: not equal / not zero */

loc_0012D967: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0012D96B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D970
 * Original: 0x0012D970 - 0x0012DA94 (292 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D970: ;
    SET_LO8(eax, MEM8(0x3E7D70));
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012DA2E; /* je: equal / zero */

loc_0012D983: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x376738;
    edi = 8;
    goto loc_0012D9A0;

loc_0012D999: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012D9A0;

    /* nop */

loc_0012D9A0: ;
    ecx = MEM32(esp + 0xC4);
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xB8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(ebx));
    edx = ebx;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x20) = ecx;
    MEM16(esp + 0x10) = LO16(edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esp + 0x16) = LO16(eax);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x28) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esp + 0x20) = 0x31ABF8;
    MEM32(esp + 0x34) = 1;
    MEM8(esp + 0xC0) = 0;
    MEM8(esp + 0xC1) = 0;
    MEM8(esp + 0xC2) = 0;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0012DA14u); RECOMP_ABI_CALL(0x0012DAA0u, sub_0012DAA0); /* call 0x0012DAA0 */

loc_0012DA14: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = 0x31ABF8;
    if ((_fa != 0)) goto loc_0012D999; /* jne: not equal / not zero */

loc_0012DA2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0012DA2E: ;
    ecx = MEM32(0x376728);
    eax = MEM32(esp + 0xB4);
    edx = MEM32(0x37672C);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x376730);
    PUSH32(esp, ecx);
    ecx = 0x376C58;
    MEM32(esp + 0x10) = 0x31ABF8;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = 1;
    MEM8(esp + 0xB0) = 0;
    MEM8(esp + 0xB1) = 0;
    MEM8(esp + 0xB2) = 0;
    PUSH32(esp, 0x0012DA8Du); RECOMP_ABI_CALL(0x0012DAA0u, sub_0012DAA0); /* call 0x0012DAA0 */

loc_0012DA8D: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012DAA0
 * Original: 0x0012DAA0 - 0x0012DB2F (143 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DAA0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = edx + 8;
    edi = MEM32(ecx);
    esi = eax + 8;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edx + 0x14);
    esi = edx;
    MEM32(eax + 0x14) = ecx;
    ecx = eax + 0x18;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x40;
    goto loc_0012DAE0;

    /* nop */

loc_0012DAE0: ;
    SET_LO16(ebx, MEM16(esi + ecx));
    MEM16(ecx) = LO16(ebx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012DAE0; /* jne: not equal / not zero */

loc_0012DAED: ;
    ecx = MEM32(edx + 0x98);
    MEM32(eax + 0x98) = ecx;
    ecx = MEM32(edx + 0x9C);
    MEM32(eax + 0x9C) = ecx;
    SET_LO8(ecx, MEM8(edx + 0xA0));
    MEM8(eax + 0xA0) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0xA1));
    POP32(esp, edi);
    MEM8(eax + 0xA1) = LO8(ecx);
    SET_LO8(edx, MEM8(edx + 0xA2));
    POP32(esp, esi);
    MEM8(eax + 0xA2) = LO8(edx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012DB30
 * Original: 0x0012DB30 - 0x0012DB46 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DB30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012DB50
 * Original: 0x0012DB50 - 0x0012DC27 (215 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DB50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012DB5Au); RECOMP_ABI_CALL(0x0012C500u, sub_0012C500); /* call 0x0012C500 */

loc_0012DB5A: ;
    SET_LO8(ecx, MEM8(0x3E7E24));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x31AC30;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM8(esi + 0x38) = LO8(ebx);
    MEM32(esi + 0x3C) = ebx;
    edi = esi + 0x1C;
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM8(esi + 0x40) = LO8(ebx);
    MEM8(esi + 0x41) = LO8(ebx);
    MEM8(esi + 0x42) = LO8(ebx);
    MEM8(esi + 0x43) = LO8(ebx);
    MEM8(esi + 0x44) = LO8(ebx);
    MEM8(esi + 0x45) = LO8(ebx);
    MEM8(esi + 0x46) = LO8(ebx);
    MEM8(esi + 0x47) = LO8(eax);
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012DBCB; /* jne: not equal / not zero */

loc_0012DBAD: ;
    MEM32(0x3E7E24) = MEM32(0x3E7E24) | eax;
    _fa = (uint32_t)(MEM32(0x3E7E24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3E7E14) = ebx;
    MEM32(0x3E7E18) = ebx;
    MEM32(0x3E7E1C) = ebx;
    MEM32(0x3E7E20) = ebx;

loc_0012DBCB: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3E7E14);
    PUSH32(esp, 0x0012DBD7u); RECOMP_ABI_CALL(0x001C0283u, sub_001C0283); /* call 0x001C0283 */

loc_0012DBD7: ;
    eax = MEM32(esi + 8);
    MEM32(0x3E7E14) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(0x3E7E18) = ecx;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0x3E7E14);
    MEM32(0x3E7E1C) = edx;
    MEM32(0x3E7E20) = 0x12BF30;
    PUSH32(esp, 0x0012DC05u); RECOMP_ABI_CALL(0x001BACE0u, sub_001BACE0); /* call 0x001BACE0 */

loc_0012DC05: ;
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0012DC0Eu); RECOMP_ABI_CALL(0x0012D970u, sub_0012D970); /* call 0x0012D970 */

loc_0012DC0E: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012DC16u); RECOMP_ABI_CALL(0x001C0283u, sub_001C0283); /* call 0x001C0283 */

loc_0012DC16: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    POP32(esp, edi);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012DC30
 * Original: 0x0012DC30 - 0x0012DC4D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012DC30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x31AC30;
    if (CMP_EQ(_fa, _fb)) goto loc_0012DC45; /* je: equal / zero */

loc_0012DC40: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012DC45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DC42u); } /* indirect call */
    }

loc_0012DC45: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0012C600(); return; /* tail jmp 0x0012C600 */

}

/**
 * sub_0012DC50
 * Original: 0x0012DC50 - 0x0012DCD5 (133 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DC50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DC50: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x1C;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x376CFC);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x376D00);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x376D04);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(edi + 0x18);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012DC9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DC99u); } /* indirect call */
    }

loc_0012DC9C: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0012DCA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DCA2u); } /* indirect call */
    }

loc_0012DCA4: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012DCB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DCB2u); } /* indirect call */
    }

loc_0012DCB5: ;
    ebx = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x0012DCBEu); RECOMP_ABI_CALL(0x0012C230u, sub_0012C230); /* call 0x0012C230 */

loc_0012DCBE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0xC); PUSH32(esp, 0x0012DCC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DCC1u); } /* indirect call */
    }

loc_0012DCC4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0012DCCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DCC8u); } /* indirect call */
    }

loc_0012DCCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax << 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012DCE0
 * Original: 0x0012DCE0 - 0x0012DDC0 (224 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DCE0: ;
    SET_LO8(edx, MEM8(0x3E7E34));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0012DD0E; /* jne: not equal / not zero */

loc_0012DCF9: ;
    MEM32(0x3E7E34) = MEM32(0x3E7E34) | ecx;
    _fa = (uint32_t)(MEM32(0x3E7E34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3E7E28) = eax;
    MEM32(0x3E7E2C) = eax;
    MEM32(0x3E7E30) = eax;

loc_0012DD0E: ;
    MEM8(esi + 0x47) = LO8(ecx);
    ecx = esi + 0x1C;
    edx = MEM32(ecx);
    MEM32(0x3E7E28) = edx;
    edx = MEM32(ecx + 4);
    MEM32(0x3E7E2C) = edx;
    ecx = MEM32(ecx + 8);
    ebx = esi + 0x28;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    MEM32(0x3E7E30) = ecx;
    MEM32(0x3E7E28) = eax;
    PUSH32(esp, 0x0012DD3Eu); RECOMP_ABI_CALL(0x001C0283u, sub_001C0283); /* call 0x001C0283 */

loc_0012DD3E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x30) = 0x3E7E28;
    MEM32(ebx) = 0x31AC98;
    PUSH32(esp, 0x0012DD55u); RECOMP_ABI_CALL(0x0012C230u, sub_0012C230); /* call 0x0012C230 */

loc_0012DD55: ;
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(0x376D04);
    edx = MEM32(0x376CFC);
    eax = MEM32(0x376D00);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012DD7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DD7Au); } /* indirect call */
    }

loc_0012DD7D: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0012DD85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DD83u); } /* indirect call */
    }

loc_0012DD85: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E7E28);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012DD96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DD93u); } /* indirect call */
    }

loc_0012DD96: ;
    eax = MEM32(esi + 0x2C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0012DDA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DD9Eu); } /* indirect call */
    }

loc_0012DDA1: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0012DDA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DDA5u); } /* indirect call */
    }

loc_0012DDA8: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0012DDB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DDB1u); } /* indirect call */
    }

loc_0012DDB4: ;
    PUSH32(esp, 0x0012DDB9u); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012DDB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012DDC0
 * Original: 0x0012DDC0 - 0x0012DE70 (176 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DDC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3E7E50);
    PUSH32(esp, eax);
    MEM32(esi + 0x50) = ebx;
    MEM8(esi + 0x40) = LO8(ebx);
    MEM8(esi + 0x43) = LO8(ebx);
    PUSH32(esp, 0x0012DDE0u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0012DDE0: ;
    SET_LO8(ecx, MEM8(0x3E7E4C));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    eax = esi + 0x1C;
    MEM32(eax) = 0x3E7E50;
    if (TEST_NZ(_fa, _fb)) goto loc_0012DE10; /* jne: not equal / not zero */

loc_0012DDF7: ;
    MEM32(0x3E7E4C) = MEM32(0x3E7E4C) | 1;
    _fa = (uint32_t)(MEM32(0x3E7E4C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3E7E3C) = ebx;
    MEM32(0x3E7E44) = ebx;
    MEM8(0x3E7E48) = LO8(ebx);

loc_0012DE10: ;
    ecx = esi;
    MEM32(0x3E7E40) = eax;
    MEM32(0x3E7E38) = 0x31AC98;
    PUSH32(esp, 0x0012DE26u); RECOMP_ABI_CALL(0x0012C230u, sub_0012C230); /* call 0x0012C230 */

loc_0012DE26: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    MEM32(0x3E7E3C) = eax;
    MEM8(0x3E7E48) = 1;
    MEM32(0x3E7E44) = 0x3E7E50;
    PUSH32(esp, 0x0012DE46u); RECOMP_ABI_CALL(0x0012D430u, sub_0012D430); /* call 0x0012D430 */

loc_0012DE46: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E7E38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0012DE5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DE57u); } /* indirect call */
    }

loc_0012DE5A: ;
    PUSH32(esp, 0x0012DE5Fu); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012DE5F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012DE70
 * Original: 0x0012DE70 - 0x0012DEFD (141 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DE70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E7E7C);
    MEM8(esi + 0x42) = 0;
    MEM8(esi + 0x44) = 0;
    PUSH32(esp, 0x0012DE8Au); RECOMP_ABI_CALL(0x001BF9C4u, sub_001BF9C4); /* call 0x001BF9C4 */

loc_0012DE8A: ;
    SET_LO8(edx, MEM8(0x3E7E78));
    ecx = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    eax = esi + 0x1C;
    MEM32(eax) = 0x3E7E7C;
    if (TEST_NZ(_fa, _fb)) goto loc_0012DEB5; /* jne: not equal / not zero */

loc_0012DEA5: ;
    MEM32(0x3E7E78) = MEM32(0x3E7E78) | ecx;
    _fa = (uint32_t)(MEM32(0x3E7E78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3E7E68) = 0;

loc_0012DEB5: ;
    edx = MEM32(0x37D79C);
    MEM32(0x3E7E6C) = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    MEM32(0x3E7E64) = edx;
    MEM8(0x3E7E74) = LO8(ecx);
    MEM32(0x3E7E70) = 0x3E7E7C;
    PUSH32(esp, 0x0012DEE0u); RECOMP_ABI_CALL(0x0012D430u, sub_0012D430); /* call 0x0012D430 */

loc_0012DEE0: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E7E64);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0012DEF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DEF1u); } /* indirect call */
    }

loc_0012DEF4: ;
    PUSH32(esp, 0x0012DEF9u); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012DEF9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012DF00
 * Original: 0x0012DF00 - 0x0012DFA3 (163 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DF00: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x48) = ecx;
    ecx = MEM32(0x3E7EB0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(eax + 0x4C) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012DF43; /* jne: not equal / not zero */

loc_0012DF1B: ;
    PUSH32(esp, esi);
    edx = eax + 0x1C;
    esi = MEM32(edx);
    MEM32(0x3E7EA4) = esi;
    esi = MEM32(edx + 4);
    MEM32(0x3E7EA8) = esi;
    edx = MEM32(edx + 8);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3E7EB0) = ecx;
    MEM32(0x3E7EAC) = edx;
    POP32(esp, esi);

loc_0012DF43: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012DF65; /* jne: not equal / not zero */

loc_0012DF48: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3E7EB0) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3E7E94) = ecx;
    MEM32(0x3E7E9C) = ecx;
    MEM8(0x3E7EA0) = LO8(ecx);

loc_0012DF65: ;
    ecx = MEM32(0x37D798);
    edx = MEM32(0x37D79C);
    MEM32(0x3E7EA4) = ecx;
    MEM32(0x3E7E98) = 0x3E7EA4;
    MEM32(0x3E7E90) = edx;
    ecx = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E7E90);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0012DF9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DF98u); } /* indirect call */
    }

loc_0012DF9B: ;
    PUSH32(esp, 0x0012DFA0u); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012DFA0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012DFB0
 * Original: 0x0012DFB0 - 0x0012E021 (113 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DFB0: ;
    SET_LO8(eax, MEM8(ecx + 0x45));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0012DFFB; /* je: equal / zero */

loc_0012DFBB: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012DFEC; /* je: equal / zero */

loc_0012DFC0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0012DFD5; /* je: equal / zero */

loc_0012DFC3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012E01E; /* jne: not equal / not zero */

loc_0012DFC6: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0012DFD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DFCFu); } /* indirect call */
    }

loc_0012DFD2: ;
    esp += 8; return; /* ret 4 */

loc_0012DFD5: ;
    SET_LO8(eax, 1);
    MEM8(ecx + 0x43) = LO8(eax);
    MEM8(ecx + 0x44) = LO8(eax);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0012DFE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DFE6u); } /* indirect call */
    }

loc_0012DFE9: ;
    esp += 8; return; /* ret 4 */

loc_0012DFEC: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0012DFF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012DFF5u); } /* indirect call */
    }

loc_0012DFF8: ;
    esp += 8; return; /* ret 4 */

loc_0012DFFB: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012E012; /* je: equal / zero */

loc_0012E000: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012E01E; /* jne: not equal / not zero */

loc_0012E003: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0012E00Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E00Cu); } /* indirect call */
    }

loc_0012E00F: ;
    esp += 8; return; /* ret 4 */

loc_0012E012: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0012E01Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E01Bu); } /* indirect call */
    }

loc_0012E01E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E030
 * Original: 0x0012E030 - 0x0012E03A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E030: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E036u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012E036: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012E040
 * Original: 0x0012E040 - 0x0012E239 (505 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E040: ;
    _fb = (uint32_t)(0x394) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x394));
    esp = esp - 0x394;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esp + 0x13) = LO8(ebx);
    PUSH32(esp, 0x0012E05Cu); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012E05C: ;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x3E8);
    PUSH32(esp, 0x0012E069u); RECOMP_ABI_CALL(0x001C025Du, sub_001C025D); /* call 0x001C025D */

loc_0012E069: ;
    ecx = eax;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x0012E077u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E074u); } /* indirect call */
    }

loc_0012E077: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E0B8; /* je: equal / zero */

loc_0012E07D: ;
    ecx = MEM32(ebp);
    eax = ecx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012E213; /* ja: above (unsigned >) */

loc_0012E08C: ;
    edx = ZX8(MEM8(eax + 0x12E250));
    { uint32_t _jt = MEM32(edx * 4 + 0x12E23C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0012E09Au) goto loc_0012E09A;
    if (_jt == 0x0012E18Eu) goto loc_0012E18E;
    if (_jt == 0x0012E19Fu) goto loc_0012E19F;
    if (_jt == 0x0012E1B0u) goto loc_0012E1B0;
    if (_jt == 0x0012E213u) goto loc_0012E213;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012E09A: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012E0D7; /* je: equal / zero */

loc_0012E0A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31ACB4);
    eax = esp + 0x1AC;
    PUSH32(esp, eax);

loc_0012E0B0: ;
    PUSH32(esp, 0x0012E0B5u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0012E0B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012E0B8: ;
    ecx = esi;
    PUSH32(esp, 0x0012E0BFu); RECOMP_ABI_CALL(0x0012C150u, sub_0012C150); /* call 0x0012C150 */

loc_0012E0BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E223; /* je: equal / zero */

loc_0012E0C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x394) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x394)) >> 32) & 1);
    esp = esp + 0x394;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012E0D7: ;
    MEM8(esi + 0x45) = 0;
    MEM8(esi + 0x46) = 1;
    SET_LO8(eax, MEM8(0x3E7D54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0012E182; /* jne: not equal / not zero */

loc_0012E0EC: ;
    eax = MEM32(0x3766F0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E0F8u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012E0F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E0FEu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012E0FE: ;
    edi = eax;
    eax = MEM32(0x3766F4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E10Cu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012E10C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E112u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012E112: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    PUSH32(esp, 0x63);
    if (CMP_EQ(_fa, _fb)) goto loc_0012E125; /* je: equal / zero */

loc_0012E11D: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    goto loc_0012E130;

loc_0012E125: ;
    eax = MEM32(0x3766F0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_0012E130: ;
    PUSH32(esp, 0x0012E135u); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0012E135: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0x63);
    if (CMP_EQ(_fa, _fb)) goto loc_0012E149; /* je: equal / zero */

loc_0012E13E: ;
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    goto loc_0012E157;

loc_0012E149: ;
    eax = MEM32(0x3766F4);
    edx = esp + 0xE0;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_0012E157: ;
    PUSH32(esp, 0x0012E15Cu); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0012E15C: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    edx = esp + 0xE4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E17Bu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012E17B: ;
    ecx = eax;
    PUSH32(esp, 0x0012E182u); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012E182: ;
    ecx = esi;
    PUSH32(esp, 0x0012E189u); RECOMP_ABI_CALL(0x0012C110u, sub_0012C110); /* call 0x0012C110 */

loc_0012E189: ;
    goto loc_0012E0B8;

loc_0012E18E: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0012E19Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E197u); } /* indirect call */
    }

loc_0012E19A: ;
    goto loc_0012E0B8;

loc_0012E19F: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0012E1ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E1A8u); } /* indirect call */
    }

loc_0012E1AB: ;
    goto loc_0012E0B8;

loc_0012E1B0: ;
    ebp = MEM32(ebp + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x1B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012E1BA; /* jne: not equal / not zero */

loc_0012E1B8: ;
    SET_LO8(ebx, 1);

loc_0012E1BA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012E1C3; /* jne: not equal / not zero */

loc_0012E1BF: ;
    MEM8(esi + 0x47) = 0;

loc_0012E1C3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x13) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0012E0B8; /* je: equal / zero */

loc_0012E1D0: ;
    MEM32(0x3E7EB8) = 2;
    MEM32(0x3E7EBC) = 0;
    MEM32(0x3E7EC0) = 0x55;
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x3E7EB8);
    PUSH32(esp, 0);
    MEM32(0x3E7EC4) = edx;
    PUSH32(esp, 0x0012E203u); RECOMP_ABI_CALL(0x001ED307u, sub_001ED307); /* call 0x001ED307 */

loc_0012E203: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x394) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x394)) >> 32) & 1);
    esp = esp + 0x394;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012E213: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x31ACA0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    goto loc_0012E0B0;

loc_0012E223: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x394) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x394)) >> 32) & 1);
    esp = esp + 0x394;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012E270
 * Original: 0x0012E270 - 0x0012E41C (428 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E270: ;
    _fb = (uint32_t)(0x2CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2CC));
    esp = esp - 0x2CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    esi = MEM32(eax);
    MEM8(esp + 0xF) = 0;
    PUSH32(esp, 0x0012E28Au); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012E28A: ;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x3E8);
    PUSH32(esp, 0x0012E297u); RECOMP_ABI_CALL(0x001C025Du, sub_001C025D); /* call 0x001C025D */

loc_0012E297: ;
    ecx = eax;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x0012E2A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E2A2u); } /* indirect call */
    }

loc_0012E2A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E3F0; /* je: equal / zero */

loc_0012E2AF: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFBu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012E3F0; /* ja: above (unsigned >) */

loc_0012E2BD: ;
    edx = ZX8(MEM8(eax + 0x12E434));
    { uint32_t _jt = MEM32(edx * 4 + 0x12E41C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0012E2CBu) goto loc_0012E2CB;
    if (_jt == 0x0012E3B0u) goto loc_0012E3B0;
    if (_jt == 0x0012E3B8u) goto loc_0012E3B8;
    if (_jt == 0x0012E3D9u) goto loc_0012E3D9;
    if (_jt == 0x0012E3EBu) goto loc_0012E3EB;
    if (_jt == 0x0012E3F0u) goto loc_0012E3F0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012E2CB: ;
    eax = MEM32(esi + 8);
    ecx = eax + -6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012E398; /* ja: above (unsigned >) */

loc_0012E2DA: ;
    ecx = ZX8(MEM8(ecx + 0x12E45C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x12E44C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0012E2E8u) goto loc_0012E2E8;
    if (_jt == 0x0012E308u) goto loc_0012E308;
    if (_jt == 0x0012E370u) goto loc_0012E370;
    if (_jt == 0x0012E398u) goto loc_0012E398;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012E2E8: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012E2FCu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012E2FC: ;
    ecx = eax;
    PUSH32(esp, 0x0012E303u); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012E303: ;
    goto loc_0012E3F0;

loc_0012E308: ;
    eax = MEM32(0x3766F4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E314u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012E314: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E31Au); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012E31A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0x63);
    if (CMP_EQ(_fa, _fb)) goto loc_0012E32A; /* je: equal / zero */

loc_0012E323: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    goto loc_0012E334;

loc_0012E32A: ;
    eax = MEM32(0x3766F4);
    edx = esp + 0x14;
    PUSH32(esp, edx);

loc_0012E334: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E33Au); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0012E33A: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E355u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012E355: ;
    ecx = eax;
    PUSH32(esp, 0x0012E35Cu); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012E35C: ;
    ecx = edi;
    MEM8(edi + 0x45) = 0;
    MEM8(edi + 0x46) = 0;
    PUSH32(esp, 0x0012E36Bu); RECOMP_ABI_CALL(0x0012C110u, sub_0012C110); /* call 0x0012C110 */

loc_0012E36B: ;
    goto loc_0012E3F0;

loc_0012E370: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012E384u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012E384: ;
    ecx = eax;
    PUSH32(esp, 0x0012E38Bu); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012E38B: ;
    ecx = edi;
    MEM8(edi + 0x45) = 1;
    PUSH32(esp, 0x0012E396u); RECOMP_ABI_CALL(0x0012C110u, sub_0012C110); /* call 0x0012C110 */

loc_0012E396: ;
    goto loc_0012E3F0;

loc_0012E398: ;
    PUSH32(esp, eax);
    eax = esp + 0xDC;
    PUSH32(esp, 0x31ACB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E3ABu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0012E3AB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012E3F0;

loc_0012E3B0: ;
    ecx = MEM32(esi + 0x58);
    MEM32(edi + 0x50) = ecx;
    goto loc_0012E3F0;

loc_0012E3B8: ;
    edx = MEM32(edi + 0x18);
    esi = MEM32(edx);
    ecx = edi;
    PUSH32(esp, 0x0012E3C4u); RECOMP_ABI_CALL(0x0012C230u, sub_0012C230); /* call 0x0012C230 */

loc_0012E3C4: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012E3CCu); RECOMP_ABI_CALL(0x0012C220u, sub_0012C220); /* call 0x0012C220 */

loc_0012E3CC: ;
    ecx = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x50);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x3C); PUSH32(esp, 0x0012E3D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E3D4u); } /* indirect call */
    }

loc_0012E3D7: ;
    goto loc_0012E3F0;

loc_0012E3D9: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0012E3E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E3E2u); } /* indirect call */
    }

loc_0012E3E5: ;
    MEM8(edi + 0x40) = 1;
    goto loc_0012E3F0;

loc_0012E3EB: ;
    MEM8(esp + 0xF) = 1;

loc_0012E3F0: ;
    ecx = edi;
    PUSH32(esp, 0x0012E3F7u); RECOMP_ABI_CALL(0x0012C150u, sub_0012C150); /* call 0x0012C150 */

loc_0012E3F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0012E40A; /* je: equal / zero */

loc_0012E3FE: ;
    eax = 1;
    _fb = (uint32_t)(0x2CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2CC)) >> 32) & 1);
    esp = esp + 0x2CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012E40A: ;
    SET_LO8(eax, MEM8(esp + 3));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2CC)) >> 32) & 1);
    esp = esp + 0x2CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012E470
 * Original: 0x0012E470 - 0x0012E5FF (399 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E470: ;
    _fb = (uint32_t)(0x2CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2CC));
    esp = esp - 0x2CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEM8(esp + 0xF) = 0;
    PUSH32(esp, 0x0012E48Au); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012E48A: ;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x3E8);
    PUSH32(esp, 0x0012E497u); RECOMP_ABI_CALL(0x001C025Du, sub_001C025D); /* call 0x001C025D */

loc_0012E497: ;
    ecx = eax;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x0012E4A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E4A2u); } /* indirect call */
    }

loc_0012E4A5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E5D3; /* je: equal / zero */

loc_0012E4AF: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFBu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012E5D3; /* ja: above (unsigned >) */

loc_0012E4BD: ;
    edx = ZX8(MEM8(eax + 0x12E618));
    { uint32_t _jt = MEM32(edx * 4 + 0x12E600); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0012E4CBu) goto loc_0012E4CB;
    if (_jt == 0x0012E593u) goto loc_0012E593;
    if (_jt == 0x0012E59Bu) goto loc_0012E59B;
    if (_jt == 0x0012E5BCu) goto loc_0012E5BC;
    if (_jt == 0x0012E5CEu) goto loc_0012E5CE;
    if (_jt == 0x0012E5D3u) goto loc_0012E5D3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012E4CB: ;
    ecx = MEM32(edi + 8);
    eax = ecx + -6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012E57B; /* ja: above (unsigned >) */

loc_0012E4DA: ;
    eax = ZX8(MEM8(eax + 0x12E640));
    { uint32_t _jt = MEM32(eax * 4 + 0x12E630); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0012E4E8u) goto loc_0012E4E8;
    if (_jt == 0x0012E506u) goto loc_0012E506;
    if (_jt == 0x0012E56Du) goto loc_0012E56D;
    if (_jt == 0x0012E57Bu) goto loc_0012E57B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012E4E8: ;
    ecx = MEM32(0x3E7DF8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012E4FAu); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012E4FA: ;
    ecx = eax;
    PUSH32(esp, 0x0012E501u); RECOMP_ABI_CALL(0x0012AB50u, sub_0012AB50); /* call 0x0012AB50 */

loc_0012E501: ;
    goto loc_0012E5D3;

loc_0012E506: ;
    eax = MEM32(0x3766F4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E512u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012E512: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E518u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012E518: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0x63);
    if (CMP_EQ(_fa, _fb)) goto loc_0012E529; /* je: equal / zero */

loc_0012E521: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0012E535;

loc_0012E529: ;
    ecx = MEM32(0x3766F4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_0012E535: ;
    PUSH32(esp, 0x0012E53Au); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0012E53A: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0xC);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012E555u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012E555: ;
    ecx = eax;
    PUSH32(esp, 0x0012E55Cu); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012E55C: ;
    ecx = esi;
    MEM8(esi + 0x45) = 0;
    MEM8(esi + 0x46) = 0;
    PUSH32(esp, 0x0012E56Bu); RECOMP_ABI_CALL(0x0012C110u, sub_0012C110); /* call 0x0012C110 */

loc_0012E56B: ;
    goto loc_0012E5D3;

loc_0012E56D: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0012E579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E576u); } /* indirect call */
    }

loc_0012E579: ;
    goto loc_0012E5D3;

loc_0012E57B: ;
    PUSH32(esp, ecx);
    ecx = esp + 0xDC;
    PUSH32(esp, 0x31ACB4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E58Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0012E58E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012E5D3;

loc_0012E593: ;
    edx = MEM32(edi + 0x58);
    MEM32(esi + 0x50) = edx;
    goto loc_0012E5D3;

loc_0012E59B: ;
    eax = MEM32(esi + 0x18);
    edi = MEM32(eax);
    ecx = esi;
    PUSH32(esp, 0x0012E5A7u); RECOMP_ABI_CALL(0x0012C230u, sub_0012C230); /* call 0x0012C230 */

loc_0012E5A7: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012E5AFu); RECOMP_ABI_CALL(0x0012C220u, sub_0012C220); /* call 0x0012C220 */

loc_0012E5AF: ;
    ecx = MEM32(esi + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_target = MEM32(edi + 0x3C); PUSH32(esp, 0x0012E5BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E5B7u); } /* indirect call */
    }

loc_0012E5BA: ;
    goto loc_0012E5D3;

loc_0012E5BC: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0012E5C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E5C5u); } /* indirect call */
    }

loc_0012E5C8: ;
    MEM8(esi + 0x40) = 1;
    goto loc_0012E5D3;

loc_0012E5CE: ;
    MEM8(esp + 0xF) = 1;

loc_0012E5D3: ;
    ecx = esi;
    PUSH32(esp, 0x0012E5DAu); RECOMP_ABI_CALL(0x0012C150u, sub_0012C150); /* call 0x0012C150 */

loc_0012E5DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0012E5ED; /* je: equal / zero */

loc_0012E5E1: ;
    eax = 1;
    _fb = (uint32_t)(0x2CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2CC)) >> 32) & 1);
    esp = esp + 0x2CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012E5ED: ;
    SET_LO8(eax, MEM8(esp + 3));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2CC)) >> 32) & 1);
    esp = esp + 0x2CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012E660
 * Original: 0x0012E660 - 0x0012E752 (242 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E660: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E8B1C);
    MEM32(esi + 0x50) = 0;
    MEM8(esi + 0x41) = 0;
    PUSH32(esp, 0x0012E67Du); RECOMP_ABI_CALL(0x001BF9C4u, sub_001BF9C4); /* call 0x001BF9C4 */

loc_0012E67D: ;
    eax = esi + 0x1C;
    MEM32(eax) = 0x3E8B1C;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(0x3E7E08) = eax;
    MEM32(0x3E7E00) = 0x31AC98;
    PUSH32(esp, 0x0012E69Fu); RECOMP_ABI_CALL(0x0012C230u, sub_0012C230); /* call 0x0012C230 */

loc_0012E69F: ;
    ecx = MEM32(0x3888C0);
    MEM32(0x3E7E04) = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E721; /* je: equal / zero */

loc_0012E6B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E721; /* je: equal / zero */

loc_0012E6B5: ;
    PUSH32(esp, 0xA);
    ecx = esi;
    PUSH32(esp, 0x0012E6BEu); RECOMP_ABI_CALL(0x0012C210u, sub_0012C210); /* call 0x0012C210 */

loc_0012E6BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E6C4u); RECOMP_ABI_CALL(0x001BF981u, sub_001BF981); /* call 0x001BF981 */

loc_0012E6C4: ;
    edx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E715; /* je: equal / zero */

loc_0012E6CD: ;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x19;
    edi = 0x3E8AB8;
    PUSH32(esp, 0x3E8AB8);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x0012E6E7u); RECOMP_ABI_CALL(0x002BF685u, sub_002BF685); /* call 0x002BF685 */

loc_0012E6E7: ;
    PUSH32(esp, 0x31ACCC);
    PUSH32(esp, 0x3E8AB8);
    PUSH32(esp, 0x0012E6F6u); RECOMP_ABI_CALL(0x002BF65Bu, sub_002BF65B); /* call 0x002BF65B */

loc_0012E6F6: ;
    PUSH32(esp, 0x3E8B1C);
    PUSH32(esp, 0x3E8AB8);
    PUSH32(esp, 0x0012E705u); RECOMP_ABI_CALL(0x002BF65Bu, sub_002BF65B); /* call 0x002BF65B */

loc_0012E705: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3E7E0C) = 0x3E8AB8;
    POP32(esp, edi);
    goto loc_0012E72B;

loc_0012E715: ;
    MEM32(0x3E7E0C) = 0;
    goto loc_0012E72B;

loc_0012E721: ;
    MEM32(0x3E7E0C) = 0x3E8B1C;

loc_0012E72B: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012E735u); RECOMP_ABI_CALL(0x0012D430u, sub_0012D430); /* call 0x0012D430 */

loc_0012E735: ;
    MEM32(0x3E7DFC) = eax;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0012E749u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E746u); } /* indirect call */
    }

loc_0012E749: ;
    PUSH32(esp, 0x0012E74Eu); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012E74E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012E760
 * Original: 0x0012E760 - 0x0012E972 (530 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E760: ;
    _fb = (uint32_t)(0x2CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2CC));
    esp = esp - 0x2CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEM8(esp + 0xF) = 0;
    PUSH32(esp, 0x0012E77Au); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012E77A: ;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x3E8);
    PUSH32(esp, 0x0012E787u); RECOMP_ABI_CALL(0x001C025Du, sub_001C025D); /* call 0x001C025D */

loc_0012E787: ;
    ecx = eax;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x0012E795u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E792u); } /* indirect call */
    }

loc_0012E795: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E946; /* je: equal / zero */

loc_0012E79F: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012E946; /* ja: above (unsigned >) */

loc_0012E7AD: ;
    edx = ZX8(MEM8(eax + 0x12E9A0));
    { uint32_t _jt = MEM32(edx * 4 + 0x12E974); /* switch: 11 entries, 11 targets */
    if (_jt == 0x0012E7BBu) goto loc_0012E7BB;
    if (_jt == 0x0012E875u) goto loc_0012E875;
    if (_jt == 0x0012E894u) goto loc_0012E894;
    if (_jt == 0x0012E8A2u) goto loc_0012E8A2;
    if (_jt == 0x0012E8B8u) goto loc_0012E8B8;
    if (_jt == 0x0012E8D0u) goto loc_0012E8D0;
    if (_jt == 0x0012E8D8u) goto loc_0012E8D8;
    if (_jt == 0x0012E8F9u) goto loc_0012E8F9;
    if (_jt == 0x0012E907u) goto loc_0012E907;
    if (_jt == 0x0012E941u) goto loc_0012E941;
    if (_jt == 0x0012E946u) goto loc_0012E946;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012E7BB: ;
    ecx = MEM32(edi + 8);
    eax = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012E854; /* je: equal / zero */

loc_0012E7C9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0012E7EC; /* je: equal / zero */

loc_0012E7CC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x10));
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012E7EC; /* je: equal / zero */

loc_0012E7D1: ;
    PUSH32(esp, ecx);
    eax = esp + 0xDC;
    PUSH32(esp, 0x31ACB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E7E4u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0012E7E4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012E946;

loc_0012E7EC: ;
    eax = MEM32(0x3766F8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E7F8u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012E7F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E7FEu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012E7FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0x63);
    if (CMP_EQ(_fa, _fb)) goto loc_0012E80E; /* je: equal / zero */

loc_0012E807: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    goto loc_0012E818;

loc_0012E80E: ;
    eax = MEM32(0x3766F4);
    edx = esp + 0x14;
    PUSH32(esp, edx);

loc_0012E818: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E81Eu); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0012E81E: ;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E839u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012E839: ;
    ecx = eax;
    PUSH32(esp, 0x0012E840u); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012E840: ;
    ecx = esi;
    MEM8(esi + 0x45) = 0;
    MEM8(esi + 0x46) = 0;
    PUSH32(esp, 0x0012E84Fu); RECOMP_ABI_CALL(0x0012C110u, sub_0012C110); /* call 0x0012C110 */

loc_0012E84F: ;
    goto loc_0012E946;

loc_0012E854: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E869u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012E869: ;
    ecx = eax;
    PUSH32(esp, 0x0012E870u); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012E870: ;
    goto loc_0012E946;

loc_0012E875: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31AC98);
    PUSH32(esp, eax);
    eax = MEM32(0x3E7DFC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0012E88Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E88Cu); } /* indirect call */
    }

loc_0012E88F: ;
    goto loc_0012E946;

loc_0012E894: ;
    ecx = MEM32(edi + 0x3C);
    MEM32(0x3E8B30) = ecx;
    goto loc_0012E946;

loc_0012E8A2: ;
    eax = MEM32(0x3E7DFC);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0012E8B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E8B0u); } /* indirect call */
    }

loc_0012E8B3: ;
    goto loc_0012E946;

loc_0012E8B8: ;
    eax = MEM32(0x3E7DFC);
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E7E00);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0012E8CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E8CBu); } /* indirect call */
    }

loc_0012E8CE: ;
    goto loc_0012E946;

loc_0012E8D0: ;
    ecx = MEM32(edi + 0x58);
    MEM32(esi + 0x50) = ecx;
    goto loc_0012E946;

loc_0012E8D8: ;
    edx = MEM32(esi + 0x18);
    edi = MEM32(edx);
    ecx = esi;
    PUSH32(esp, 0x0012E8E4u); RECOMP_ABI_CALL(0x0012C230u, sub_0012C230); /* call 0x0012C230 */

loc_0012E8E4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012E8ECu); RECOMP_ABI_CALL(0x0012C220u, sub_0012C220); /* call 0x0012C220 */

loc_0012E8EC: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x38); PUSH32(esp, 0x0012E8F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E8F4u); } /* indirect call */
    }

loc_0012E8F7: ;
    goto loc_0012E946;

loc_0012E8F9: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0012E905u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E902u); } /* indirect call */
    }

loc_0012E905: ;
    goto loc_0012E946;

loc_0012E907: ;
    ecx = esi;
    PUSH32(esp, 0x0012E90Eu); RECOMP_ABI_CALL(0x0012CCA0u, sub_0012CCA0); /* call 0x0012CCA0 */

loc_0012E90E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E933; /* je: equal / zero */

loc_0012E912: ;
    ecx = esi;
    PUSH32(esp, 0x0012E919u); RECOMP_ABI_CALL(0x0012C230u, sub_0012C230); /* call 0x0012C230 */

loc_0012E919: ;
    _fa = (uint32_t)(MEM32(0x3E8B30)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3E8B30), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012E933; /* jne: not equal / not zero */

loc_0012E921: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0012E92Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E92Au); } /* indirect call */
    }

loc_0012E92D: ;
    MEM8(esi + 0x41) = 1;
    goto loc_0012E946;

loc_0012E933: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0012E93Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E93Cu); } /* indirect call */
    }

loc_0012E93F: ;
    goto loc_0012E946;

loc_0012E941: ;
    MEM8(esp + 0xF) = 1;

loc_0012E946: ;
    ecx = esi;
    PUSH32(esp, 0x0012E94Du); RECOMP_ABI_CALL(0x0012C150u, sub_0012C150); /* call 0x0012C150 */

loc_0012E94D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0012E960; /* je: equal / zero */

loc_0012E954: ;
    eax = 1;
    _fb = (uint32_t)(0x2CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2CC)) >> 32) & 1);
    esp = esp + 0x2CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012E960: ;
    SET_LO8(eax, MEM8(esp + 3));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2CC)) >> 32) & 1);
    esp = esp + 0x2CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012E9C0
 * Original: 0x0012E9C0 - 0x0012EB31 (369 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E9C0: ;
    _fb = (uint32_t)(0x2C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C8));
    esp = esp - 0x2C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    esi = MEM32(eax);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0012E9D8u); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012E9D8: ;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x3E8);
    PUSH32(esp, 0x0012E9E5u); RECOMP_ABI_CALL(0x001C025Du, sub_001C025D); /* call 0x001C025D */

loc_0012E9E5: ;
    ecx = eax;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(edi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x0012E9F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012E9F0u); } /* indirect call */
    }

loc_0012E9F3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EB02; /* je: equal / zero */

loc_0012E9FD: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012EAF6; /* je: equal / zero */

loc_0012EA08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012EB02; /* jne: not equal / not zero */

loc_0012EA11: ;
    eax = MEM32(esi + 8);
    ecx = eax + -13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012EADE; /* ja: above (unsigned >) */

loc_0012EA20: ;
    edx = ZX8(MEM8(ecx + 0x12EB44));
    { uint32_t _jt = MEM32(edx * 4 + 0x12EB34); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0012EA2Eu) goto loc_0012EA2E;
    if (_jt == 0x0012EA4Eu) goto loc_0012EA4E;
    if (_jt == 0x0012EA79u) goto loc_0012EA79;
    if (_jt == 0x0012EADEu) goto loc_0012EADE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012EA2E: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EA42u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012EA42: ;
    ecx = eax;
    PUSH32(esp, 0x0012EA49u); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012EA49: ;
    goto loc_0012EB02;

loc_0012EA4E: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EA62u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012EA62: ;
    ecx = eax;
    PUSH32(esp, 0x0012EA69u); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012EA69: ;
    ecx = edi;
    MEM8(edi + 0x45) = 1;
    PUSH32(esp, 0x0012EA74u); RECOMP_ABI_CALL(0x0012C110u, sub_0012C110); /* call 0x0012C110 */

loc_0012EA74: ;
    goto loc_0012EB02;

loc_0012EA79: ;
    eax = MEM32(0x3766F8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EA85u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012EA85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EA8Bu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_0012EA8B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0x63);
    if (CMP_EQ(_fa, _fb)) goto loc_0012EA9B; /* je: equal / zero */

loc_0012EA94: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    goto loc_0012EAA5;

loc_0012EA9B: ;
    eax = MEM32(0x3766F4);
    edx = esp + 0x14;
    PUSH32(esp, edx);

loc_0012EAA5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EAABu); RECOMP_ABI_CALL(0x001546B0u, sub_001546B0); /* call 0x001546B0 */

loc_0012EAAB: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012EAC6u); RECOMP_ABI_CALL(0x0012A1E0u, sub_0012A1E0); /* call 0x0012A1E0 */

loc_0012EAC6: ;
    ecx = eax;
    PUSH32(esp, 0x0012EACDu); RECOMP_ABI_CALL(0x0012AEA0u, sub_0012AEA0); /* call 0x0012AEA0 */

loc_0012EACD: ;
    ecx = edi;
    MEM8(edi + 0x45) = 0;
    MEM8(edi + 0x46) = 0;
    PUSH32(esp, 0x0012EADCu); RECOMP_ABI_CALL(0x0012C110u, sub_0012C110); /* call 0x0012C110 */

loc_0012EADC: ;
    goto loc_0012EB02;

loc_0012EADE: ;
    PUSH32(esp, eax);
    edx = esp + 0xDC;
    PUSH32(esp, 0x31ACB4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012EAF1u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0012EAF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012EB02;

loc_0012EAF6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0012EB02; /* jne: not equal / not zero */

loc_0012EAFF: ;
    MEM8(edi + 0x42) = LO8(ebx);

loc_0012EB02: ;
    ecx = edi;
    PUSH32(esp, 0x0012EB09u); RECOMP_ABI_CALL(0x0012C150u, sub_0012C150); /* call 0x0012C150 */

loc_0012EB09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EB1D; /* je: equal / zero */

loc_0012EB0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C8)) >> 32) & 1);
    esp = esp + 0x2C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012EB1D: ;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(0u - (uint32_t)(LO8(ebx))));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C8)) >> 32) & 1);
    esp = esp + 0x2C8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012EB50
 * Original: 0x0012EB50 - 0x0012ECAB (347 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012EB50: ;
    _fb = (uint32_t)(0x360) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x360;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0012EB69u); RECOMP_ABI_CALL(0x001C01E7u, sub_001C01E7); /* call 0x001C01E7 */

loc_0012EB69: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3E8);
    PUSH32(esp, 0x0012EB76u); RECOMP_ABI_CALL(0x001C025Du, sub_001C025D); /* call 0x001C025D */

loc_0012EB76: ;
    ecx = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x0012EB84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012EB81u); } /* indirect call */
    }

loc_0012EB84: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EBB2; /* je: equal / zero */

loc_0012EB8A: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EC96; /* je: equal / zero */

loc_0012EB95: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EBB2; /* je: equal / zero */

loc_0012EB9A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EBBE; /* je: equal / zero */

loc_0012EB9F: ;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x31ACA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012EBAFu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0012EBAF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012EBB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x360) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x360;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012EBBE: ;
    esi = MEM32(eax + 0x38);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x1C) = 8;
    PUSH32(esp, 0x0012EBD3u); RECOMP_ABI_CALL(0x002BF6D1u, sub_002BF6D1); /* call 0x002BF6D1 */

loc_0012EBD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    eax = esp + 0x18;
    if (CMP_G(_fas, _fbs)) goto loc_0012EBE7; /* jg: greater (signed >) */

loc_0012EBE3: ;
    eax = esp + 0x14;

loc_0012EBE7: ;
    ecx = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012EBFC; /* jbe: below or equal (unsigned <=) */

loc_0012EBEF: ;
    /* nop */

loc_0012EBF0: ;
    SET_LO8(edx, MEM8(esi + eax * 2));
    MEM8(esp + eax + 0x1C) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012EBF0; /* jb: below (unsigned <) */

loc_0012EBFC: ;
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31ABF4);
    MEM8(esp + ecx + 0x28) = LO8(ebx);
    PUSH32(esp, 0x0012EC10u); RECOMP_ABI_CALL(0x001EE774u, sub_001EE774); /* call 0x001EE774 */

loc_0012EC10: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    ebp = ebx;
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012EC6A; /* je: equal / zero */

loc_0012EC25: ;
    PUSH32(esp, 0x0012EC2Au); RECOMP_ABI_CALL(0x001ED4D5u, sub_001ED4D5); /* call 0x001ED4D5 */

loc_0012EC2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EC64; /* je: equal / zero */

loc_0012EC2F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EC4D; /* jne: not equal / not zero */

loc_0012EC34: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    eax = esp + 0x274;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EC46u); RECOMP_ABI_CALL(0x002BF724u, sub_002BF724); /* call 0x002BF724 */

loc_0012EC46: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EC5C; /* je: equal / zero */

loc_0012EC4D: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012EC58u); RECOMP_ABI_CALL(0x001EE87Eu, sub_001EE87E); /* call 0x001EE87E */

loc_0012EC58: ;
    edi = eax;
    goto loc_0012EC25;

loc_0012EC5C: ;
    ebx = MEM32(esp + 0x44);
    ebp = MEM32(esp + 0x40);

loc_0012EC64: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012EC6Au); RECOMP_ABI_CALL(0x001EE8C5u, sub_001EE8C5); /* call 0x001EE8C5 */

loc_0012EC6A: ;
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    edi = MEM32(edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012EC7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012EC7Au); } /* indirect call */
    }

loc_0012EC7D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x48);
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x0012EC89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012EC86u); } /* indirect call */
    }

loc_0012EC89: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x360) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x360;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012EC96: ;
    POP32(esp, edi);
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x360) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x360;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012ECB0
 * Original: 0x0012ECB0 - 0x0012ECE3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ECB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012ECB0: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x31ACD0);
    PUSH32(esp, 0x0012ECC1u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012ECC1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012ECD3; /* je: equal / zero */

loc_0012ECC8: ;
    ecx = eax;
    PUSH32(esp, 0x0012ECCFu); RECOMP_ABI_CALL(0x0012DB50u, sub_0012DB50); /* call 0x0012DB50 */

loc_0012ECCF: ;
    ecx = eax;
    goto loc_0012ECD5;

loc_0012ECD3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012ECD5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012ECE2; /* je: equal / zero */

loc_0012ECDF: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012ECE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012ECF0
 * Original: 0x0012ECF0 - 0x0012ECF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ECF0(void)
{

loc_0012ECF0: ;
    SET_LO8(eax, MEM8(ecx + 0x47));
    esp += 4; return; /* ret */

}

/**
 * sub_0012ED00
 * Original: 0x0012ED00 - 0x0012ED04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ED00(void)
{

loc_0012ED00: ;
    SET_LO8(eax, MEM8(ecx + 0x40));
    esp += 4; return; /* ret */

}

/**
 * sub_0012ED10
 * Original: 0x0012ED10 - 0x0012ED14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ED10(void)
{

loc_0012ED10: ;
    SET_LO8(eax, MEM8(ecx + 0x41));
    esp += 4; return; /* ret */

}

/**
 * sub_0012ED20
 * Original: 0x0012ED20 - 0x0012ED24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ED20(void)
{

loc_0012ED20: ;
    SET_LO8(eax, MEM8(ecx + 0x42));
    esp += 4; return; /* ret */

}

/**
 * sub_0012ED30
 * Original: 0x0012ED30 - 0x0012ED34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ED30(void)
{

loc_0012ED30: ;
    SET_LO8(eax, MEM8(ecx + 0x43));
    esp += 4; return; /* ret */

}

/**
 * sub_0012ED40
 * Original: 0x0012ED40 - 0x0012ED44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ED40(void)
{

loc_0012ED40: ;
    SET_LO8(eax, MEM8(ecx + 0x44));
    esp += 4; return; /* ret */

}

/**
 * sub_0012ED50
 * Original: 0x0012ED50 - 0x0012ED82 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ED50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012ED50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x31AC30;
    if (CMP_EQ(_fa, _fb)) goto loc_0012ED65; /* je: equal / zero */

loc_0012ED60: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012ED65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012ED62u); } /* indirect call */
    }

loc_0012ED65: ;
    ecx = esi;
    PUSH32(esp, 0x0012ED6Cu); RECOMP_ABI_CALL(0x0012C600u, sub_0012C600); /* call 0x0012C600 */

loc_0012ED6C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012ED7C; /* je: equal / zero */

loc_0012ED73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ED79u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012ED79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012ED7C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012ED90
 * Original: 0x0012ED90 - 0x0012ED98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ED90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012ED90: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0012EFA0(); return; /* tail jmp 0x0012EFA0 */

}

/**
 * sub_0012EDA0
 * Original: 0x0012EDA0 - 0x0012EDD5 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012EDA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x31AD60;
    MEM32(esi + 0x70) = 0x31AD58;
    PUSH32(esp, 0x0012EDB6u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_0012EDB6: ;
    MEM32(esi) = 0x31AD08;
    MEM32(esi + 0x70) = 0x31AD00;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x70) = 0x300534;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130720(); return; /* tail jmp 0x00130720 */

}

/**
 * sub_0012EDE0
 * Original: 0x0012EDE0 - 0x0012EE24 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EDE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEM32(ecx + 0x80) = eax;
    eax = MEM32(ebp + 0xC);
    MEMF(ecx + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x20, xmm1); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(ecx + 0x40, xmm1); /* movaps */
    XMM_STORE(ecx + 0x50, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012EE30
 * Original: 0x0012EE30 - 0x0012EE4A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EE30: ;
    SET_LO8(eax, MEM8(ecx + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EE3C; /* jne: not equal / not zero */

loc_0012EE37: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0012EE3C: ;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012EE50
 * Original: 0x0012EE50 - 0x0012EEDE (142 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EE50: ;
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
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012EED6; /* je: equal / zero */

loc_0012EE67: ;
    SET_LO8(ecx, MEM8(esi + 0x6C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EED6; /* je: equal / zero */

loc_0012EE6E: ;
    edi = eax + 0x84;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012EE82u); RECOMP_ABI_CALL(0x000B1AB0u, sub_000B1AB0); /* call 0x000B1AB0 */

loc_0012EE82: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x84); /* subss */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012EE9Fu); RECOMP_ABI_CALL(0x000B1BA0u, sub_000B1BA0); /* call 0x000B1BA0 */

loc_0012EE9F: ;
    eax = MEM32(esi + 0x80);
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    xmm1 = XMM_MEM(esi + 0x20); /* movaps */
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm1); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    xmm1 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    ecx = MEM32(esi + 0x80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0012EED6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012EED3u); } /* indirect call */
    }

loc_0012EED6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012EEE0
 * Original: 0x0012EEE0 - 0x0012EEFA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EEE0: ;
    SET_LO8(eax, MEM8(ecx + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EEEC; /* jne: not equal / not zero */

loc_0012EEE7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0012EEEC: ;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012EF00
 * Original: 0x0012EF00 - 0x0012EF3C (60 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EF00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0012EF08u); RECOMP_ABI_CALL(0x0012EFE0u, sub_0012EFE0); /* call 0x0012EFE0 */

loc_0012EF08: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, esi);
    MEM32(esi) = 0x31AD60;
    MEM32(esi + 0x70) = 0x31AD58;
    MEM32(esi + 0x80) = 0;
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0012EF35u); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_0012EF35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012EF40
 * Original: 0x0012EF40 - 0x0012EF48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012EF40: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0012EF50(); return; /* tail jmp 0x0012EF50 */

}

/**
 * sub_0012EF50
 * Original: 0x0012EF50 - 0x0012EF9A (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EF50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x31AD60;
    MEM32(esi + 0x70) = 0x31AD58;
    PUSH32(esp, 0x0012EF66u); RECOMP_ABI_CALL(0x00131940u, sub_00131940); /* call 0x00131940 */

loc_0012EF66: ;
    MEM32(esi) = 0x31AD08;
    MEM32(esi + 0x70) = 0x31AD00;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x70) = 0x300534;
    PUSH32(esp, 0x0012EF84u); RECOMP_ABI_CALL(0x00130720u, sub_00130720); /* call 0x00130720 */

loc_0012EF84: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012EF94; /* je: equal / zero */

loc_0012EF8B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0012EF94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012EF91u); } /* indirect call */
    }

loc_0012EF94: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012EFA0
 * Original: 0x0012EFA0 - 0x0012EFD2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EFA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x31AD08;
    MEM32(esi + 0x70) = 0x31AD00;
    MEM32(esi + 0x70) = 0x300534;
    PUSH32(esp, 0x0012EFBCu); RECOMP_ABI_CALL(0x00130720u, sub_00130720); /* call 0x00130720 */

loc_0012EFBC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012EFCC; /* je: equal / zero */

loc_0012EFC3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0012EFCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012EFC9u); } /* indirect call */
    }

loc_0012EFCC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012EFE0
 * Original: 0x0012EFE0 - 0x0012F07C (156 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EFE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EFE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x60) = LO8(ecx);
    MEM8(eax + 0x61) = LO8(ecx);
    MEM8(eax + 0x62) = 0xFF;
    MEM32(eax + 0x64) = 5;
    MEM32(eax + 0x68) = 0xF;
    MEM8(eax + 0x6C) = 1;
    MEM8(eax + 0x6D) = LO8(ecx);
    MEM32(eax + 0x70) = 0x300534;
    MEM32(eax) = 0x31AD08;
    MEM32(eax + 0x70) = 0x31AD00;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F080
 * Original: 0x0012F080 - 0x0012F087 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F080(void)
{

loc_0012F080: ;
    MEM32(ecx) = 0x2FEC34;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F090
 * Original: 0x0012F090 - 0x0012F091 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F090(void)
{

loc_0012F090: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F0A0
 * Original: 0x0012F0A0 - 0x0012F0A9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F0A0(void)
{

loc_0012F0A0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F0B0
 * Original: 0x0012F0B0 - 0x0012F0E0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F0B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F0DE; /* je: equal / zero */

loc_0012F0B9: ;
    PUSH32(esp, esi);
    /* nop */

loc_0012F0C0: ;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    esi = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012F0CDu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012F0CD: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012F0D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F0D4u); } /* indirect call */
    }

loc_0012F0D7: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F0C0; /* jne: not equal / not zero */

loc_0012F0DD: ;
    POP32(esp, esi);

loc_0012F0DE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F0E0
 * Original: 0x0012F0E0 - 0x0012F0F0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F0E0: ;
    ecx = MEM32(0x3E8B34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F0EF; /* je: equal / zero */

loc_0012F0EA: ;
    g_seh_ebp = ebp; sub_0012F0B0(); return; /* tail jmp 0x0012F0B0 */

loc_0012F0EF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F0F0
 * Original: 0x0012F0F0 - 0x0012F167 (119 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F0F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x3E8B34);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F164; /* je: equal / zero */

loc_0012F0FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012F103: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012F157; /* jg: greater (signed >) */

loc_0012F10D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F142; /* jne: not equal / not zero */

loc_0012F111: ;
    MEM32(ebp) = edi;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0012F11Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F119u); } /* indirect call */
    }

loc_0012F11C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012F122u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012F122: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F15C; /* je: equal / zero */

loc_0012F129: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F15C; /* je: equal / zero */

loc_0012F130: ;
    ebx = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F15C; /* je: equal / zero */

loc_0012F138: ;
    ebx = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F138; /* jne: not equal / not zero */

loc_0012F140: ;
    goto loc_0012F15C;

loc_0012F142: ;
    MEM32(ebx) = edi;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012F14Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F149u); } /* indirect call */
    }

loc_0012F14C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012F152u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012F152: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0012F15C;

loc_0012F157: ;
    MEM32(esi + 8) = eax;
    ebx = esi;

loc_0012F15C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0012F103; /* jne: not equal / not zero */

loc_0012F162: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0012F164: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F170
 * Original: 0x0012F170 - 0x0012F175 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F170: ;
    g_seh_ebp = ebp; sub_0012F0B0(); return; /* tail jmp 0x0012F0B0 */

}

/**
 * sub_0012F180
 * Original: 0x0012F180 - 0x0012F1B8 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F180: ;
    eax = MEM32(0x3E8B34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F1B7; /* jne: not equal / not zero */

loc_0012F189: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 4);
    PUSH32(esp, 0x31ADB0);
    PUSH32(esp, 0x0012F19Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012F19A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F1AD; /* je: equal / zero */

loc_0012F1A1: ;
    MEM32(eax) = 0;
    MEM32(0x3E8B34) = eax;
    esp += 4; return; /* ret */

loc_0012F1AD: ;
    MEM32(0x3E8B34) = 0;

loc_0012F1B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F1C0
 * Original: 0x0012F1C0 - 0x0012F214 (84 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F1C0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3E8B34);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F1DD; /* je: equal / zero */

loc_0012F1D2: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F204; /* je: equal / zero */

loc_0012F1D7: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F1D2; /* jne: not equal / not zero */

loc_0012F1DD: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x31AE28);
    PUSH32(esp, 0x0012F1EEu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0012F1EE: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012F204: ;
    PUSH32(esp, 0x31ADE0);
    PUSH32(esp, 0x0012F20Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0012F20E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F220
 * Original: 0x0012F220 - 0x0012F231 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F220: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012F22Bu); RECOMP_ABI_CALL(0x0012F1C0u, sub_0012F1C0); /* call 0x0012F1C0 */

loc_0012F22B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F240
 * Original: 0x0012F240 - 0x0012F267 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F240: ;
    ecx = MEM32(0x3E8B34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F266; /* je: equal / zero */

loc_0012F24A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0012F252u); RECOMP_ABI_CALL(0x0012F0B0u, sub_0012F0B0); /* call 0x0012F0B0 */

loc_0012F252: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012F258u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012F258: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3E8B34) = 0;
    POP32(esp, esi);

loc_0012F266: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F270
 * Original: 0x0012F270 - 0x0012F2A6 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F270: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = 0x3C6600;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F292; /* je: equal / zero */

loc_0012F27E: ;
    PUSH32(esp, 0x374540);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012F28Au); RECOMP_ABI_CALL(0x000C66A0u, sub_000C66A0); /* call 0x000C66A0 */

loc_0012F28A: ;
    MEM8(0x3E8B40) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012F292: ;
    PUSH32(esp, 0x374440);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012F29Eu); RECOMP_ABI_CALL(0x000C66A0u, sub_000C66A0); /* call 0x000C66A0 */

loc_0012F29E: ;
    MEM8(0x3E8B40) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F2B0
 * Original: 0x0012F2B0 - 0x0012F2B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F2B0(void)
{

loc_0012F2B0: ;
    SET_LO8(eax, MEM8(0x3E8B40));
    esp += 4; return; /* ret */

}

/**
 * sub_0012F2C0
 * Original: 0x0012F2C0 - 0x0012F5B6 (758 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F2C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x3E8B40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x3E8CF8);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F5B1; /* je: equal / zero */

loc_0012F2DD: ;
    _fa = (uint32_t)(MEM16(0x388876)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x388876), 0 (16-bit) */
    SET_LO8(eax, MEM8(0x3E8B41));
    if (CMP_EQ(_fa, _fb)) goto loc_0012F311; /* je: equal / zero */

loc_0012F2EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F5B1; /* jne: not equal / not zero */

loc_0012F2F4: ;
    PUSH32(esp, 0x374440);
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEM8(0x3E8B41) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F30Cu); RECOMP_ABI_CALL(0x000C66A0u, sub_000C66A0); /* call 0x000C66A0 */

loc_0012F30C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F311: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = 0x3C6600;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F332; /* je: equal / zero */

loc_0012F31A: ;
    PUSH32(esp, 0x374540);
    PUSH32(esp, 0);
    MEM8(0x3E8B41) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F32Du); RECOMP_ABI_CALL(0x000C66A0u, sub_000C66A0); /* call 0x000C66A0 */

loc_0012F32D: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F332: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xEB);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F342u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012F342: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 0x3C6600;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F363; /* je: equal / zero */

loc_0012F34B: ;
    PUSH32(esp, 0x374440);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F357u); RECOMP_ABI_CALL(0x000C66A0u, sub_000C66A0); /* call 0x000C66A0 */

loc_0012F357: ;
    MEM8(0x3E8B40) = 0;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F363: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F370u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012F370: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F3DC; /* je: equal / zero */

loc_0012F374: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x11C); PUSH32(esp, 0x0012F3CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F3C8u); } /* indirect call */
    }

loc_0012F3CE: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x376D10);
    ecx = esi;
    goto loc_0012F590;

loc_0012F3DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F3EEu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012F3EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F596; /* jne: not equal / not zero */

loc_0012F3F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x29);
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F405u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012F405: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31AE60); /* mulss */
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F429u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012F429: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x311624); /* mulss */
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F44Du); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012F44D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31AE60); /* mulss */
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F471u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012F471: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2D);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31AE5C); /* mulss */
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F495u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012F495: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E);
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F4A7u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012F4A7: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31AE58); /* mulss */
    PUSH32(esp, 0);
    ecx = 0x3888C0;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F4C5u); RECOMP_ABI_CALL(0x0007A300u, sub_0007A300); /* call 0x0007A300 */

loc_0012F4C5: ;
    SET_LO8(ecx, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F4DB; /* je: equal / zero */

loc_0012F4CC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_0012F4DB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0);
    ecx = 0x3C6600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F4EDu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012F4ED: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x31AE60); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F511u); RECOMP_ABI_CALL(0x000143A0u, sub_000143A0); /* call 0x000143A0 */

loc_0012F511: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E8B50);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0012F520u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F51Au); } /* indirect call */
    }

loc_0012F520: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F52Eu); RECOMP_ABI_CALL(0x00265DA0u, sub_00265DA0); /* call 0x00265DA0 */

loc_0012F52E: ;
    edx = MEM32(esi);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x0012F53Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F537u); } /* indirect call */
    }

loc_0012F53D: ;
    edx = MEM32(esi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0012F54Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F546u); } /* indirect call */
    }

loc_0012F54C: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F55Au); RECOMP_ABI_CALL(0x00265E50u, sub_00265E50); /* call 0x00265E50 */

loc_0012F55A: ;
    PUSH32(esp, 0);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F565u); RECOMP_ABI_CALL(0x0009F710u, sub_0009F710); /* call 0x0009F710 */

loc_0012F565: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F573u); RECOMP_ABI_CALL(0x00094000u, sub_00094000); /* call 0x00094000 */

loc_0012F573: ;
    eax = MEM32(esi);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x0012F582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F57Cu); } /* indirect call */
    }

loc_0012F582: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F587u); RECOMP_ABI_CALL(0x00080510u, sub_00080510); /* call 0x00080510 */

loc_0012F587: ;
    edx = MEM32(eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = eax;

loc_0012F590: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0012F596u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F590u); } /* indirect call */
    }

loc_0012F596: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012F59Bu); RECOMP_ABI_CALL(0x0007E760u, sub_0007E760); /* call 0x0007E760 */

loc_0012F59B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F5B1; /* jne: not equal / not zero */

loc_0012F5A7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x120); PUSH32(esp, 0x0012F5B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F5ABu); } /* indirect call */
    }

loc_0012F5B1: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F5C0
 * Original: 0x0012F5C0 - 0x0012F5ED (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F5C0: ;
    eax = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F5E5; /* je: equal / zero */

loc_0012F5CA: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F5DC; /* je: equal / zero */

loc_0012F5D9: ;
    MEM32(edx + 8) = esi;

loc_0012F5DC: ;
    MEM32(ecx + 4) = edx;
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0012F5E5: ;
    MEM32(ecx + 4) = edx;
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012F5F0
 * Original: 0x0012F5F0 - 0x0012F611 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F5F0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F5FC; /* je: equal / zero */

loc_0012F5F9: ;
    MEM32(eax + 8) = edx;

loc_0012F5FC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F603; /* je: equal / zero */

loc_0012F600: ;
    MEM32(edx + 0xC) = eax;

loc_0012F603: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F620
 * Original: 0x0012F620 - 0x0012F648 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F620: ;
    eax = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F63B; /* je: equal / zero */

loc_0012F62E: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F63B; /* je: equal / zero */

loc_0012F638: ;
    MEM32(edx + 8) = esi;

loc_0012F63B: ;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    MEM32(ecx + 4) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F650
 * Original: 0x0012F650 - 0x0012F6AC (92 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F650: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F687; /* jne: not equal / not zero */

loc_0012F659: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F66A; /* je: equal / zero */

loc_0012F667: ;
    MEM32(edx + 8) = esi;

loc_0012F66A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F671; /* je: equal / zero */

loc_0012F66E: ;
    MEM32(esi + 0xC) = edx;

loc_0012F671: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0;
    MEM32(ecx + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012F687: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F694; /* je: equal / zero */

loc_0012F691: ;
    MEM32(ecx + 8) = edx;

loc_0012F694: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F69B; /* je: equal / zero */

loc_0012F698: ;
    MEM32(edx + 0xC) = ecx;

loc_0012F69B: ;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F6B0
 * Original: 0x0012F6B0 - 0x0012F6D6 (38 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F6B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F6D2; /* je: equal / zero */

loc_0012F6BA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);

loc_0012F6C0: ;
    eax = MEM32(ecx);
    esi = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012F6CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012F6C7u); } /* indirect call */
    }

loc_0012F6CA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012F6C0; /* jne: not equal / not zero */

loc_0012F6D0: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0012F6D2: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}
