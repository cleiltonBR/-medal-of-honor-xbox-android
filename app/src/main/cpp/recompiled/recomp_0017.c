/**
 * Medal of Honor European Assault - Recompiled code chunk 17
 * Functions: 250 (0x000902E0 - 0x00095330)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000902E0
 * Original: 0x000902E0 - 0x0009030C (44 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000902E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000902E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090306; /* je: equal / zero */

loc_000902EB: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000902F4u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_000902F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090306; /* je: equal / zero */

loc_000902FB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00090302u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000902FFu); } /* indirect call */
    }

loc_00090302: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00090306: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090310
 * Original: 0x00090310 - 0x00090319 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090310: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00090260(); return; /* tail jmp 0x00090260 */

}

/**
 * sub_00090320
 * Original: 0x00090320 - 0x000903E7 (199 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090320: ;
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
    PUSH32(esp, 0x0009034Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009034B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00090366u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00090366: ;
    PUSH32(esp, 0x30A5FC);
    ecx = ebx;
    PUSH32(esp, 0x00090372u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00090372: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00090378u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00090378: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00090382u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009037Fu); } /* indirect call */
    }

loc_00090382: ;
    PUSH32(esp, 0x45569AED);
    ecx = eax + 8;
    PUSH32(esp, 0x0009038Fu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009038F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000903DF; /* jne: not equal / not zero */

loc_00090393: ;
    SET_LO8(ecx, MEM8(0x3C3904));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000903D1; /* jne: not equal / not zero */

loc_000903A2: ;
    edx = MEM32(0x3C3904);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6B00);
    MEM32(0x3C3904) = edx;
    MEM32(0x3C38FC) = 0x2FF7D4;
    MEM32(0x3C3900) = 2;
    PUSH32(esp, 0x000903CEu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_000903CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000903D1: ;
    eax = MEM32(edi + 8);
    ecx = edi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C38FC);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000903DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000903DCu); } /* indirect call */
    }

loc_000903DF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000903F0
 * Original: 0x000903F0 - 0x00090424 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000903F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000903F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x00090409u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00090409: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x00090414u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00090414: ;
    ecx = edi;
    PUSH32(esp, 0x0009041Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0009041B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00090430
 * Original: 0x00090430 - 0x00090495 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090430: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00090474; /* jne: not equal / not zero */

loc_00090438: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00090440u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00090440: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090466; /* je: equal / zero */

loc_0009044B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00090453u); RECOMP_ABI_CALL(0x00090320u, sub_00090320); /* call 0x00090320 */

loc_00090453: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090466; /* je: equal / zero */

loc_00090457: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090462u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00090462: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00090466: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090470u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00090470: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00090474: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00090492; /* jne: not equal / not zero */

loc_00090479: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00090486u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00090486: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090492; /* je: equal / zero */

loc_0009048A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00090492u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00090490u); } /* indirect call */
    }

loc_00090492: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000904A0
 * Original: 0x000904A0 - 0x000904A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000904A0(void)
{

loc_000904A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000904B0
 * Original: 0x000904B0 - 0x000904B7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000904B0(void)
{

loc_000904B0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000904C0
 * Original: 0x000904C0 - 0x000904C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000904C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000904C0: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000904D0
 * Original: 0x000904D0 - 0x0009052F (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000904D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000904D0: ;
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
    MEM32(esi) = 0x30A6C0;
    MEM32(edi) = 0x30A6BC;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00090502u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00090502: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0009050Au); RECOMP_ABI_CALL(0x00182400u, sub_00182400); /* call 0x00182400 */

loc_0009050A: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00090512u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00090512: ;
    PUSH32(esp, 0x30A6A4);
    ecx = ebx;
    PUSH32(esp, 0x0009051Eu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009051E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00090524u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00090524: ;
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
 * sub_00090530
 * Original: 0x00090530 - 0x0009056F (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090530: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30A6C0;
    MEM32(esi + 8) = 0x30A6BC;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0009054Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009054D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x20;
    PUSH32(esp, 0x00090558u); RECOMP_ABI_CALL(0x00182520u, sub_00182520); /* call 0x00182520 */

loc_00090558: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x00090560u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00090560: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_00090570
 * Original: 0x00090570 - 0x0009057B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090570: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_00090580
 * Original: 0x00090580 - 0x0009058A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090580: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00090590
 * Original: 0x00090590 - 0x000905EE (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090590: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000905CD; /* jne: not equal / not zero */

loc_00090598: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x000905A0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000905A0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000905BF; /* je: equal / zero */

loc_000905AB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000905B3u); RECOMP_ABI_CALL(0x000904D0u, sub_000904D0); /* call 0x000904D0 */

loc_000905B3: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000905BBu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000905BB: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000905BF: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000905C9u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000905C9: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000905CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000905EB; /* jne: not equal / not zero */

loc_000905D2: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000905DFu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000905DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000905EB; /* je: equal / zero */

loc_000905E3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000905EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000905E9u); } /* indirect call */
    }

loc_000905EB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000905F0
 * Original: 0x000905F0 - 0x0009069C (172 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000905F0(void)
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

loc_000905F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00090607; /* je: equal / zero */

loc_00090602: ;
    edi = eax + -8;
    goto loc_00090609;

loc_00090607: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00090609: ;
    eax = MEM32(edi + 0xC);
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3CD06B6C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009061Eu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009061E: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x1664515A);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009062Eu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009062E: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xBD50B5EDu);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009063Eu); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_0009063E: ;
    edx = MEM32(edi + 0xC);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00090650u); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_00090650: ;
    ecx = edi + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090696; /* je: equal / zero */

loc_00090657: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x40) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00090696u); RECOMP_ABI_CALL(0x00183050u, sub_00183050); /* call 0x00183050 */

loc_00090696: ;
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
 * sub_000906A0
 * Original: 0x000906A0 - 0x000906A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000906A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000906A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_000906B0
 * Original: 0x000906B0 - 0x000906B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000906B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000906B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000906C0(); return; /* tail jmp 0x000906C0 */

}

/**
 * sub_000906C0
 * Original: 0x000906C0 - 0x00090714 (84 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000906C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000906C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30A6C0;
    MEM32(esi + 8) = 0x30A6BC;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000906DDu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000906DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x20;
    PUSH32(esp, 0x000906E8u); RECOMP_ABI_CALL(0x00182520u, sub_00182520); /* call 0x00182520 */

loc_000906E8: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000906F0u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000906F0: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x000906FEu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000906FE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009070E; /* je: equal / zero */

loc_00090705: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009070Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0009070B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009070E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090720
 * Original: 0x00090720 - 0x00090721 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090720(void)
{

loc_00090720: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00090730
 * Original: 0x00090730 - 0x00090738 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090730(void)
{

loc_00090730: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x20));
    esp += 4; return; /* ret */

}

/**
 * sub_00090740
 * Original: 0x00090740 - 0x000907BA (122 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090740: ;
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
    PUSH32(esp, 0x0009076Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009076B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00090786u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00090786: ;
    PUSH32(esp, 0x30A7D8);
    ecx = ebx;
    PUSH32(esp, 0x00090792u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00090792: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00090798u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00090798: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000907A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009079Fu); } /* indirect call */
    }

loc_000907A2: ;
    PUSH32(esp, 0xC500FB4Du);
    ecx = eax + 8;
    PUSH32(esp, 0x000907AFu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000907AF: ;
    MEM8(esi + 0x20) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000907C0
 * Original: 0x000907C0 - 0x000907F4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000907C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000907C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000907D9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000907D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000907E4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000907E4: ;
    ecx = edi;
    PUSH32(esp, 0x000907EBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000907EB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00090800
 * Original: 0x00090800 - 0x00090963 (355 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090800: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x90786E43u);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00090812u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009080Fu); } /* indirect call */
    }

loc_00090812: ;
    ecx = eax;
    PUSH32(esp, 0x00090819u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090819: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE60B1C40u);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00090827u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00090824u); } /* indirect call */
    }

loc_00090827: ;
    ecx = eax;
    PUSH32(esp, 0x0009082Eu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0009082E: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC8E5D1E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009083Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009083Bu); } /* indirect call */
    }

loc_0009083E: ;
    ecx = eax;
    PUSH32(esp, 0x00090845u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090845: ;
    ecx = MEM32(0x373374);
    edx = MEM32(esi);
    MEM32(esp + 0x18) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6061019A);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009085Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009085Cu); } /* indirect call */
    }

loc_0009085F: ;
    ecx = eax;
    PUSH32(esp, 0x00090866u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090866: ;
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6F1F0F1C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00090874u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00090871u); } /* indirect call */
    }

loc_00090874: ;
    ecx = eax;
    PUSH32(esp, 0x0009087Bu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0009087B: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0x14));
    PUSH32(esp, 0);
    MEM8(esp + 0x10) = LO8(ebx);
    PUSH32(esp, 0);
    ebx = 1;
    MEM8(esp + 0x15) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x20));
    PUSH32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x22) = LO8(edx);
    MEM8(esp + 0x23) = LO8(ecx);
    edx = MEM32(esp + 0x20);
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000908C1u); RECOMP_ABI_CALL(0x000AC1B0u, sub_000AC1B0); /* call 0x000AC1B0 */

loc_000908C1: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6672B460);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000908D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000908CDu); } /* indirect call */
    }

loc_000908D0: ;
    ecx = eax;
    PUSH32(esp, 0x000908D7u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000908D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090917; /* je: equal / zero */

loc_000908DB: ;
    PUSH32(esp, 0xBB11B275u);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x2FF7D4;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000908F9u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000908F9: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00090907u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00090904u); } /* indirect call */
    }

loc_00090907: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00090910u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_00090910: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00090917: ;
    _fa = (uint32_t)(MEM8(0x3C3934)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3C3934), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009094E; /* jne: not equal / not zero */

loc_0009091F: ;
    edx = MEM32(0x3C3934);
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6B10);
    MEM32(0x3C3934) = edx;
    MEM32(0x3C392C) = 0x2FF7D4;
    MEM32(0x3C3930) = 3;
    PUSH32(esp, 0x0009094Bu); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_0009094B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009094E: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C392C);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009095Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00090959u); } /* indirect call */
    }

loc_0009095C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00090970
 * Original: 0x00090970 - 0x000909D5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090970: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000909B4; /* jne: not equal / not zero */

loc_00090978: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00090980u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00090980: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000909A6; /* je: equal / zero */

loc_0009098B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00090993u); RECOMP_ABI_CALL(0x00090740u, sub_00090740); /* call 0x00090740 */

loc_00090993: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000909A6; /* je: equal / zero */

loc_00090997: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000909A2u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000909A2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000909A6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000909B0u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000909B0: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000909B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000909D2; /* jne: not equal / not zero */

loc_000909B9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000909C6u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000909C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000909D2; /* je: equal / zero */

loc_000909CA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000909D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000909D0u); } /* indirect call */
    }

loc_000909D2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000909E0
 * Original: 0x000909E0 - 0x000909E9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000909E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000909E0: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00090800(); return; /* tail jmp 0x00090800 */

}

/**
 * sub_000909F0
 * Original: 0x000909F0 - 0x000909F7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000909F0(void)
{

loc_000909F0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00090A00
 * Original: 0x00090A00 - 0x00090A09 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090A00: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00090A10
 * Original: 0x00090A10 - 0x00090A11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090A10(void)
{

loc_00090A10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00090A20
 * Original: 0x00090A20 - 0x00090A47 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090A20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x38);
    edx = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x21) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x21;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x378A90;
    PUSH32(esp, 0x00090A46u); RECOMP_ABI_CALL(0x0018EB80u, sub_0018EB80); /* call 0x0018EB80 */

loc_00090A46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00090A50
 * Original: 0x00090A50 - 0x00090A51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090A50(void)
{

loc_00090A50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00090A60
 * Original: 0x00090A60 - 0x00090A61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090A60(void)
{

loc_00090A60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00090A70
 * Original: 0x00090A70 - 0x00090A78 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090A70(void)
{

loc_00090A70: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x20));
    esp += 4; return; /* ret */

}

/**
 * sub_00090A80
 * Original: 0x00090A80 - 0x00090A8F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090A80: ;
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
 * sub_00090A90
 * Original: 0x00090A90 - 0x00090B8D (253 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090A90(void)
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

loc_00090A90: ;
    eax = MEM32(esp + 4);
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
    MEM32(esi) = 0x30A934;
    MEM32(ebp) = 0x30A91C;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00090AC5u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00090AC5: ;
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x6672B460);
    ecx = edi;
    PUSH32(esp, 0x00090AD8u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00090AD8: ;
    MEM8(esi + 0x20) = LO8(eax);
    PUSH32(esp, 0x5EB87A8B);
    ecx = edi;
    MEM8(esi + 0x21) = 0;
    MEM8(esi + 0x22) = 0;
    MEM8(esi + 0x23) = 0;
    MEM8(esi + 0x24) = 0xFF;
    PUSH32(esp, 0x00090AF7u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00090AF7: ;
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x38B17551);
    ecx = edi;
    PUSH32(esp, 0x00090B06u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00090B06: ;
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xD1C7A7ABu);
    ecx = edi;
    PUSH32(esp, 0x00090B15u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00090B15: ;
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB164150Eu);
    ecx = edi;
    PUSH32(esp, 0x00090B24u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00090B24: ;
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x686DC93A);
    ecx = edi;
    PUSH32(esp, 0x00090B33u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00090B33: ;
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x90786E43u);
    ecx = edi;
    PUSH32(esp, 0x00090B42u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090B42: ;
    PUSH32(esp, 0xE60B1C40u);
    ecx = edi;
    MEM8(esi + 0x21) = LO8(eax);
    PUSH32(esp, 0x00090B51u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090B51: ;
    PUSH32(esp, 0xC8E5D1E);
    ecx = edi;
    MEM8(esi + 0x22) = LO8(eax);
    PUSH32(esp, 0x00090B60u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090B60: ;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM8(esi + 0x23) = LO8(eax);
    MEM8(esi + 0x24) = 0xFF;
    PUSH32(esp, 0x00090B6Fu); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00090B6F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00090B75u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00090B75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x30A904);
    ecx = ebx;
    PUSH32(esp, 0x00090B84u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00090B84: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090B90
 * Original: 0x00090B90 - 0x00090BCB (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090B90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30A934;
    MEM32(edi) = 0x30A91C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x00090BB0u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00090BB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x00090BBBu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00090BBB: ;
    ecx = edi;
    PUSH32(esp, 0x00090BC2u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00090BC2: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00090BD0
 * Original: 0x00090BD0 - 0x00090BDB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090BD0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_00090BE0
 * Original: 0x00090BE0 - 0x00090BEA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090BE0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00090BF0
 * Original: 0x00090BF0 - 0x00090C63 (115 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090BF0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00090C42; /* jne: not equal / not zero */

loc_00090BF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x30A938);
    PUSH32(esp, 0x00090C0Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_00090C0A: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090C34; /* je: equal / zero */

loc_00090C15: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00090C21u); RECOMP_ABI_CALL(0x00090A90u, sub_00090A90); /* call 0x00090A90 */

loc_00090C21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090C34; /* je: equal / zero */

loc_00090C25: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090C30u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00090C30: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00090C34: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090C3Eu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00090C3E: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00090C42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00090C60; /* jne: not equal / not zero */

loc_00090C47: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00090C54u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00090C54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090C60; /* je: equal / zero */

loc_00090C58: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00090C60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00090C5Eu); } /* indirect call */
    }

loc_00090C60: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00090C70
 * Original: 0x00090C70 - 0x00090C78 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090C70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00090C80
 * Original: 0x00090C80 - 0x00090C88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090C80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00090C90(); return; /* tail jmp 0x00090C90 */

}

/**
 * sub_00090C90
 * Original: 0x00090C90 - 0x00090CDF (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30A934;
    MEM32(edi) = 0x30A91C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x00090CB0u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00090CB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x00090CBBu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00090CBB: ;
    ecx = edi;
    PUSH32(esp, 0x00090CC2u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00090CC2: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_00090CD8; /* je: equal / zero */

loc_00090CCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00090CD5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00090CD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00090CD8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090CE0
 * Original: 0x00090CE0 - 0x00090CF1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00090CE8u); RECOMP_ABI_CALL(0x0003C840u, sub_0003C840); /* call 0x0003C840 */

loc_00090CE8: ;
    ecx = esi + 0x3C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014CBD0(); return; /* tail jmp 0x0014CBD0 */

}

/**
 * sub_00090D00
 * Original: 0x00090D00 - 0x00090D48 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00090D00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = ecx + -12;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090D27; /* jp: parity */

loc_00090D11: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = ecx + 8;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090D24u); RECOMP_ABI_CALL(0x0003D2A0u, sub_0003D2A0); /* call 0x0003D2A0 */

loc_00090D24: ;
    esp += 8; return; /* ret 4 */

loc_00090D27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00090D30; /* je: equal / zero */

loc_00090D2B: ;
    eax = ecx + -8;
    goto loc_00090D32;

loc_00090D30: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00090D32: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF9FA9C95u);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x3C)) >> 32) & 1);
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00090D45u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00090D45: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090D50
 * Original: 0x00090D50 - 0x00090D57 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090D50(void)
{

loc_00090D50: ;
    eax = MEM32(ecx + 0x30);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00090D60
 * Original: 0x00090D60 - 0x00090D69 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090D60: ;
    eax = MEM32(ecx + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00090D70
 * Original: 0x00090D70 - 0x00090D7D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090D70: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_00090D80
 * Original: 0x00090D80 - 0x00090D99 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090D80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090D98; /* je: equal / zero */

loc_00090D8B: ;
    edx = eax + 0x14;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090D98u); RECOMP_ABI_CALL(0x0003D2A0u, sub_0003D2A0); /* call 0x0003D2A0 */

loc_00090D98: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00090DA0
 * Original: 0x00090DA0 - 0x00090DDE (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090DA0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00090DA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00090DA6u); } /* indirect call */
    }

loc_00090DA9: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00090DCB; /* je: equal / zero */

loc_00090DB3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0003CEB0(); return; /* tail jmp 0x0003CEB0 */

loc_00090DCB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0003CEB0(); return; /* tail jmp 0x0003CEB0 */

}

/**
 * sub_00090DE0
 * Original: 0x00090DE0 - 0x00090DE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090DE0(void)
{

loc_00090DE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00090DF0
 * Original: 0x00090DF0 - 0x00090E45 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090DF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ebx = esi + 0xC;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30ABBC;
    MEM32(edi) = 0x30ABA4;
    MEM32(ebx) = 0x30AB60;
    MEM32(esi + 0x30) = 0;
    PUSH32(esp, 0x00090E1Au); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00090E1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x48;
    PUSH32(esp, 0x00090E25u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_00090E25: ;
    ecx = esi + 0x34;
    PUSH32(esp, 0x00090E2Du); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00090E2D: ;
    ecx = ebx;
    PUSH32(esp, 0x00090E34u); RECOMP_ABI_CALL(0x0003CDC0u, sub_0003CDC0); /* call 0x0003CDC0 */

loc_00090E34: ;
    ecx = edi;
    PUSH32(esp, 0x00090E3Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00090E3B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00090E50
 * Original: 0x00090E50 - 0x00090E5B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090E50: ;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_00090E60
 * Original: 0x00090E60 - 0x00090E6A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090E60: ;
    eax = MEM32(ecx + 0x30);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00090E70
 * Original: 0x00090E70 - 0x00090E90 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00090E70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x406089A4);
    ecx = eax + 8;
    PUSH32(esp, 0x00090E87u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090E87: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
 * sub_00090E90
 * Original: 0x00090E90 - 0x00090EB0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00090E90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x406089A4);
    ecx = eax + 8;
    PUSH32(esp, 0x00090EA7u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090EA7: ;
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
 * sub_00090EB0
 * Original: 0x00090EB0 - 0x00090ED0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00090EB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x406089A4);
    ecx = eax + 8;
    PUSH32(esp, 0x00090EC7u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090EC7: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
 * sub_00090ED0
 * Original: 0x00090ED0 - 0x00090EF0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00090ED0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x406089A4);
    ecx = eax + 8;
    PUSH32(esp, 0x00090EE7u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090EE7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
 * sub_00090EF0
 * Original: 0x00090EF0 - 0x00090F10 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00090EF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x406089A4);
    ecx = eax + 8;
    PUSH32(esp, 0x00090F07u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00090F07: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
 * sub_00090F10
 * Original: 0x00090F10 - 0x00090F3E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090F10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    PUSH32(esp, 0x00090F28u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00090F28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090F3A; /* je: equal / zero */

loc_00090F2C: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090F3A; /* je: equal / zero */

loc_00090F33: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00090F3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00090F40
 * Original: 0x00090F40 - 0x00090F85 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090F40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xC7496193u);
    ecx = eax + 8;
    PUSH32(esp, 0x00090F58u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00090F58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090F81; /* je: equal / zero */

loc_00090F5C: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    PUSH32(esp, 0x00090F6Fu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00090F6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090F7A; /* je: equal / zero */

loc_00090F73: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00090F81; /* jne: not equal / not zero */

loc_00090F7A: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00090F81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00090F90
 * Original: 0x00090F90 - 0x00090FD5 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090F90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xC7496193u);
    ecx = eax + 8;
    PUSH32(esp, 0x00090FA8u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00090FA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090FCE; /* je: equal / zero */

loc_00090FAC: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    PUSH32(esp, 0x00090FBFu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00090FBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090FCE; /* je: equal / zero */

loc_00090FC3: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090FCE; /* je: equal / zero */

loc_00090FCA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00090FCE: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00090FE0
 * Original: 0x00090FE0 - 0x00091078 (152 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090FE0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    edi = esi + 4;
    ebp = esi + 0xC;
    ecx = ebp;
    MEM32(edi) = 0x2FF764;
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0x00091005u); RECOMP_ABI_CALL(0x0003CD90u, sub_0003CD90); /* call 0x0003CD90 */

loc_00091005: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = 0x30AB60;
    ebp = esi + 0x34;
    ecx = ebp;
    MEM32(esi) = 0x30ABBC;
    MEM32(edi) = 0x30ABA4;
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x00091029u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00091029: ;
    ecx = esi + 0x48;
    PUSH32(esp, 0x00091031u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_00091031: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00091039u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00091039: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xC7496193u);
    ecx = eax + 8;
    PUSH32(esp, 0x0009104Cu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_0009104C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00091059; /* je: equal / zero */

loc_00091052: ;
    PUSH32(esp, 0x30AB44);
    goto loc_0009105E;

loc_00091059: ;
    PUSH32(esp, 0x30AB04);

loc_0009105E: ;
    PUSH32(esp, 0x00091063u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00091063: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00091069u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00091069: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x44) = 0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00091080
 * Original: 0x00091080 - 0x00091106 (134 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091080: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    MEM32(esi + 0x14) = 0;
    MEM8(esi + 0x44) = 1;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    PUSH32(esp, 0x000910A4u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000910A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000910DD; /* je: equal / zero */

loc_000910A8: ;
    PUSH32(esp, 0xC34F0482u);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x000910C6u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000910C6: ;
    edx = MEM32(esi + 0x34);
    ecx = esi + 0x34;
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000910D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000910D1u); } /* indirect call */
    }

loc_000910D4: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000910DDu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000910DD: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xA4458B81u);
    ecx = eax + 8;
    PUSH32(esp, 0x000910F0u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000910F0: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000910FEu); RECOMP_ABI_CALL(0x0003D240u, sub_0003D240); /* call 0x0003D240 */

loc_000910FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00091110
 * Original: 0x00091110 - 0x00091150 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091110: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0xC34F0482u);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00091134u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_00091134: ;
    eax = MEM32(esi + 0x28);
    ecx = esi + 0x28;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00091142u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009113Fu); } /* indirect call */
    }

loc_00091142: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0009114Bu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_0009114B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00091150
 * Original: 0x00091150 - 0x00091176 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091150: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xC7496193u);
    ecx = eax + 8;
    PUSH32(esp, 0x00091168u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00091168: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091174; /* je: equal / zero */

loc_0009116C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00091080(); return; /* tail jmp 0x00091080 */

loc_00091174: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00091180
 * Original: 0x00091180 - 0x00091189 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091180: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00091080(); return; /* tail jmp 0x00091080 */

}

/**
 * sub_00091190
 * Original: 0x00091190 - 0x000911F5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091190: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000911D4; /* jne: not equal / not zero */

loc_00091198: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x000911A0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000911A0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000911C6; /* je: equal / zero */

loc_000911AB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000911B3u); RECOMP_ABI_CALL(0x00090FE0u, sub_00090FE0); /* call 0x00090FE0 */

loc_000911B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000911C6; /* je: equal / zero */

loc_000911B7: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000911C2u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000911C2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000911C6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000911D0u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000911D0: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000911D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000911F2; /* jne: not equal / not zero */

loc_000911D9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000911E6u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000911E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000911F2; /* je: equal / zero */

loc_000911EA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000911F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000911F0u); } /* indirect call */
    }

loc_000911F2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00091200
 * Original: 0x00091200 - 0x00091204 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091200(void)
{

loc_00091200: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00091210
 * Original: 0x00091210 - 0x0009121E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091210: ;
    eax = ecx + -12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009121B; /* je: equal / zero */

loc_00091217: ;
    eax = ecx + -8;
    esp += 4; return; /* ret */

loc_0009121B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00091220
 * Original: 0x00091220 - 0x00091228 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091220: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00091270(); return; /* tail jmp 0x00091270 */

}

/**
 * sub_00091230
 * Original: 0x00091230 - 0x00091238 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091230: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00091270(); return; /* tail jmp 0x00091270 */

}

/**
 * sub_00091240
 * Original: 0x00091240 - 0x00091248 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091240: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00091200(); return; /* tail jmp 0x00091200 */

}

/**
 * sub_00091250
 * Original: 0x00091250 - 0x0009125B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091250: ;
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00039EC0(); return; /* tail jmp 0x00039EC0 */

}

/**
 * sub_00091260
 * Original: 0x00091260 - 0x0009126B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091260: ;
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_00039EE0(); return; /* tail jmp 0x00039EE0 */

}

/**
 * sub_00091270
 * Original: 0x00091270 - 0x0009128E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091270: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00091278u); RECOMP_ABI_CALL(0x00090DF0u, sub_00090DF0); /* call 0x00090DF0 */

loc_00091278: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091288; /* je: equal / zero */

loc_0009127F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00091285u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00091285: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00091288: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00091290
 * Original: 0x00091290 - 0x00091291 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091290(void)
{

loc_00091290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000912A0
 * Original: 0x000912A0 - 0x000912AD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000912A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000912A0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x48));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000912B0
 * Original: 0x000912B0 - 0x000912E5 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000912B0(void)
{

loc_000912B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000912C4u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000912C4: ;
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
    PUSH32(esp, 0x000912E1u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000912E1: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000912F0
 * Original: 0x000912F0 - 0x0009134C (92 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000912F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000912F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    if (CMP_EQ(_fa, _fb)) goto loc_00091327; /* je: equal / zero */

loc_00091302: ;
    PUSH32(esp, 0x30B218);
    PUSH32(esp, 0x0009130Cu); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_0009130C: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B218);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00091323u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00091323: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00091327: ;
    PUSH32(esp, 0x30B210);
    PUSH32(esp, 0x00091331u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00091331: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B210);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x00091348u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00091348: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00091350
 * Original: 0x00091350 - 0x0009136A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091350: ;
    eax = ecx + 4;
    PUSH32(esp, eax);
    MEM8(ecx + 0x28) = 1;
    edx = MEM32(0x376220);
    PUSH32(esp, 0x28);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00091369u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00091369: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00091370
 * Original: 0x00091370 - 0x00091385 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00091370: ;
    SET_LO8(eax, MEM8(ecx + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00091384; /* jne: not equal / not zero */

loc_00091377: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x4C); /* comiss */
    if ((_fca >= _fcb)) goto loc_00091384; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ecx + 0x4C)) */

loc_00091380: ;
    MEM8(ecx + 0x48) = 1;

loc_00091384: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00091390
 * Original: 0x00091390 - 0x000913B3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00091390: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x4C); /* comiss */
    if ((_fca >= _fcb)) goto loc_000913B2; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ecx + 0x4C)) */

loc_00091399: ;
    SET_LO8(eax, MEM8(ecx + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000913B2; /* je: equal / zero */

loc_000913A0: ;
    edx = MEM32(ecx + 0x4C);
    eax = ecx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000913B2u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000913B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000913C0
 * Original: 0x000913C0 - 0x000913DF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000913C0(void)
{

loc_000913C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000913D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000913CFu); } /* indirect call */
    }

loc_000913D2: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x000913DEu); RECOMP_ABI_CALL(0x00116A30u, sub_00116A30); /* call 0x00116A30 */

loc_000913DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000913E0
 * Original: 0x000913E0 - 0x00091432 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000913E0(void)
{

loc_000913E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B224);
    PUSH32(esp, 0x000913F6u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000913F6: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009140Du); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_0009140D: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    MEM8(esi + 0x28) = 1;
    edx = MEM32(0x376220);
    PUSH32(esp, 0x28);
    PUSH32(esp, edx);
    ecx = esi + 0x30;
    PUSH32(esp, 0x00091426u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00091426: ;
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00091440
 * Original: 0x00091440 - 0x0009148D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00091440: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(eax + 0x115C) = 0;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x30B22C);
    PUSH32(esp, 0x00091460u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00091460: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B22C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x00091477u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00091477: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009148B; /* jne: not equal / not zero */

loc_0009147E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x4C); /* comiss */
    if ((_fca >= _fcb)) goto loc_0009148B; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0x4C)) */

loc_00091487: ;
    MEM8(esi + 0x48) = 1;

loc_0009148B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00091490
 * Original: 0x00091490 - 0x000914B7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00091490: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x4C); /* comiss */
    if ((_fca >= _fcb)) goto loc_000914B6; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0x4C)) */

loc_0009149D: ;
    SET_LO8(ecx, MEM8(eax + 0x48));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000914B6; /* je: equal / zero */

loc_000914A4: ;
    edx = MEM32(eax + 0x4C);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2A);
    PUSH32(esp, edx);
    ecx = eax + 0x50;
    PUSH32(esp, 0x000914B6u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000914B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000914C0
 * Original: 0x000914C0 - 0x000914E1 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000914C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000914C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000914DE; /* je: equal / zero */

loc_000914CB: ;
    ecx = MEM32(eax + 0x1128);
    _fa = (uint32_t)(MEM16(ecx + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1CE), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000914DE; /* jle: less or equal (signed <=) */

loc_000914DB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000914DE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000914F0
 * Original: 0x000914F0 - 0x0009152D (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000914F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000914F0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x48));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00091527; /* jne: not equal / not zero */

loc_000914FB: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x12)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x12), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091510; /* jne: not equal / not zero */

loc_00091507: ;
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091527; /* je: equal / zero */

loc_00091510: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009152A; /* je: equal / zero */

loc_00091517: ;
    eax = MEM32(eax + 0x1128);
    _fa = (uint32_t)(MEM16(eax + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CE), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009152A; /* jg: greater (signed >) */

loc_00091527: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0009152A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00091530
 * Original: 0x00091530 - 0x0009156B (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091530: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x20) = eax;
    edx = MEM32(eax + 0x1128);
    eax = MEM32(edx + 0x1C0);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x3C2F40;
    PUSH32(esp, 0x0009155Du); RECOMP_ABI_CALL(0x00181F20u, sub_00181F20); /* call 0x00181F20 */

loc_0009155D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091567; /* je: equal / zero */

loc_00091561: ;
    ecx = MEM32(eax + 0x50);
    MEM32(esi + 0x4C) = ecx;

loc_00091567: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00091570
 * Original: 0x00091570 - 0x00091585 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091570: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091582; /* je: equal / zero */

loc_0009157D: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x6C)); return; /* indirect tail jmp */

loc_00091582: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00091590
 * Original: 0x00091590 - 0x000915B8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091590: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000915B5; /* je: equal / zero */

loc_0009159D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000915A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009159Fu); } /* indirect call */
    }

loc_000915A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000915B5; /* je: equal / zero */

loc_000915A6: ;
    edx = MEM32(esp + 4);
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000915B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000915B2u); } /* indirect call */
    }

loc_000915B5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000915C0
 * Original: 0x000915C0 - 0x000915E5 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000915C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000915C0: ;
    SET_LO8(eax, MEM8(ecx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000915E4; /* je: equal / zero */

loc_000915C7: ;
    xmm0 = XMM_SCALAR(MEMF(0x376220)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ecx + 0x2C) = xmm1.f[0]; /* movss */
    MEM8(ecx + 0x28) = 0;

loc_000915E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000915F0
 * Original: 0x000915F0 - 0x00091603 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000915F0(void)
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

loc_000915F0: ;
    SET_LO8(eax, MEM8(ecx + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000915FF; /* je: equal / zero */

loc_000915F7: ;
    MEM8(ecx + 0x48) = 0;
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    esp += 4; return; /* ret */

loc_000915FF: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00091610
 * Original: 0x00091610 - 0x0009162E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091610(void)
{

loc_00091610: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0x1154);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00091624u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_00091624: ;
    ecx = eax;
    PUSH32(esp, 0x0009162Bu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_0009162B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00091630
 * Original: 0x00091630 - 0x0009164E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091630(void)
{

loc_00091630: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0x1150);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00091644u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_00091644: ;
    ecx = eax;
    PUSH32(esp, 0x0009164Bu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_0009164B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00091650
 * Original: 0x00091650 - 0x000916BE (110 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091650: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(eax + 0x1120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3235214u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1120), 0xA3235214u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000916BA; /* jne: not equal / not zero */

loc_00091662: ;
    ecx = MEM32(0x3C396C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091688; /* je: equal / zero */

loc_0009166C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x00091674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009166Eu); } /* indirect call */
    }

loc_00091674: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x0009167Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091678u); } /* indirect call */
    }

loc_0009167E: ;
    MEM32(0x3C396C) = 0;

loc_00091688: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000916BA; /* je: equal / zero */

loc_00091690: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57399BD1);
    PUSH32(esp, 0x0009169Cu); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0009169C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x3C396C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000916BA; /* je: equal / zero */

loc_000916A8: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xCBAAD7CDu);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000916BAu); RECOMP_ABI_CALL(0x00131F90u, sub_00131F90); /* call 0x00131F90 */

loc_000916BA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000916C0
 * Original: 0x000916C0 - 0x00091709 (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000916C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000916C0: ;
    eax = MEM32(ecx + 0x20);
    MEM8(eax + 0x115C) = 1;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000916E6; /* je: equal / zero */

loc_000916D1: ;
    edx = MEM32(ecx + 0x1128);
    _fa = (uint32_t)(MEM16(edx + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x1CC), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000916E9; /* jle: less or equal (signed <=) */

loc_000916E1: ;
    PUSH32(esp, 0x000916E6u); RECOMP_ABI_CALL(0x000F3BA0u, sub_000F3BA0); /* call 0x000F3BA0 */

loc_000916E6: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000916E9: ;
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091706; /* je: equal / zero */

loc_000916F3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000916F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000916F5u); } /* indirect call */
    }

loc_000916F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091706; /* je: equal / zero */

loc_000916FC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00091706u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091700u); } /* indirect call */
    }

loc_00091706: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00091710
 * Original: 0x00091710 - 0x0009173B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091710: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091728; /* je: equal / zero */

loc_00091714: ;
    eax = ecx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x41EFC28F);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00091727u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00091727: ;
    esp += 4; return; /* ret */

loc_00091728: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x41EFC28F);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009173Au); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009173A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00091740
 * Original: 0x00091740 - 0x00091792 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00091740: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x20);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edx + 0x115C) = LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x28), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091770; /* je: equal / zero */

loc_00091754: ;
    xmm0 = XMM_SCALAR(MEMF(0x376220)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ecx + 0x2C) = xmm1.f[0]; /* movss */
    MEM8(ecx + 0x28) = LO8(eax);

loc_00091770: ;
    xmm0 = XMM_SCALAR(MEMF(0x376224)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x2C); /* comiss */
    MEM8(esp + 4) = 1;
    if ((_fca > _fcb)) goto loc_00091787; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x2C)) */

loc_00091783: ;
    MEM8(esp + 4) = LO8(eax);

loc_00091787: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00091791u); RECOMP_ABI_CALL(0x000912F0u, sub_000912F0); /* call 0x000912F0 */

loc_00091791: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000917A0
 * Original: 0x000917A0 - 0x00091827 (135 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000917A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000917A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM8(ecx + 0x115C) = LO8(edx);
    esi = MEM32(eax + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091824; /* je: equal / zero */

loc_000917B8: ;
    ecx = MEM32(esi + 0x1128);
    _fa = (uint32_t)(MEM16(ecx + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1CE), LO16(edx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00091824; /* jle: less or equal (signed <=) */

loc_000917C7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    _fa = (uint32_t)(MEM8(eax + 0x48)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x48), LO8(edx) (8-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000917E1; /* je: equal / zero */

loc_000917D7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    MEM8(eax + 0x48) = LO8(edx);
    goto loc_000917E6;

loc_000917E1: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */

loc_000917E6: ;
    eax = MEM32(esp + 4);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000917FDu); RECOMP_ABI_CALL(0x00187DC0u, sub_00187DC0); /* call 0x00187DC0 */

loc_000917FD: ;
    ecx = MEM32(esi + 0x1124);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00091808u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091805u); } /* indirect call */
    }

loc_00091808: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x00091816u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091810u); } /* indirect call */
    }

loc_00091816: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x12C)); return; /* indirect tail jmp */

loc_00091824: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00091830
 * Original: 0x00091830 - 0x000918A3 (115 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091830: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00091839u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091836u); } /* indirect call */
    }

loc_00091839: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_00091881; /* je: equal / zero */

loc_00091844: ;
    MEM8(ecx + 0x115A) = 1;
    edx = MEM32(eax + 0x20);
    _fa = (uint32_t)(MEM32(edx + 0x1120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3235214u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x1120), 0xA3235214u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000918A2; /* jne: not equal / not zero */

loc_0009185A: ;
    ecx = MEM32(0x3C396C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000918A2; /* je: equal / zero */

loc_00091864: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x188); PUSH32(esp, 0x0009186Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091866u); } /* indirect call */
    }

loc_0009186C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x00091876u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091870u); } /* indirect call */
    }

loc_00091876: ;
    MEM32(0x3C396C) = 0;
    esp += 4; return; /* ret */

loc_00091881: ;
    eax = MEM32(ecx + 0x1128);
    _fa = (uint32_t)(MEM16(eax + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CC), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009189B; /* jg: greater (signed >) */

loc_00091891: ;
    _fa = (uint32_t)(MEM16(eax + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CE), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000918A2; /* jle: less or equal (signed <=) */

loc_0009189B: ;
    MEM8(ecx + 0x115A) = 0;

loc_000918A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000918B0
 * Original: 0x000918B0 - 0x00091916 (102 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000918B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000918B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(eax + 0x1120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3235214u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1120), 0xA3235214u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00091914; /* jne: not equal / not zero */

loc_000918C4: ;
    ecx = MEM32(0x3C396C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000918EA; /* je: equal / zero */

loc_000918CE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x000918D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000918D0u); } /* indirect call */
    }

loc_000918D6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x000918E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000918DAu); } /* indirect call */
    }

loc_000918E0: ;
    MEM32(0x3C396C) = 0;

loc_000918EA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57399BD1);
    PUSH32(esp, 0x000918F6u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000918F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x3C396C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00091914; /* je: equal / zero */

loc_00091902: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xCBAAD7CDu);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00091914u); RECOMP_ABI_CALL(0x00131F90u, sub_00131F90); /* call 0x00131F90 */

loc_00091914: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00091920
 * Original: 0x00091920 - 0x000919B1 (145 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091920: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x24);
    SET_LO8(eax, 1);
    MEM8(ecx + 0x1130) = LO8(eax);
    edx = MEM32(esi + 0x20);
    MEM8(edx + 0x115A) = LO8(eax);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009194D; /* je: equal / zero */

loc_00091946: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0009194Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091948u); } /* indirect call */
    }

loc_0009194B: ;
    goto loc_0009194F;

loc_0009194D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009194F: ;
    eax = MEM32(eax + 0x3F8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00091996; /* je: equal / zero */

loc_0009195A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0009197B; /* je: equal / zero */

loc_0009195D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000919AF; /* jne: not equal / not zero */

loc_00091960: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xDC1BDE1Du);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3030BC);
    PUSH32(esp, 0x00091979u); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_00091979: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009197B: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xDC1BDE1Du);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30B248);
    PUSH32(esp, 0x00091994u); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_00091994: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00091996: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xDC1BDE1Du);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30B234);
    PUSH32(esp, 0x000919AFu); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_000919AF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000919C0
 * Original: 0x000919C0 - 0x000919FD (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000919C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000919C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000919D9; /* je: equal / zero */

loc_000919D2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000919D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000919D4u); } /* indirect call */
    }

loc_000919D7: ;
    goto loc_000919DB;

loc_000919D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000919DB: ;
    ecx = MEM32(esi + 0x24);
    MEM8(ecx + 0x1130) = 0;
    edx = MEM32(esi + 0x20);
    ecx = eax + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(edx + 0x115A) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000919FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000919F8u); } /* indirect call */
    }

loc_000919FB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00091A00
 * Original: 0x00091A00 - 0x00091A44 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091A41; /* je: equal / zero */

loc_00091A0D: ;
    ecx = edi;
    MEM8(esi + 0x115A) = 1;
    PUSH32(esp, 0x00091A1Bu); RECOMP_ABI_CALL(0x000916C0u, sub_000916C0); /* call 0x000916C0 */

loc_00091A1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00091A36; /* jne: not equal / not zero */

loc_00091A28: ;
    PUSH32(esp, 0x30B268);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00091A33u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00091A33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00091A36: ;
    PUSH32(esp, 0x30B260);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00091A41u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00091A41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00091A50
 * Original: 0x00091A50 - 0x00091BF0 (416 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(ebx + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00091BE9; /* je: equal / zero */

loc_00091A6A: ;
    eax = MEM32(ebx + 0x20);
    MEM8(eax + 0x115C) = 0;
    edi = MEM32(ebx + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091B85; /* je: equal / zero */

loc_00091A7F: ;
    ecx = MEM32(edi + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091A92; /* je: equal / zero */

loc_00091A89: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00091A8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091A8Bu); } /* indirect call */
    }

loc_00091A8E: ;
    esi = eax;
    goto loc_00091A94;

loc_00091A92: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00091A94: ;
    eax = MEM32(esi + 0x30);
    ecx = esp + 0x20;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00091AA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091AA1u); } /* indirect call */
    }

loc_00091AA4: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00091AB0u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_00091AB0: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = MEM32(edi + 0x1128);
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00091AD5; /* je: equal / zero */

loc_00091AC7: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00091ACCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091AC9u); } /* indirect call */
    }

loc_00091ACC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091AD5; /* je: equal / zero */

loc_00091AD0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00091AD7;

loc_00091AD5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00091AD7: ;
    esi = MEM32(esi + 0x1C0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00091AE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091AE6u); } /* indirect call */
    }

loc_00091AE9: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x3C2F40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00091B0Au); RECOMP_ABI_CALL(0x00182050u, sub_00182050); /* call 0x00182050 */

loc_00091B0A: ;
    esi = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x00091B16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091B10u); } /* indirect call */
    }

loc_00091B16: ;
    MEM8(eax + 0x1A9) = MEM8(eax + 0x1A9) | 0x10;
    _fa = (uint32_t)(MEM8(eax + 0x1A9)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x118); PUSH32(esp, 0x00091B2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091B26u); } /* indirect call */
    }

loc_00091B2C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x00091B36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091B30u); } /* indirect call */
    }

loc_00091B36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091B46; /* je: equal / zero */

loc_00091B3A: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00091B46u); RECOMP_ABI_CALL(0x00185390u, sub_00185390); /* call 0x00185390 */

loc_00091B46: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00091B4Fu); RECOMP_ABI_CALL(0x00187F60u, sub_00187F60); /* call 0x00187F60 */

loc_00091B4F: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00091B56u); RECOMP_ABI_CALL(0x000F3BA0u, sub_000F3BA0); /* call 0x000F3BA0 */

loc_00091B56: ;
    SET_LO8(eax, MEM8(ebx + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091B61; /* je: equal / zero */

loc_00091B5D: ;
    MEM8(ebx + 0x48) = 0;

loc_00091B61: ;
    SET_LO8(eax, MEM8(ebx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091B85; /* je: equal / zero */

loc_00091B68: ;
    xmm0 = XMM_SCALAR(MEMF(0x376220)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ebx + 0x2C) = xmm1.f[0]; /* movss */
    MEM8(ebx + 0x28) = 0;

loc_00091B85: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xDEADDEADu);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = 0x2FF7D4;
    MEM32(esp + 0x20) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00091BA1u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_00091BA1: ;
    eax = MEM32(ebx + 4);
    ecx = ebx + 4;
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00091BAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091BACu); } /* indirect call */
    }

loc_00091BAF: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(MEM32(eax + 0x1120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3235214u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1120), 0xA3235214u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00091BE0; /* jne: not equal / not zero */

loc_00091BBE: ;
    ecx = MEM32(0x3C396C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091BE0; /* je: equal / zero */

loc_00091BC8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x00091BD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091BCAu); } /* indirect call */
    }

loc_00091BD0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x00091BDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091BD4u); } /* indirect call */
    }

loc_00091BDA: ;
    MEM32(0x3C396C) = esi;

loc_00091BE0: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00091BE9u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_00091BE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00091BF0
 * Original: 0x00091BF0 - 0x00091C20 (48 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091BF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091C16; /* je: equal / zero */

loc_00091C01: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00091C06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091C03u); } /* indirect call */
    }

loc_00091C06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091C16; /* je: equal / zero */

loc_00091C0A: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00091C16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091C13u); } /* indirect call */
    }

loc_00091C16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00091C20
 * Original: 0x00091C20 - 0x00091C47 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091C20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091C46; /* je: equal / zero */

loc_00091C31: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00091C36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091C33u); } /* indirect call */
    }

loc_00091C36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091C46; /* je: equal / zero */

loc_00091C3A: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00091C46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091C43u); } /* indirect call */
    }

loc_00091C46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00091C50
 * Original: 0x00091C50 - 0x00091C88 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091C50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091C76; /* je: equal / zero */

loc_00091C61: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00091C66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091C63u); } /* indirect call */
    }

loc_00091C66: ;
    SET_LO8(edx, MEM8(eax + 0x3B8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_00091C76: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0x3B8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00091C90
 * Original: 0x00091C90 - 0x00091D5F (207 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091C90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115B) = 0;
    ecx = MEM32(esi + 0x20);
    MEM8(ecx + 0x115C) = 0;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 0x1128);
    eax = MEM32(edx + 0x1C0);
    SET_LO8(edx, MEM8(eax + 0x47));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091D54; /* je: equal / zero */

loc_00091CC3: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091CF1; /* je: equal / zero */

loc_00091CCA: ;
    ecx = MEM32(ecx + 0x1150);
    PUSH32(esp, 0x6A2AC0A2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00091CDBu); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_00091CDB: ;
    ecx = eax;
    PUSH32(esp, 0x00091CE2u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_00091CE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091CF1; /* je: equal / zero */

loc_00091CE6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B274);
    goto loc_00091CFA;

loc_00091CF1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);

loc_00091CFA: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x00091D02u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00091D02: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x306CA4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x00091D19u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00091D19: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091D2D; /* je: equal / zero */

loc_00091D26: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00091D2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091D28u); } /* indirect call */
    }

loc_00091D2B: ;
    goto loc_00091D2F;

loc_00091D2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00091D2F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00091D47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091D41u); } /* indirect call */
    }

loc_00091D47: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00091D52u); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_00091D52: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00091D54: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00091D5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091D5Au); } /* indirect call */
    }

loc_00091D5D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00091D60
 * Original: 0x00091D60 - 0x00091DC1 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091D60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115C) = 1;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091D8B; /* je: equal / zero */

loc_00091D76: ;
    edx = MEM32(ecx + 0x1128);
    _fa = (uint32_t)(MEM16(edx + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x1CC), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00091DA0; /* jle: less or equal (signed <=) */

loc_00091D86: ;
    PUSH32(esp, 0x00091D8Bu); RECOMP_ABI_CALL(0x000F3BA0u, sub_000F3BA0); /* call 0x000F3BA0 */

loc_00091D8B: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x29);
    PUSH32(esp, 0x41EFC28F);
    ecx = esi + 0x68;
    PUSH32(esp, 0x00091D9Eu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00091D9E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00091DA0: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091D9E; /* je: equal / zero */

loc_00091DAD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00091DB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091DAFu); } /* indirect call */
    }

loc_00091DB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091D9E; /* je: equal / zero */

loc_00091DB6: ;
    edx = MEM32(eax);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x80)); return; /* indirect tail jmp */

}

/**
 * sub_00091DD0
 * Original: 0x00091DD0 - 0x00091E64 (148 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091DD0: ;
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
    PUSH32(esp, 0x00091DFAu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00091DFA: ;
    ecx = esi + 0x30;
    MEM32(esi) = 0x30B298;
    MEM32(edi) = 0x30B280;
    PUSH32(esp, 0x00091E0Eu); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_00091E0E: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x00091E16u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_00091E16: ;
    ecx = esi + 0x68;
    PUSH32(esp, 0x00091E1Eu); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_00091E1E: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00091E2Du); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00091E2D: ;
    PUSH32(esp, 0x30B17C);
    ecx = ebp;
    PUSH32(esp, 0x00091E39u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00091E39: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00091E3Fu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00091E3F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x48) = LO8(ebx);
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00091E70
 * Original: 0x00091E70 - 0x00091EC8 (88 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x68;
    MEM32(esi) = 0x30B298;
    MEM32(edi) = 0x30B280;
    PUSH32(esp, 0x00091E8Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_00091E8B: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x00091E93u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_00091E93: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x00091E9Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_00091E9B: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x00091EADu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00091EAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x00091EB8u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00091EB8: ;
    ecx = edi;
    PUSH32(esp, 0x00091EBFu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00091EBF: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00091ED0
 * Original: 0x00091ED0 - 0x00091F1E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091ED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x1150);
    SET_LO8(ebx, MEM8(esi + 0x48));
    PUSH32(esp, 0x6A2AC0A2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00091EEBu); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_00091EEB: ;
    ecx = eax;
    PUSH32(esp, 0x00091EF2u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_00091EF2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0xFFFFFFFFu);
    if (TEST_Z(_fa, _fb)) goto loc_00091F0F; /* je: equal / zero */

loc_00091F00: ;
    PUSH32(esp, 0x30B1C8);
    PUSH32(esp, 0x00091F0Au); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00091F0A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00091F0F: ;
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x00091F19u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00091F19: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00091F20
 * Original: 0x00091F20 - 0x00091F77 (87 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091F20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x1154);
    SET_LO8(ebx, MEM8(esi + 0x48));
    PUSH32(esp, 0x6A2AC0A2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00091F3Bu); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_00091F3B: ;
    ecx = eax;
    PUSH32(esp, 0x00091F42u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_00091F42: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    if (TEST_Z(_fa, _fb)) goto loc_00091F63; /* je: equal / zero */

loc_00091F4F: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x30B1C8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x00091F60u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00091F60: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00091F63: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00091F74u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00091F74: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00091F80
 * Original: 0x00091F80 - 0x000920BA (314 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091F80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091F98; /* je: equal / zero */

loc_00091F91: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00091F96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00091F93u); } /* indirect call */
    }

loc_00091F96: ;
    goto loc_00091F9A;

loc_00091F98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00091F9A: ;
    eax = MEM32(eax + 0x1C0);
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091FBF; /* jne: not equal / not zero */

loc_00091FAA: ;
    edx = eax;
    edx = edx >> 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091FBF; /* jne: not equal / not zero */

loc_00091FB4: ;
    eax = eax >> 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091FBF; /* jne: not equal / not zero */

loc_00091FBB: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00091FC1;

loc_00091FBF: ;
    SET_LO8(ebx, 1);

loc_00091FC1: ;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x1154);
    PUSH32(esp, 0x7A3A16FA);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00091FD5u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_00091FD5: ;
    ecx = eax;
    PUSH32(esp, 0x00091FDCu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_00091FDC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092018; /* jne: not equal / not zero */

loc_00091FE0: ;
    PUSH32(esp, 0x3C23D70A);
    ecx = esi;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00091FEEu); RECOMP_ABI_CALL(0x00091ED0u, sub_00091ED0); /* call 0x00091ED0 */

loc_00091FEE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009200F; /* je: equal / zero */

loc_00091FF2: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x304900);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x0009200Cu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_0009200C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009200F: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00091F20(); return; /* tail jmp 0x00091F20 */

loc_00092018: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092049; /* je: equal / zero */

loc_0009201F: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0x1150);
    PUSH32(esp, 0x6A2AC0A2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092033u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_00092033: ;
    ecx = eax;
    PUSH32(esp, 0x0009203Au); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_0009203A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092049; /* je: equal / zero */

loc_0009203E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B2BC);
    goto loc_00092052;

loc_00092049: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B2A8);

loc_00092052: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x0009205Au); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_0009205A: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009209D; /* je: equal / zero */

loc_00092061: ;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x1154);
    PUSH32(esp, 0x6A2AC0A2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092075u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_00092075: ;
    ecx = eax;
    PUSH32(esp, 0x0009207Cu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_0009207C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009209D; /* je: equal / zero */

loc_00092080: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B2BC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x0009209Au); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_0009209A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0009209D: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B2A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000920B7u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000920B7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000920C0
 * Original: 0x000920C0 - 0x00092128 (104 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000920C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000920C0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092107; /* jne: not equal / not zero */

loc_000920C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x000920D3u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000920D3: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000920F9; /* je: equal / zero */

loc_000920DE: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000920E6u); RECOMP_ABI_CALL(0x00091DD0u, sub_00091DD0); /* call 0x00091DD0 */

loc_000920E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000920F9; /* je: equal / zero */

loc_000920EA: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000920F5u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000920F5: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000920F9: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092103u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00092103: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00092107: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092125; /* jne: not equal / not zero */

loc_0009210C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00092119u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00092119: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092125; /* je: equal / zero */

loc_0009211D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00092125u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092123u); } /* indirect call */
    }

loc_00092125: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00092130
 * Original: 0x00092130 - 0x00092151 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092130: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x20);
    MEM8(eax + 0x115B) = 0;
    SET_LO8(edx, MEM8(ecx + 0x48));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax + 0x115C) = LO8(edx);
    g_seh_ebp = ebp; sub_00091F80(); return; /* tail jmp 0x00091F80 */

}

/**
 * sub_00092160
 * Original: 0x00092160 - 0x0009217A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092160: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x48));
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edx + 0x115C) = LO8(eax);
    g_seh_ebp = ebp; sub_00091F80(); return; /* tail jmp 0x00091F80 */

}

/**
 * sub_00092180
 * Original: 0x00092180 - 0x000921E7 (103 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115C) = 0;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + 0x1150);
    SET_LO8(ebx, MEM8(esi + 0x48));
    PUSH32(esp, 0x6A2AC0A2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000921A7u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000921A7: ;
    ecx = eax;
    PUSH32(esp, 0x000921AEu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000921AE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0xFFFFFFFFu);
    if (TEST_Z(_fa, _fb)) goto loc_000921C3; /* je: equal / zero */

loc_000921BC: ;
    PUSH32(esp, 0x30B1C8);
    goto loc_000921C8;

loc_000921C3: ;
    PUSH32(esp, 0x30B208);

loc_000921C8: ;
    PUSH32(esp, 0x000921CDu); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000921CD: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B2D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000921E4u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000921E4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000921F0
 * Original: 0x000921F0 - 0x0009225B (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000921F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000921F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115C) = 0;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + 0x1150);
    SET_LO8(ebx, MEM8(esi + 0x48));
    PUSH32(esp, 0x6A2AC0A2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092217u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_00092217: ;
    ecx = eax;
    PUSH32(esp, 0x0009221Eu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_0009221E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x3C23D70A);
    PUSH32(esp, 0xFFFFFFFFu);
    if (TEST_Z(_fa, _fb)) goto loc_00092233; /* je: equal / zero */

loc_0009222C: ;
    PUSH32(esp, 0x30B1C8);
    goto loc_00092238;

loc_00092233: ;
    PUSH32(esp, 0x30B208);

loc_00092238: ;
    PUSH32(esp, 0x0009223Du); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_0009223D: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B2DC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00092254u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00092254: ;
    MEM8(esi + 0x48) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00092260
 * Original: 0x00092260 - 0x00092268 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092260: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00092270(); return; /* tail jmp 0x00092270 */

}

/**
 * sub_00092270
 * Original: 0x00092270 - 0x0009228E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092270: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00092278u); RECOMP_ABI_CALL(0x00091E70u, sub_00091E70); /* call 0x00091E70 */

loc_00092278: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092288; /* je: equal / zero */

loc_0009227F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00092285u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00092285: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00092288: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092290
 * Original: 0x00092290 - 0x00092291 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092290(void)
{

loc_00092290: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000922A0
 * Original: 0x000922A0 - 0x000922A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000922A0(void)
{

loc_000922A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000922B0
 * Original: 0x000922B0 - 0x000922BA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000922B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000922B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000922B6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000922B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000922C0
 * Original: 0x000922C0 - 0x0009231D (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000922C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000922C0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000922CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000922C9u); } /* indirect call */
    }

loc_000922CC: ;
    esi = eax;
    PUSH32(esp, 0x923C763Fu);
    ecx = esi;
    PUSH32(esp, 0x000922DAu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000922DA: ;
    PUSH32(esp, 0x4AB6415);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x000922E8u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000922E8: ;
    esi = MEM32(0x51D65C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000922FBu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000922FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00092306u); RECOMP_ABI_CALL(0x0015A320u, sub_0015A320); /* call 0x0015A320 */

loc_00092306: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0009230Eu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0009230E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00092319u); RECOMP_ABI_CALL(0x0015A320u, sub_0015A320); /* call 0x0015A320 */

loc_00092319: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00092320
 * Original: 0x00092320 - 0x00092383 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092320: ;
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
    PUSH32(esp, 0x0009234Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009234B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00092366u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00092366: ;
    PUSH32(esp, 0x30B34C);
    ecx = ebx;
    PUSH32(esp, 0x00092372u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00092372: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00092378u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00092378: ;
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
 * sub_00092390
 * Original: 0x00092390 - 0x000923C4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092390: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000923A9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000923A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000923B4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000923B4: ;
    ecx = edi;
    PUSH32(esp, 0x000923BBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000923BB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000923D0
 * Original: 0x000923D0 - 0x00092435 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000923D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000923D0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092414; /* jne: not equal / not zero */

loc_000923D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x000923E0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000923E0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092406; /* je: equal / zero */

loc_000923EB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000923F3u); RECOMP_ABI_CALL(0x00092320u, sub_00092320); /* call 0x00092320 */

loc_000923F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092406; /* je: equal / zero */

loc_000923F7: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092402u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00092402: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00092406: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092410u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00092410: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00092414: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092432; /* jne: not equal / not zero */

loc_00092419: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00092426u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00092426: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092432; /* je: equal / zero */

loc_0009242A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00092432u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092430u); } /* indirect call */
    }

loc_00092432: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00092440
 * Original: 0x00092440 - 0x00092441 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092440(void)
{

loc_00092440: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00092450
 * Original: 0x00092450 - 0x00092461 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092450(void)
{

loc_00092450: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00092470
 * Original: 0x00092470 - 0x000924A5 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092470(void)
{

loc_00092470: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092484u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00092484: ;
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
    PUSH32(esp, 0x000924A1u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000924A1: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000924B0
 * Original: 0x000924B0 - 0x000924F3 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000924B0(void)
{

loc_000924B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    SET_LO8(eax, 1);
    MEM8(ecx + 0x115B) = LO8(eax);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(edx + 0x115C) = LO8(eax);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x000924DAu); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000924DA: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000924F1u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000924F1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00092500
 * Original: 0x00092500 - 0x00092543 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092500(void)
{

loc_00092500: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    SET_LO8(eax, 1);
    MEM8(ecx + 0x115B) = LO8(eax);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(edx + 0x115C) = LO8(eax);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x0009252Au); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_0009252A: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x304904);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092541u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00092541: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00092550
 * Original: 0x00092550 - 0x00092593 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092550(void)
{

loc_00092550: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115B) = 0;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(ecx + 0x115C) = 0;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x0009257Au); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_0009257A: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B2D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00092591u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00092591: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000925A0
 * Original: 0x000925A0 - 0x000925CF (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000925A0(void)
{

loc_000925A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x000925B6u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000925B6: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B2DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000925CDu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000925CD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000925D0
 * Original: 0x000925D0 - 0x000925E5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000925D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000925D0: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000925E2; /* je: equal / zero */

loc_000925DD: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x6C)); return; /* indirect tail jmp */

loc_000925E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000925F0
 * Original: 0x000925F0 - 0x00092618 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000925F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000925F0: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092615; /* je: equal / zero */

loc_000925FD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00092602u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000925FFu); } /* indirect call */
    }

loc_00092602: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092615; /* je: equal / zero */

loc_00092606: ;
    edx = MEM32(esp + 4);
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00092615u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092612u); } /* indirect call */
    }

loc_00092615: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092620
 * Original: 0x00092620 - 0x000926CE (174 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092620: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092639; /* je: equal / zero */

loc_00092632: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00092637u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092634u); } /* indirect call */
    }

loc_00092637: ;
    goto loc_0009263B;

loc_00092639: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009263B: ;
    eax = MEM32(eax + 0x1C0);
    ecx = eax;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092655; /* jne: not equal / not zero */

loc_0009264B: ;
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009267F; /* je: equal / zero */

loc_00092655: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x00092666u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00092666: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x304904);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009267Du); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_0009267D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009267F: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    eax = eax >> 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    if (TEST_Z(_fa, _fb)) goto loc_000926B0; /* je: equal / zero */

loc_00092692: ;
    PUSH32(esp, 0x00092697u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00092697: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x304904);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000926AEu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000926AE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000926B0: ;
    PUSH32(esp, 0x000926B5u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000926B5: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x000926CCu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000926CC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000926D0
 * Original: 0x000926D0 - 0x000926F7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000926D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000926D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000926F6; /* je: equal / zero */

loc_000926E1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000926E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000926E3u); } /* indirect call */
    }

loc_000926E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000926F6; /* je: equal / zero */

loc_000926EA: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000926F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000926F3u); } /* indirect call */
    }

loc_000926F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00092700
 * Original: 0x00092700 - 0x00092727 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092700: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092726; /* je: equal / zero */

loc_00092711: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00092716u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092713u); } /* indirect call */
    }

loc_00092716: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092726; /* je: equal / zero */

loc_0009271A: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00092726u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092723u); } /* indirect call */
    }

loc_00092726: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00092730
 * Original: 0x00092730 - 0x00092793 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092730: ;
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
    PUSH32(esp, 0x0009275Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009275B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00092776u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00092776: ;
    PUSH32(esp, 0x30B510);
    ecx = ebx;
    PUSH32(esp, 0x00092782u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00092782: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00092788u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00092788: ;
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
 * sub_000927A0
 * Original: 0x000927A0 - 0x000927D4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000927A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000927A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000927B9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000927B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000927C4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000927C4: ;
    ecx = edi;
    PUSH32(esp, 0x000927CBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000927CB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000927E0
 * Original: 0x000927E0 - 0x00092A69 (649 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000927E0(void)
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

loc_000927E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x174;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3888C0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00092A62; /* jne: not equal / not zero */

loc_00092807: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009281D; /* je: equal / zero */

loc_00092814: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00092819u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092816u); } /* indirect call */
    }

loc_00092819: ;
    edi = eax;
    goto loc_0009281F;

loc_0009281D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009281F: ;
    esi = MEM32(esi + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x24) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00092A62; /* je: equal / zero */

loc_0009282E: ;
    eax = MEM32(esi + 0x1128);
    _fa = (uint32_t)(MEM16(eax + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CC), 0 (16-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00092A62; /* jle: less or equal (signed <=) */

loc_00092846: ;
    eax = MEM32(edi);
    ecx = edi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x0009284Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009284Cu); } /* indirect call */
    }

loc_0009284F: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0009285Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092857u); } /* indirect call */
    }

loc_0009285A: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000928A5; /* jbe: below or equal (unsigned <=) */

loc_00092868: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x1C0);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00092897; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00092891: ;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_00092897: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000928A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000928A0u); } /* indirect call */
    }

loc_000928A3: ;
    SET_LO8(ebx, 1);

loc_000928A5: ;
    ecx = MEM32(0x3E8CF0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00092A2A; /* je: equal / zero */

loc_000928BC: ;
    /* nop */

loc_000928C0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x000928C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000928C2u); } /* indirect call */
    }

loc_000928C8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092A0C; /* je: equal / zero */

loc_000928D2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x000928DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000928D6u); } /* indirect call */
    }

loc_000928DC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    edx = MEM32(esi + 0xB0);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = esi + 0xB0;
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00092914u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092911u); } /* indirect call */
    }

loc_00092914: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x34); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x38); /* subss */
    xmm3 = XMM_SCALAR(MEMF(0x376500)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00092A0C; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_0009296D: ;
    xmm3.f[0] = xmm3.f[0] + MEMF(0x30075C); /* addss */
    edx = MEM32(0x376504);
    PUSH32(esp, ecx);
    ecx = MEM32(0x376508);
    MEMF(esp) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x60;
    MEM32(esp + 0x60) = 0x30B534;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009299Fu); RECOMP_ABI_CALL(0x00180810u, sub_00180810); /* call 0x00180810 */

loc_0009299F: ;
    ecx = MEM32(esp + 0x14);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000929B0u); RECOMP_ABI_CALL(0x0011E500u, sub_0011E500); /* call 0x0011E500 */

loc_000929B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092A03; /* je: equal / zero */

loc_000929B4: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x1C0);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x28;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000929D7u); RECOMP_ABI_CALL(0x000172B0u, sub_000172B0); /* call 0x000172B0 */

loc_000929D7: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000929E5u); RECOMP_ABI_CALL(0x000172A0u, sub_000172A0); /* call 0x000172A0 */

loc_000929E5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000929ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000929E9u); } /* indirect call */
    }

loc_000929EC: ;
    edx = MEM32(eax);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000929F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000929F5u); } /* indirect call */
    }

loc_000929F8: ;
    ecx = esp + 0x28;
    SET_LO8(ebx, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00092A03u); RECOMP_ABI_CALL(0x000172D0u, sub_000172D0); /* call 0x000172D0 */

loc_00092A03: ;
    ecx = esp + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00092A0Cu); RECOMP_ABI_CALL(0x0017FF60u, sub_0017FF60); /* call 0x0017FF60 */

loc_00092A0C: ;
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00092A15u); RECOMP_ABI_CALL(0x001313C0u, sub_001313C0); /* call 0x001313C0 */

loc_00092A15: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000928C0; /* jne: not equal / not zero */

loc_00092A26: ;
    esi = MEM32(esp + 0x24);

loc_00092A2A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092A62; /* je: equal / zero */

loc_00092A2E: ;
    ecx = MEM32(esp + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00092A37u); RECOMP_ABI_CALL(0x00187F60u, sub_00187F60); /* call 0x00187F60 */

loc_00092A37: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B210);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00092A47u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00092A47: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B210);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00092A62u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00092A62: ;
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
 * sub_00092A70
 * Original: 0x00092A70 - 0x00092AD5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092A70: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092AB4; /* jne: not equal / not zero */

loc_00092A78: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x00092A80u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00092A80: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092AA6; /* je: equal / zero */

loc_00092A8B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00092A93u); RECOMP_ABI_CALL(0x00092730u, sub_00092730); /* call 0x00092730 */

loc_00092A93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092AA6; /* je: equal / zero */

loc_00092A97: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092AA2u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00092AA2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00092AA6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092AB0u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00092AB0: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00092AB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092AD2; /* jne: not equal / not zero */

loc_00092AB9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00092AC6u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00092AC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092AD2; /* je: equal / zero */

loc_00092ACA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00092AD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092AD0u); } /* indirect call */
    }

loc_00092AD2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00092AE0
 * Original: 0x00092AE0 - 0x00092B0C (44 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092AE0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x20);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 0x115B) = LO8(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    MEM8(esi + 0x115C) = LO8(edx);
    _fa = (uint32_t)(MEM32(eax + 0x1120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D3C2D50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1120), 0x6D3C2D50 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00092B0B; /* jne: not equal / not zero */

loc_00092B06: ;
    g_seh_ebp = ebp; sub_000927E0(); return; /* tail jmp 0x000927E0 */

loc_00092B0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00092B10
 * Original: 0x00092B10 - 0x00092B2E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00092B18u); RECOMP_ABI_CALL(0x0017FF60u, sub_0017FF60); /* call 0x0017FF60 */

loc_00092B18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092B28; /* je: equal / zero */

loc_00092B1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00092B25u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00092B25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00092B28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092B30
 * Original: 0x00092B30 - 0x00092B61 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092B30: ;
    eax = MEM32(0x373390);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x373390;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00092B43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092B40u); } /* indirect call */
    }

loc_00092B43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092B5E; /* je: equal / zero */

loc_00092B47: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00092B4Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_00092B4F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00092B5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092B57u); } /* indirect call */
    }

loc_00092B5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092B47; /* jne: not equal / not zero */

loc_00092B5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00092B70
 * Original: 0x00092B70 - 0x00092BA1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092B70: ;
    eax = MEM32(0x3733E4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x3733E4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00092B83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092B80u); } /* indirect call */
    }

loc_00092B83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092B9E; /* je: equal / zero */

loc_00092B87: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00092B8Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_00092B8F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00092B9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092B97u); } /* indirect call */
    }

loc_00092B9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092B87; /* jne: not equal / not zero */

loc_00092B9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00092BB0
 * Original: 0x00092BB0 - 0x00092BC7 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092BB0(void)
{

loc_00092BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    ecx = esi + 0x30;
    PUSH32(esp, 0x00092BBCu); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_00092BBC: ;
    PUSH32(esp, esi);
    ecx = esi + 0x5C;
    PUSH32(esp, 0x00092BC5u); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_00092BC5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00092BD0
 * Original: 0x00092BD0 - 0x00092BD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092BD0(void)
{

loc_00092BD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00092BE0
 * Original: 0x00092BE0 - 0x00092BEA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092BE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092BE6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00092BE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00092BF0
 * Original: 0x00092BF0 - 0x00092C2D (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092BF0(void)
{

loc_00092BF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00092BF9u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00092BF9: ;
    eax = MEM32(esp + 0xC);
    edi = esi + 0x30;
    ecx = edi;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi) = 0x30B5C8;
    PUSH32(esp, 0x00092C10u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00092C10: ;
    MEM32(edi) = 0x30B568;
    edi = esi + 0x5C;
    ecx = edi;
    PUSH32(esp, 0x00092C20u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00092C20: ;
    MEM32(edi) = 0x30B598;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00092C30
 * Original: 0x00092C30 - 0x00092C71 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x3C39AC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092C62; /* jne: not equal / not zero */

loc_00092C42: ;
    ecx = MEM32(0x3C39AC);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3087B0);
    MEM32(0x3C39AC) = ecx;
    PUSH32(esp, 0x00092C5Au); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00092C5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C39A8) = eax;

loc_00092C62: ;
    eax = MEM32(0x3C39A8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00092C6Fu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_00092C6F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00092C80
 * Original: 0x00092C80 - 0x00092CC3 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x3C39B4));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092CB2; /* jne: not equal / not zero */

loc_00092C92: ;
    ecx = MEM32(0x3C39B4);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x308774);
    MEM32(0x3C39B4) = ecx;
    PUSH32(esp, 0x00092CAAu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00092CAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C39B0) = eax;

loc_00092CB2: ;
    eax = MEM32(0x3C39B0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00092CBFu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_00092CBF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00092CD0
 * Original: 0x00092CD0 - 0x00092D77 (167 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092CD0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092D56; /* jne: not equal / not zero */

loc_00092CD8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x00092CE4u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00092CE4: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092D02; /* je: equal / zero */

loc_00092CEF: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00092CFEu); RECOMP_ABI_CALL(0x00092BF0u, sub_00092BF0); /* call 0x00092BF0 */

loc_00092CFE: ;
    esi = eax;
    goto loc_00092D04;

loc_00092D02: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00092D04: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x00092D0Cu); RECOMP_ABI_CALL(0x00039DA0u, sub_00039DA0); /* call 0x00039DA0 */

loc_00092D0C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00092D14u); RECOMP_ABI_CALL(0x0014C930u, sub_0014C930); /* call 0x0014C930 */

loc_00092D14: ;
    _fa = (uint32_t)(MEM8(0x3C39AC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3C39AC), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092D3C; /* jne: not equal / not zero */

loc_00092D1D: ;
    eax = MEM32(0x3C39AC);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3087B0);
    MEM32(0x3C39AC) = eax;
    PUSH32(esp, 0x00092D34u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00092D34: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C39A8) = eax;

loc_00092D3C: ;
    eax = MEM32(0x3C39A8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00092D49u); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_00092D49: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00092D51u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00092D51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00092D56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092D74; /* jne: not equal / not zero */

loc_00092D5B: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00092D68u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00092D68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092D74; /* je: equal / zero */

loc_00092D6C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00092D74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092D72u); } /* indirect call */
    }

loc_00092D74: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00092D80
 * Original: 0x00092D80 - 0x00092DB8 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00092D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092D8Au); } /* indirect call */
    }

loc_00092D8D: ;
    edx = MEM32(esi);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12CBEE6A);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00092DA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092D9Du); } /* indirect call */
    }

loc_00092DA0: ;
    ecx = eax;
    PUSH32(esp, 0x00092DA7u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00092DA7: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x124)); return; /* indirect tail jmp */

}

/**
 * sub_00092DC0
 * Original: 0x00092DC0 - 0x00092DF8 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00092DCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092DCAu); } /* indirect call */
    }

loc_00092DCD: ;
    edx = MEM32(esi);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12CBEE6A);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00092DE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092DDDu); } /* indirect call */
    }

loc_00092DE0: ;
    ecx = eax;
    PUSH32(esp, 0x00092DE7u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00092DE7: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x128)); return; /* indirect tail jmp */

}

/**
 * sub_00092E00
 * Original: 0x00092E00 - 0x00092E31 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092E00: ;
    eax = MEM32(0x373378);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x373378;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00092E13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092E10u); } /* indirect call */
    }

loc_00092E13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092E2E; /* je: equal / zero */

loc_00092E17: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00092E1Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_00092E1F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00092E2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00092E27u); } /* indirect call */
    }

loc_00092E2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00092E17; /* jne: not equal / not zero */

loc_00092E2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00092E40
 * Original: 0x00092E40 - 0x00092E6D (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5C;
    MEM32(ecx) = 0x307EF0;
    PUSH32(esp, 0x00092E51u); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_00092E51: ;
    ecx = esi + 0x30;
    MEM32(ecx) = 0x307EF0;
    PUSH32(esp, 0x00092E5Fu); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_00092E5F: ;
    MEM32(esi) = 0x307EF0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014C500(); return; /* tail jmp 0x0014C500 */

}

/**
 * sub_00092E70
 * Original: 0x00092E70 - 0x00092EA6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092E70: ;
    SET_LO8(ecx, MEM8(0x3C39BC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092EA0; /* jne: not equal / not zero */

loc_00092E7F: ;
    ecx = MEM32(0x3C39BC);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x30B604);
    MEM32(0x3C39BC) = ecx;
    PUSH32(esp, 0x00092E97u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00092E97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C39B8) = eax;
    esp += 4; return; /* ret */

loc_00092EA0: ;
    eax = MEM32(0x3C39B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00092EB0
 * Original: 0x00092EB0 - 0x00092EE6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092EB0: ;
    SET_LO8(ecx, MEM8(0x3C39C4));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092EE0; /* jne: not equal / not zero */

loc_00092EBF: ;
    ecx = MEM32(0x3C39C4);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3087B0);
    MEM32(0x3C39C4) = ecx;
    PUSH32(esp, 0x00092ED7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00092ED7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C39C0) = eax;
    esp += 4; return; /* ret */

loc_00092EE0: ;
    eax = MEM32(0x3C39C0);
    esp += 4; return; /* ret */

}

/**
 * sub_00092EF0
 * Original: 0x00092EF0 - 0x00092F26 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092EF0: ;
    SET_LO8(ecx, MEM8(0x3C39CC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092F20; /* jne: not equal / not zero */

loc_00092EFF: ;
    ecx = MEM32(0x3C39CC);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x308774);
    MEM32(0x3C39CC) = ecx;
    PUSH32(esp, 0x00092F17u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00092F17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C39C8) = eax;
    esp += 4; return; /* ret */

loc_00092F20: ;
    eax = MEM32(0x3C39C8);
    esp += 4; return; /* ret */

}

/**
 * sub_00092F30
 * Original: 0x00092F30 - 0x00092F50 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092F30(void)
{

loc_00092F30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B964);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    MEM8(eax + 0x2C) = 1;
    PUSH32(esp, 0x00092F4Fu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00092F4F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00092F50
 * Original: 0x00092F50 - 0x00092F70 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092F50(void)
{

loc_00092F50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B970);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x24);
    MEM8(eax + 0x2C) = 0;
    PUSH32(esp, 0x00092F6Fu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00092F6F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00092F70
 * Original: 0x00092F70 - 0x00092F80 (16 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092F70(void)
{

loc_00092F70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00092F80
 * Original: 0x00092F80 - 0x00092F91 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092F80(void)
{

loc_00092F80: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00092FA0
 * Original: 0x00092FA0 - 0x00092FD5 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092FA0(void)
{

loc_00092FA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00092FB4u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00092FB4: ;
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
    PUSH32(esp, 0x00092FD1u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00092FD1: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00092FE0
 * Original: 0x00092FE0 - 0x00092FF1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00092FE0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x3785A5) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093000
 * Original: 0x00093000 - 0x0009304F (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093000(void)
{

loc_00093000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(eax + 0x115C) = 0;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x30B2D4);
    PUSH32(esp, 0x00093020u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00093020: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B2D4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x00093037u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00093037: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30B978);
    PUSH32(esp, 0x0009304Du); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_0009304D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093050
 * Original: 0x00093050 - 0x000930A6 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093050(void)
{

loc_00093050: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(eax + 0x115C) = 0;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x30B2DC);
    PUSH32(esp, 0x00093070u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00093070: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B2DC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x00093087u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00093087: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30B988);
    PUSH32(esp, 0x0009309Du); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_0009309D: ;
    MEM8(0x3785A5) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000930B0
 * Original: 0x000930B0 - 0x000930D8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000930B0(void)
{

loc_000930B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B994);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000930CCu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000930CC: ;
    ecx = MEM32(esi + 0x20);
    MEM8(ecx + 0x115C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000930E0
 * Original: 0x000930E0 - 0x000930F5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000930E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000930E0: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000930F2; /* je: equal / zero */

loc_000930ED: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x6C)); return; /* indirect tail jmp */

loc_000930F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00093100
 * Original: 0x00093100 - 0x00093128 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093100: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093125; /* je: equal / zero */

loc_0009310D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00093112u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009310Fu); } /* indirect call */
    }

loc_00093112: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093125; /* je: equal / zero */

loc_00093116: ;
    edx = MEM32(esp + 4);
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00093125u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093122u); } /* indirect call */
    }

loc_00093125: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093130
 * Original: 0x00093130 - 0x000931C7 (151 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093130: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093147; /* je: equal / zero */

loc_00093140: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00093145u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093142u); } /* indirect call */
    }

loc_00093145: ;
    goto loc_00093149;

loc_00093147: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00093149: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1C2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009316B; /* je: equal / zero */

loc_00093152: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x304900);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093169u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00093169: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009316B: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000931AE; /* jne: not equal / not zero */

loc_00093172: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093186; /* je: equal / zero */

loc_0009317F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00093184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093181u); } /* indirect call */
    }

loc_00093184: ;
    goto loc_00093188;

loc_00093186: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00093188: ;
    eax = MEM32(eax + 0x1C0);
    eax = eax >> 0x1A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000931AE; /* jne: not equal / not zero */

loc_00093195: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x000931ACu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000931AC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000931AE: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30B964);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000931C5u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000931C5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000931D0
 * Original: 0x000931D0 - 0x000931EE (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000931D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000931D0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x20);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 0x2C) = LO8(edx);
    MEM8(eax + 0x115B) = LO8(edx);
    MEM8(eax + 0x115C) = 1;
    g_seh_ebp = ebp; sub_00093130(); return; /* tail jmp 0x00093130 */

}

/**
 * sub_000931F0
 * Original: 0x000931F0 - 0x00093203 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000931F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000931F0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x20);
    MEM8(eax + 0x115C) = 1;
    g_seh_ebp = ebp; sub_00093130(); return; /* tail jmp 0x00093130 */

}

/**
 * sub_00093210
 * Original: 0x00093210 - 0x0009323E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093210: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093236; /* je: equal / zero */

loc_00093221: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00093226u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093223u); } /* indirect call */
    }

loc_00093226: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093236; /* je: equal / zero */

loc_0009322A: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00093236u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093233u); } /* indirect call */
    }

loc_00093236: ;
    MEM8(0x3785A5) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00093240
 * Original: 0x00093240 - 0x00093267 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093240: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093266; /* je: equal / zero */

loc_00093251: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00093256u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093253u); } /* indirect call */
    }

loc_00093256: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093266; /* je: equal / zero */

loc_0009325A: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00093266u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093263u); } /* indirect call */
    }

loc_00093266: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00093270
 * Original: 0x00093270 - 0x000932F8 (136 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093270: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x24);
    SET_LO8(eax, 1);
    MEM8(ecx + 0x1130) = LO8(eax);
    edx = MEM32(esi + 0x20);
    MEM8(edx + 0x115A) = LO8(eax);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009329D; /* je: equal / zero */

loc_00093296: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0009329Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093298u); } /* indirect call */
    }

loc_0009329B: ;
    goto loc_0009329F;

loc_0009329D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009329F: ;
    eax = MEM32(eax + 0x3F8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000932E0; /* je: equal / zero */

loc_000932AA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000932C8; /* je: equal / zero */

loc_000932AD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000932F6; /* jne: not equal / not zero */

loc_000932B0: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x18);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3030BC);
    PUSH32(esp, 0x000932C6u); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_000932C6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000932C8: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x18);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30B248);
    PUSH32(esp, 0x000932DEu); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_000932DE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000932E0: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x18);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30B234);
    PUSH32(esp, 0x000932F6u); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_000932F6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093300
 * Original: 0x00093300 - 0x0009333D (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093300: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093319; /* je: equal / zero */

loc_00093312: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00093317u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093314u); } /* indirect call */
    }

loc_00093317: ;
    goto loc_0009331B;

loc_00093319: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009331B: ;
    ecx = MEM32(esi + 0x24);
    MEM8(ecx + 0x1130) = 0;
    edx = MEM32(esi + 0x20);
    ecx = eax + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(edx + 0x115A) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0009333Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093338u); } /* indirect call */
    }

loc_0009333B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093340
 * Original: 0x00093340 - 0x00093370 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093340: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093362; /* je: equal / zero */

loc_00093351: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00093356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093353u); } /* indirect call */
    }

loc_00093356: ;
    SET_LO8(eax, MEM8(eax + 0x1C2));
    SET_LO8(eax, ~LO8(eax));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_00093362: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(eax + 0x1C2));
    SET_LO8(eax, ~LO8(eax));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00093370
 * Original: 0x00093370 - 0x000933DC (108 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093370: ;
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
    PUSH32(esp, 0x0009339Au); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_0009339A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000933B5u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000933B5: ;
    PUSH32(esp, 0x30B920);
    ecx = ebp;
    PUSH32(esp, 0x000933C1u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000933C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000933C7u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000933C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x2C) = LO8(ebx);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000933E0
 * Original: 0x000933E0 - 0x00093414 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000933E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000933E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000933F9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000933F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x00093404u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00093404: ;
    ecx = edi;
    PUSH32(esp, 0x0009340Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0009340B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093420
 * Original: 0x00093420 - 0x00093485 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093420: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093464; /* jne: not equal / not zero */

loc_00093428: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x00093430u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00093430: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093456; /* je: equal / zero */

loc_0009343B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00093443u); RECOMP_ABI_CALL(0x00093370u, sub_00093370); /* call 0x00093370 */

loc_00093443: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093456; /* je: equal / zero */

loc_00093447: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093452u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00093452: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00093456: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093460u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00093460: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00093464: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093482; /* jne: not equal / not zero */

loc_00093469: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00093476u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00093476: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093482; /* je: equal / zero */

loc_0009347A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00093482u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093480u); } /* indirect call */
    }

loc_00093482: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00093490
 * Original: 0x00093490 - 0x00093491 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093490(void)
{

loc_00093490: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000934A0
 * Original: 0x000934A0 - 0x000934A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000934A0(void)
{

loc_000934A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000934B0
 * Original: 0x000934B0 - 0x00093591 (225 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000934B0(void)
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

loc_000934B0: ;
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
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x55E59C6);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000934C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000934C4u); } /* indirect call */
    }

loc_000934C7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000934CEu); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_000934CE: ;
    edx = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000934DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000934D9u); } /* indirect call */
    }

loc_000934DC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000934E3u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_000934E3: ;
    eax = edi;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00093589; /* jne: not equal / not zero */

loc_000934EE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD184E98Fu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000934FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000934F7u); } /* indirect call */
    }

loc_000934FA: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093501u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00093501: ;
    edx = MEM32(esi);
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA683D919u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00093513u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093510u); } /* indirect call */
    }

loc_00093513: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009351Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0009351A: ;
    eax = MEM32(esi);
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F8A88A3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0009352Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093529u); } /* indirect call */
    }

loc_0009352C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093533u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00093533: ;
    ecx = MEM32(esp + 0x14);
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009354Du); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009354D: ;
    esi = MEM32(ebp + 8);
    edx = MEM32(esp + 0x20);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093569u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00093569: ;
    eax = MEM32(esp + 0x24);
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093583u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00093583: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00093589: ;
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
 * sub_000935A0
 * Original: 0x000935A0 - 0x00093EDC (2364 bytes, 473 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000935A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000935A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x204));
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000935B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000935B6u); } /* indirect call */
    }

loc_000935B9: ;
    edi = eax;
    PUSH32(esp, 0xAD8E6C2Cu);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000935C7u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000935C7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000935CDu); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000935CD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2B6D8924);
    ecx = edi;
    MEM32(esp + 0xCC) = eax;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
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
    PUSH32(esp, 0x000936A2u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000936A2: ;
    MEMF(esp + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x82053C34u);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000936B5u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000936B5: ;
    MEMF(esp + 0xCC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x4E16E090);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000936C8u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000936C8: ;
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(ebx);
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp + 0x194) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x198) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x19C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1B4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1B8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1BC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009377Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009377Cu); } /* indirect call */
    }

loc_0009377F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093786u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_00093786: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    MEMF(esp + 0x94) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm4.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xD4) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm6.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0009384B; /* jnp: not parity */

loc_00093816: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm3.f[0]; /* movss */

loc_0009384B: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x64)); /* fmul dword ptr [esp + 0x64] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x60)); /* fmul dword ptr [esp + 0x60] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000938B6; /* jnp: not parity */

loc_00093881: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x18); /* divss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xD0) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm6.f[0]; /* movss */

loc_000938B6: ;
    PUSH32(esp, 0x35453D16);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000938C2u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000938C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0x84) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00093ED5; /* jle: less or equal (signed <=) */

loc_000938DC: ;
    /* nop */

loc_000938E0: ;
    eax = MEM32(esp + 0xC8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000938F7u); RECOMP_ABI_CALL(0x000FE210u, sub_000FE210); /* call 0x000FE210 */

loc_000938F7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00093ED5; /* je: equal / zero */

loc_00093902: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x0009390Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093906u); } /* indirect call */
    }

loc_0009390C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00093EC8; /* je: equal / zero */

loc_00093916: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x00093920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0009391Au); } /* indirect call */
    }

loc_00093920: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093928u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_00093928: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xBE3445A1u);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093937u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00093937: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009394F; /* jne: not equal / not zero */

loc_0009393B: ;
    edx = MEM32(esi);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0009394Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093944u); } /* indirect call */
    }

loc_0009394A: ;
    goto loc_00093B06;

loc_0009394F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    MEMF(esp + 0x180) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    MEMF(esp + 0x184) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, 0xC0C90FDBu);
    MEMF(esp + 0x190) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009398Bu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009398B: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, 0xC0C90FDBu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009399Eu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_0009399E: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x128) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x12C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x130) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x134) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x13C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x140) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x144) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x148) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x150) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x154) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x158) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x15C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x178) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x17C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    ecx = esp + 0x174;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x128;
    MEMF(esp + 0x128) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x13C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x150) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x164) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x178) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093A7Au); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_00093A7A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x164) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x168) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    edx = esp + 0x164;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    ecx = esp + 0x128;
    MEMF(esp + 0x170) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093AC0u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_00093AC0: ;
    eax = esp + 0x180;
    PUSH32(esp, eax);
    ecx = esp + 0x124;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093AD4u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00093AD4: ;
    edx = MEM32(esi);
    eax = esp + 0x120;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00093AE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093AE0u); } /* indirect call */
    }

loc_00093AE6: ;
    xmm0 = XMM_MEM(esp + 0x120); /* movaps */
    XMM_STORE(esp + 0x190, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x140); /* movaps */
    XMM_STORE(esp + 0x1B0, xmm0); /* movaps */

loc_00093B06: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093B15u); RECOMP_ABI_CALL(0x000934B0u, sub_000934B0); /* call 0x000934B0 */

loc_00093B15: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0xB0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xB8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xB4)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x60); /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x50); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x70); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x64); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x68); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x54); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x58); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x74); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x78); /* addss */
    MEMF(esp + 0xB8) = xmm2.f[0]; /* movss */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x1D0, xmm1); /* movaps */
    XMM_STORE(esp + 0x1E0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    xmm1 = XMM_MEM(esi + 0x50); /* movaps */
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    ecx = esp + 0x1D4;
    XMM_STORE(esp + 0x1F4, xmm1); /* movaps */
    XMM_STORE(esp + 0x204, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093C06u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00093C06: ;
    eax = MEM32(esi);
    ecx = esp + 0x1D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x00093C18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093C12u); } /* indirect call */
    }

loc_00093C18: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093C1Fu); RECOMP_ABI_CALL(0x000FEE60u, sub_000FEE60); /* call 0x000FEE60 */

loc_00093C1F: ;
    edx = MEM32(esp + 0x8C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x8C); /* subss */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093C3Eu); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00093C3E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xD4;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0xE8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093C5Eu); RECOMP_ABI_CALL(0x00264DC0u, sub_00264DC0); /* call 0x00264DC0 */

loc_00093C5E: ;
    PUSH32(esp, 0x40C90FDB);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093C6Au); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00093C6A: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    ecx = esp + 0xE8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093C8Au); RECOMP_ABI_CALL(0x00265ED0u, sub_00265ED0); /* call 0x00265ED0 */

loc_00093C8A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x100); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    eax = MEM32(esp + 0x88);
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0xF0); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xE0)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x108); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x104); /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0xF8); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0xF4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xE8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xE4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x88); /* subss */
    PUSH32(esp, eax);
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093D57u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00093D57: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xD4)); /* fadd dword ptr [esp + 0xd4] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x4CC011A8);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093DA6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00093DA6: ;
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
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00093E84; /* jnp: not parity */

loc_00093DC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093DCFu); RECOMP_ABI_CALL(0x000E7000u, sub_000E7000); /* call 0x000E7000 */

loc_00093DCF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_00093E06; /* jg: greater (signed >) */

loc_00093DD6: ;
    if (CMP_L(_fas, _fbs)) goto loc_00093DDD; /* jl: less (signed <) */

loc_00093DD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00093E06; /* jae: above or equal (unsigned >=) */

loc_00093DDD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1B0)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1B4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1B8)); /* movss */
    goto loc_00093E2D;

loc_00093E06: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x190)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x194)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x198)); /* movss */

loc_00093E2D: ;
    PUSH32(esp, 0x8F53C0CFu);
    ecx = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093E3Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00093E3F: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093E57u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_00093E57: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF084)); /* fmul dword ptr [0x2ff084] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00093E84: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093E95u); RECOMP_ABI_CALL(0x000FEFA0u, sub_000FEFA0); /* call 0x000FEFA0 */

loc_00093E95: ;
    SET_LO8(eax, MEM8(esi + 0x248));
    ecx = MEM32(esp + 0xAC);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(esi + 0x248) = LO8(eax);
    eax = MEM32(esp + 0x84);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x84) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000938E0; /* jl: less (signed <) */

loc_00093EC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00093EC8: ;
    PUSH32(esp, 0x30BA38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00093ED2u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00093ED2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00093ED5: ;
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
 * sub_00093EE0
 * Original: 0x00093EE0 - 0x00093F43 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093EE0: ;
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
    PUSH32(esp, 0x00093F0Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00093F0B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00093F26u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00093F26: ;
    PUSH32(esp, 0x30BA1C);
    ecx = ebx;
    PUSH32(esp, 0x00093F32u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00093F32: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00093F38u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00093F38: ;
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
 * sub_00093F50
 * Original: 0x00093F50 - 0x00093F84 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x00093F69u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_00093F69: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x00093F74u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00093F74: ;
    ecx = edi;
    PUSH32(esp, 0x00093F7Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00093F7B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093F90
 * Original: 0x00093F90 - 0x00093FF5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093F90: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093FD4; /* jne: not equal / not zero */

loc_00093F98: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00093FA0u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00093FA0: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093FC6; /* je: equal / zero */

loc_00093FAB: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00093FB3u); RECOMP_ABI_CALL(0x00093EE0u, sub_00093EE0); /* call 0x00093EE0 */

loc_00093FB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093FC6; /* je: equal / zero */

loc_00093FB7: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093FC2u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00093FC2: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00093FC6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093FD0u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00093FD0: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00093FD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093FF2; /* jne: not equal / not zero */

loc_00093FD9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00093FE6u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00093FE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093FF2; /* je: equal / zero */

loc_00093FEA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00093FF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00093FF0u); } /* indirect call */
    }

loc_00093FF2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00094000
 * Original: 0x00094000 - 0x00094040 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    eax = esp + 4;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009403Au); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0009403A: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094040
 * Original: 0x00094040 - 0x00094081 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094040: ;
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
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 8); /* subss */
    eax = esp + 4;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009407Bu); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_0009407B: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094090
 * Original: 0x00094090 - 0x00094096 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094090(void)
{

loc_00094090: ;
    eax = 0x5931BF6A;
    esp += 4; return; /* ret */

}

/**
 * sub_000940A0
 * Original: 0x000940A0 - 0x000940C4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000940A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000940A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x30BC38;
    PUSH32(esp, 0x000940AEu); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_000940AE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000940BE; /* je: equal / zero */

loc_000940B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000940BBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000940BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000940BE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000940D0
 * Original: 0x000940D0 - 0x000940D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000940D0(void)
{

loc_000940D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000940E0
 * Original: 0x000940E0 - 0x000940E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000940E0(void)
{

loc_000940E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000940F0
 * Original: 0x000940F0 - 0x000940F7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000940F0(void)
{

loc_000940F0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00094100
 * Original: 0x00094100 - 0x00094109 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094100: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00094110
 * Original: 0x00094110 - 0x0009411A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094110(void)
{

loc_00094110: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094120
 * Original: 0x00094120 - 0x00094121 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094120(void)
{

loc_00094120: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00094130
 * Original: 0x00094130 - 0x0009413B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094130(void)
{

loc_00094130: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x44);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094140
 * Original: 0x00094140 - 0x0009415D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094140: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094158; /* je: equal / zero */

loc_0009414C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094152u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00094152: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00094158: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094160
 * Original: 0x00094160 - 0x0009416E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094160: ;
    PUSH32(esp, 0x30BB34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009416Du); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009416D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00094170
 * Original: 0x00094170 - 0x0009417E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094170: ;
    PUSH32(esp, 0x30BBB4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009417Du); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_0009417D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00094180
 * Original: 0x00094180 - 0x0009418A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094180: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094186u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00094186: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00094190
 * Original: 0x00094190 - 0x000941BE (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094190: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000941AC; /* je: equal / zero */

loc_00094199: ;
    ecx = MEM32(esp + 0xC);
    esi = eax + -8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000941A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000941A2u); } /* indirect call */
    }

loc_000941A5: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x5C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000941AC: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000941B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000941B4u); } /* indirect call */
    }

loc_000941B7: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x5C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000941C0
 * Original: 0x000941C0 - 0x000941F7 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000941C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000941C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30BC80;
    MEM32(esi + 8) = 0x30BC7C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000941DDu); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000941DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x000941E8u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000941E8: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_00094200
 * Original: 0x00094200 - 0x0009420B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094200: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_00094210
 * Original: 0x00094210 - 0x0009421A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094210: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00094220
 * Original: 0x00094220 - 0x00094267 (71 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xAC016BC1u);
    ecx = eax + 8;
    PUSH32(esp, 0x00094237u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00094237: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00094264; /* jle: less or equal (signed <=) */

loc_0009423D: ;
    PUSH32(esp, esi);
    esi = eax + 4;

loc_00094241: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6B32E8CD);
    PUSH32(esp, 0x0009425Au); RECOMP_ABI_CALL(0x00035260u, sub_00035260); /* call 0x00035260 */

loc_0009425A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094241; /* jne: not equal / not zero */

loc_00094263: ;
    POP32(esp, esi);

loc_00094264: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00094270
 * Original: 0x00094270 - 0x0009433A (202 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094270: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0009427Cu); RECOMP_ABI_CALL(0x001241F0u, sub_001241F0); /* call 0x001241F0 */

loc_0009427C: ;
    edi = eax;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00094289u); RECOMP_ABI_CALL(0x00123C80u, sub_00123C80); /* call 0x00123C80 */

loc_00094289: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009429B; /* je: equal / zero */

loc_00094290: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094296u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00094296: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0009429D;

loc_0009429B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0009429D: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000942A9u); RECOMP_ABI_CALL(0x00123CC0u, sub_00123CC0); /* call 0x00123CC0 */

loc_000942A9: ;
    ecx = MEM32(esi + 0x24);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000942BEu); RECOMP_ABI_CALL(0x00123D70u, sub_00123D70); /* call 0x00123D70 */

loc_000942BE: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00094334; /* jge: greater or equal (signed >=) */

loc_000942C8: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000942D3u); RECOMP_ABI_CALL(0x00123FA0u, sub_00123FA0); /* call 0x00123FA0 */

loc_000942D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094334; /* je: equal / zero */

loc_000942D7: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000942EBu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000942EB: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x30651C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000942FFu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_000942FF: ;
    esi = MEM32(esi + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094316u); RECOMP_ABI_CALL(0x00154E80u, sub_00154E80); /* call 0x00154E80 */

loc_00094316: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094334; /* je: equal / zero */

loc_0009431D: ;
    ecx = MEM32(0x51D65C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094334; /* je: equal / zero */

loc_00094327: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00094334u); RECOMP_ABI_CALL(0x0015FDD0u, sub_0015FDD0); /* call 0x0015FDD0 */

loc_00094334: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00094340
 * Original: 0x00094340 - 0x0009441A (218 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094340: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x59E4DAC6);
    ecx = eax + 8;
    PUSH32(esp, 0x0009435Cu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0009435C: ;
    ecx = MEM32(esi + 0xC);
    edi = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0x96B10DE5u);
    ecx = eax + 8;
    PUSH32(esp, 0x00094371u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_00094371: ;
    edx = MEM32(esi + 0xC);
    ebx = eax;
    eax = MEM32(edx + 4);
    PUSH32(esp, 0xC911F410u);
    ecx = eax + 8;
    PUSH32(esp, 0x00094386u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_00094386: ;
    ebp = eax;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x9107CE09u);
    ecx = eax + 8;
    PUSH32(esp, 0x0009439Bu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_0009439B: ;
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xE1B13194u);
    ecx = eax + 8;
    PUSH32(esp, 0x000943B2u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000943B2: ;
    edx = MEM32(esi + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x340EDB3F);
    ecx = eax + 8;
    PUSH32(esp, 0x000943C9u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000943C9: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000943D3u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000943D3: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x000943DCu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000943DC: ;
    PUSH32(esp, ebp);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x000943E5u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000943E5: ;
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000943F2u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000943F2: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEM32(esi + 0x50) = eax;
    PUSH32(esp, 0x000943FFu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000943FF: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    MEM32(esi + 0x54) = eax;
    PUSH32(esp, 0x0009440Cu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0009440C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x58) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00094420
 * Original: 0x00094420 - 0x000944DF (191 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00094420: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094433u); RECOMP_ABI_CALL(0x001241F0u, sub_001241F0); /* call 0x001241F0 */

loc_00094433: ;
    edi = eax;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009443Cu); RECOMP_ABI_CALL(0x00123C70u, sub_00123C70); /* call 0x00123C70 */

loc_0009443C: ;
    SET_LO8(ecx, MEM8(esi + 0x28));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094456; /* je: equal / zero */

loc_00094449: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094456; /* je: equal / zero */

loc_0009444D: ;
    MEM32(esi + 0x24) = 1;
    goto loc_0009448D;

loc_00094456: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009445Du); RECOMP_ABI_CALL(0x00123EA0u, sub_00123EA0); /* call 0x00123EA0 */

loc_0009445D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0009446A; /* jne: not equal / not zero */

loc_00094461: ;
    MEM32(esi + 0x24) = 2;
    goto loc_0009448D;

loc_0009446A: ;
    PUSH32(esp, 1);
    ecx = edi;
    ebx = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094478u); RECOMP_ABI_CALL(0x00123FA0u, sub_00123FA0); /* call 0x00123FA0 */

loc_00094478: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094481; /* je: equal / zero */

loc_0009447C: ;
    ebx = 1;

loc_00094481: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094488u); RECOMP_ABI_CALL(0x00123EA0u, sub_00123EA0); /* call 0x00123EA0 */

loc_00094488: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x24) = eax;

loc_0009448D: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009449Du); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0009449D: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000944AF; /* je: equal / zero */

loc_000944A4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000944AAu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000944AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000944B1;

loc_000944AF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000944B1: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x29));
    edx = esp + 0x10;
    PUSH32(esp, edx);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x28));
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000944D8u); RECOMP_ABI_CALL(0x00124070u, sub_00124070); /* call 0x00124070 */

loc_000944D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000944E0
 * Original: 0x000944E0 - 0x0009456B (139 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000944E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000944E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x5AE10731);
    ecx = eax + 8;
    PUSH32(esp, 0x000944F8u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_000944F8: ;
    ebp = eax;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009455E; /* jle: less or equal (signed <=) */

loc_00094500: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x00094513u); RECOMP_ABI_CALL(0x00039C80u, sub_00039C80); /* call 0x00039C80 */

loc_00094513: ;
    esi = eax;
    PUSH32(esp, 0x0009451Au); RECOMP_ABI_CALL(0x00039CA0u, sub_00039CA0); /* call 0x00039CA0 */

loc_0009451A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00094558; /* jae: above or equal (unsigned >=) */

loc_0009451E: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094521: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00094558; /* jge: greater or equal (signed >=) */

loc_00094526: ;
    PUSH32(esp, 0x5AE10731);
    ecx = esi;
    PUSH32(esp, 0x00094532u); RECOMP_ABI_CALL(0x00039EA0u, sub_00039EA0); /* call 0x00039EA0 */

loc_00094532: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00094539u); RECOMP_ABI_CALL(0x00035420u, sub_00035420); /* call 0x00035420 */

loc_00094539: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009454C; /* je: equal / zero */

loc_00094540: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009454C; /* je: equal / zero */

loc_00094546: ;
    MEM32(edi) = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0009454C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00094554u); RECOMP_ABI_CALL(0x00039CA0u, sub_00039CA0); /* call 0x00039CA0 */

loc_00094554: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00094521; /* jb: below (unsigned <) */

loc_00094558: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0009455E: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + 4);
    MEM32(edi + 0x30) = ecx;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00094570
 * Original: 0x00094570 - 0x00094587 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094570: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094580; /* je: equal / zero */

loc_00094578: ;
    ecx = eax + -8;
    g_seh_ebp = ebp; sub_00094270(); return; /* tail jmp 0x00094270 */

loc_00094580: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00094270(); return; /* tail jmp 0x00094270 */

}

/**
 * sub_00094590
 * Original: 0x00094590 - 0x0009463D (173 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094590: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0009459E; /* je: equal / zero */

loc_00094599: ;
    esi = eax + -8;
    goto loc_000945A0;

loc_0009459E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000945A0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x788F282B);
    ecx = edi;
    PUSH32(esp, 0x000945B7u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000945B7: ;
    PUSH32(esp, 0xDDE7592Cu);
    ecx = edi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000945C5u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000945C5: ;
    ecx = esi;
    MEM8(esi + 0x28) = LO8(eax);
    MEM8(esi + 0x29) = LO8(ebx);
    PUSH32(esp, 0x000945D2u); RECOMP_ABI_CALL(0x00094340u, sub_00094340); /* call 0x00094340 */

loc_000945D2: ;
    ecx = esi;
    PUSH32(esp, 0x000945D9u); RECOMP_ABI_CALL(0x00094420u, sub_00094420); /* call 0x00094420 */

loc_000945D9: ;
    PUSH32(esp, 0x3543808E);
    ecx = edi;
    PUSH32(esp, 0x000945E5u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000945E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00094635; /* je: equal / zero */

loc_000945EB: ;
    SET_LO8(ecx, MEM8(0x3C3A34));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094629; /* jne: not equal / not zero */

loc_000945FA: ;
    edx = MEM32(0x3C3A34);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x2D6B20);
    MEM32(0x3C3A34) = edx;
    MEM32(0x3C3A2C) = 0x2FF7D4;
    MEM32(0x3C3A30) = 2;
    PUSH32(esp, 0x00094626u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_00094626: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00094629: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C3A2C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00094635u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094632u); } /* indirect call */
    }

loc_00094635: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000944E0(); return; /* tail jmp 0x000944E0 */

}

/**
 * sub_00094640
 * Original: 0x00094640 - 0x000946BD (125 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094640: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = LO8(ebx);
    MEM32(esi + 0x2C) = 0xFFFFFFFFu;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xAC016BC1u);
    ecx = eax + 8;
    PUSH32(esp, 0x0009468Eu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_0009468E: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000946B9; /* jle: less or equal (signed <=) */

loc_00094694: ;
    PUSH32(esp, edi);
    edi = eax + 4;

loc_00094698: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6B32E8CD);
    PUSH32(esp, 0x000946AFu); RECOMP_ABI_CALL(0x00035260u, sub_00035260); /* call 0x00035260 */

loc_000946AF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094698; /* jne: not equal / not zero */

loc_000946B8: ;
    POP32(esp, edi);

loc_000946B9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000946C0
 * Original: 0x000946C0 - 0x0009481F (351 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000946C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000946C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x51D65C);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00094816; /* je: equal / zero */

loc_000946E3: ;
    _fa = (uint32_t)(MEM32(eax + 0x355C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x355C), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094816; /* je: equal / zero */

loc_000946EF: ;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0xC) = edx;
    ebx = ecx + 0x30;
    MEM32(esp + 0x10) = 5;

loc_00094702: ;
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000947EA; /* je: equal / zero */

loc_0009470C: ;
    SET_LO8(eax, MEM8(ecx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009471A; /* je: equal / zero */

loc_00094713: ;
    esi = 1;
    goto loc_00094727;

loc_0009471A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x29)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x29), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_00094727: ;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0x20) = 0x30BC38;
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009473Eu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009473E: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0009474Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094747u); } /* indirect call */
    }

loc_0009474A: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094794; /* jne: not equal / not zero */

loc_00094752: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009475Eu); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_0009475E: ;
    edx = MEM32(ebx);
    edi = MEM32(esp + 0x18);
    ecx = MEM32(edi + 0x355C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009477Au); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_0009477A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000947D3; /* jl: less (signed <) */

loc_0009477E: ;
    ecx = MEM32(edi + 0x355C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009478Au); RECOMP_ABI_CALL(0x00165380u, sub_00165380); /* call 0x00165380 */

loc_0009478A: ;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000947D3;

loc_00094794: ;
    PUSH32(esp, 2);
    ecx = esp + 0x2C;
    MEM32(esp + 0x2C) = 0x2FF7D4;
    MEM32(esp + 0x30) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000947AFu); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000947AF: ;
    eax = MEM32(esp + 0x24);
    SET_LO8(ecx, MEM8(eax + 0x28));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(eax + 0x20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000947CA; /* je: equal / zero */

loc_000947BD: ;
    ecx = eax + 4;
    eax = MEM32(ecx);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000947CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000947C7u); } /* indirect call */
    }

loc_000947CA: ;
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000947D3u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000947D3: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = 0x30BC38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000947E4u); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_000947E4: ;
    ecx = MEM32(esp + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000947EA: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00094702; /* jne: not equal / not zero */

loc_000947FC: ;
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00094816: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00094820
 * Original: 0x00094820 - 0x00094914 (244 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0009490B; /* jbe: below or equal (unsigned <=) */

loc_00094839: ;
    eax = MEM32(0x51D65C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0009490B; /* je: equal / zero */

loc_0009484A: ;
    _fa = (uint32_t)(MEM32(eax + 0x355C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x355C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009490B; /* je: equal / zero */

loc_00094856: ;
    esi = ecx + 0x30;
    MEM32(esp + 0x10) = 5;

loc_00094861: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000948F9; /* je: equal / zero */

loc_0009486B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000948F9; /* jne: not equal / not zero */

loc_00094874: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 0x18) = 0x30BC38;
    MEM32(esp + 0x1C) = ebx;
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0009488Bu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_0009488B: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00094897u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094894u); } /* indirect call */
    }

loc_00094897: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000948D3; /* je: equal / zero */

loc_000948A1: ;
    PUSH32(esp, 3);
    ecx = esp + 0x24;
    MEM32(esp + 0x24) = 0x2FF7D4;
    MEM32(esp + 0x28) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000948B8u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000948B8: ;
    edx = MEM32(edi + 4);
    ecx = edi + 4;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000948C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000948C3u); } /* indirect call */
    }

loc_000948C6: ;
    ecx = esp + 0x20;
    MEM32(esi) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000948D1u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000948D1: ;
    goto loc_000948E8;

loc_000948D3: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x355C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000948E6u); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_000948E6: ;
    MEM32(esi) = ebx;

loc_000948E8: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = 0x30BC38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000948F9u); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_000948F9: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00094861; /* jne: not equal / not zero */

loc_0009490B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094920
 * Original: 0x00094920 - 0x000949E1 (193 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094920: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x3E8D08);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x1C) = 0x2FF9EC;
    MEM32(esp + 0x3C) = ebx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x44) = LO8(ebx);
    MEM8(esp + 8) = LO8(ebx);
    MEM32(esp + 4) = 0x2FFA54;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0xC) = 0x2FF02C;
    if (CMP_EQ(_fa, _fb)) goto loc_00094993; /* je: equal / zero */

loc_0009498E: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00094995;

loc_00094993: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094995: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x0009499Fu); RECOMP_ABI_CALL(0x00141AF0u, sub_00141AF0); /* call 0x00141AF0 */

loc_0009499F: ;
    ecx = MEM32(esp + 0x4C);
    eax = esp + 4;
    MEM32(esp + 0x3C) = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000949B8u); RECOMP_ABI_CALL(0x00149EB0u, sub_00149EB0); /* call 0x00149EB0 */

loc_000949B8: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 4) = 0x2FFA54;
    MEM32(esp + 0xC) = 0x2FEC40;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000949DB; /* je: equal / zero */

loc_000949D1: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000949DBu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000949DB: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000949F0
 * Original: 0x000949F0 - 0x00094AEB (251 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000949F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000949F0: ;
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
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00094A16; /* jne: not equal / not zero */

loc_00094A0A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00094A16: ;
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094A1Fu); RECOMP_ABI_CALL(0x00142340u, sub_00142340); /* call 0x00142340 */

loc_00094A1F: ;
    ecx = esp + 0x84;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094A2Bu); RECOMP_ABI_CALL(0x00145750u, sub_00145750); /* call 0x00145750 */

loc_00094A2B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0xC);
    eax = esp + 0x70;
    MEM8(esp + 0x34) = LO8(ebx);
    MEM32(esp + 0x30) = 0x302BAC;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM32(esp + 0x18) = 0x2FFA54;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x20) = 0x2FF02C;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094A7Cu); RECOMP_ABI_CALL(0x00039EC0u, sub_00039EC0); /* call 0x00039EC0 */

loc_00094A7C: ;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094A8Au); RECOMP_ABI_CALL(0x00141700u, sub_00141700); /* call 0x00141700 */

loc_00094A8A: ;
    edx = MEM32(esp + 0x44);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00094A9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094A97u); } /* indirect call */
    }

loc_00094A9A: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x64) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00094AA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094AA2u); } /* indirect call */
    }

loc_00094AA5: ;
    edx = MEM32(esp + 0x44);
    ecx = esp + 0x44;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00094ABCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094AB9u); } /* indirect call */
    }

loc_00094ABC: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    esi = eax;
    MEM32(esp + 0x18) = 0x2FFA54;
    MEM32(esp + 0x20) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00094AE0; /* je: equal / zero */

loc_00094AD6: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00094AE0u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00094AE0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094AF0
 * Original: 0x00094AF0 - 0x00094B07 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094AF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094B00; /* je: equal / zero */

loc_00094AF8: ;
    ecx = eax + -8;
    g_seh_ebp = ebp; sub_00094640(); return; /* tail jmp 0x00094640 */

loc_00094B00: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00094640(); return; /* tail jmp 0x00094640 */

}

/**
 * sub_00094B10
 * Original: 0x00094B10 - 0x00094B37 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094B10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094B28; /* je: equal / zero */

loc_00094B18: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00094B20u); RECOMP_ABI_CALL(0x000946C0u, sub_000946C0); /* call 0x000946C0 */

loc_00094B20: ;
    MEM8(0x3C3A14) = 0;
    esp += 4; return; /* ret */

loc_00094B28: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00094B2Fu); RECOMP_ABI_CALL(0x000946C0u, sub_000946C0); /* call 0x000946C0 */

loc_00094B2F: ;
    MEM8(0x3C3A14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00094B40
 * Original: 0x00094B40 - 0x00094BAC (108 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094B40: ;
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
    MEM32(esi) = 0x30BC80;
    MEM32(edi) = 0x30BC7C;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00094B72u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_00094B72: ;
    ecx = esi;
    MEM32(esi + 0x5C) = 0;
    PUSH32(esp, 0x00094B80u); RECOMP_ABI_CALL(0x00094640u, sub_00094640); /* call 0x00094640 */

loc_00094B80: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00094B88u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_00094B88: ;
    PUSH32(esp, 0x30BC20);
    ecx = ebx;
    PUSH32(esp, 0x00094B94u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_00094B94: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094B9Au); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_00094B9A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00094BA4u); RECOMP_ABI_CALL(0x00094220u, sub_00094220); /* call 0x00094220 */

loc_00094BA4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094BB0
 * Original: 0x00094BB0 - 0x00094C8C (220 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094BB0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12A863F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x12A863F (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00094BF8; /* jne: not equal / not zero */

loc_00094BBD: ;
    eax = MEM32(ebx + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094C88; /* je: equal / zero */

loc_00094BC8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094BCEu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00094BCE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094C88; /* je: equal / zero */

loc_00094BD9: ;
    ecx = MEM32(0x51D65C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094C88; /* je: equal / zero */

loc_00094BE7: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00094BF4u); RECOMP_ABI_CALL(0x0015FDD0u, sub_0015FDD0); /* call 0x0015FDD0 */

loc_00094BF4: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00094BF8: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x51D65C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094C87; /* je: equal / zero */

loc_00094C07: ;
    SET_LO8(eax, MEM8(ebx + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00094C1C; /* je: equal / zero */

loc_00094C10: ;
    edi = 0xEDB9A175u;
    PUSH32(esp, 0x77388A5B);
    goto loc_00094C39;

loc_00094C1C: ;
    SET_LO8(eax, MEM8(ebx + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094C2F; /* je: equal / zero */

loc_00094C23: ;
    edi = 0xEDB9A175u;
    PUSH32(esp, 0x75E929E0);
    goto loc_00094C39;

loc_00094C2F: ;
    edi = 0xAA63A1F7u;
    PUSH32(esp, 0x5631464F);

loc_00094C39: ;
    PUSH32(esp, 0x00094C3Eu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00094C3E: ;
    esi = eax;
    eax = MEM32(ebx + 0x48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094C55; /* je: equal / zero */

loc_00094C4A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094C50u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00094C50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00094C57;

loc_00094C55: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094C57: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094C79; /* je: equal / zero */

loc_00094C5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094C79; /* je: equal / zero */

loc_00094C5F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x35B8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094C79u); RECOMP_ABI_CALL(0x0016C630u, sub_0016C630); /* call 0x0016C630 */

loc_00094C79: ;
    PUSH32(esp, 0xE42FBC42u);
    ecx = ebx;
    PUSH32(esp, 0x00094C85u); RECOMP_ABI_CALL(0x00094920u, sub_00094920); /* call 0x00094920 */

loc_00094C85: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00094C87: ;
    POP32(esp, ebp);

loc_00094C88: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00094C90
 * Original: 0x00094C90 - 0x00094E5A (458 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x3E8D08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094E56; /* je: equal / zero */

loc_00094CA1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00094CA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094CA6u); } /* indirect call */
    }

loc_00094CA9: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094CBF; /* je: equal / zero */

loc_00094CAF: ;
    edx = MEM32(ebp + 0x30);
    ecx = ebp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF5D8C22Au);
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00094CBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094CBCu); } /* indirect call */
    }

loc_00094CBF: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + eax * 4 + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094CDF; /* je: equal / zero */

loc_00094CD2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094CD8u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00094CD8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    goto loc_00094CE1;

loc_00094CDF: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094CE1: ;
    PUSH32(esp, 0xD8EF861Eu);
    PUSH32(esp, 0x00094CEBu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00094CEB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094D18; /* je: equal / zero */

loc_00094CF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094D18; /* je: equal / zero */

loc_00094CF6: ;
    ecx = MEM32(0x51D65C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094D18; /* je: equal / zero */

loc_00094D00: ;
    ecx = MEM32(ecx + 0x35B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094D18u); RECOMP_ABI_CALL(0x0016C630u, sub_0016C630); /* call 0x0016C630 */

loc_00094D18: ;
    PUSH32(esp, 0xE15C0226u);
    ecx = esi;
    PUSH32(esp, 0x00094D24u); RECOMP_ABI_CALL(0x00094920u, sub_00094920); /* call 0x00094920 */

loc_00094D24: ;
    edi = esi + 0x30;
    ebx = 5;
    /* nop */

loc_00094D30: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00094D3Au); RECOMP_ABI_CALL(0x00094820u, sub_00094820); /* call 0x00094820 */

loc_00094D3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094D30; /* jne: not equal / not zero */

loc_00094D40: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094DAE; /* je: equal / zero */

loc_00094D48: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edi = 0x4947073;
    ebx = 0x2E376A99;
    PUSH32(esp, 0x00094D5Du); RECOMP_ABI_CALL(0x001241F0u, sub_001241F0); /* call 0x001241F0 */

loc_00094D5D: ;
    ecx = eax;
    PUSH32(esp, 0x00094D64u); RECOMP_ABI_CALL(0x00123D50u, sub_00123D50); /* call 0x00123D50 */

loc_00094D64: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x842B8CD8u);
    ecx = eax + 8;
    PUSH32(esp, 0x00094D77u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_00094D77: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00094D7Fu); RECOMP_ABI_CALL(0x000949F0u, sub_000949F0); /* call 0x000949F0 */

loc_00094D7F: ;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00094DD3; /* jne: not equal / not zero */

loc_00094D86: ;
    SET_LO8(eax, MEM8(esi + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00094DD3; /* jne: not equal / not zero */

loc_00094D8D: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00094DD3; /* jne: not equal / not zero */

loc_00094D9B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00094DACu); RECOMP_ABI_CALL(0x00079250u, sub_00079250); /* call 0x00079250 */

loc_00094DAC: ;
    goto loc_00094DD3;

loc_00094DAE: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xFD9724C2u);
    ecx = eax + 8;
    edi = 0x61759627;
    ebx = 0x68D9A383;
    PUSH32(esp, 0x00094DCBu); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_00094DCB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00094DD3u); RECOMP_ABI_CALL(0x000949F0u, sub_000949F0); /* call 0x000949F0 */

loc_00094DD3: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, edi);
    ecx = eax + 8;
    PUSH32(esp, 0x00094DE2u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00094DE2: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00094E0A; /* jle: less or equal (signed <=) */

loc_00094DE8: ;
    edi = eax + 4;
    goto loc_00094DF0;

    /* nop */

loc_00094DF0: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00094E01u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_00094E01: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094DF0; /* jne: not equal / not zero */

loc_00094E0A: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094E53; /* je: equal / zero */

loc_00094E12: ;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00094E53; /* je: equal / zero */

loc_00094E19: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x5EC43F01);
    ecx = eax + 8;
    PUSH32(esp, 0x00094E2Cu); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00094E2C: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00094E53; /* jle: less or equal (signed <=) */

loc_00094E32: ;
    edi = eax + 4;

loc_00094E35: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi);
    PUSH32(esp, 0x2CD4C099);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00094E4Au); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_00094E4A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094E35; /* jne: not equal / not zero */

loc_00094E53: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00094E56: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094E60
 * Original: 0x00094E60 - 0x00094EBE (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094E60: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094E9D; /* jne: not equal / not zero */

loc_00094E68: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x00094E70u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_00094E70: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094E8F; /* je: equal / zero */

loc_00094E7B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00094E83u); RECOMP_ABI_CALL(0x00094B40u, sub_00094B40); /* call 0x00094B40 */

loc_00094E83: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094E8Bu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00094E8B: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00094E8F: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094E99u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_00094E99: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00094E9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094EBB; /* jne: not equal / not zero */

loc_00094EA2: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00094EAFu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00094EAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094EBB; /* je: equal / zero */

loc_00094EB3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00094EBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094EB9u); } /* indirect call */
    }

loc_00094EBB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00094EC0
 * Original: 0x00094EC0 - 0x00094EF3 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094EC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00094ECE; /* je: equal / zero */

loc_00094EC9: ;
    esi = eax + -8;
    goto loc_00094ED0;

loc_00094ECE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00094ED0: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00094ED9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094ED6u); } /* indirect call */
    }

loc_00094ED9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF5D8C22Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF5D8C22Au (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esp + 8) = LO8(ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00094EF1u); RECOMP_ABI_CALL(0x00094C90u, sub_00094C90); /* call 0x00094C90 */

loc_00094EF1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094F00
 * Original: 0x00094F00 - 0x00094F37 (55 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094F00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00094F21; /* je: equal / zero */

loc_00094F09: ;
    ecx = MEM32(esp + 0xC);
    esi = eax + -8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00094F15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094F12u); } /* indirect call */
    }

loc_00094F15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00094F1Fu); RECOMP_ABI_CALL(0x00094BB0u, sub_00094BB0); /* call 0x00094BB0 */

loc_00094F1F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00094F21: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00094F2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00094F29u); } /* indirect call */
    }

loc_00094F2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x00094F35u); RECOMP_ABI_CALL(0x00094BB0u, sub_00094BB0); /* call 0x00094BB0 */

loc_00094F35: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094F40
 * Original: 0x00094F40 - 0x00094FC2 (130 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00094F48u); RECOMP_ABI_CALL(0x001241F0u, sub_001241F0); /* call 0x001241F0 */

loc_00094F48: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00094F53u); RECOMP_ABI_CALL(0x00123CA0u, sub_00123CA0); /* call 0x00123CA0 */

loc_00094F53: ;
    ecx = esi;
    PUSH32(esp, 0x00094F5Au); RECOMP_ABI_CALL(0x000946C0u, sub_000946C0); /* call 0x000946C0 */

loc_00094F5A: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00094F64u); RECOMP_ABI_CALL(0x00094BB0u, sub_00094BB0); /* call 0x00094BB0 */

loc_00094F64: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x66933264);
    ecx = eax + 8;
    PUSH32(esp, 0x00094F77u); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_00094F77: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00094F7Fu); RECOMP_ABI_CALL(0x000949F0u, sub_000949F0); /* call 0x000949F0 */

loc_00094F7F: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3AE0B032);
    ecx = eax + 8;
    PUSH32(esp, 0x00094F92u); RECOMP_ABI_CALL(0x00036890u, sub_00036890); /* call 0x00036890 */

loc_00094F92: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00094FC0; /* jle: less or equal (signed <=) */

loc_00094F98: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax + 4;
    ebx = ecx;
    /* nop */

loc_00094FA0: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(edi);
    PUSH32(esp, 0xF3DDB525u);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00094FB5u); RECOMP_ABI_CALL(0x000352B0u, sub_000352B0); /* call 0x000352B0 */

loc_00094FB5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00094FA0; /* jne: not equal / not zero */

loc_00094FBE: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00094FC0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094FD0
 * Original: 0x00094FD0 - 0x00094FE7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094FD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094FE0; /* je: equal / zero */

loc_00094FD8: ;
    ecx = eax + -8;
    g_seh_ebp = ebp; sub_00094F40(); return; /* tail jmp 0x00094F40 */

loc_00094FE0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00094F40(); return; /* tail jmp 0x00094F40 */

}

/**
 * sub_00094FF0
 * Original: 0x00094FF0 - 0x0009503D (77 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094FF0: ;
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
    MEM32(eax) = 0x30BC64;
    esp += 4; return; /* ret */

}

/**
 * sub_00095040
 * Original: 0x00095040 - 0x00095048 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095040: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00095050(); return; /* tail jmp 0x00095050 */

}

/**
 * sub_00095050
 * Original: 0x00095050 - 0x0009509C (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30BC80;
    MEM32(esi + 8) = 0x30BC7C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0009506Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_0009506D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x00095078u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_00095078: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x00095086u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_00095086: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00095096; /* je: equal / zero */

loc_0009508D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00095093u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00095093: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00095096: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000950A0
 * Original: 0x000950A0 - 0x000950AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000950A0(void)
{

loc_000950A0: ;
    MEM32(0x3C3A98) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000950B0
 * Original: 0x000950B0 - 0x000950D2 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000950B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000950B0: ;
    ecx = MEM32(0x3C3A98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000950CE; /* jle: less or equal (signed <=) */

loc_000950BC: ;
    edx = MEM32(esp + 4);

loc_000950C0: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x3C3A78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x3C3A78), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000950D1; /* je: equal / zero */

loc_000950C9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000950C0; /* jl: less (signed <) */

loc_000950CE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000950D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000950E0
 * Original: 0x000950E0 - 0x00095138 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000950E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000950E0: ;
    ecx = MEM32(0x3C3A98);
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00095105; /* jle: less or equal (signed <=) */

loc_000950F0: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x3C3A78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x3C3A78), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095100; /* je: equal / zero */

loc_000950F9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000950F0; /* jl: less (signed <) */

loc_000950FE: ;
    goto loc_00095105;

loc_00095100: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009511A; /* jne: not equal / not zero */

loc_00095105: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095113; /* jne: not equal / not zero */

loc_0009510C: ;
    eax = 7;
    goto loc_0009511A;

loc_00095113: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3C3A98) = ecx;

loc_0009511A: ;
    ecx = MEM32(esp + 8);
    MEM32(eax * 4 + 0x3C3A78) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax * 4 + 0x3C3A58) = ecx;
    MEM32(eax * 4 + 0x3C3A38) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00095140
 * Original: 0x00095140 - 0x0009517F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095140: ;
    ecx = MEM32(0x3C3A98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009517E; /* jle: less or equal (signed <=) */

loc_0009514C: ;
    edx = MEM32(esp + 4);

loc_00095150: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x3C3A78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x3C3A78), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009515F; /* je: equal / zero */

loc_00095159: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095150; /* jl: less (signed <) */

loc_0009515E: ;
    esp += 4; return; /* ret */

loc_0009515F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009517E; /* je: equal / zero */

loc_00095164: ;
    ecx = MEM32(eax * 4 + 0x3C3A58);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = MEM32(eax * 4 + 0x3C3A38);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;

loc_0009517E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00095180
 * Original: 0x00095180 - 0x000951AC (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095180: ;
    ecx = MEM32(0x3C3A98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009519E; /* jle: less or equal (signed <=) */

loc_0009518C: ;
    edx = MEM32(esp + 4);

loc_00095190: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x3C3A78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x3C3A78), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000951A1; /* je: equal / zero */

loc_00095199: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095190; /* jl: less (signed <) */

loc_0009519E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000951A1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_000951B0
 * Original: 0x000951B0 - 0x000951B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000951B0(void)
{

loc_000951B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000951C0
 * Original: 0x000951C0 - 0x000951C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000951C0(void)
{

loc_000951C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000951D0
 * Original: 0x000951D0 - 0x000951E1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000951D0(void)
{

loc_000951D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000951F0
 * Original: 0x000951F0 - 0x00095225 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000951F0(void)
{

loc_000951F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095204u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_00095204: ;
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
    PUSH32(esp, 0x00095221u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00095221: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00095230
 * Original: 0x00095230 - 0x0009525B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095230: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095248; /* je: equal / zero */

loc_00095234: ;
    eax = ecx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x40A00000);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00095247u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00095247: ;
    esp += 4; return; /* ret */

loc_00095248: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x40A00000);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0009525Au); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009525A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00095260
 * Original: 0x00095260 - 0x00095275 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095260(void)
{

loc_00095260: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 0x1128);
    MEM8(edx + 0x2BD) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00095280
 * Original: 0x00095280 - 0x000952BC (60 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095280(void)
{

loc_00095280: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115C) = 0;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1128);
    PUSH32(esp, 0x0009529Du); RECOMP_ABI_CALL(0x001890A0u, sub_001890A0); /* call 0x001890A0 */

loc_0009529D: ;
    edx = MEM32(esi + 0x20);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x40A00000);
    ecx = esi + 0x28;
    MEM8(edx + 0x115A) = 1;
    PUSH32(esp, 0x000952BAu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000952BA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000952C0
 * Original: 0x000952C0 - 0x0009530F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000952C0(void)
{

loc_000952C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B210);
    PUSH32(esp, 0x000952D6u); RECOMP_ABI_CALL(0x000F4470u, sub_000F4470); /* call 0x000F4470 */

loc_000952D6: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30BF04);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000952EDu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000952ED: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + 0x1128);
    eax = MEM32(eax + 0x1D4);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x29);
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, 0x0009530Bu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0009530B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095310
 * Original: 0x00095310 - 0x00095325 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00095310: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00095322; /* je: equal / zero */

loc_0009531D: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x6C)); return; /* indirect tail jmp */

loc_00095322: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00095330
 * Original: 0x00095330 - 0x000953F8 (200 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095330: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    MEM8(eax + 0x115C) = 1;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    MEM8(ecx + 0x115B) = 1;
    edi = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    ecx = edi;
    PUSH32(esp, 0x0009535Fu); RECOMP_ABI_CALL(0x000F4470u, sub_000F4470); /* call 0x000F4470 */

loc_0009535F: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30BF1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095373u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00095373: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x00095386u); RECOMP_ABI_CALL(0x000F4470u, sub_000F4470); /* call 0x000F4470 */

loc_00095386: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30BF10);
    PUSH32(esp, 0x0009539Cu); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_0009539C: ;
    ecx = MEM32(edi + 0x1128);
    PUSH32(esp, 0x000953A7u); RECOMP_ABI_CALL(0x001890A0u, sub_001890A0); /* call 0x001890A0 */

loc_000953A7: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x000953B0u); RECOMP_ABI_CALL(0x000F39C0u, sub_000F39C0); /* call 0x000F39C0 */

loc_000953B0: ;
    esi = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1220)); /* movss */
    POP32(esp, edi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000953E4; /* je: equal / zero */

loc_000953CD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000953D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000953CFu); } /* indirect call */
    }

loc_000953D2: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x42340000);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000953E3u); RECOMP_ABI_CALL(0x001145C0u, sub_001145C0); /* call 0x001145C0 */

loc_000953E3: ;
    esp += 4; return; /* ret */

loc_000953E4: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x42340000);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000953F7u); RECOMP_ABI_CALL(0x001145C0u, sub_001145C0); /* call 0x001145C0 */

loc_000953F7: ;
    esp += 4; return; /* ret */

}
