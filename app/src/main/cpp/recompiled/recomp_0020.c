/**
 * Medal of Honor European Assault - Recompiled code chunk 20
 * Functions: 250 (0x000A24A0 - 0x000A9A80)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000A24A0
 * Original: 0x000A24A0 - 0x000A24A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A24A0(void)
{

loc_000A24A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A24B0
 * Original: 0x000A24B0 - 0x000A24DD (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A24B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A24B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A24D7; /* je: equal / zero */

loc_000A24BB: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A24C4u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_000A24C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A24D7; /* je: equal / zero */

loc_000A24CB: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x000A24D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A24D0u); } /* indirect call */
    }

loc_000A24D3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A24D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A24E0
 * Original: 0x000A24E0 - 0x000A2514 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A24E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A24E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2513; /* je: equal / zero */

loc_000A24E8: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A24F1u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_000A24F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2513; /* je: equal / zero */

loc_000A24F8: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x000A2500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A24FDu); } /* indirect call */
    }

loc_000A2500: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2513; /* je: equal / zero */

loc_000A2504: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000A2513u); RECOMP_ABI_CALL(0x00121710u, sub_00121710); /* call 0x00121710 */

loc_000A2513: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2520
 * Original: 0x000A2520 - 0x000A254E (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2520: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A254D; /* je: equal / zero */

loc_000A2528: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2531u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_000A2531: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A254D; /* je: equal / zero */

loc_000A2538: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x000A2540u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A253Du); } /* indirect call */
    }

loc_000A2540: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A254D; /* je: equal / zero */

loc_000A2544: ;
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x000A254Du); RECOMP_ABI_CALL(0x00121710u, sub_00121710); /* call 0x00121710 */

loc_000A254D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2550
 * Original: 0x000A2550 - 0x000A25E9 (153 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2550: ;
    PUSH32(esp, ecx);
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
    PUSH32(esp, 0x000A257Cu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A257C: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000A2597u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A2597: ;
    PUSH32(esp, 0x30F110);
    ecx = ebx;
    PUSH32(esp, 0x000A25A3u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A25A3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A25A9u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A25A9: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A25B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A25B0u); } /* indirect call */
    }

loc_000A25B3: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x6B85BBC5);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000A25C8u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A25C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A25D8; /* jne: not equal / not zero */

loc_000A25CC: ;
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A25D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A25E0; /* jne: not equal / not zero */

loc_000A25DD: ;
    MEM32(esi + 0x20) = eax;

loc_000A25E0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A25F0
 * Original: 0x000A25F0 - 0x000A2624 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A25F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A25F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000A2609u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A2609: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A2614u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A2614: ;
    ecx = edi;
    PUSH32(esp, 0x000A261Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A261B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2630
 * Original: 0x000A2630 - 0x000A26B0 (128 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2630: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A268F; /* jne: not equal / not zero */

loc_000A2638: ;
    PUSH32(esp, esi);
    ecx = 0x3888C0;
    PUSH32(esp, 0x000A2643u); RECOMP_ABI_CALL(0x00079E60u, sub_00079E60); /* call 0x00079E60 */

loc_000A2643: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2651u); RECOMP_ABI_CALL(0x00084360u, sub_00084360); /* call 0x00084360 */

loc_000A2651: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A268B; /* je: equal / zero */

loc_000A2658: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x000A265Fu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A265F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2681; /* je: equal / zero */

loc_000A2666: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A266Eu); RECOMP_ABI_CALL(0x000A2550u, sub_000A2550); /* call 0x000A2550 */

loc_000A266E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2681; /* je: equal / zero */

loc_000A2672: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A267Du); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A267D: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A2681: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A268Bu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A268B: ;
    POP32(esp, esi);

loc_000A268C: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A268F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A268C; /* jne: not equal / not zero */

loc_000A2694: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A26A1u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A26A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A268C; /* je: equal / zero */

loc_000A26A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A26ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A26ABu); } /* indirect call */
    }

loc_000A26AD: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A26B0
 * Original: 0x000A26B0 - 0x000A26F8 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A26B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A26B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000A26C9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A26C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A26D4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A26D4: ;
    ecx = edi;
    PUSH32(esp, 0x000A26DBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A26DB: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_000A26F1; /* je: equal / zero */

loc_000A26E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A26EEu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A26EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A26F1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2700
 * Original: 0x000A2700 - 0x000A2709 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2700: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000A2710
 * Original: 0x000A2710 - 0x000A2717 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2710(void)
{

loc_000A2710: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2720
 * Original: 0x000A2720 - 0x000A2721 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2720(void)
{

loc_000A2720: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2730
 * Original: 0x000A2730 - 0x000A2790 (96 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2730: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(edi) = 0x2FF764;
    MEM32(edi + 4) = 0;
    ebp = esi + 0x10;
    ecx = ebp;
    MEM32(esi) = 0x30F1D4;
    MEM32(edi) = 0x30F1BC;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000A2762u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A2762: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000A276Au); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A276A: ;
    PUSH32(esp, 0x30F1A4);
    ecx = ebp;
    PUSH32(esp, 0x000A2776u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A2776: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A277Cu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A277C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A2784u); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_000A2784: ;
    POP32(esp, edi);
    MEM8(eax + 2) = 0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2790
 * Original: 0x000A2790 - 0x000A27C4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30F1D4;
    MEM32(edi) = 0x30F1BC;
    PUSH32(esp, 0x000A27A9u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A27A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A27B4u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A27B4: ;
    ecx = edi;
    PUSH32(esp, 0x000A27BBu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A27BB: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A27D0
 * Original: 0x000A27D0 - 0x000A27DB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A27D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A27D0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_000A27E0
 * Original: 0x000A27E0 - 0x000A27EA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A27E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A27E0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A27F0
 * Original: 0x000A27F0 - 0x000A2849 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A27F0(void)
{

loc_000A27F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA1CD6640u);
    ecx = eax + 8;
    PUSH32(esp, 0x000A280Au); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A280A: ;
    ecx = MEM32(esi + 0xC);
    edi = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xEAF7576Fu);
    ecx = eax + 8;
    PUSH32(esp, 0x000A281Fu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A281F: ;
    edx = MEM32(esi + 0xC);
    ebx = eax;
    eax = MEM32(edx + 4);
    PUSH32(esp, 0xC5A686E5u);
    ecx = eax + 8;
    PUSH32(esp, 0x000A2834u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A2834: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A283Eu); RECOMP_ABI_CALL(0x00160F10u, sub_00160F10); /* call 0x00160F10 */

loc_000A283E: ;
    ecx = eax;
    PUSH32(esp, 0x000A2845u); RECOMP_ABI_CALL(0x00160B50u, sub_00160B50); /* call 0x00160B50 */

loc_000A2845: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2850
 * Original: 0x000A2850 - 0x000A286D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2850: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xC7496193u);
    ecx = eax + 8;
    PUSH32(esp, 0x000A2867u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A2867: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2870
 * Original: 0x000A2870 - 0x000A288E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A2870: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0xC7496193u);
    ecx = eax + 8;
    PUSH32(esp, 0x000A2887u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A2887: ;
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
 * sub_000A2890
 * Original: 0x000A2890 - 0x000A28FF (111 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2890: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A28DE; /* jne: not equal / not zero */

loc_000A2898: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x30F1D8);
    PUSH32(esp, 0x000A28AAu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000A28AA: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A28D0; /* je: equal / zero */

loc_000A28B5: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A28BDu); RECOMP_ABI_CALL(0x000A2730u, sub_000A2730); /* call 0x000A2730 */

loc_000A28BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A28D0; /* je: equal / zero */

loc_000A28C1: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A28CCu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A28CC: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A28D0: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A28DAu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A28DA: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A28DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A28FC; /* jne: not equal / not zero */

loc_000A28E3: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A28F0u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A28F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A28FC; /* je: equal / zero */

loc_000A28F4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A28FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A28FAu); } /* indirect call */
    }

loc_000A28FC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2900
 * Original: 0x000A2900 - 0x000A2908 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2900: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000A2910(); return; /* tail jmp 0x000A2910 */

}

/**
 * sub_000A2910
 * Original: 0x000A2910 - 0x000A2958 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2910: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30F1D4;
    MEM32(edi) = 0x30F1BC;
    PUSH32(esp, 0x000A2929u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A2929: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A2934u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A2934: ;
    ecx = edi;
    PUSH32(esp, 0x000A293Bu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A293B: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_000A2951; /* je: equal / zero */

loc_000A2948: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A294Eu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A294E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A2951: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2960
 * Original: 0x000A2960 - 0x000A2995 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2960(void)
{

loc_000A2960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x9915028Du);
    ecx = esi + 8;
    PUSH32(esp, 0x000A2974u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A2974: ;
    ebx = MEM32(0x3DAFEC);
    PUSH32(esp, 0xCA6CD6F0u);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x000A2988u); RECOMP_ABI_CALL(0x0003A810u, sub_0003A810); /* call 0x0003A810 */

loc_000A2988: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000A2991u); RECOMP_ABI_CALL(0x000F0170u, sub_000F0170); /* call 0x000F0170 */

loc_000A2991: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A29A0
 * Original: 0x000A29A0 - 0x000A29D9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A29A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A29A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x9915028Du);
    ecx = esi + 8;
    PUSH32(esp, 0x000A29B3u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A29B3: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(0x3DAFEC);
    PUSH32(esp, 0xCA6CD6F0u);
    ecx = esi;
    PUSH32(esp, 0x000A29C9u); RECOMP_ABI_CALL(0x0003A810u, sub_0003A810); /* call 0x0003A810 */

loc_000A29C9: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A29D6u); RECOMP_ABI_CALL(0x000F0210u, sub_000F0210); /* call 0x000F0210 */

loc_000A29D6: ;
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
 * sub_000A29E0
 * Original: 0x000A29E0 - 0x000A2A1C (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A29E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A29E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x9915028Du);
    ecx = esi + 8;
    PUSH32(esp, 0x000A29F4u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A29F4: ;
    edi = MEM32(0x3DAFEC);
    PUSH32(esp, 0xCA6CD6F0u);
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000A2A08u); RECOMP_ABI_CALL(0x0003A810u, sub_0003A810); /* call 0x0003A810 */

loc_000A2A08: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2A18u); RECOMP_ABI_CALL(0x000F0170u, sub_000F0170); /* call 0x000F0170 */

loc_000A2A18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2A20
 * Original: 0x000A2A20 - 0x000A2A47 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2A20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2A38; /* je: equal / zero */

loc_000A2A28: ;
    SET_LO8(edx, MEM8(eax + 0x1C));
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_000A2A38: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(eax + 0x24));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_000A2A50
 * Original: 0x000A2A50 - 0x000A2A62 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2A50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2A5C; /* je: equal / zero */

loc_000A2A58: ;
    SET_LO8(eax, MEM8(eax + 0x1C));
    esp += 4; return; /* ret */

loc_000A2A5C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(eax + 0x24));
    esp += 4; return; /* ret */

}

/**
 * sub_000A2A70
 * Original: 0x000A2A70 - 0x000A2A82 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2A70: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2A7E; /* je: equal / zero */

loc_000A2A7A: ;
    MEM32(ecx + 0x18) = eax;
    esp += 4; return; /* ret */

loc_000A2A7E: ;
    MEM32(eax + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2A90
 * Original: 0x000A2A90 - 0x000A2AB9 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2A90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A2A9E; /* je: equal / zero */

loc_000A2A99: ;
    esi = eax + -8;
    goto loc_000A2AA0;

loc_000A2A9E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A2AA0: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2AB7; /* je: equal / zero */

loc_000A2AA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2AADu); RECOMP_ABI_CALL(0x00039570u, sub_00039570); /* call 0x00039570 */

loc_000A2AAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = 0;

loc_000A2AB7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2AC0
 * Original: 0x000A2AC0 - 0x000A2AC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2AC0(void)
{

loc_000A2AC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2AD0
 * Original: 0x000A2AD0 - 0x000A2AD7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2AD0(void)
{

loc_000A2AD0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2AE0
 * Original: 0x000A2AE0 - 0x000A2AE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2AE0: ;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000A2AF0
 * Original: 0x000A2AF0 - 0x000A2B1F (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2AF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2B0C; /* je: equal / zero */

loc_000A2AF8: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3D7583A6);
    ecx = eax + 0x28;
    PUSH32(esp, 0x000A2B0Bu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A2B0B: ;
    esp += 4; return; /* ret */

loc_000A2B0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3D7583A6);
    ecx = eax + 0x28;
    PUSH32(esp, 0x000A2B1Eu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A2B1E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2B20
 * Original: 0x000A2B20 - 0x000A2B57 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A2B20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2B2D; /* je: equal / zero */

loc_000A2B28: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A2B2F;

loc_000A2B2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A2B2F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A2B56; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000A2B3D: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF9B4); /* mulss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    ecx = eax + 0x28;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A2B56u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A2B56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2B60
 * Original: 0x000A2B60 - 0x000A2B9F (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2B60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30F474;
    MEM32(esi + 8) = 0x30F470;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000A2B7Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A2B7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x28;
    PUSH32(esp, 0x000A2B88u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A2B88: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A2B90u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A2B90: ;
    MEM32(esi + 8) = 0x2FF77C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014B390(); return; /* tail jmp 0x0014B390 */

}

/**
 * sub_000A2BA0
 * Original: 0x000A2BA0 - 0x000A2BAB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2BA0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_000A2BB0
 * Original: 0x000A2BB0 - 0x000A2BBA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2BB0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2BC0
 * Original: 0x000A2BC0 - 0x000A2BF5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2BC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2BDF; /* je: equal / zero */

loc_000A2BC8: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x000A2BDEu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A2BDE: ;
    esp += 4; return; /* ret */

loc_000A2BDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x000A2BF4u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A2BF4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2C00
 * Original: 0x000A2C00 - 0x000A2C28 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A2C00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2C0D; /* je: equal / zero */

loc_000A2C08: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A2C0F;

loc_000A2C0D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A2C0F: ;
    eax = MEM32(eax + 0xC);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3543808E);
    ecx = eax + 8;
    PUSH32(esp, 0x000A2C22u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A2C22: ;
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
 * sub_000A2C30
 * Original: 0x000A2C30 - 0x000A2CFB (203 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A2C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A2C47; /* je: equal / zero */

loc_000A2C42: ;
    esi = eax + -8;
    goto loc_000A2C49;

loc_000A2C47: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A2C49: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A2CF5; /* jne: not equal / not zero */

loc_000A2C54: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A2C6Fu); RECOMP_ABI_CALL(0x000368C0u, sub_000368C0); /* call 0x000368C0 */

loc_000A2C6F: ;
    PUSH32(esp, 0xEB7EA942u);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A2C7Du); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000A2C7D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A2C83u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000A2C83: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4FBDD114);
    ecx = esp + 0x24;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A2CA0u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000A2CA0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A2CA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A2CA5u); } /* indirect call */
    }

loc_000A2CA8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x876C2D13u);
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A2CB7u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A2CB7: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E6C028B);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A2CCCu); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A2CCC: ;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A2CD8u); RECOMP_ABI_CALL(0x00037CD0u, sub_00037CD0); /* call 0x00037CD0 */

loc_000A2CD8: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000A2CF5; /* jne: not equal / not zero */

loc_000A2CE2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xDA37A82Bu);
    PUSH32(esp, 0x416FC28F);
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A2CF5u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A2CF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D00
 * Original: 0x000A2D00 - 0x000A2D8B (139 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D00(void)
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

loc_000A2D00: ;
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
    MEM32(esi) = 0x30F474;
    MEM32(edi) = 0x30F470;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000A2D32u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A2D32: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x000A2D3Au); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_000A2D3A: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000A2D42u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A2D42: ;
    PUSH32(esp, 0x30F428);
    ecx = ebx;
    PUSH32(esp, 0x000A2D4Eu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A2D4E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2D54u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A2D54: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xEAE32FDEu);
    ecx = eax + 8;
    PUSH32(esp, 0x000A2D6Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A2D6A: ;
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 4);
    PUSH32(esp, 0x6672B460);
    ecx = eax + 8;
    PUSH32(esp, 0x000A2D80u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A2D80: ;
    MEM8(esi + 0x24) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
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
 * sub_000A2D90
 * Original: 0x000A2D90 - 0x000A2E2C (156 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2D90: ;
    PUSH32(esp, esi);
    ecx = 0x3888C0;
    PUSH32(esp, 0x000A2D9Bu); RECOMP_ABI_CALL(0x00079160u, sub_00079160); /* call 0x00079160 */

loc_000A2D9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    esi = MEM32(esp + 8);
    if (CMP_A(_fa, _fb)) goto loc_000A2DD6; /* ja: above (unsigned >) */

loc_000A2DA4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA2E2C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000A2DABu) goto loc_000A2DAB;
    if (_jt == 0x000A2DB2u) goto loc_000A2DB2;
    if (_jt == 0x000A2DB9u) goto loc_000A2DB9;
    if (_jt == 0x000A2DC0u) goto loc_000A2DC0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A2DAB: ;
    PUSH32(esp, 0x115BC125);
    goto loc_000A2DC5;

loc_000A2DB2: ;
    PUSH32(esp, 0x46376A3);
    goto loc_000A2DC5;

loc_000A2DB9: ;
    PUSH32(esp, 0x164CB115);
    goto loc_000A2DC5;

loc_000A2DC0: ;
    PUSH32(esp, 0xF1FCC1B8u);

loc_000A2DC5: ;
    eax = MEM32(esi + 4);
    ecx = eax + 8;
    PUSH32(esp, 0x000A2DD0u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000A2DD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A2DD6; /* jne: not equal / not zero */

loc_000A2DD4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A2DD6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A2E0E; /* jne: not equal / not zero */

loc_000A2DDE: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x000A2DE5u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A2DE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2E00; /* je: equal / zero */

loc_000A2DEC: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A2DF4u); RECOMP_ABI_CALL(0x000A2D00u, sub_000A2D00); /* call 0x000A2D00 */

loc_000A2DF4: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2DFCu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A2DFC: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A2E00: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2E0Au); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A2E0A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A2E0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A2E28; /* jne: not equal / not zero */

loc_000A2E13: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A2E1Cu); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A2E1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2E28; /* je: equal / zero */

loc_000A2E20: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A2E28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A2E26u); } /* indirect call */
    }

loc_000A2E28: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E40
 * Original: 0x000A2E40 - 0x000A2E48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2E40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000A2E50(); return; /* tail jmp 0x000A2E50 */

}

/**
 * sub_000A2E50
 * Original: 0x000A2E50 - 0x000A2EA4 (84 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x30F474;
    MEM32(esi + 8) = 0x30F470;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000A2E6Du); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A2E6D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x28;
    PUSH32(esp, 0x000A2E78u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A2E78: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A2E80u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A2E80: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x000A2E8Eu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A2E8E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2E9E; /* je: equal / zero */

loc_000A2E95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2E9Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A2E9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A2E9E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2E73
 * Original: 0x000A2E73 - 0x000A2EA4 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E73(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2E73: ;
    PUSH32(esp, 0x000A2E78u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A2E78: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A2E80u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A2E80: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x000A2E8Eu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A2E8E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2E9E; /* je: equal / zero */

loc_000A2E95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2E9Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A2E9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A2E9E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2E78
 * Original: 0x000A2E78 - 0x000A2EA4 (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E78(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2E78: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A2E80u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A2E80: ;
    ecx = esi;
    MEM32(esi + 8) = 0x2FF77C;
    PUSH32(esp, 0x000A2E8Eu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A2E8E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2E9E; /* je: equal / zero */

loc_000A2E95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2E9Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A2E9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A2E9E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2EB0
 * Original: 0x000A2EB0 - 0x000A2EB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EB0(void)
{

loc_000A2EB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2EC0
 * Original: 0x000A2EC0 - 0x000A2EC9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EC0(void)
{

loc_000A2EC0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x63) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2ED0
 * Original: 0x000A2ED0 - 0x000A2ED9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2ED0(void)
{

loc_000A2ED0: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x62) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2EE0
 * Original: 0x000A2EE0 - 0x000A2F13 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EE0(void)
{

loc_000A2EE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x000A2EF6u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A2EF6: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B2DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2F0Du); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A2F0D: ;
    MEM8(esi + 0x61) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2F20
 * Original: 0x000A2F20 - 0x000A2F21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2F20(void)
{

loc_000A2F20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2F30
 * Original: 0x000A2F30 - 0x000A2F3F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2F30: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x63));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2F40
 * Original: 0x000A2F40 - 0x000A2F51 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2F40(void)
{

loc_000A2F40: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2F60
 * Original: 0x000A2F60 - 0x000A2F95 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2F60(void)
{

loc_000A2F60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2F74u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A2F74: ;
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
    PUSH32(esp, 0x000A2F91u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A2F91: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A2FA0
 * Original: 0x000A2FA0 - 0x000A2FA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2FA0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0014CBD0(); return; /* tail jmp 0x0014CBD0 */

}

/**
 * sub_000A2FB0
 * Original: 0x000A2FB0 - 0x000A2FDB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2FB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2FC8; /* je: equal / zero */

loc_000A2FB4: ;
    eax = ecx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x41A00000);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A2FC7u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A2FC7: ;
    esp += 4; return; /* ret */

loc_000A2FC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x41A00000);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A2FDAu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A2FDA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2FE0
 * Original: 0x000A2FE0 - 0x000A3009 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2FE0(void)
{

loc_000A2FE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi + 0x40;
    PUSH32(esp, 0x000A2FEDu); RECOMP_ABI_CALL(0x0014CBD0u, sub_0014CBD0); /* call 0x0014CBD0 */

loc_000A2FED: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A2FFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A2FF8u); } /* indirect call */
    }

loc_000A2FFB: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x000A3007u); RECOMP_ABI_CALL(0x00116A30u, sub_00116A30); /* call 0x00116A30 */

loc_000A3007: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3010
 * Original: 0x000A3010 - 0x000A3031 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3010: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 0x1128);
    _fa = (uint32_t)(MEM16(edx + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x1CE), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A3030; /* jle: less or equal (signed <=) */

loc_000A3027: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000A3030u); RECOMP_ABI_CALL(0x000F3AF0u, sub_000F3AF0); /* call 0x000F3AF0 */

loc_000A3030: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3040
 * Original: 0x000A3040 - 0x000A30A0 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3040: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115B) = 0;
    ecx = MEM32(esi + 0x20);
    MEM8(ecx + 0x115C) = 0;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0x1128);
    SET_LO8(ecx, MEM8(eax + 0x230));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A3076; /* je: equal / zero */

loc_000A306D: ;
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(eax + 0x230) = LO8(ecx);

loc_000A3076: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x000A3087u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3087: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30B2D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A309Eu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A309E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A30A0
 * Original: 0x000A30A0 - 0x000A30EB (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A30A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A30A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A30AE; /* je: equal / zero */

loc_000A30A9: ;
    eax = esi + 4;
    goto loc_000A30B0;

loc_000A30AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A30B0: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1128);
    edx = MEM32(ecx + 0x1C0);
    eax = (uint32_t)(int32_t)SMEM16(edx + 6);
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = esi + 0x28;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A30D8u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A30D8: ;
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A30E9; /* jne: not equal / not zero */

loc_000A30DD: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x41);
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000A30E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A30E6u); } /* indirect call */
    }

loc_000A30E9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A30F0
 * Original: 0x000A30F0 - 0x000A3125 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A30F0(void)
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

loc_000A30F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x42700000);
    PUSH32(esp, 0x41F00000);
    esi = ecx;
    PUSH32(esp, 0x000A3102u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000A3102: ;
    MEMF(esi + 0x58) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3727C4)); /* fmul dword ptr [0x3727c4] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B56AB9);
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A3123u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A3123: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A3130
 * Original: 0x000A3130 - 0x000A3145 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3130: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3142; /* je: equal / zero */

loc_000A313D: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x6C)); return; /* indirect tail jmp */

loc_000A3142: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3150
 * Original: 0x000A3150 - 0x000A316E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3150(void)
{

loc_000A3150: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0x1150);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3164u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A3164: ;
    ecx = eax;
    PUSH32(esp, 0x000A316Bu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A316B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A3170
 * Original: 0x000A3170 - 0x000A318E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3170(void)
{

loc_000A3170: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0x1154);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3184u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A3184: ;
    ecx = eax;
    PUSH32(esp, 0x000A318Bu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A318B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A3190
 * Original: 0x000A3190 - 0x000A3204 (116 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3190: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    edi = ecx;
    PUSH32(esp, 0x30B208);
    ecx = esi;
    PUSH32(esp, 0x000A31A8u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A31A8: ;
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30FCD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A31BCu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A31BC: ;
    eax = MEM32(esi + 0x1278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A31EA; /* jne: not equal / not zero */

loc_000A31C7: ;
    eax = MEM32(esi + 0x1220);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x42340000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A31DCu); RECOMP_ABI_CALL(0x001145C0u, sub_001145C0); /* call 0x001145C0 */

loc_000A31DC: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000A31E5u); RECOMP_ABI_CALL(0x000F39C0u, sub_000F39C0); /* call 0x000F39C0 */

loc_000A31E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A31EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A31FF; /* jne: not equal / not zero */

loc_000A31EF: ;
    ecx = MEM32(esi + 0x123C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x000A31FFu); RECOMP_ABI_CALL(0x00115B60u, sub_00115B60); /* call 0x00115B60 */

loc_000A31FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3210
 * Original: 0x000A3210 - 0x000A3280 (112 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3210: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x1154);
    PUSH32(esp, 0x7A3A16FA);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3227u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A3227: ;
    ecx = eax;
    PUSH32(esp, 0x000A322Eu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A322E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    if (CMP_EQ(_fa, _fb)) goto loc_000A325F; /* je: equal / zero */

loc_000A323E: ;
    PUSH32(esp, 0x000A3243u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3243: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30B2A8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x000A325Du); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A325D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A325F: ;
    PUSH32(esp, 0x000A3264u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3264: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A327Eu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A327E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A32A0
 * Original: 0x000A32A0 - 0x000A32A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A32A0(void)
{

loc_000A32A0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000A32B0
 * Original: 0x000A32B0 - 0x000A33B0 (256 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A32B0(void)
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

loc_000A32B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115B) = 1;
    ecx = MEM32(esi + 0x20);
    MEM8(ecx + 0x115C) = 1;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edx + 0x1124);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000A32DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A32D9u); } /* indirect call */
    }

loc_000A32DC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x000A32E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A32E2u); } /* indirect call */
    }

loc_000A32E8: ;
    PUSH32(esp, 0x42700000);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, 0x000A32F7u); RECOMP_ABI_CALL(0x000E7040u, sub_000E7040); /* call 0x000E7040 */

loc_000A32F7: ;
    MEMF(esi + 0x58) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3727C4)); /* fmul dword ptr [0x3727c4] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x34B56AB9);
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A3318u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A3318: ;
    ecx = esi;
    PUSH32(esp, 0x000A331Fu); RECOMP_ABI_CALL(0x000A3210u, sub_000A3210); /* call 0x000A3210 */

loc_000A331F: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED4));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A333C; /* je: equal / zero */

loc_000A3331: ;
    PUSH32(esp, 0x000A3336u); RECOMP_ABI_CALL(0x00082660u, sub_00082660); /* call 0x00082660 */

loc_000A3336: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3358; /* je: equal / zero */

loc_000A333A: ;
    goto loc_000A3356;

loc_000A333C: ;
    SET_LO8(eax, MEM8(0x3C250E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3356; /* jne: not equal / not zero */

loc_000A3345: ;
    xmm0 = XMM_SCALAR(MEMF(0x3C2514)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A3358; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000A3356: ;
    SET_LO8(ebx, 1);

loc_000A3358: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + 0x1128);
    _fa = (uint32_t)(MEM16(eax + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CE), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A33A9; /* jne: not equal / not zero */

loc_000A336B: ;
    _fa = (uint32_t)(MEM16(eax + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CC), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A33A9; /* jle: less or equal (signed <=) */

loc_000A3375: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A33A9; /* jne: not equal / not zero */

loc_000A3379: ;
    PUSH32(esp, 5);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = 0x2FF7D4;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x000A3394u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000A3394: ;
    edx = MEM32(edi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A33A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A339Du); } /* indirect call */
    }

loc_000A33A0: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000A33A9u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A33A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000A33B0
 * Original: 0x000A33B0 - 0x000A3424 (116 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A33B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A33B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x1154);
    PUSH32(esp, 0x4ADFCAD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A33C9u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A33C9: ;
    ecx = eax;
    PUSH32(esp, 0x000A33D0u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A33D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A33F2; /* je: equal / zero */

loc_000A33D4: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD0BAA075u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30FCAC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x000A33EEu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A33EE: ;
    MEM8(esi + 0x63) = 1;

loc_000A33F2: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0x1150);
    PUSH32(esp, 0x4ADFCAD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3406u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A3406: ;
    ecx = eax;
    PUSH32(esp, 0x000A340Du); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A340D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3422; /* je: equal / zero */

loc_000A3411: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30FCAC);
    PUSH32(esp, 0x000A3422u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3422: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3430
 * Original: 0x000A3430 - 0x000A3579 (329 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3430: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x115B) = LO8(ebx);
    ecx = MEM32(esi + 0x20);
    MEM8(ecx + 0x115C) = 1;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A345F; /* je: equal / zero */

loc_000A3458: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000A345Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A345Au); } /* indirect call */
    }

loc_000A345D: ;
    goto loc_000A3461;

loc_000A345F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3461: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x000A346Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3465u); } /* indirect call */
    }

loc_000A346B: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B260);
    MEM8(esi + 0x60) = LO8(ebx);
    PUSH32(esp, 0x000A347Eu); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A347E: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30B260);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3493u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A3493: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1124);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A34A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A349Eu); } /* indirect call */
    }

loc_000A34A1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x000A34ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A34A7u); } /* indirect call */
    }

loc_000A34AD: ;
    eax = MEM32(esi + 0x20);
    MEM8(esi + 0x65) = LO8(ebx);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A34C4; /* je: equal / zero */

loc_000A34BD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A34C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A34BFu); } /* indirect call */
    }

loc_000A34C2: ;
    goto loc_000A34C6;

loc_000A34C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A34C6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000A34D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A34CAu); } /* indirect call */
    }

loc_000A34D0: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x000A34DBu); RECOMP_ABI_CALL(0x000C6620u, sub_000C6620); /* call 0x000C6620 */

loc_000A34DB: ;
    _fa = (uint32_t)(MEM8(eax + 0x12E)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12E), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A354E; /* je: equal / zero */

loc_000A34E3: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A34F7; /* je: equal / zero */

loc_000A34F0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A34F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A34F2u); } /* indirect call */
    }

loc_000A34F5: ;
    goto loc_000A34F9;

loc_000A34F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A34F9: ;
    eax = MEM32(eax + 0x1C0);
    eax = eax >> 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A354E; /* je: equal / zero */

loc_000A3506: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3532; /* je: equal / zero */

loc_000A3513: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A3518u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3515u); } /* indirect call */
    }

loc_000A3518: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000A3521u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A351Eu); } /* indirect call */
    }

loc_000A3521: ;
    ecx = MEM32(esi + 0x20);
    MEM8(esi + 0x62) = LO8(ebx);
    MEM8(esi + 0x65) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000F3B60(); return; /* tail jmp 0x000F3B60 */

loc_000A3532: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000A353Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A353Au); } /* indirect call */
    }

loc_000A353D: ;
    ecx = MEM32(esi + 0x20);
    MEM8(esi + 0x62) = LO8(ebx);
    MEM8(esi + 0x65) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000F3B60(); return; /* tail jmp 0x000F3B60 */

loc_000A354E: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3562; /* je: equal / zero */

loc_000A355B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A3560u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A355Du); } /* indirect call */
    }

loc_000A3560: ;
    goto loc_000A3564;

loc_000A3562: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3564: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000A356Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3569u); } /* indirect call */
    }

loc_000A356C: ;
    ecx = MEM32(esi + 0x20);
    MEM8(esi + 0x62) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000F3B60(); return; /* tail jmp 0x000F3B60 */

}

/**
 * sub_000A3580
 * Original: 0x000A3580 - 0x000A3601 (129 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x65));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A35E0; /* je: equal / zero */

loc_000A358C: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A35A0; /* je: equal / zero */

loc_000A3599: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A359Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A359Bu); } /* indirect call */
    }

loc_000A359E: ;
    goto loc_000A35A2;

loc_000A35A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A35A2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000A35ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A35A6u); } /* indirect call */
    }

loc_000A35AC: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x000A35B7u); RECOMP_ABI_CALL(0x000C6620u, sub_000C6620); /* call 0x000C6620 */

loc_000A35B7: ;
    SET_LO8(ecx, MEM8(eax + 0x12E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A35E0; /* je: equal / zero */

loc_000A35C1: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A35D5; /* je: equal / zero */

loc_000A35CE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A35D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A35D0u); } /* indirect call */
    }

loc_000A35D3: ;
    goto loc_000A35D7;

loc_000A35D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A35D7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x000A35E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A35DDu); } /* indirect call */
    }

loc_000A35E0: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A35F5; /* je: equal / zero */

loc_000A35EE: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A35F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A35F0u); } /* indirect call */
    }

loc_000A35F3: ;
    goto loc_000A35F7;

loc_000A35F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A35F7: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x120)); return; /* indirect tail jmp */

}

/**
 * sub_000A3610
 * Original: 0x000A3610 - 0x000A3683 (115 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3610: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1128);
    SET_LO8(eax, 1);
    MEM8(ecx + 0x2BD) = LO8(eax);
    edx = MEM32(esi + 0x20);
    MEM8(esi + 0x61) = LO8(eax);
    MEM8(esi + 0x64) = LO8(eax);
    eax = MEM32(edx + 0x1128);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CE), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A367A; /* jne: not equal / not zero */

loc_000A3644: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A367A; /* jle: less or equal (signed <=) */

loc_000A3649: ;
    PUSH32(esp, 0xA90556C8u);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0x2FF7D4;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x000A3663u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000A3663: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A3671u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A366Eu); } /* indirect call */
    }

loc_000A3671: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000A367Au); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A367A: ;
    MEM32(esi + 0x5C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3690
 * Original: 0x000A3690 - 0x000A36C4 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3690: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1128);
    PUSH32(esp, 0x000A36A3u); RECOMP_ABI_CALL(0x00188250u, sub_00188250); /* call 0x00188250 */

loc_000A36A3: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A36B8; /* je: equal / zero */

loc_000A36B1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A36B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A36B3u); } /* indirect call */
    }

loc_000A36B6: ;
    goto loc_000A36BA;

loc_000A36B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A36BA: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x118)); return; /* indirect tail jmp */

}

/**
 * sub_000A36D0
 * Original: 0x000A36D0 - 0x000A36ED (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A36D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A36D0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x20);
    SET_LO8(eax, 1);
    MEM8(edx + 0x115B) = LO8(eax);
    edx = MEM32(ecx + 0x20);
    MEM8(edx + 0x115C) = LO8(eax);
    g_seh_ebp = ebp; sub_000A3210(); return; /* tail jmp 0x000A3210 */

}

/**
 * sub_000A36F0
 * Original: 0x000A36F0 - 0x000A3801 (273 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A36F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A36F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115B) = 0;
    ecx = MEM32(esi + 0x20);
    MEM8(ecx + 0x115C) = 0;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edx + 0x1128);
    PUSH32(esp, 0x000A3717u); RECOMP_ABI_CALL(0x00188250u, sub_00188250); /* call 0x00188250 */

loc_000A3717: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A372B; /* je: equal / zero */

loc_000A3724: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A3729u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3726u); } /* indirect call */
    }

loc_000A3729: ;
    goto loc_000A372D;

loc_000A372B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A372D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000A3737u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3731u); } /* indirect call */
    }

loc_000A3737: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x000A3748u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3748: ;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x1154);
    PUSH32(esp, 0xAD637EE8u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A375Cu); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A375C: ;
    ecx = eax;
    PUSH32(esp, 0x000A3763u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A3763: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3783; /* je: equal / zero */

loc_000A3767: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80811888u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30FCE0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x000A3781u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A3781: ;
    goto loc_000A37CF;

loc_000A3783: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0x1154);
    PUSH32(esp, 0x6C1B89EA);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3797u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A3797: ;
    ecx = eax;
    PUSH32(esp, 0x000A379Eu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A379E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A37CF; /* je: equal / zero */

loc_000A37A2: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80811888u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30FCD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A37BCu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A37BC: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x41A00000);
    ecx = esi + 0x28;
    PUSH32(esp, 0x000A37CFu); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A37CF: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0x1150);
    PUSH32(esp, 0xAD637EE8u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A37E3u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A37E3: ;
    ecx = eax;
    PUSH32(esp, 0x000A37EAu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A37EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A37FF; /* je: equal / zero */

loc_000A37EE: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30FCE0);
    PUSH32(esp, 0x000A37FFu); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A37FF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3810
 * Original: 0x000A3810 - 0x000A38E5 (213 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3810: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1128);
    PUSH32(esp, 0x000A3823u); RECOMP_ABI_CALL(0x00188250u, sub_00188250); /* call 0x00188250 */

loc_000A3823: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x000A3834u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3834: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3848; /* je: equal / zero */

loc_000A3841: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A3846u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3843u); } /* indirect call */
    }

loc_000A3846: ;
    goto loc_000A384A;

loc_000A3848: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A384A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x128); PUSH32(esp, 0x000A3854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A384Eu); } /* indirect call */
    }

loc_000A3854: ;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x1154);
    PUSH32(esp, 0x86ADE4B4u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3868u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A3868: ;
    ecx = eax;
    PUSH32(esp, 0x000A386Fu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A386F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, 0xDC217386u);
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_000A388F; /* je: equal / zero */

loc_000A387C: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x30FCE8);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x000A388Du); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A388D: ;
    goto loc_000A38B3;

loc_000A388F: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A38A0u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A38A0: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x41A00000);
    ecx = esi + 0x28;
    PUSH32(esp, 0x000A38B3u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A38B3: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + 0x1150);
    PUSH32(esp, 0x86ADE4B4u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A38C7u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A38C7: ;
    ecx = eax;
    PUSH32(esp, 0x000A38CEu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A38CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A38E3; /* je: equal / zero */

loc_000A38D2: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30FCE8);
    PUSH32(esp, 0x000A38E3u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A38E3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A38F0
 * Original: 0x000A38F0 - 0x000A3A1B (299 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A38F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A38F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A390C; /* je: equal / zero */

loc_000A3905: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A390Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3907u); } /* indirect call */
    }

loc_000A390A: ;
    goto loc_000A390E;

loc_000A390C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A390E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2000000);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x000A391Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3917u); } /* indirect call */
    }

loc_000A391A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3955; /* jne: not equal / not zero */

loc_000A391E: ;
    PUSH32(esp, 9);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x000A3939u); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000A3939: ;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A3947u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3944u); } /* indirect call */
    }

loc_000A3947: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000A3950u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A3950: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A3955: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30FCD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A396Cu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A396C: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + 0x1150);
    PUSH32(esp, 0x6C1B89EA);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3980u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A3980: ;
    ecx = eax;
    PUSH32(esp, 0x000A3987u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A3987: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    if (CMP_EQ(_fa, _fb)) goto loc_000A3999; /* je: equal / zero */

loc_000A3992: ;
    PUSH32(esp, 0x30FCD0);
    goto loc_000A399E;

loc_000A3999: ;
    PUSH32(esp, 0x30B208);

loc_000A399E: ;
    PUSH32(esp, 0x000A39A3u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A39A3: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0x1128);
    _fa = (uint32_t)(MEM16(eax + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CE), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A39F2; /* jne: not equal / not zero */

loc_000A39B6: ;
    _fa = (uint32_t)(MEM16(eax + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CC), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A39F2; /* jle: less or equal (signed <=) */

loc_000A39C0: ;
    PUSH32(esp, 5);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x2FF7D4;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x000A39DBu); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000A39DB: ;
    eax = MEM32(esi + 4);
    ecx = esi + 4;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A39E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A39E6u); } /* indirect call */
    }

loc_000A39E9: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000A39F2u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A39F2: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x127C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3A16; /* je: equal / zero */

loc_000A39FF: ;
    edx = MEM32(esi + 0x24);
    SET_LO8(ecx, 1);
    MEM8(edx + 0x1130) = LO8(ecx);
    MEM8(eax + 0x115A) = LO8(ecx);
    MEM8(eax + 0x1280) = LO8(ecx);

loc_000A3A16: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3A20
 * Original: 0x000A3A20 - 0x000A3A54 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3A20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1128);
    PUSH32(esp, 0x000A3A33u); RECOMP_ABI_CALL(0x00188250u, sub_00188250); /* call 0x00188250 */

loc_000A3A33: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A3A48; /* je: equal / zero */

loc_000A3A41: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A3A46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3A43u); } /* indirect call */
    }

loc_000A3A46: ;
    goto loc_000A3A4A;

loc_000A3A48: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3A4A: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x118)); return; /* indirect tail jmp */

}

/**
 * sub_000A3A60
 * Original: 0x000A3A60 - 0x000A3AFE (158 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3A60: ;
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
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_000A3AF2; /* je: equal / zero */

loc_000A3A91: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B208);
    PUSH32(esp, 0x000A3A9Du); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3A9D: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x37DF4A8D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x306CA4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x000A3AB7u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A3AB7: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3ACB; /* je: equal / zero */

loc_000A3AC4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000A3AC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3AC6u); } /* indirect call */
    }

loc_000A3AC9: ;
    goto loc_000A3ACD;

loc_000A3ACB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3ACD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000A3AE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3ADFu); } /* indirect call */
    }

loc_000A3AE5: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x000A3AF0u); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_000A3AF0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3AF2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37DF4A8D);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000A3AFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3AF9u); } /* indirect call */
    }

loc_000A3AFC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3B00
 * Original: 0x000A3B00 - 0x000A3BD1 (209 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3B00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1128);
    eax = MEM32(edi + 0x1C0);
    edx = MEM32(eax + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x985ED31Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x985ED31Cu (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = esi + 4;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x28);
    ecx = ecx + ecx + 1;
    MEM32(esi + 0x5C) = ecx;
    edx = MEM32(edi + 0x1C0);
    eax = (uint32_t)(int32_t)SMEM16(edx + 6);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = esi + 0x28;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A3B51u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A3B51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x1CC), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3BBA; /* jne: not equal / not zero */

loc_000A3B5C: ;
    ecx = MEM32(esi + 0x20);
    MEM32(esp + 0x10) = 0x2FF7D4;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3B7A; /* je: equal / zero */

loc_000A3B75: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A3B7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3B77u); } /* indirect call */
    }

loc_000A3B7A: ;
    eax = MEM32(eax + 0x1C0);
    eax = eax >> 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = esp + 0x10;
    if (TEST_NZ(_fa, _fb)) goto loc_000A3B92; /* jne: not equal / not zero */

loc_000A3B8B: ;
    PUSH32(esp, 0x327B6CE0);
    goto loc_000A3B97;

loc_000A3B92: ;
    PUSH32(esp, 0x54BA1402);

loc_000A3B97: ;
    PUSH32(esp, 0x000A3B9Cu); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000A3B9C: ;
    edx = MEM32(ebp);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A3BA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3BA6u); } /* indirect call */
    }

loc_000A3BA9: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A3BB2u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A3BB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A3BBA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30FCA4);
    ecx = ebx;
    PUSH32(esp, 0x000A3BC9u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3BC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3BE0
 * Original: 0x000A3BE0 - 0x000A3C85 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3BE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x24);
    SET_LO8(eax, 1);
    MEM8(ecx + 0x1130) = LO8(eax);
    edx = MEM32(esi + 0x20);
    MEM8(edx + 0x115A) = LO8(eax);
    eax = MEM32(esi + 0x20);
    MEM8(eax + 0x115B) = 0;
    ecx = MEM32(esi + 0x20);
    MEM8(ecx + 0x115C) = 0;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3C21; /* je: equal / zero */

loc_000A3C1A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000A3C1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3C1Cu); } /* indirect call */
    }

loc_000A3C1F: ;
    goto loc_000A3C23;

loc_000A3C21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3C23: ;
    eax = MEM32(eax + 0x3F8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A3C6A; /* je: equal / zero */

loc_000A3C2E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A3C4F; /* je: equal / zero */

loc_000A3C31: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A3C83; /* jne: not equal / not zero */

loc_000A3C34: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xDC1BDE1Du);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3030BC);
    PUSH32(esp, 0x000A3C4Du); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_000A3C4D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3C4F: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xDC1BDE1Du);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30B248);
    PUSH32(esp, 0x000A3C68u); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_000A3C68: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3C6A: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xDC1BDE1Du);
    PUSH32(esp, 2);
    PUSH32(esp, 0x30B234);
    PUSH32(esp, 0x000A3C83u); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_000A3C83: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3C90
 * Original: 0x000A3C90 - 0x000A3CCD (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3C90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3CA9; /* je: equal / zero */

loc_000A3CA2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A3CA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3CA4u); } /* indirect call */
    }

loc_000A3CA7: ;
    goto loc_000A3CAB;

loc_000A3CA9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3CAB: ;
    ecx = MEM32(esi + 0x24);
    MEM8(ecx + 0x1130) = 0;
    edx = MEM32(esi + 0x20);
    ecx = eax + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(edx + 0x115A) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000A3CCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3CC8u); } /* indirect call */
    }

loc_000A3CCB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3CD0
 * Original: 0x000A3CD0 - 0x000A3D21 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A3CD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3CE9; /* je: equal / zero */

loc_000A3CE2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A3CE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3CE4u); } /* indirect call */
    }

loc_000A3CE7: ;
    goto loc_000A3CEB;

loc_000A3CE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3CEB: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x418)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x58); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A3D05; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x58)) */

loc_000A3CF9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x58) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3D05: ;
    ecx = MEM32(0x3727C4);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x34B56AB9);
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    PUSH32(esp, 0x000A3D1Du); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_000A3D1D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3D20
 * Original: 0x000A3D20 - 0x000A3D21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3D20(void)
{

loc_000A3D20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3D30
 * Original: 0x000A3D30 - 0x000A3D8E (94 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3D30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1128);
    _fa = (uint32_t)(MEM16(ecx + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1CE), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3D6F; /* jne: not equal / not zero */

loc_000A3D48: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3D58; /* je: equal / zero */

loc_000A3D4F: ;
    PUSH32(esp, 0x000A3D54u); RECOMP_ABI_CALL(0x00188680u, sub_00188680); /* call 0x00188680 */

loc_000A3D54: ;
    MEM8(esi + 0x64) = 0;

loc_000A3D58: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1128);
    _fa = (uint32_t)(MEM16(ecx + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1CC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3D6F; /* jne: not equal / not zero */

loc_000A3D6B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3D6F: ;
    edx = MEM32(ecx + 0x1C0);
    SET_LO8(eax, MEM8(edx + 0x4A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3D87; /* jne: not equal / not zero */

loc_000A3D7C: ;
    SET_LO8(eax, MEM8(esi + 0x61));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3D87; /* jne: not equal / not zero */

loc_000A3D83: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3D87: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3D90
 * Original: 0x000A3D90 - 0x000A3E63 (211 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3D90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x1154);
    PUSH32(esp, 0x90A78F3Du);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3DA9u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A3DA9: ;
    ecx = eax;
    PUSH32(esp, 0x000A3DB0u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A3DB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3DB8; /* jne: not equal / not zero */

loc_000A3DB4: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3DB8: ;
    SET_LO8(eax, MEM8(esi + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3DB4; /* jne: not equal / not zero */

loc_000A3DBF: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1128);
    SET_LO16(edx, MEM16(ecx + 0x1CE));
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C0);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(edi + 4) (16-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A3E26; /* je: equal / zero */

loc_000A3DDD: ;
    _fa = (uint32_t)(MEM16(ecx + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1CC), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A3E26; /* jle: less or equal (signed <=) */

loc_000A3DE7: ;
    SET_LO8(ecx, MEM8(esi + 0x62));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3DFD; /* je: equal / zero */

loc_000A3DEE: ;
    SET_LO8(ecx, MEM8(eax + 0x1290));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3DFD; /* je: equal / zero */

loc_000A3DF8: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A3E26; /* jg: greater (signed >) */

loc_000A3DFD: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30FD00);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3E11u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A3E11: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30FD00);
    PUSH32(esp, 0x000A3E22u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3E22: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3E26: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30FCF4);
    PUSH32(esp, eax);
    MEM8(esi + 0x60) = 1;
    PUSH32(esp, 0x000A3E3Eu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A3E3E: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30FCF4);
    PUSH32(esp, 0x000A3E4Fu); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3E4F: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + 0x1128);
    MEM8(eax + 0x230) = MEM8(eax + 0x230) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0x230)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3E70
 * Original: 0x000A3E70 - 0x000A3EEB (123 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3E70: ;
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
    PUSH32(esp, 0x000A3E9Bu); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A3E9B: ;
    ecx = esi + 0x28;
    MEM32(esi) = 0x30FD28;
    MEM32(edi) = 0x30FD10;
    PUSH32(esp, 0x000A3EAFu); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_000A3EAF: ;
    ecx = esi + 0x40;
    PUSH32(esp, 0x000A3EB7u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_000A3EB7: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000A3EC6u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A3EC6: ;
    PUSH32(esp, 0x30FBF4);
    ecx = ebx;
    PUSH32(esp, 0x000A3ED2u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A3ED2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A3ED8u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A3ED8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    MEM8(esi + 0x61) = LO8(eax);
    MEM8(esi + 0x64) = LO8(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A3EF0
 * Original: 0x000A3EF0 - 0x000A3F40 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3EF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = esi + 0x40;
    MEM32(esi) = 0x30FD28;
    MEM32(edi) = 0x30FD10;
    PUSH32(esp, 0x000A3F0Bu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A3F0B: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x000A3F13u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_000A3F13: ;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3097B4;
    MEM32(edi) = 0x30803C;
    PUSH32(esp, 0x000A3F25u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A3F25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A3F30u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A3F30: ;
    ecx = edi;
    PUSH32(esp, 0x000A3F37u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A3F37: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3F40
 * Original: 0x000A3F40 - 0x000A4010 (208 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3F40: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x61) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000A3F7A; /* je: equal / zero */

loc_000A3F50: ;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x1150);
    PUSH32(esp, 0xE8E13530u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3F64u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A3F64: ;
    ecx = eax;
    PUSH32(esp, 0x000A3F6Bu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A3F6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3F7A; /* je: equal / zero */

loc_000A3F6F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30FD44);
    goto loc_000A3FBD;

loc_000A3F7A: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1128);
    _fa = (uint32_t)(MEM16(ecx + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x1CE), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3FB4; /* jne: not equal / not zero */

loc_000A3F8D: ;
    eax = MEM32(eax + 0x1150);
    PUSH32(esp, 0x486B9040);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3F9Eu); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A3F9E: ;
    ecx = eax;
    PUSH32(esp, 0x000A3FA5u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A3FA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3FB4; /* je: equal / zero */

loc_000A3FA9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30FD38);
    goto loc_000A3FBD;

loc_000A3FB4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B210);

loc_000A3FBD: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x000A3FC5u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A3FC5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82BFD741u);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_000A3FE0; /* jne: not equal / not zero */

loc_000A3FD5: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0x30B210);
    PUSH32(esp, edx);
    goto loc_000A3FE9;

loc_000A3FE0: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, 0x30FD44);
    PUSH32(esp, eax);

loc_000A3FE9: ;
    PUSH32(esp, 0x000A3FEEu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A3FEE: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1124);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A3FFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A3FF9u); } /* indirect call */
    }

loc_000A3FFC: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = 2;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x13C)); return; /* indirect tail jmp */

}

/**
 * sub_000A4040
 * Original: 0x000A4040 - 0x000A40A5 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4040: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4084; /* jne: not equal / not zero */

loc_000A4048: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x000A4050u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A4050: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4076; /* je: equal / zero */

loc_000A405B: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A4063u); RECOMP_ABI_CALL(0x000A3E70u, sub_000A3E70); /* call 0x000A3E70 */

loc_000A4063: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4076; /* je: equal / zero */

loc_000A4067: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4072u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A4072: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A4076: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4080u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A4080: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A4084: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A40A2; /* jne: not equal / not zero */

loc_000A4089: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A4096u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A4096: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A40A2; /* je: equal / zero */

loc_000A409A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A40A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A40A0u); } /* indirect call */
    }

loc_000A40A2: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A40B0
 * Original: 0x000A40B0 - 0x000A4189 (217 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A40B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A40B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1124);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A40D3; /* je: equal / zero */

loc_000A40CA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A40CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A40CCu); } /* indirect call */
    }

loc_000A40CF: ;
    ebp = eax;
    goto loc_000A40D5;

loc_000A40D3: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A40D5: ;
    eax = MEM32(esi + 0x20);
    edi = MEM32(eax + 0x1128);
    ecx = MEM32(edi + 0x1C0);
    _fa = (uint32_t)(MEM8(ecx + 0x4A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x4A), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A40F2; /* jne: not equal / not zero */

loc_000A40E9: ;
    _fa = (uint32_t)(MEM8(esi + 0x61)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x61), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4181; /* je: equal / zero */

loc_000A40F2: ;
    _fa = (uint32_t)(MEM16(edi + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x1CE), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A414B; /* je: equal / zero */

loc_000A40FB: ;
    eax = MEM32(edi + 0x1C0);
    edx = MEM32(eax + 0x30);
    eax = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000A4112u); RECOMP_ABI_CALL(0x00114050u, sub_00114050); /* call 0x00114050 */

loc_000A4112: ;
    ecx = MEM32(esi + 0x20);
    MEM8(ecx + 0x115B) = LO8(ebx);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(edx + 0x115C) = LO8(ebx);
    PUSH32(esp, 0x000A412Cu); RECOMP_ABI_CALL(0x000A3F40u, sub_000A3F40); /* call 0x000A3F40 */

loc_000A412C: ;
    MEM8(edi + 0x2BD) = LO8(ebx);
    MEM8(edi + 0x2BE) = LO8(ebx);
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x114); PUSH32(esp, 0x000A4143u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A413Du); } /* indirect call */
    }

loc_000A4143: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A414B: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4181; /* jne: not equal / not zero */

loc_000A4150: ;
    PUSH32(esp, 0xA90556C8u);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = 0x2FF7D4;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000A416Au); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000A416A: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A4178u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4175u); } /* indirect call */
    }

loc_000A4178: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A4181u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A4181: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4190
 * Original: 0x000A4190 - 0x000A427E (238 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4190(void)
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

loc_000A4190: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1128);
    _fa = (uint32_t)(MEM16(esi + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x1CE), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A427B; /* je: equal / zero */

loc_000A41AD: ;
    ecx = MEM32(esi + 0x1C0);
    SET_LO8(eax, MEM8(ecx + 0x4A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A41C5; /* jne: not equal / not zero */

loc_000A41BA: ;
    SET_LO8(eax, MEM8(ebx + 0x61));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A427B; /* je: equal / zero */

loc_000A41C5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1D4); /* comiss */
    if ((_fca >= _fcb)) goto loc_000A41ED; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esi + 0x1D4)) */

loc_000A41D1: ;
    SET_LO8(eax, MEM8(esi + 0x2BE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A427B; /* je: equal / zero */

loc_000A41DF: ;
    SET_LO8(eax, MEM8(esi + 0x2BD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A427B; /* je: equal / zero */

loc_000A41ED: ;
    MEM8(esi + 0x2BD) = 0;
    MEM8(esi + 0x2BE) = 0;
    edx = MEM32(ebx + 0x20);
    ecx = MEM32(edx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A420F; /* je: equal / zero */

loc_000A4208: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000A420Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A420Au); } /* indirect call */
    }

loc_000A420D: ;
    goto loc_000A4211;

loc_000A420F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A4211: ;
    esi = MEM32(esi + 0x1C0);
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000A422Cu); RECOMP_ABI_CALL(0x00114050u, sub_00114050); /* call 0x00114050 */

loc_000A422C: ;
    eax = MEM32(ebx + 4);
    ebp = ebx + 4;
    ecx = ebp;
    edi = 0x30BEFC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A423Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4239u); } /* indirect call */
    }

loc_000A423C: ;
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
    if ((_flags == 0)) goto loc_000A4256; /* jne: not equal / not zero */

loc_000A4249: ;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x000A4251u); RECOMP_ABI_CALL(0x000A3F40u, sub_000A3F40); /* call 0x000A3F40 */

loc_000A4251: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A4256: ;
    eax = MEM32(ebp);
    ecx = ebp;
    edi = 0x30FCC4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A4263u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4260u); } /* indirect call */
    }

loc_000A4263: ;
    esi = eax;
    ecx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_000A4279; /* jne: not equal / not zero */

loc_000A4270: ;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x000A4279u); RECOMP_ABI_CALL(0x000A3F40u, sub_000A3F40); /* call 0x000A3F40 */

loc_000A4279: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000A427B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4280
 * Original: 0x000A4280 - 0x000A42A7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4280: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A42A6; /* je: equal / zero */

loc_000A4291: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A4296u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4293u); } /* indirect call */
    }

loc_000A4296: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A42A6; /* je: equal / zero */

loc_000A429A: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000A42A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A42A3u); } /* indirect call */
    }

loc_000A42A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A42B0
 * Original: 0x000A42B0 - 0x000A42D7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A42B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A42B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    ecx = MEM32(ecx + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A42D6; /* je: equal / zero */

loc_000A42C1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A42C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A42C3u); } /* indirect call */
    }

loc_000A42C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A42D6; /* je: equal / zero */

loc_000A42CA: ;
    ecx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000A42D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A42D3u); } /* indirect call */
    }

loc_000A42D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A42E0
 * Original: 0x000A42E0 - 0x000A4458 (376 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A42E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A42E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x1128);
    edx = MEM32(ecx + 0x1C0);
    SET_LO8(ecx, MEM8(edx + 0x4A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4309; /* jne: not equal / not zero */

loc_000A42FE: ;
    SET_LO8(ecx, MEM8(esi + 0x61));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4453; /* je: equal / zero */

loc_000A4309: ;
    ecx = MEM32(eax + 0x1124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A431D; /* je: equal / zero */

loc_000A4314: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000A4319u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4316u); } /* indirect call */
    }

loc_000A4319: ;
    edi = eax;
    goto loc_000A431F;

loc_000A431D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A431F: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + 0x1128);
    _fa = (uint32_t)(MEM16(eax + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CE), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A440C; /* je: equal / zero */

loc_000A4336: ;
    eax = MEM32(eax + 0x1C0);
    edx = MEM32(eax + 0x30);
    eax = MEM32(eax + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A434Fu); RECOMP_ABI_CALL(0x00114050u, sub_00114050); /* call 0x00114050 */

loc_000A434F: ;
    ecx = MEM32(esi + 0x20);
    MEM8(esi + 0x61) = 0;
    eax = MEM32(ecx + 0x1150);
    PUSH32(esp, 0xE8E13530u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4367u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A4367: ;
    ecx = eax;
    PUSH32(esp, 0x000A436Eu); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A436E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A437D; /* je: equal / zero */

loc_000A4372: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30FD44);
    goto loc_000A43C0;

loc_000A437D: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + 0x1128);
    _fa = (uint32_t)(MEM16(edx + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x1CE), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A43B7; /* jne: not equal / not zero */

loc_000A4390: ;
    eax = MEM32(eax + 0x1150);
    PUSH32(esp, 0x486B9040);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A43A1u); RECOMP_ABI_CALL(0x000506E0u, sub_000506E0); /* call 0x000506E0 */

loc_000A43A1: ;
    ecx = eax;
    PUSH32(esp, 0x000A43A8u); RECOMP_ABI_CALL(0x00050760u, sub_00050760); /* call 0x00050760 */

loc_000A43A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A43B7; /* je: equal / zero */

loc_000A43AC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30FD38);
    goto loc_000A43C0;

loc_000A43B7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x30B210);

loc_000A43C0: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x000A43C8u); RECOMP_ABI_CALL(0x000F4420u, sub_000F4420); /* call 0x000F4420 */

loc_000A43C8: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82BFD741u);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30FD44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A43E2u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_000A43E2: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + 0x1124);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A43F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A43EDu); } /* indirect call */
    }

loc_000A43F0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x000A43FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A43F6u); } /* indirect call */
    }

loc_000A43FC: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x114); PUSH32(esp, 0x000A4406u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4400u); } /* indirect call */
    }

loc_000A4406: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A440C: ;
    _fa = (uint32_t)(MEM16(eax + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4452; /* jne: not equal / not zero */

loc_000A4416: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4452; /* jne: not equal / not zero */

loc_000A441D: ;
    PUSH32(esp, 0xA90556C8u);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = 0x2FF7D4;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000A443Bu); RECOMP_ABI_CALL(0x0014B400u, sub_0014B400); /* call 0x0014B400 */

loc_000A443B: ;
    edx = MEM32(esi + 4);
    ecx = esi + 4;
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A4449u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4446u); } /* indirect call */
    }

loc_000A4449: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000A4452u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_000A4452: ;
    POP32(esp, edi);

loc_000A4453: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4460
 * Original: 0x000A4460 - 0x000A4468 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4460: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000A4470(); return; /* tail jmp 0x000A4470 */

}

/**
 * sub_000A4470
 * Original: 0x000A4470 - 0x000A448E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4470: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A4478u); RECOMP_ABI_CALL(0x000A3EF0u, sub_000A3EF0); /* call 0x000A3EF0 */

loc_000A4478: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4488; /* je: equal / zero */

loc_000A447F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A4485u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A4485: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A4488: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4490
 * Original: 0x000A4490 - 0x000A4497 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4490(void)
{

loc_000A4490: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A44A0
 * Original: 0x000A44A0 - 0x000A44A9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A44A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A44A0: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000A44B0
 * Original: 0x000A44B0 - 0x000A44CC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A44B0(void)
{

loc_000A44B0: ;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(ecx + 0x24);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A44C2u); RECOMP_ABI_CALL(0x000C1BA0u, sub_000C1BA0); /* call 0x000C1BA0 */

loc_000A44C2: ;
    ecx = eax;
    PUSH32(esp, 0x000A44C9u); RECOMP_ABI_CALL(0x000C1FA0u, sub_000C1FA0); /* call 0x000C1FA0 */

loc_000A44C9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A44D0
 * Original: 0x000A44D0 - 0x000A44D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A44D0(void)
{

loc_000A44D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A44E0
 * Original: 0x000A44E0 - 0x000A457F (159 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A44E0(void)
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

loc_000A44E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(edi) = 0x2FF764;
    MEM32(edi + 4) = 0;
    ebx = esi + 0x10;
    ecx = ebx;
    MEM32(esi) = 0x30FDA4;
    MEM32(edi) = 0x30FD8C;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000A4513u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A4513: ;
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x6E296A2B);
    ecx = ebp;
    PUSH32(esp, 0x000A4526u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A4526: ;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2DC72F83);
    ecx = ebp;
    PUSH32(esp, 0x000A4535u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000A4535: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A453Bu); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000A453B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB4CE7E39u);
    ecx = ebp;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x000A454Du); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000A454D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4553u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000A4553: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x000A4561u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A4561: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A4567u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A4567: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x30FD74);
    ecx = ebx;
    PUSH32(esp, 0x000A4576u); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A4576: ;
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
 * sub_000A4580
 * Original: 0x000A4580 - 0x000A45BB (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4580: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30FDA4;
    MEM32(edi) = 0x30FD8C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000A45A0u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A45A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A45ABu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A45AB: ;
    ecx = edi;
    PUSH32(esp, 0x000A45B2u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A45B2: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A45C0
 * Original: 0x000A45C0 - 0x000A45CB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A45C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A45C0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_000A45D0
 * Original: 0x000A45D0 - 0x000A45DA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A45D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A45D0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A45E0
 * Original: 0x000A45E0 - 0x000A4623 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A45E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A45E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4622; /* je: equal / zero */

loc_000A45E8: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A45F1u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_000A45F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4622; /* je: equal / zero */

loc_000A45F8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000A45FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A45FCu); } /* indirect call */
    }

loc_000A45FF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000A4609u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4603u); } /* indirect call */
    }

loc_000A4609: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x28);
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A461Bu); RECOMP_ABI_CALL(0x000C1BA0u, sub_000C1BA0); /* call 0x000C1BA0 */

loc_000A461B: ;
    ecx = eax;
    PUSH32(esp, 0x000A4622u); RECOMP_ABI_CALL(0x000C1FA0u, sub_000C1FA0); /* call 0x000C1FA0 */

loc_000A4622: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4630
 * Original: 0x000A4630 - 0x000A4699 (105 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4630: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4678; /* jne: not equal / not zero */

loc_000A4638: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x000A4640u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A4640: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A466A; /* je: equal / zero */

loc_000A464B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A4657u); RECOMP_ABI_CALL(0x000A44E0u, sub_000A44E0); /* call 0x000A44E0 */

loc_000A4657: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A466A; /* je: equal / zero */

loc_000A465B: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4666u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A4666: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A466A: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4674u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A4674: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A4678: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4696; /* jne: not equal / not zero */

loc_000A467D: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A468Au); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A468A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4696; /* je: equal / zero */

loc_000A468E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A4696u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4694u); } /* indirect call */
    }

loc_000A4696: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A46A0
 * Original: 0x000A46A0 - 0x000A46A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A46A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A46A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000A46B0(); return; /* tail jmp 0x000A46B0 */

}

/**
 * sub_000A46B0
 * Original: 0x000A46B0 - 0x000A46FF (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A46B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A46B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30FDA4;
    MEM32(edi) = 0x30FD8C;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000A46D0u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A46D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A46DBu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A46DB: ;
    ecx = edi;
    PUSH32(esp, 0x000A46E2u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A46E2: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_000A46F8; /* je: equal / zero */

loc_000A46EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A46F5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A46F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A46F8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4700
 * Original: 0x000A4700 - 0x000A4707 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4700(void)
{

loc_000A4700: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4710
 * Original: 0x000A4710 - 0x000A4719 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4710: ;
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000A4720
 * Original: 0x000A4720 - 0x000A4748 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4720(void)
{

loc_000A4720: ;
    eax = MEM32(ecx + 0x34);
    edx = MEM32(ecx + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x24);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A473Eu); RECOMP_ABI_CALL(0x000C1BA0u, sub_000C1BA0); /* call 0x000C1BA0 */

loc_000A473E: ;
    ecx = eax;
    PUSH32(esp, 0x000A4745u); RECOMP_ABI_CALL(0x000C20F0u, sub_000C20F0); /* call 0x000C20F0 */

loc_000A4745: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4750
 * Original: 0x000A4750 - 0x000A4751 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4750(void)
{

loc_000A4750: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4760
 * Original: 0x000A4760 - 0x000A476A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4760: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4766u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A4766: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4770
 * Original: 0x000A4770 - 0x000A4857 (231 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4770(void)
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

loc_000A4770: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 4;
    MEM32(ebx) = 0x2FF764;
    MEM32(ebx + 4) = 0;
    ebp = esi + 0x10;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esi) = 0x30FE00;
    MEM32(ebx) = 0x30FDE8;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000A47A3u); RECOMP_ABI_CALL(0x0014C000u, sub_0014C000); /* call 0x0014C000 */

loc_000A47A3: ;
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x6E296A2B);
    ecx = edi;
    PUSH32(esp, 0x000A47B6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000A47B6: ;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x9FB93BDEu);
    ecx = edi;
    PUSH32(esp, 0x000A47C5u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000A47C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A47CBu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A47CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x6B06A64);
    ecx = edi;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x000A47DDu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000A47DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A47E3u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A47E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x71B75AF2);
    ecx = edi;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x000A47F5u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000A47F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A47FBu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A47FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xEFD3CF51u);
    ecx = edi;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x000A480Du); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000A480D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4813u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A4813: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x98D4FFC7u);
    ecx = edi;
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x000A4825u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000A4825: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A482Bu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000A482B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x000A4839u); RECOMP_ABI_CALL(0x0014BDA0u, sub_0014BDA0); /* call 0x0014BDA0 */

loc_000A4839: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A483Fu); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000A483F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x30FDD0);
    ecx = ebp;
    PUSH32(esp, 0x000A484Eu); RECOMP_ABI_CALL(0x0014C050u, sub_0014C050); /* call 0x0014C050 */

loc_000A484E: ;
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
 * sub_000A4860
 * Original: 0x000A4860 - 0x000A489B (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30FE00;
    MEM32(edi) = 0x30FDE8;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000A4880u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A4880: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A488Bu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A488B: ;
    ecx = edi;
    PUSH32(esp, 0x000A4892u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A4892: ;
    POP32(esp, edi);
    MEM32(esi) = 0x2FF77C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A48A0
 * Original: 0x000A48A0 - 0x000A48AB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A48A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A48A0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_000A48B0
 * Original: 0x000A48B0 - 0x000A48BA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A48B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A48B0: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A48C0
 * Original: 0x000A48C0 - 0x000A490F (79 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A48C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A48C0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A490E; /* je: equal / zero */

loc_000A48C8: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A48D1u); RECOMP_ABI_CALL(0x00035A30u, sub_00035A30); /* call 0x00035A30 */

loc_000A48D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A490E; /* je: equal / zero */

loc_000A48D8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000A48DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A48DCu); } /* indirect call */
    }

loc_000A48DF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000A48E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A48E3u); } /* indirect call */
    }

loc_000A48E9: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x28);
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4907u); RECOMP_ABI_CALL(0x000C1BA0u, sub_000C1BA0); /* call 0x000C1BA0 */

loc_000A4907: ;
    ecx = eax;
    PUSH32(esp, 0x000A490Eu); RECOMP_ABI_CALL(0x000C20F0u, sub_000C20F0); /* call 0x000C20F0 */

loc_000A490E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4910
 * Original: 0x000A4910 - 0x000A4979 (105 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4910: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4958; /* jne: not equal / not zero */

loc_000A4918: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x000A4920u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A4920: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A494A; /* je: equal / zero */

loc_000A492B: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000A4937u); RECOMP_ABI_CALL(0x000A4770u, sub_000A4770); /* call 0x000A4770 */

loc_000A4937: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A494A; /* je: equal / zero */

loc_000A493B: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4946u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A4946: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A494A: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4954u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000A4954: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A4958: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4976; /* jne: not equal / not zero */

loc_000A495D: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A496Au); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000A496A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4976; /* je: equal / zero */

loc_000A496E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A4976u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A4974u); } /* indirect call */
    }

loc_000A4976: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4980
 * Original: 0x000A4980 - 0x000A4988 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4980: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000A4990(); return; /* tail jmp 0x000A4990 */

}

/**
 * sub_000A4990
 * Original: 0x000A4990 - 0x000A49DF (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4990: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, edi);
    MEM32(esi) = 0x30FE00;
    MEM32(edi) = 0x30FDE8;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x000A49B0u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000A49B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A49BBu); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_000A49BB: ;
    ecx = edi;
    PUSH32(esp, 0x000A49C2u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000A49C2: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x2FF77C;
    if (TEST_Z(_fa, _fb)) goto loc_000A49D8; /* je: equal / zero */

loc_000A49CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A49D5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A49D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A49D8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A49E0
 * Original: 0x000A49E0 - 0x000A4A36 (86 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A49E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A49E0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x30FE08;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    esi = eax;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(esp + esi + 8));
    edi = edi & 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edx) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + edi + 8));
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edx + 1) = LO8(ecx);
    ecx = eax;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(esp + ecx + 8));
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esp + eax + 8));
    POP32(esp, edi);
    MEM8(edx + 2) = LO8(ecx);
    MEM8(edx + 3) = LO8(eax);
    MEM8(edx + 4) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4A40
 * Original: 0x000A4A40 - 0x000A4A8B (75 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4A40: ;
    SET_LO8(ecx, MEM8(edx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4A8A; /* je: equal / zero */

loc_000A4A48: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A4A5E; /* jl: less (signed <) */

loc_000A4A50: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A4A5E; /* jg: greater (signed >) */

loc_000A4A55: ;
    ecx = SX8(LO8(ecx));
    eax = eax + ecx + -48;
    goto loc_000A4A82;

loc_000A4A5E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A4A71; /* jl: less (signed <) */

loc_000A4A63: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x66 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A4A71; /* jg: greater (signed >) */

loc_000A4A68: ;
    ecx = SX8(LO8(ecx));
    eax = eax + ecx + -87;
    goto loc_000A4A82;

loc_000A4A71: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A4A82; /* jl: less (signed <) */

loc_000A4A76: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x46) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x46 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A4A82; /* jg: greater (signed >) */

loc_000A4A7B: ;
    ecx = SX8(LO8(ecx));
    eax = eax + ecx + -55;

loc_000A4A82: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4A48; /* jne: not equal / not zero */

loc_000A4A8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4A90
 * Original: 0x000A4A90 - 0x000A4B19 (137 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4A90: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(0x3C3E7C);
    ecx = 0x10;
    esi = 0x30FE08;
    edi = esp + 0x14;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    esi = eax;
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(esp + esi + 0x14));
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xC) = LO8(ecx);
    ecx = eax;
    edi = edi & 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(esp + edi + 0x14));
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, MEM8(esp + eax + 0x14));
    MEM8(esp + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(esp + ecx + 0x14));
    MEM8(esp + 0xE) = LO8(edx);
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000A4B10; /* je: equal / zero */

loc_000A4AF5: ;
    PUSH32(esp, 5);
    ecx = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A4B02u); RECOMP_ABI_CALL(0x002BF300u, sub_002BF300); /* call 0x002BF300 */

loc_000A4B02: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4B10; /* je: equal / zero */

loc_000A4B09: ;
    ebx = MEM32(ebx + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4AF5; /* jne: not equal / not zero */

loc_000A4B10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4B20
 * Original: 0x000A4B20 - 0x000A4B2F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4B20(void)
{

loc_000A4B20: ;
    eax = MEM32(0x3C3E7C);
    MEM32(ecx + 0x34) = eax;
    MEM32(0x3C3E7C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4B30
 * Original: 0x000A4B30 - 0x000A4B60 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4B30: ;
    edx = MEM32(0x3C3E7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = 0x3C3E7C;
    if (CMP_EQ(_fa, _fb)) goto loc_000A4B5F; /* je: equal / zero */

loc_000A4B3F: ;
    /* nop */

loc_000A4B40: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4B4E; /* je: equal / zero */

loc_000A4B46: ;
    eax = edx + 0x34;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4B40; /* jne: not equal / not zero */

loc_000A4B4E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4B5F; /* je: equal / zero */

loc_000A4B53: ;
    edx = MEM32(ecx + 0x34);
    MEM32(eax) = edx;
    MEM32(ecx + 0x34) = 0;

loc_000A4B5F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4B70
 * Original: 0x000A4B70 - 0x000A4B75 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4B70(void)
{

loc_000A4B70: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 6);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4B80
 * Original: 0x000A4B80 - 0x000A4B84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4B80(void)
{

loc_000A4B80: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4B90
 * Original: 0x000A4B90 - 0x000A4B97 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4B90: ;
    eax = MEM32(ecx + eax * 8 + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4BA0
 * Original: 0x000A4BA0 - 0x000A4BB7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4BA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4BA0: ;
    eax = MEM32(ecx + 0x24);
    edx = MEM32(esp + 4);
    edx = MEM32(eax + edx * 8 + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x20) = edx;
    MEM8(ecx + 7) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4BC0
 * Original: 0x000A4BC0 - 0x000A4BD9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4BC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4BCAu); RECOMP_ABI_CALL(0x000A4A90u, sub_000A4A90); /* call 0x000A4A90 */

loc_000A4BCA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4BD8; /* je: equal / zero */

loc_000A4BD1: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 5) = LO8(ecx);

loc_000A4BD8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4BE0
 * Original: 0x000A4BE0 - 0x000A4BFD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4BE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4BEAu); RECOMP_ABI_CALL(0x000A4A90u, sub_000A4A90); /* call 0x000A4A90 */

loc_000A4BEA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4BFC; /* je: equal / zero */

loc_000A4BF1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_000A4BFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4C00
 * Original: 0x000A4C00 - 0x000A4C2D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4C00: ;
    eax = MEM32(0x3C3E7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4C2C; /* je: equal / zero */

loc_000A4C09: ;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000A4C18: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4C25; /* jne: not equal / not zero */

loc_000A4C1D: ;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax + 0xC) = edx;

loc_000A4C25: ;
    eax = MEM32(eax + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4C18; /* jne: not equal / not zero */

loc_000A4C2C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4C30
 * Original: 0x000A4C30 - 0x000A4D88 (344 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4C30(void)
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

loc_000A4C30: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 5);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fb = (uint32_t)(0xFFFFFFB4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFB4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A4C81; /* ja: above (unsigned >) */

loc_000A4C4C: ;
    eax = ZX8(MEM8(eax + 0xA4D94));
    { uint32_t _jt = MEM32(eax * 4 + 0xA4D88); /* switch: 3 entries, 3 targets */
    if (_jt == 0x000A4C5Au) goto loc_000A4C5A;
    if (_jt == 0x000A4C6Au) goto loc_000A4C6A;
    if (_jt == 0x000A4C81u) goto loc_000A4C81;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A4C5A: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C81; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A4C65: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000A4C81;

loc_000A4C6A: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C81; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4C7A: ;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_000A4C81: ;
    SET_LO8(edx, 0x2D);

loc_000A4C83: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000A4C96; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A4C88: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4D63; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4C96: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 5);
    _fb = (uint32_t)(0xFFFFFFB4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFB4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A4D3C; /* ja: above (unsigned >) */

loc_000A4CA6: ;
    eax = ZX8(MEM8(eax + 0xA4DD8));
    { uint32_t _jt = MEM32(eax * 4 + 0xA4DBC); /* switch: 7 entries, 7 targets */
    if (_jt == 0x000A4CB4u) goto loc_000A4CB4;
    if (_jt == 0x000A4CCAu) goto loc_000A4CCA;
    if (_jt == 0x000A4CD7u) goto loc_000A4CD7;
    if (_jt == 0x000A4CE7u) goto loc_000A4CE7;
    if (_jt == 0x000A4CFAu) goto loc_000A4CFA;
    if (_jt == 0x000A4D20u) goto loc_000A4D20;
    if (_jt == 0x000A4D3Cu) goto loc_000A4D3C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A4CB4: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C83; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4CBE: ;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    MEM8(ecx + 5) = LO8(edx);
    goto loc_000A4C83;

loc_000A4CCA: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C83; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A4CCF: ;
    xmm0 = xmm2; /* movaps */
    MEM8(ecx + 5) = LO8(edx);
    goto loc_000A4C83;

loc_000A4CD7: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C83; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4CE1: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000A4C83;

loc_000A4CE7: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C83; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A4CEC: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_000A4C83;

loc_000A4CFA: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C83; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4D08: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    MEM8(ecx + 5) = 0x70;
    goto loc_000A4C83;

loc_000A4D20: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C83; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A4D29: ;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    MEM8(ecx + 5) = 0x50;
    goto loc_000A4C83;

loc_000A4D3C: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4D52; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000A4D4A: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000A4C83;

loc_000A4D52: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4C83; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4D5B: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000A4C83;

loc_000A4D63: ;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(ecx + 0x18), g_mxcsr, 1); /* cvttss2si */
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4D80; /* je: equal / zero */

loc_000A4D70: ;
    eax = MEM32(ecx + 0x24);
    edx = MEM32(eax + edx * 8 + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x20) = edx;
    MEM8(ecx + 7) = 1;

loc_000A4D80: ;
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4E00
 * Original: 0x000A4E00 - 0x000A4E4C (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4E00(void)
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

loc_000A4E00: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMD(0x30FE50)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_000A4E19; /* ja: above (unsigned >) */

loc_000A4E13: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_000A4E19: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4E26; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4E23: ;
    xmm0 = xmm1; /* movaps */

loc_000A4E26: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x18); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000A4E44; /* jnp: not parity */

loc_000A4E30: ;
    eax = MEM32(ecx + 0x24);
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    edx = MEM32(eax + edx * 8 + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x20) = edx;
    MEM8(ecx + 7) = 1;

loc_000A4E44: ;
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A4E50
 * Original: 0x000A4E50 - 0x000A4E5B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4E50(void)
{

loc_000A4E50: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x000A4E5Au); RECOMP_ABI_CALL(0x000A4C30u, sub_000A4C30); /* call 0x000A4C30 */

loc_000A4E5A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4E60
 * Original: 0x000A4E60 - 0x000A4E6B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4E60(void)
{

loc_000A4E60: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x000A4E6Au); RECOMP_ABI_CALL(0x000A4C30u, sub_000A4C30); /* call 0x000A4C30 */

loc_000A4E6A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4E70
 * Original: 0x000A4E70 - 0x000A4EAD (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4EAB; /* je: equal / zero */

loc_000A4E7A: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM8(esi + 7) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000A4EAA; /* je: equal / zero */

loc_000A4E95: ;
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A4EA0u); RECOMP_ABI_CALL(0x001CE640u, sub_001CE640); /* call 0x001CE640 */

loc_000A4EA0: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4E95; /* jne: not equal / not zero */

loc_000A4EAA: ;
    POP32(esp, edi);

loc_000A4EAB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4EB0
 * Original: 0x000A4EB0 - 0x000A4F0D (93 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4EB0(void)
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

loc_000A4EB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4EBAu); RECOMP_ABI_CALL(0x000A4A90u, sub_000A4A90); /* call 0x000A4A90 */

loc_000A4EBA: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F0C; /* je: equal / zero */

loc_000A4EC3: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_push(MEMD(0x30FE50)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000A4EDC; /* jbe: below or equal (unsigned <=) */

loc_000A4ED9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000A4EDC: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A4EE9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000A4EE6: ;
    xmm0 = xmm1; /* movaps */

loc_000A4EE9: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x18); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000A4F07; /* jnp: not parity */

loc_000A4EF3: ;
    eax = MEM32(ecx + 0x24);
    edx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    edx = MEM32(eax + edx * 8 + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x20) = edx;
    MEM8(ecx + 7) = 1;

loc_000A4F07: ;
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */

loc_000A4F0C: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A4F10
 * Original: 0x000A4F10 - 0x000A4F2E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4F10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4F1Au); RECOMP_ABI_CALL(0x000A4A90u, sub_000A4A90); /* call 0x000A4A90 */

loc_000A4F1A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F2D; /* je: equal / zero */

loc_000A4F21: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x000A4F2Du); RECOMP_ABI_CALL(0x000A4C30u, sub_000A4C30); /* call 0x000A4C30 */

loc_000A4F2D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4F30
 * Original: 0x000A4F30 - 0x000A4F51 (33 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4F30(void)
{

loc_000A4F30: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A4F4Eu); RECOMP_ABI_CALL(0x000A4C30u, sub_000A4C30); /* call 0x000A4C30 */

loc_000A4F4E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4F60
 * Original: 0x000A4F60 - 0x000A4FA9 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4F60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x2C);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4F83u); RECOMP_ABI_CALL(0x00045310u, sub_00045310); /* call 0x00045310 */

loc_000A4F83: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4FA4; /* je: equal / zero */

loc_000A4F8A: ;
    ecx = edi;
    edx = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4FA0; /* je: equal / zero */

loc_000A4F93: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4F9Du); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_000A4F9D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A4FA0: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A4FA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4FB0
 * Original: 0x000A4FB0 - 0x000A5096 (230 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4FB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x000A4FC7u); RECOMP_ABI_CALL(0x001B3500u, sub_001B3500); /* call 0x001B3500 */

loc_000A4FC7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi;
    MEM8(esi + 4) = LO8(ebx);
    ebp = esi + 8;
    PUSH32(esp, 0x000A4FD7u); RECOMP_ABI_CALL(0x000A4A40u, sub_000A4A40); /* call 0x000A4A40 */

loc_000A4FD7: ;
    edi = MEM32(esi + 0x24);
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    MEM32(ebp) = eax;
    eax = MEM32(edi + 8);
    PUSH32(esp, ecx);
    ecx = 0x3C3E80;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x000A4FF3u); RECOMP_ABI_CALL(0x00081F50u, sub_00081F50); /* call 0x00081F50 */

loc_000A4FF3: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3C3E80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3C3E80) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A500D; /* je: equal / zero */

loc_000A4FFF: ;
    SET_LO8(edx, MEM8(eax + 0x14));
    MEM8(esi + 5) = LO8(edx);
    eax = MEM32(eax + 0x18);
    MEM32(esi + 0x14) = eax;
    goto loc_000A501E;

loc_000A500D: ;
    xmm0 = XMM_SCALAR(MEMF(0x300914)); /* movss */
    MEM8(esi + 5) = 0x4C;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */

loc_000A501E: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax + edi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    MEM8(esi + 6) = LO8(ecx);
    MEM8(esi + 7) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000A5089; /* je: equal / zero */

loc_000A504A: ;
    ebp = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xFFFFFFFEu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = ebp;
    ecx = ebp;
    edx = MEM32(edi + ecx * 8 + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = edx;
    ecx = MEM32(edi + ecx * 8 + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esi + 0x20) = ecx;
    PUSH32(esp, 0x000A506Du); RECOMP_ABI_CALL(0x001B36F0u, sub_001B36F0); /* call 0x001B36F0 */

loc_000A506D: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A5076u); RECOMP_ABI_CALL(0x001B35E0u, sub_001B35E0); /* call 0x001B35E0 */

loc_000A5076: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A507Fu); RECOMP_ABI_CALL(0x001B35E0u, sub_001B35E0); /* call 0x001B35E0 */

loc_000A507F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000A5089: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A50A0
 * Original: 0x000A50A0 - 0x000A5101 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A50A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A50A0: ;
    edx = MEM32(0x3C3E7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = 0x3C3E7C;
    if (CMP_EQ(_fa, _fb)) goto loc_000A50CF; /* je: equal / zero */

loc_000A50AF: ;
    /* nop */

loc_000A50B0: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A50BE; /* je: equal / zero */

loc_000A50B6: ;
    eax = edx + 0x34;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A50B0; /* jne: not equal / not zero */

loc_000A50BE: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A50CF; /* je: equal / zero */

loc_000A50C3: ;
    edx = MEM32(ecx + 0x34);
    MEM32(eax) = edx;
    MEM32(ecx + 0x34) = 0;

loc_000A50CF: ;
    SET_LO8(eax, MEM8(ecx + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A50F2; /* je: equal / zero */

loc_000A50D6: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A50E4; /* je: equal / zero */

loc_000A50DD: ;
    MEM32(ecx + 0x1C) = 0;

loc_000A50E4: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A50F2; /* je: equal / zero */

loc_000A50EB: ;
    MEM32(ecx + 0x20) = 0;

loc_000A50F2: ;
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5100; /* je: equal / zero */

loc_000A50F9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A50FFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A50FF: ;
    POP32(esp, ecx);

loc_000A5100: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5110
 * Original: 0x000A5110 - 0x000A5147 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5110: ;
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    MEM32(esp + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A5130; /* je: equal / zero */

loc_000A5123: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5129; /* je: equal / zero */

loc_000A5127: ;
    MEM32(eax) = edx;

loc_000A5129: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 4;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000A5130: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5144u); RECOMP_ABI_CALL(0x0013D8F0u, sub_0013D8F0); /* call 0x0013D8F0 */

loc_000A5144: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5150
 * Original: 0x000A5150 - 0x000A517D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5150: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5168u); RECOMP_ABI_CALL(0x000A4FB0u, sub_000A4FB0); /* call 0x000A4FB0 */

loc_000A5168: ;
    ecx = MEM32(0x3C3E7C);
    MEM32(esi + 0x34) = ecx;
    MEM32(0x3C3E7C) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5180
 * Original: 0x000A5180 - 0x000A51F5 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5180: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A51EE; /* je: equal / zero */

loc_000A518C: ;
    eax = edi;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(ecx + 4) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 5));
    MEM8(esi + 5) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 6));
    MEM8(esi + 6) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 7));
    MEM8(esi + 7) = LO8(eax);
    ecx = MEM32(edi + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(edi + 0x24);
    eax = edi + 0x28;
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    MEM32(esi + 0x24) = edx;
    PUSH32(esp, 0x000A51E6u); RECOMP_ABI_CALL(0x000A5460u, sub_000A5460); /* call 0x000A5460 */

loc_000A51E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x1C) = eax;
    MEM32(edi + 0x20) = eax;

loc_000A51EE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5200
 * Original: 0x000A5200 - 0x000A522D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5200: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5218u); RECOMP_ABI_CALL(0x000A5180u, sub_000A5180); /* call 0x000A5180 */

loc_000A5218: ;
    ecx = MEM32(0x3C3E7C);
    MEM32(esi + 0x34) = ecx;
    MEM32(0x3C3E7C) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5230
 * Original: 0x000A5230 - 0x000A528E (94 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5230: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A523Eu); RECOMP_ABI_CALL(0x000A4A90u, sub_000A4A90); /* call 0x000A4A90 */

loc_000A523E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A526B; /* je: equal / zero */

loc_000A524F: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    MEM8(eax + 5) = LO8(ebx);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEM32(eax + 0xC) = 0xFFFFFFFFu;

loc_000A526B: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = 0x3C3E80;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A5280u); RECOMP_ABI_CALL(0x000A5770u, sub_000A5770); /* call 0x000A5770 */

loc_000A5280: ;
    edx = MEM32(esp + 8);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5290
 * Original: 0x000A5290 - 0x000A52C3 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5290: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A52BE; /* je: equal / zero */

loc_000A529C: ;
    PUSH32(esp, edi);
    /* nop */

loc_000A52A0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000A52ABu); RECOMP_ABI_CALL(0x000A5290u, sub_000A5290); /* call 0x000A5290 */

loc_000A52AB: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A52B4u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A52B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000A52A0; /* jne: not equal / not zero */

loc_000A52BD: ;
    POP32(esp, edi);

loc_000A52BE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A52D0
 * Original: 0x000A52D0 - 0x000A539B (203 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A52D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A52D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A532A; /* je: equal / zero */

loc_000A52E1: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A52F8; /* jne: not equal / not zero */

loc_000A52E9: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A532A; /* jne: not equal / not zero */

loc_000A52F1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A532A; /* jl: less (signed <) */

loc_000A52F8: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x000A52FFu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A52FF: ;
    ecx = eax + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5319; /* je: equal / zero */

loc_000A5309: ;
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;

loc_000A5319: ;
    MEM32(ebx + 0xC) = eax;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xC) (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000A5368; /* jne: not equal / not zero */

loc_000A5325: ;
    MEM32(ecx + 0xC) = eax;
    goto loc_000A5368;

loc_000A532A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x000A5331u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A5331: ;
    ecx = eax + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A534B; /* je: equal / zero */

loc_000A533B: ;
    edx = MEM32(esi);
    MEM32(ecx) = edx;
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 8) = edx;

loc_000A534B: ;
    MEM32(ebx + 8) = eax;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000A5360; /* jne: not equal / not zero */

loc_000A5356: ;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(edi);
    MEM32(ecx + 0xC) = eax;
    goto loc_000A5368;

loc_000A5360: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5368; /* jne: not equal / not zero */

loc_000A5365: ;
    MEM32(ecx + 8) = eax;

loc_000A5368: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    edx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A5385u); RECOMP_ABI_CALL(0x00036060u, sub_00036060); /* call 0x00036060 */

loc_000A5385: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000A53A0
 * Original: 0x000A53A0 - 0x000A5454 (180 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A53A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A53A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000A53D8; /* je: equal / zero */

loc_000A53B8: ;
    edx = MEM32(ebx);
    /* nop */

loc_000A53C0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000A53D1; /* je: equal / zero */

loc_000A53CC: ;
    esi = MEM32(esi + 8);
    goto loc_000A53D4;

loc_000A53D1: ;
    esi = MEM32(esi + 0xC);

loc_000A53D4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A53C0; /* jne: not equal / not zero */

loc_000A53D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = edi;
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A5418; /* je: equal / zero */

loc_000A53E2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A540B; /* jne: not equal / not zero */

loc_000A53E7: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000A53F8u); RECOMP_ABI_CALL(0x000A52D0u, sub_000A52D0); /* call 0x000A52D0 */

loc_000A53F8: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000A540B: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000A5414u); RECOMP_ABI_CALL(0x0015A7D0u, sub_0015A7D0); /* call 0x0015A7D0 */

loc_000A5414: ;
    edx = MEM32(esp + 0x18);

loc_000A5418: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A5443; /* jge: greater or equal (signed >=) */

loc_000A541F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x000A5430u); RECOMP_ABI_CALL(0x000A52D0u, sub_000A52D0); /* call 0x000A52D0 */

loc_000A5430: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 1;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000A5443: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 0;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A5460
 * Original: 0x000A5460 - 0x000A5553 (243 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5460: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A554D; /* je: equal / zero */

loc_000A546F: ;
    edx = MEM32(edi);
    eax = MEM32(edi + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ebp = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((2) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A54EF; /* jbe: below or equal (unsigned <=) */

loc_000A548C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A54A6; /* je: equal / zero */

loc_000A5490: ;
    ecx = ebp * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A549Du); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A549D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    goto loc_000A54AE;

loc_000A54A6: ;
    MEM32(esp + 0x14) = 0;

loc_000A54AE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A54C3; /* je: equal / zero */

loc_000A54B2: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A54C0u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_000A54C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A54C3: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A54D2; /* je: equal / zero */

loc_000A54C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A54CFu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A54CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A54D2: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi) = eax;
    edx = MEM32(edi);
    eax = eax + ebp * 4;
    MEM32(edi + 8) = eax;
    POP32(esp, esi);
    eax = edx + ebp * 4;
    POP32(esp, ebp);
    MEM32(edi + 4) = eax;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_000A54EF: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5505; /* jb: below (unsigned <) */

loc_000A54FB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5542; /* je: equal / zero */

loc_000A54FF: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    goto loc_000A5539;

loc_000A5505: ;
    eax = esi + eax * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A551D; /* je: equal / zero */

loc_000A550C: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A5516u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_000A5516: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A551D: ;
    edx = MEM32(edi + 4);
    ebx = MEM32(edi);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    esi = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx + esi * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5542; /* je: equal / zero */

loc_000A5535: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_000A5539: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A553Fu); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_000A553F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A5542: ;
    edx = MEM32(edi);
    POP32(esp, esi);
    eax = edx + ebp * 4;
    POP32(esp, ebp);
    MEM32(edi + 4) = eax;
    POP32(esp, ebx);

loc_000A554D: ;
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5560
 * Original: 0x000A5560 - 0x000A5766 (518 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5560: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A565F; /* jne: not equal / not zero */

loc_000A5578: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A55A2; /* ja: above (unsigned >) */

loc_000A557F: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000A5590u); RECOMP_ABI_CALL(0x000A53A0u, sub_000A53A0); /* call 0x000A53A0 */

loc_000A5590: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A55A2: ;
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(ebx);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A55CC; /* jle: less or equal (signed <=) */

loc_000A55AF: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A55C0u); RECOMP_ABI_CALL(0x000A52D0u, sub_000A52D0); /* call 0x000A52D0 */

loc_000A55C0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A55CC: ;
    if (CMP_L(_fas, _fbs)) goto loc_000A55DE; /* jl: less (signed <) */

loc_000A55CE: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A55DE: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0x000A55EBu); RECOMP_ABI_CALL(0x0014C970u, sub_0014C970); /* call 0x0014C970 */

loc_000A55EB: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5610; /* jne: not equal / not zero */

loc_000A55F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A5604u); RECOMP_ABI_CALL(0x000A52D0u, sub_000A52D0); /* call 0x000A52D0 */

loc_000A5604: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5610: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A5654; /* jge: greater or equal (signed >=) */

loc_000A5615: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000A5639; /* jne: not equal / not zero */

loc_000A561E: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A562Du); RECOMP_ABI_CALL(0x000A52D0u, sub_000A52D0); /* call 0x000A52D0 */

loc_000A562D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5639: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A5648u); RECOMP_ABI_CALL(0x000A52D0u, sub_000A52D0); /* call 0x000A52D0 */

loc_000A5648: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5654: ;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    goto loc_000A574D;

loc_000A565F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5699; /* jne: not equal / not zero */

loc_000A5663: ;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x24);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A568E; /* jge: greater or equal (signed >=) */

loc_000A5671: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A5682u); RECOMP_ABI_CALL(0x000A52D0u, sub_000A52D0); /* call 0x000A52D0 */

loc_000A5682: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A568E: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    goto loc_000A574D;

loc_000A5699: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x000A56A6u); RECOMP_ABI_CALL(0x0015A7D0u, sub_0015A7D0); /* call 0x0015A7D0 */

loc_000A56A6: ;
    ebx = MEM32(esp + 0x24);
    ebp = MEM32(ebx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x10) (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x24) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000A5702; /* je: equal / zero */

loc_000A56BA: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A5702; /* jge: greater or equal (signed >=) */

loc_000A56C3: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000A56E7; /* jne: not equal / not zero */

loc_000A56CC: ;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A56DBu); RECOMP_ABI_CALL(0x000A52D0u, sub_000A52D0); /* call 0x000A52D0 */

loc_000A56DB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A56E7: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A56F6u); RECOMP_ABI_CALL(0x000A52D0u, sub_000A52D0); /* call 0x000A52D0 */

loc_000A56F6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5702: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x000A570Fu); RECOMP_ABI_CALL(0x0014C970u, sub_0014C970); /* call 0x0014C970 */

loc_000A570F: ;
    SET_LO8(edx, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A573F; /* jne: not equal / not zero */

loc_000A571C: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebp (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A55CE; /* je: equal / zero */

loc_000A572A: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5615; /* je: equal / zero */

loc_000A5736: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A5615; /* jl: less (signed <) */

loc_000A573F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A55CE; /* je: equal / zero */

loc_000A5747: ;
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, edx);

loc_000A574D: ;
    ecx = edi;
    PUSH32(esp, 0x000A5754u); RECOMP_ABI_CALL(0x000A53A0u, sub_000A53A0); /* call 0x000A53A0 */

loc_000A5754: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A5770
 * Original: 0x000A5770 - 0x000A57E5 (117 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5770: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    edx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000A579A; /* je: equal / zero */

loc_000A5785: ;
    ebx = MEM32(edi);

loc_000A5787: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A5793; /* jl: less (signed <) */

loc_000A578C: ;
    edx = eax;
    eax = MEM32(eax + 8);
    goto loc_000A5796;

loc_000A5793: ;
    eax = MEM32(eax + 0xC);

loc_000A5796: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5787; /* jne: not equal / not zero */

loc_000A579A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A57A5; /* je: equal / zero */

loc_000A579E: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A57D9; /* jge: greater or equal (signed >=) */

loc_000A57A5: ;
    esi = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x000A57C9u); RECOMP_ABI_CALL(0x000A5560u, sub_000A5560); /* call 0x000A5560 */

loc_000A57C9: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000A57D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx + 0x14;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A57F0
 * Original: 0x000A57F0 - 0x000A580B (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A57F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A57F0: ;
    SET_LO8(eax, MEM8(0x3C3E8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x3C3E8C) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000A580A; /* jne: not equal / not zero */

loc_000A5800: ;
    MEM32(0x3C3E90) = 0;

loc_000A580A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5810
 * Original: 0x000A5810 - 0x000A5818 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5810(void)
{

loc_000A5810: ;
    MEM8(0x3C3E8C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5820
 * Original: 0x000A5820 - 0x000A582B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5820(void)
{

loc_000A5820: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5830
 * Original: 0x000A5830 - 0x000A583B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5830(void)
{

loc_000A5830: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5840
 * Original: 0x000A5840 - 0x000A5855 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5840: ;
    ecx = MEM32(0x3734F4);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A5852; /* jle: less or equal (signed <=) */

loc_000A584D: ;
    MEM32(0x3734F4) = eax;

loc_000A5852: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5860
 * Original: 0x000A5860 - 0x000A58DB (123 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5860: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A5866u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A5866: ;
    ecx = eax;
    PUSH32(esp, 0x000A586Du); RECOMP_ABI_CALL(0x001C1810u, sub_001C1810); /* call 0x001C1810 */

loc_000A586D: ;
    ecx = eax;
    MEM32(0x3C3E94) = eax;
    PUSH32(esp, 0x000A5879u); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_000A5879: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB0);
    MEM32(0x3C3E98) = eax;
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000A588Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A5885u); } /* indirect call */
    }

loc_000A588B: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A589F; /* je: equal / zero */

loc_000A5894: ;
    ecx = esi;
    PUSH32(esp, 0x000A589Bu); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_000A589B: ;
    ecx = esi;
    goto loc_000A58A1;

loc_000A589F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A58A1: ;
    MEM32(0x3C3E9C) = ecx;
    PUSH32(esp, 0x000A58ACu); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_000A58AC: ;
    PUSH32(esp, 0x000A58B1u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A58B1: ;
    ecx = eax;
    PUSH32(esp, 0x000A58B8u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A58B8: ;
    ecx = eax;
    PUSH32(esp, 0x000A58BFu); RECOMP_ABI_CALL(0x001C2370u, sub_001C2370); /* call 0x001C2370 */

loc_000A58BF: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x000A58D1u); RECOMP_ABI_CALL(0x001CDA30u, sub_001CDA30); /* call 0x001CDA30 */

loc_000A58D1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3E90) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A58E0
 * Original: 0x000A58E0 - 0x000A5C36 (854 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A58E0(void)
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

loc_000A58E0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A58ECu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A58EC: ;
    ecx = eax;
    PUSH32(esp, 0x000A58F3u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A58F3: ;
    ecx = eax;
    PUSH32(esp, 0x000A58FAu); RECOMP_ABI_CALL(0x001C1A60u, sub_001C1A60); /* call 0x001C1A60 */

loc_000A58FA: ;
    ebp = eax;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x000A5921u); RECOMP_ABI_CALL(0x001C6420u, sub_001C6420); /* call 0x001C6420 */

loc_000A5921: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A592C; /* je: equal / zero */

loc_000A5925: ;
    ecx = ebp;
    PUSH32(esp, 0x000A592Cu); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A592C: ;
    eax = MEM32(0x3C3E90);
    ecx = MEM32(0x3C3E94);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(0x3734F4) = 0;
    PUSH32(esp, 0x000A5949u); RECOMP_ABI_CALL(0x001D1370u, sub_001D1370); /* call 0x001D1370 */

loc_000A5949: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0xFF000000u;
    ecx = MEM32(0x3C3E98);
    PUSH32(esp, 0x000A595Du); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000A595D: ;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C3E98);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x68);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A598Du); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000A598D: ;
    ecx = MEM32(0x3C3E98);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A599Fu); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000A599F: ;
    ecx = MEM32(0x3C3E94);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A59A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A59A7u); } /* indirect call */
    }

loc_000A59A9: ;
    ecx = MEM32(0x3C3E98);
    PUSH32(esp, 0x000A59B4u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A59B4: ;
    ebx = MEM32(esp + 0x64);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A59C9; /* je: equal / zero */

loc_000A59BC: ;
    ecx = MEM32(0x3C3E98);
    PUSH32(esp, 7);
    PUSH32(esp, 0x000A59C9u); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_000A59C9: ;
    PUSH32(esp, 0x000A59CEu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A59CE: ;
    ecx = eax;
    PUSH32(esp, 0x000A59D5u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A59D5: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A59DFu); RECOMP_ABI_CALL(0x001C4100u, sub_001C4100); /* call 0x001C4100 */

loc_000A59DF: ;
    esi = eax;
    eax = 3;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 2;
    edi = MEM32(0x3C3E9C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000A5A5C; /* je: equal / zero */

loc_000A5A08: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000A5A0Fu); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000A5A0F: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000A5A17u); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_000A5A17: ;
    PUSH32(esp, 0x206);
    ecx = edi;
    PUSH32(esp, 0x000A5A23u); RECOMP_ABI_CALL(0x001CF200u, sub_001CF200); /* call 0x001CF200 */

loc_000A5A23: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x000A5A2Cu); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000A5A2C: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0);
    PUSH32(esp, 0x302);
    ecx = edi;
    PUSH32(esp, 0x000A5A3Fu); RECOMP_ABI_CALL(0x001CF320u, sub_001CF320); /* call 0x001CF320 */

loc_000A5A3F: ;
    PUSH32(esp, 0x10101);
    PUSH32(esp, 0x000A5A49u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A5A49: ;
    ecx = eax;
    PUSH32(esp, 0x000A5A50u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A5A50: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A5A5Au); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000A5A5A: ;
    goto loc_000A5A6C;

loc_000A5A5C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A5A63u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000A5A63: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5A6Cu); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000A5A6C: ;
    ecx = MEM32(0x3C3E9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A5A78u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000A5A78: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x30FE5C)); /* movss */
    ecx = MEM32(0x3C3E9C);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    PUSH32(esp, 8);
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000A5AF0u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000A5AF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C3E9C);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x70) = esi;
    PUSH32(esp, 0x000A5B38u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000A5B38: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C3E9C);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x68) = esi;
    PUSH32(esp, 0x000A5B6Eu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000A5B6E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C3E9C);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x68) = esi;
    PUSH32(esp, 0x000A5BA4u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000A5BA4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C3E9C);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x68) = esi;
    PUSH32(esp, 0x000A5BD7u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000A5BD7: ;
    ecx = MEM32(0x3C3E9C);
    PUSH32(esp, 0x000A5BE2u); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000A5BE2: ;
    ecx = MEM32(0x3C3E9C);
    PUSH32(esp, 0x000A5BEDu); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000A5BED: ;
    ecx = MEM32(0x3C3E98);
    PUSH32(esp, 0x000A5BF8u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A5BF8: ;
    PUSH32(esp, 0x1010101);
    PUSH32(esp, 0x000A5C02u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A5C02: ;
    ecx = eax;
    PUSH32(esp, 0x000A5C09u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A5C09: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A5C13u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000A5C13: ;
    ecx = MEM32(0x3C3E94);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A5C1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A5C1Bu); } /* indirect call */
    }

loc_000A5C1E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5C29; /* je: equal / zero */

loc_000A5C22: ;
    ecx = ebp;
    PUSH32(esp, 0x000A5C29u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A5C29: ;
    eax = MEM32(0x3C3E90);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A5C40
 * Original: 0x000A5C40 - 0x000A5CD2 (146 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5C40: ;
    eax = MEM32(0x3C3E98);
    ecx = MEM32(0x3C3E94);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5C53u); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_000A5C53: ;
    ecx = MEM32(0x3C3E94);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(0x3C3E98) = edi;
    PUSH32(esp, 0x000A5C67u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A5C67: ;
    ecx = eax;
    PUSH32(esp, 0x000A5C6Eu); RECOMP_ABI_CALL(0x001C1890u, sub_001C1890); /* call 0x001C1890 */

loc_000A5C6E: ;
    ecx = MEM32(0x3C3E9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x3C3E94) = edi;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A5C94; /* je: equal / zero */

loc_000A5C80: ;
    PUSH32(esp, 0x000A5C85u); RECOMP_ABI_CALL(0x001D0960u, sub_001D0960); /* call 0x001D0960 */

loc_000A5C85: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000A5C91u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000A5C8Bu); } /* indirect call */
    }

loc_000A5C91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A5C94: ;
    ecx = MEM32(0x3734F4);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(0x3C3E9C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000A5CAC; /* jle: less or equal (signed <=) */

loc_000A5CA7: ;
    MEM32(0x3734F4) = eax;

loc_000A5CAC: ;
    ecx = MEM32(0x3C3E90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5CCF; /* je: equal / zero */

loc_000A5CB6: ;
    esi = ecx;
    PUSH32(esp, 0x000A5CBDu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_000A5CBD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000A5CC6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000A5CC0u); } /* indirect call */
    }

loc_000A5CC6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C3E90) = edi;

loc_000A5CCF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5CE0
 * Original: 0x000A5CE0 - 0x000A5D01 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5CE8u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_000A5CE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A5CFB; /* je: equal / zero */

loc_000A5CEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000A5CF8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000A5CF2u); } /* indirect call */
    }

loc_000A5CF8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A5CFB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5D10
 * Original: 0x000A5D10 - 0x000A5D15 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5D10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A5D20
 * Original: 0x000A5D20 - 0x000A5D25 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5D20: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A5D30
 * Original: 0x000A5D30 - 0x000A5D33 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D30(void)
{

loc_000A5D30: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A5D40
 * Original: 0x000A5D40 - 0x000A5D5D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5D40: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x000A5D57u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000A5D57: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5D60
 * Original: 0x000A5D60 - 0x000A5D63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D60(void)
{

loc_000A5D60: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5D70
 * Original: 0x000A5D70 - 0x000A5D73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D70(void)
{

loc_000A5D70: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5D80
 * Original: 0x000A5D80 - 0x000A5D86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D80(void)
{

loc_000A5D80: ;
    eax = 0x3734F8;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5D90
 * Original: 0x000A5D90 - 0x000A5DAB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5D90: ;
    ecx = MEM32(0x3C3EA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5DAA; /* je: equal / zero */

loc_000A5D9A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A5DA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A5D9Eu); } /* indirect call */
    }

loc_000A5DA0: ;
    MEM32(0x3C3EA0) = 0;

loc_000A5DAA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5DB0
 * Original: 0x000A5DB0 - 0x000A6334 (1412 bytes, 505 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5DB0(void)
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

loc_000A5DB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebx = ecx;
    esi = MEM32(ebx + 0x10);
    ecx = edi;
    PUSH32(esp, 0x000A5DC6u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000A5DC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE654CD42u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE654CD42u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A6121; /* jg: greater (signed >) */

loc_000A5DD1: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A60D2; /* je: equal / zero */

loc_000A5DD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA25D7871u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA25D7871u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A5FA7; /* jg: greater (signed >) */

loc_000A5DE2: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A5F2F; /* je: equal / zero */

loc_000A5DE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94CCC693u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x94CCC693u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A5F07; /* jg: greater (signed >) */

loc_000A5DF3: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A5E98; /* je: equal / zero */

loc_000A5DF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81728B86u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81728B86u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5E78; /* je: equal / zero */

loc_000A5E00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x897BD6F7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x897BD6F7u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A62BB; /* jne: not equal / not zero */

loc_000A5E0B: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5E1Cu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A5E1C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A5E24u); RECOMP_ABI_CALL(0x000B28B0u, sub_000B28B0); /* call 0x000B28B0 */

loc_000A5E24: ;
    eax = MEM32(esi + 0x64);
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5E35u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A5E35: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A5E3Du); RECOMP_ABI_CALL(0x000B2900u, sub_000B2900); /* call 0x000B2900 */

loc_000A5E3D: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5E4Eu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A5E4E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A5E56u); RECOMP_ABI_CALL(0x000B2950u, sub_000B2950); /* call 0x000B2950 */

loc_000A5E56: ;
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5E67u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A5E67: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A5E6Fu); RECOMP_ABI_CALL(0x000B29A0u, sub_000B29A0); /* call 0x000B29A0 */

loc_000A5E6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5E78: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5E81u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A5E81: ;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x000A5E8Cu); RECOMP_ABI_CALL(0x000A5D40u, sub_000A5D40); /* call 0x000A5D40 */

loc_000A5E8C: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5E98: ;
    ebx = MEM32(esi + 0x54);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5EA8u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A5EA8: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000A5EB2u); RECOMP_ABI_CALL(0x000B28B0u, sub_000B28B0); /* call 0x000B28B0 */

loc_000A5EB2: ;
    ebx = MEM32(esi + 0x60);
    ebp = MEM32(esi + 0x5C);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5EC1u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A5EC1: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000A5ECBu); RECOMP_ABI_CALL(0x000B2900u, sub_000B2900); /* call 0x000B2900 */

loc_000A5ECB: ;
    ebx = MEM32(esi + 0x3C);
    ebp = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5EDAu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A5EDA: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000A5EE4u); RECOMP_ABI_CALL(0x000B2950u, sub_000B2950); /* call 0x000B2950 */

loc_000A5EE4: ;
    ebx = MEM32(esi + 0x48);
    ebp = MEM32(esi + 0x44);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5EF3u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A5EF3: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000A5EFDu); RECOMP_ABI_CALL(0x000B29A0u, sub_000B29A0); /* call 0x000B29A0 */

loc_000A5EFD: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5F07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA211CE17u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA211CE17u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A62BB; /* jne: not equal / not zero */

loc_000A5F12: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5F1Bu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000A5F1B: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A5F26u); RECOMP_ABI_CALL(0x000B2F50u, sub_000B2F50); /* call 0x000B2F50 */

loc_000A5F26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5F2F: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A5F38u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A5F38: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A5F87; /* je: equal / zero */

loc_000A5F3D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A5F67; /* je: equal / zero */

loc_000A5F40: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A632B; /* jne: not equal / not zero */

loc_000A5F47: ;
    eax = MEM32(esi + 0x114);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A5F5Eu); RECOMP_ABI_CALL(0x000B1FC0u, sub_000B1FC0); /* call 0x000B1FC0 */

loc_000A5F5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5F67: ;
    ecx = MEM32(esi + 0x114);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A5F7Eu); RECOMP_ABI_CALL(0x000B1FC0u, sub_000B1FC0); /* call 0x000B1FC0 */

loc_000A5F7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5F87: ;
    edx = MEM32(esi + 0x114);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A5F9Eu); RECOMP_ABI_CALL(0x000B1FC0u, sub_000B1FC0); /* call 0x000B1FC0 */

loc_000A5F9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A5FA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDBA768BCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDBA768BCu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A605A; /* jg: greater (signed >) */

loc_000A5FB2: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A603B; /* je: equal / zero */

loc_000A5FB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC3B360D0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC3B360D0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A600C; /* je: equal / zero */

loc_000A5FBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD65B9428u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD65B9428u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A62BB; /* jne: not equal / not zero */

loc_000A5FCA: ;
    ecx = MEM32(esi + 0x124);
    edx = MEM32(esi + 0x130);
    eax = MEM32(esi + 0x128);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000A5FEEu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000A5FEE: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A6003u); RECOMP_ABI_CALL(0x000B2040u, sub_000B2040); /* call 0x000B2040 */

loc_000A6003: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A600C: ;
    edx = MEM32(esi + 0x120);
    eax = MEM32(esi + 0x11C);
    ecx = MEM32(esi + 0x118);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A602Au); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A602A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6032u); RECOMP_ABI_CALL(0x000B1FC0u, sub_000B1FC0); /* call 0x000B1FC0 */

loc_000A6032: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A603B: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A6044u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A6044: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A6051u); RECOMP_ABI_CALL(0x000B1DC0u, sub_000B1DC0); /* call 0x000B1DC0 */

loc_000A6051: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A605A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE4A6321Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE4A6321Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A62BB; /* jne: not equal / not zero */

loc_000A6065: ;
    eax = MEM32(esi + 0x58);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A6075u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A6075: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A607Eu); RECOMP_ABI_CALL(0x000B28B0u, sub_000B28B0); /* call 0x000B28B0 */

loc_000A607E: ;
    eax = MEM32(esi + 0x64);
    ebx = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A608Eu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A608E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A6097u); RECOMP_ABI_CALL(0x000B2900u, sub_000B2900); /* call 0x000B2900 */

loc_000A6097: ;
    eax = MEM32(esi + 0x40);
    ebx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A60A7u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A60A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A60B0u); RECOMP_ABI_CALL(0x000B2950u, sub_000B2950); /* call 0x000B2950 */

loc_000A60B0: ;
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A60C0u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A60C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A60C9u); RECOMP_ABI_CALL(0x000B29A0u, sub_000B29A0); /* call 0x000B29A0 */

loc_000A60C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A60D2: ;
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000A60E5u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000A60E5: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A60F5u); RECOMP_ABI_CALL(0x000B2CC0u, sub_000B2CC0); /* call 0x000B2CC0 */

loc_000A60F5: ;
    edx = MEM32(esi + 0xC8);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x000A6108u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000A6108: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6118u); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_000A6118: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A6121: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB229E26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB229E26 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A623B; /* jg: greater (signed >) */

loc_000A612C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A6201; /* je: equal / zero */

loc_000A6132: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF9AA5E37u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF9AA5E37u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A61DC; /* jg: greater (signed >) */

loc_000A613D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A619D; /* je: equal / zero */

loc_000A613F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEC5767E1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEC5767E1u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A616B; /* je: equal / zero */

loc_000A6146: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF123A607u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF123A607u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A62BB; /* jne: not equal / not zero */

loc_000A6151: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A615Au); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A615A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6162u); RECOMP_ABI_CALL(0x000B1F90u, sub_000B1F90); /* call 0x000B1F90 */

loc_000A6162: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A616B: ;
    ecx = MEM32(esi + 0x130);
    edx = MEM32(esi + 0x12C);
    eax = MEM32(esi + 0x128);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A6189u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000A6189: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A6194u); RECOMP_ABI_CALL(0x000B2040u, sub_000B2040); /* call 0x000B2040 */

loc_000A6194: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A619D: ;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A61ADu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000A61AD: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A61B8u); RECOMP_ABI_CALL(0x000B2CC0u, sub_000B2CC0); /* call 0x000B2CC0 */

loc_000A61B8: ;
    edx = MEM32(esi + 0xCC);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A61C8u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000A61C8: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A61D3u); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_000A61D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A61DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFAF6BD9Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFAF6BD9Du (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A62BB; /* jne: not equal / not zero */

loc_000A61E7: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A61F0u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A61F0: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A61F8u); RECOMP_ABI_CALL(0x000B2F00u, sub_000B2F00); /* call 0x000B2F00 */

loc_000A61F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A6201: ;
    ecx = MEM32(esi + 0x130);
    edx = MEM32(esi + 0x12C);
    eax = MEM32(esi + 0x124);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000A6222u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000A6222: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6232u); RECOMP_ABI_CALL(0x000B2040u, sub_000B2040); /* call 0x000B2040 */

loc_000A6232: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A623B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24842ADA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24842ADA (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A62B4; /* jg: greater (signed >) */

loc_000A6242: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000A629A; /* je: equal / zero */

loc_000A6244: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1121166E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1121166E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A626C; /* je: equal / zero */

loc_000A624B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1AE409C5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1AE409C5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A62BB; /* jne: not equal / not zero */

loc_000A6252: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A625Bu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A625B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6263u); RECOMP_ABI_CALL(0x000B2EB0u, sub_000B2EB0); /* call 0x000B2EB0 */

loc_000A6263: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A626C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A6275u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A6275: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A627Fu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A627F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A6289u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A6289: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6291u); RECOMP_ABI_CALL(0x000B1D80u, sub_000B1D80); /* call 0x000B1D80 */

loc_000A6291: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A629A: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A62A3u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000A62A3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A62ABu); RECOMP_ABI_CALL(0x000B1D00u, sub_000B1D00); /* call 0x000B1D00 */

loc_000A62AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A62B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x312E6DEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x312E6DEF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A62EA; /* je: equal / zero */

loc_000A62BB: ;
    ecx = edi;
    PUSH32(esp, 0x000A62C2u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000A62C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A62C8u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000A62C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A62D3u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000A62D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30FEA8);
    PUSH32(esp, 0x000A62DEu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000A62DE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000A62EA: ;
    ecx = MEM32(esi + 0x12C);
    edx = MEM32(esi + 0x128);
    eax = MEM32(esi + 0x124);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000A6311u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000A6311: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A632Bu); RECOMP_ABI_CALL(0x000B2040u, sub_000B2040); /* call 0x000B2040 */

loc_000A632B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_000A6340
 * Original: 0x000A6340 - 0x000A6363 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6340(void)
{

loc_000A6340: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000A6350u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A634Du); } /* indirect call */
    }

loc_000A6350: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A6358u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A6355u); } /* indirect call */
    }

loc_000A6358: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A6370
 * Original: 0x000A6370 - 0x000A6469 (249 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6370(void)
{

loc_000A6370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A6378u); RECOMP_ABI_CALL(0x000B2FA0u, sub_000B2FA0); /* call 0x000B2FA0 */

loc_000A6378: ;
    MEM32(esi + 0xC) = 0;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(0x3727C4), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A638Fu); RECOMP_ABI_CALL(0x000B1DD0u, sub_000B1DD0); /* call 0x000B1DD0 */

loc_000A638F: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000A6398u); RECOMP_ABI_CALL(0x000B1DF0u, sub_000B1DF0); /* call 0x000B1DF0 */

loc_000A6398: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    PUSH32(esp, 0x000A63A9u); RECOMP_ABI_CALL(0x000B1E10u, sub_000B1E10); /* call 0x000B1E10 */

loc_000A63A9: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A63B2u); RECOMP_ABI_CALL(0x000B1E70u, sub_000B1E70); /* call 0x000B1E70 */

loc_000A63B2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A63BFu); RECOMP_ABI_CALL(0x000B2A50u, sub_000B2A50); /* call 0x000B2A50 */

loc_000A63BF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A63CCu); RECOMP_ABI_CALL(0x000B29F0u, sub_000B29F0); /* call 0x000B29F0 */

loc_000A63CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A63D9u); RECOMP_ABI_CALL(0x000B1E90u, sub_000B1E90); /* call 0x000B1E90 */

loc_000A63D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A63E6u); RECOMP_ABI_CALL(0x000B2B20u, sub_000B2B20); /* call 0x000B2B20 */

loc_000A63E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A63F3u); RECOMP_ABI_CALL(0x000B2AC0u, sub_000B2AC0); /* call 0x000B2AC0 */

loc_000A63F3: ;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    PUSH32(esp, 0x000A63FFu); RECOMP_ABI_CALL(0x000B1EC0u, sub_000B1EC0); /* call 0x000B1EC0 */

loc_000A63FF: ;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    PUSH32(esp, 0x000A640Bu); RECOMP_ABI_CALL(0x000B1EF0u, sub_000B1EF0); /* call 0x000B1EF0 */

loc_000A640B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A6414u); RECOMP_ABI_CALL(0x000B2D10u, sub_000B2D10); /* call 0x000B2D10 */

loc_000A6414: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A641Du); RECOMP_ABI_CALL(0x000B2D40u, sub_000B2D40); /* call 0x000B2D40 */

loc_000A641D: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A6426u); RECOMP_ABI_CALL(0x000B2E00u, sub_000B2E00); /* call 0x000B2E00 */

loc_000A6426: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A642Fu); RECOMP_ABI_CALL(0x000B2E40u, sub_000B2E40); /* call 0x000B2E40 */

loc_000A642F: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A6438u); RECOMP_ABI_CALL(0x000B1F60u, sub_000B1F60); /* call 0x000B1F60 */

loc_000A6438: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A6441u); RECOMP_ABI_CALL(0x000B1F20u, sub_000B1F20); /* call 0x000B1F20 */

loc_000A6441: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A644Au); RECOMP_ABI_CALL(0x000B1F40u, sub_000B1F40); /* call 0x000B1F40 */

loc_000A644A: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A6453u); RECOMP_ABI_CALL(0x000B2D70u, sub_000B2D70); /* call 0x000B2D70 */

loc_000A6453: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A645Cu); RECOMP_ABI_CALL(0x000B2DB0u, sub_000B2DB0); /* call 0x000B2DB0 */

loc_000A645C: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A6465u); RECOMP_ABI_CALL(0x000B1F80u, sub_000B1F80); /* call 0x000B1F80 */

loc_000A6465: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6470
 * Original: 0x000A6470 - 0x000A64C8 (88 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6470: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000A6479u); RECOMP_ABI_CALL(0x000B9580u, sub_000B9580); /* call 0x000B9580 */

loc_000A6479: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6485u); RECOMP_ABI_CALL(0x000B96D0u, sub_000B96D0); /* call 0x000B96D0 */

loc_000A6485: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A6497; /* je: equal / zero */

loc_000A6491: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6497u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000A6497: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000A64A6; /* je: equal / zero */

loc_000A649E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A64A6u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_000A64A6: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000A64B4; /* jne: not equal / not zero */

loc_000A64AF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_000A64B4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x000A64BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A64B6u); } /* indirect call */
    }

loc_000A64BC: ;
    MEM8(eax + 0x20D) = MEM8(eax + 0x20D) | 0x40;
    _fa = (uint32_t)(MEM8(eax + 0x20D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A64D0
 * Original: 0x000A64D0 - 0x000A64FC (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A64D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A64D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A64E0; /* je: equal / zero */

loc_000A64DA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A64E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A64DEu); } /* indirect call */
    }

loc_000A64E0: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_000A64F3; /* je: equal / zero */

loc_000A64ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A64F3u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000A64F3: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6500
 * Original: 0x000A6500 - 0x000A6504 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6500(void)
{

loc_000A6500: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6510
 * Original: 0x000A6510 - 0x000A651E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6510: ;
    PUSH32(esp, 0x80);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A651Du); RECOMP_ABI_CALL(0x00156730u, sub_00156730); /* call 0x00156730 */

loc_000A651D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6520
 * Original: 0x000A6520 - 0x000A6534 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6520: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x2FF02C;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6540
 * Original: 0x000A6540 - 0x000A6545 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6540: ;
    g_seh_ebp = ebp; sub_000A69E0(); return; /* tail jmp 0x000A69E0 */

}

/**
 * sub_000A6550
 * Original: 0x000A6550 - 0x000A6590 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6550: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = 0x30FF18;
    if (CMP_EQ(_fa, _fb)) goto loc_000A657D; /* je: equal / zero */

loc_000A6569: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A6577u); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_000A6577: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000A657D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A658Au); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_000A658A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A656C
 * Original: 0x000A656C - 0x000A6590 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A656C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A656C: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A6577u); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_000A6577: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A65D0
 * Original: 0x000A65D0 - 0x000A65FC (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A65D0(void)
{

loc_000A65D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    eax = esi + 8;
    MEM32(esi) = 0;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x18);
    ecx = edi;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    PUSH32(esp, 0x000A65F1u); RECOMP_ABI_CALL(0x001565D0u, sub_001565D0); /* call 0x001565D0 */

loc_000A65F1: ;
    MEM32(edi) = 0x30FE98;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6600
 * Original: 0x000A6600 - 0x000A6653 (83 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6600: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 4;
    MEM32(edi) = 0x30FF20;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A663B; /* je: equal / zero */

loc_000A6614: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A6621u); RECOMP_ABI_CALL(0x000A6A70u, sub_000A6A70); /* call 0x000A6A70 */

loc_000A6621: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 4) = 0;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = 0;

loc_000A663B: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A664A; /* je: equal / zero */

loc_000A6641: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6647u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A6647: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A664A: ;
    MEM32(edi) = 0x2FF0D4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6660
 * Original: 0x000A6660 - 0x000A6694 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6660: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000A6692; /* je: equal / zero */

loc_000A666B: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A6678u); RECOMP_ABI_CALL(0x000A6A70u, sub_000A6A70); /* call 0x000A6A70 */

loc_000A6678: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 4) = 0;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = 0;

loc_000A6692: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A66A0
 * Original: 0x000A66A0 - 0x000A66EB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A66A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A66A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A66A8u); RECOMP_ABI_CALL(0x000A69E0u, sub_000A69E0); /* call 0x000A69E0 */

loc_000A66A8: ;
    PUSH32(esp, 0);
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A66B2u); RECOMP_ABI_CALL(0x00156730u, sub_00156730); /* call 0x00156730 */

loc_000A66B2: ;
    esi = MEM32(0x3C3EA0);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A66E9; /* je: equal / zero */

loc_000A66C2: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A66CFu); RECOMP_ABI_CALL(0x000A6A70u, sub_000A6A70); /* call 0x000A6A70 */

loc_000A66CF: ;
    eax = MEM32(esi);
    MEM32(eax + 8) = eax;
    edx = MEM32(esi);
    MEM32(edx + 4) = 0;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = eax;
    MEM32(esi + 4) = 0;

loc_000A66E9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A66F0
 * Original: 0x000A66F0 - 0x000A6748 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A66F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A66F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x30FF20;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x198);
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x000A670Au); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A670A: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ebx;
    MEM8(eax) = LO8(ebx);
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = ebx;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = eax;
    PUSH32(esp, 0x30FE60);
    ecx = esp + 0xC;
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x000A6738u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000A6738: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A673Fu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000A673F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6750
 * Original: 0x000A6750 - 0x000A6789 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6750: ;
    eax = MEM32(0x3C3EA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6788; /* jne: not equal / not zero */

loc_000A6759: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x30FF48);
    PUSH32(esp, 0x000A676Au); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000A676A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A677E; /* je: equal / zero */

loc_000A6771: ;
    ecx = eax;
    PUSH32(esp, 0x000A6778u); RECOMP_ABI_CALL(0x000A66F0u, sub_000A66F0); /* call 0x000A66F0 */

loc_000A6778: ;
    MEM32(0x3C3EA0) = eax;
    esp += 4; return; /* ret */

loc_000A677E: ;
    MEM32(0x3C3EA0) = 0;

loc_000A6788: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6790
 * Original: 0x000A6790 - 0x000A6842 (178 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x314) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x314;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x19C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A67ADu); RECOMP_ABI_CALL(0x000A6370u, sub_000A6370); /* call 0x000A6370 */

loc_000A67AD: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = 0x30FE70;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = 0x30FEF0;
    esi = eax + 8;
    ecx = 0x5D;
    edi = esp + 0x20;
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
    ecx = MEM32(eax + 0x17C);
    MEM32(esp + 0x194) = ecx;
    edx = MEM32(eax + 0x180);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx + 4;
    MEM32(esp + 0x1A0) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A6805u); RECOMP_ABI_CALL(0x000A6C80u, sub_000A6C80); /* call 0x000A6C80 */

loc_000A6805: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A680Eu); RECOMP_ABI_CALL(0x000B3150u, sub_000B3150); /* call 0x000B3150 */

loc_000A680E: ;
    ecx = esp + 0x19C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A681Au); RECOMP_ABI_CALL(0x000B3150u, sub_000B3150); /* call 0x000B3150 */

loc_000A681A: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A682D; /* jne: not equal / not zero */

loc_000A6822: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_000A682D: ;
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebx + 0x10) = edx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A6850
 * Original: 0x000A6850 - 0x000A68F0 (160 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6850: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x3C3EA0);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000A6878u); RECOMP_ABI_CALL(0x00081F50u, sub_00081F50); /* call 0x00081F50 */

loc_000A6878: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A68CE; /* je: equal / zero */

loc_000A6880: ;
    ebx = eax + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A68CE; /* je: equal / zero */

loc_000A6887: ;
    esi = edi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6893; /* je: equal / zero */

loc_000A688E: ;
    eax = edi + -8;
    goto loc_000A6895;

loc_000A6893: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A6895: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A68A2u); RECOMP_ABI_CALL(0x000A6C00u, sub_000A6C00); /* call 0x000A6C00 */

loc_000A68A2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A68AB; /* je: equal / zero */

loc_000A68A6: ;
    eax = edi + -8;
    goto loc_000A68AD;

loc_000A68AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A68AD: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A68CE; /* je: equal / zero */

loc_000A68B5: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A68BDu); RECOMP_ABI_CALL(0x000A6470u, sub_000A6470); /* call 0x000A6470 */

loc_000A68BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A68D7; /* jne: not equal / not zero */

loc_000A68C1: ;
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000A68CEu); RECOMP_ABI_CALL(0x000A69A0u, sub_000A69A0); /* call 0x000A69A0 */

loc_000A68CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000A68D7: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000A68E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A68E1u); } /* indirect call */
    }

loc_000A68E7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A68F0
 * Original: 0x000A68F0 - 0x000A6938 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A68F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A68F0: ;
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
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xCFB731D7u);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A690Bu); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000A690B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A6911u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000A6911: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A6922u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_000A6922: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = 0x3734F8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A6932u); RECOMP_ABI_CALL(0x000A6850u, sub_000A6850); /* call 0x000A6850 */

loc_000A6932: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6940
 * Original: 0x000A6940 - 0x000A695E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6940: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A6948u); RECOMP_ABI_CALL(0x000B1CD0u, sub_000B1CD0); /* call 0x000B1CD0 */

loc_000A6948: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A6958; /* je: equal / zero */

loc_000A694F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6955u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A6955: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A6958: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A6960
 * Original: 0x000A6960 - 0x000A6965 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6960: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_000A6970
 * Original: 0x000A6970 - 0x000A6974 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6970(void)
{

loc_000A6970: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6980
 * Original: 0x000A6980 - 0x000A6994 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6980: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x2FF02C;
    esp += 4; return; /* ret */

}

/**
 * sub_000A69A0
 * Original: 0x000A69A0 - 0x000A69E0 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A69A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A69A0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A69B4; /* je: equal / zero */

loc_000A69AF: ;
    esi = eax + -16;
    goto loc_000A69B6;

loc_000A69B4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A69B6: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x30FF18;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000A69D3u); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_000A69D3: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A69E0
 * Original: 0x000A69E0 - 0x000A6A36 (86 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A69E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A69E0: ;
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
    MEM32(esp + 8) = 0x30FF18;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A6A02; /* je: equal / zero */

loc_000A69FD: ;
    eax = esi + -8;
    goto loc_000A6A04;

loc_000A6A02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A6A04: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6A15; /* je: equal / zero */

loc_000A6A0B: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_000A6A15; /* je: equal / zero */

loc_000A6A10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A6A17;

loc_000A6A15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A6A17: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A6A25u); RECOMP_ABI_CALL(0x001565A0u, sub_001565A0); /* call 0x001565A0 */

loc_000A6A25: ;
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
 * sub_000A6A40
 * Original: 0x000A6A40 - 0x000A6A6C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6A50; /* je: equal / zero */

loc_000A6A4A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A6A50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A6A4Eu); } /* indirect call */
    }

loc_000A6A50: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_000A6A63; /* je: equal / zero */

loc_000A6A5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6A63u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000A6A63: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6A70
 * Original: 0x000A6A70 - 0x000A6AAB (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6A70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A6AA6; /* je: equal / zero */

loc_000A6A7C: ;
    PUSH32(esp, edi);
    /* nop */

loc_000A6A80: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000A6A8Bu); RECOMP_ABI_CALL(0x000A6A70u, sub_000A6A70); /* call 0x000A6A70 */

loc_000A6A8B: ;
    edi = MEM32(esi + 8);
    ecx = esi + 0x14;
    PUSH32(esp, 0x000A6A96u); RECOMP_ABI_CALL(0x000B3150u, sub_000B3150); /* call 0x000B3150 */

loc_000A6A96: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6A9Cu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A6A9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000A6A80; /* jne: not equal / not zero */

loc_000A6AA5: ;
    POP32(esp, edi);

loc_000A6AA6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A6AB0
 * Original: 0x000A6AB0 - 0x000A6B0E (94 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6AB0: ;
    PUSH32(esp, 0x198);
    PUSH32(esp, 0x000A6ABAu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000A6ABA: ;
    edx = eax + 0x10;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6B0B; /* je: equal / zero */

loc_000A6AC4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = MEM32(ebx);
    MEM32(edx) = ecx;
    PUSH32(esp, esi);
    MEM32(edx + 4) = 0x30FE70;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, edi);
    MEM32(edx + 8) = ecx;
    MEM32(edx + 4) = 0x30FEF0;
    esi = ebx + 0xC;
    edi = edx + 0xC;
    ecx = 0x5D;
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
    ecx = MEM32(ebx + 0x180);
    POP32(esp, edi);
    MEM32(edx + 0x180) = ecx;
    ecx = MEM32(ebx + 0x184);
    POP32(esp, esi);
    MEM32(edx + 0x184) = ecx;
    POP32(esp, ebx);

loc_000A6B0B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A6B10
 * Original: 0x000A6B10 - 0x000A6B38 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6B10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A6B21; /* je: equal / zero */

loc_000A6B1C: ;
    esi = eax + -16;
    goto loc_000A6B23;

loc_000A6B21: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A6B23: ;
    ecx = esi;
    PUSH32(esp, 0x000A6B2Au); RECOMP_ABI_CALL(0x000A6A40u, sub_000A6A40); /* call 0x000A6A40 */

loc_000A6B2A: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A6B33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A6B30u); } /* indirect call */
    }

loc_000A6B33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A6B40
 * Original: 0x000A6B40 - 0x000A6BD9 (153 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6B40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    eax = MEM32(esp + 0x1C);
    if (CMP_EQ(_fa, _fb)) goto loc_000A6B81; /* je: equal / zero */

loc_000A6B51: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6B68; /* jne: not equal / not zero */

loc_000A6B59: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6B81; /* jne: not equal / not zero */

loc_000A6B61: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A6B81; /* jl: less (signed <) */

loc_000A6B68: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A6B70u); RECOMP_ABI_CALL(0x000A6AB0u, sub_000A6AB0); /* call 0x000A6AB0 */

loc_000A6B70: ;
    esi = eax;
    MEM32(ebx + 0xC) = esi;
    eax = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6BA6; /* jne: not equal / not zero */

loc_000A6B7C: ;
    MEM32(eax + 0xC) = esi;
    goto loc_000A6BA6;

loc_000A6B81: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A6B89u); RECOMP_ABI_CALL(0x000A6AB0u, sub_000A6AB0); /* call 0x000A6AB0 */

loc_000A6B89: ;
    esi = eax;
    MEM32(ebx + 8) = esi;
    eax = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6B9E; /* jne: not equal / not zero */

loc_000A6B94: ;
    MEM32(eax + 4) = esi;
    edx = MEM32(edi);
    MEM32(edx + 0xC) = esi;
    goto loc_000A6BA6;

loc_000A6B9E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6BA6; /* jne: not equal / not zero */

loc_000A6BA3: ;
    MEM32(eax + 8) = esi;

loc_000A6BA6: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6BC3u); RECOMP_ABI_CALL(0x00036060u, sub_00036060); /* call 0x00036060 */

loc_000A6BC3: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000A6BE0
 * Original: 0x000A6BE0 - 0x000A6BFE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A6BE8u); RECOMP_ABI_CALL(0x000A6600u, sub_000A6600); /* call 0x000A6600 */

loc_000A6BE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A6BF8; /* je: equal / zero */

loc_000A6BEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6BF5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A6BF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A6BF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A6C00
 * Original: 0x000A6C00 - 0x000A6C75 (117 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A6C0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A6C09u); } /* indirect call */
    }

loc_000A6C0C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6C29; /* je: equal / zero */

loc_000A6C12: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax) = 0x2FF02C;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    goto loc_000A6C33;

loc_000A6C29: ;
    ecx = esi + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6C3C; /* je: equal / zero */

loc_000A6C30: ;
    eax = esi + -8;

loc_000A6C33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6C3C; /* je: equal / zero */

loc_000A6C37: ;
    ecx = eax + 0x10;
    goto loc_000A6C3E;

loc_000A6C3C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A6C3E: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6C4B; /* je: equal / zero */

loc_000A6C46: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A6C4D;

loc_000A6C4B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A6C4D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6C56u); RECOMP_ABI_CALL(0x001568B0u, sub_001568B0); /* call 0x001568B0 */

loc_000A6C56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6C68; /* je: equal / zero */

loc_000A6C5A: ;
    ecx = eax + -16;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A6C68: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A6C80
 * Original: 0x000A6C80 - 0x000A6D34 (180 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6C80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000A6CB8; /* je: equal / zero */

loc_000A6C98: ;
    edx = MEM32(ebx);
    /* nop */

loc_000A6CA0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x10) (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000A6CB1; /* je: equal / zero */

loc_000A6CAC: ;
    esi = MEM32(esi + 8);
    goto loc_000A6CB4;

loc_000A6CB1: ;
    esi = MEM32(esi + 0xC);

loc_000A6CB4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6CA0; /* jne: not equal / not zero */

loc_000A6CB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = edi;
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A6CF8; /* je: equal / zero */

loc_000A6CC2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6CEB; /* jne: not equal / not zero */

loc_000A6CC7: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000A6CD8u); RECOMP_ABI_CALL(0x000A6B40u, sub_000A6B40); /* call 0x000A6B40 */

loc_000A6CD8: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    MEM8(eax + 4) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000A6CEB: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000A6CF4u); RECOMP_ABI_CALL(0x0015A7D0u, sub_0015A7D0); /* call 0x0015A7D0 */

loc_000A6CF4: ;
    edx = MEM32(esp + 0x18);

loc_000A6CF8: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A6D23; /* jge: greater or equal (signed >=) */

loc_000A6CFF: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x000A6D10u); RECOMP_ABI_CALL(0x000A6B40u, sub_000A6B40); /* call 0x000A6B40 */

loc_000A6D10: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 1;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000A6D23: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 4) = 0;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A6D40
 * Original: 0x000A6D40 - 0x000A6D9E (94 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6D40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2B0);
    ecx = MEM32(esi + 0x2AC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi) = 0x30FF88;
    PUSH32(esp, 0x000A6D5Du); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_000A6D5D: ;
    ecx = MEM32(esi + 0x2AC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A6D69u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A6D69: ;
    ecx = eax;
    PUSH32(esp, 0x000A6D70u); RECOMP_ABI_CALL(0x001C1890u, sub_001C1890); /* call 0x001C1890 */

loc_000A6D70: ;
    edi = esi + 0x2B4;
    ebx = 4;
    goto loc_000A6D80;

    /* nop */

loc_000A6D80: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6D8E; /* je: equal / zero */

loc_000A6D86: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6D8Eu); RECOMP_ABI_CALL(0x000BD1F0u, sub_000BD1F0); /* call 0x000BD1F0 */

loc_000A6D8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A6D80; /* jne: not equal / not zero */

loc_000A6D94: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000BCAD0(); return; /* tail jmp 0x000BCAD0 */

}

/**
 * sub_000A6DA0
 * Original: 0x000A6DA0 - 0x000A6DA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6DA0(void)
{

loc_000A6DA0: ;
    eax = MEM32(0x3C3EB4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6DB0
 * Original: 0x000A6DB0 - 0x000A6DFE (78 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6DB0: ;
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
 * sub_000A6E00
 * Original: 0x000A6E00 - 0x000A6E1B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6E00: ;
    ecx = MEM32(0x3C3EB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6E1A; /* je: equal / zero */

loc_000A6E0A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A6E10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A6E0Eu); } /* indirect call */
    }

loc_000A6E10: ;
    MEM32(0x3C3EB4) = 0;

loc_000A6E1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6E20
 * Original: 0x000A6E20 - 0x000A6E67 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6E20(void)
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

loc_000A6E20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A6E2Cu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A6E2C: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000A6E36u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A6E36: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x000A6E42u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A6E42: ;
    fp_push(MEMF(edi)); /* fld float */
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0x000A6E4Du); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A6E4D: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi + 3) = LO8(ebx);
    MEM8(esi + 2) = LO8(ecx);
    eax = esi;
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
 * sub_000A6E70
 * Original: 0x000A6E70 - 0x000A6EA3 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6E70(void)
{

loc_000A6E70: ;
    edx = ZX8(MEM8(ecx + 3));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 2));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 1));
    ecx = ZX8(MEM8(ecx));
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6EB0
 * Original: 0x000A6EB0 - 0x000A6ED2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6EB0(void)
{

loc_000A6EB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x11C);
    PUSH32(esp, 0x000A6EC2u); RECOMP_ABI_CALL(0x00194C60u, sub_00194C60); /* call 0x00194C60 */

loc_000A6EC2: ;
    ecx = eax + eax * 2;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esi + ecx * 8 + 0x22C), g_mxcsr, 1); /* cvttss2si */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A6EE0
 * Original: 0x000A6EE0 - 0x000A7084 (420 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6EE0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    edx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000A6F03; /* je: equal / zero */

loc_000A6EF6: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x28C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x28C), edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A707C; /* jae: above or equal (unsigned >=) */

loc_000A6F03: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    MEM8(eax + ecx + 0x168) = LO8(edx);
    if (CMP_LE(_fas, _fbs)) goto loc_000A6F1D; /* jle: less or equal (signed <=) */

loc_000A6F16: ;
    esi = 0xFF;
    goto loc_000A6F23;

loc_000A6F1D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A6F23; /* jge: greater or equal (signed >=) */

loc_000A6F21: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A6F23: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A6F34; /* jl: less (signed <) */

loc_000A6F2D: ;
    edi = 3;
    goto loc_000A6F3A;

loc_000A6F34: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A6F3A; /* jge: greater or equal (signed >=) */

loc_000A6F38: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A6F3A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    edx = MEM32(ecx + eax * 4 + 0x28C);
    if (CMP_NE(_fa, _fb)) goto loc_000A6FD4; /* jne: not equal / not zero */

loc_000A6F49: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6FDC; /* je: equal / zero */

loc_000A6F51: ;
    edx = eax + eax * 2 + 0x18;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + ecx) = edi;
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x28);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 0x16C) = xmm0.f[0]; /* movss */
    edx = ZX8(MEM8(eax));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 1));
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 2));
    eax = ZX8(MEM8(eax + 3));
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x170;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = eax;
    POP32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 8) = edx;
    POP32(esp, esi);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

loc_000A6FD4: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4 + 0x28C) = edx;

loc_000A6FDC: ;
    edx = MEM32(ecx + eax * 4 + 0x28C);
    edx = edx + eax * 2;
    edx = edx + edx * 2;
    MEM32(ecx + edx * 8 + 0x180) = edi;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    esi = MEM32(esp + 0x28);
    MEMF(ecx + edx * 8 + 0x16C) = xmm0.f[0]; /* movss */
    ebx = ZX8(MEM8(esi));
    edx = ecx + edx * 8 + 0x16C;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = ZX8(MEM8(esi + 1));
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    ebx = ZX8(MEM8(esi + 2));
    esi = ZX8(MEM8(esi + 3));
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x10);
    MEM32(edx + 4) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(edx + 8) = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x18);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x30); /* cvtsi2ss */
    MEM32(edx + 0xC) = esi;
    edx = eax + eax * 2 + 0x48;
    MEM32(ecx + edx * 8) = edi;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3727C8); /* mulss */
    MEMF(ecx + eax * 4 + 0x29C) = xmm0.f[0]; /* movss */
    POP32(esp, edi);

loc_000A707C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000A7090
 * Original: 0x000A7090 - 0x000A70D4 (68 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7090: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + eax * 4 + 0x28C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A70D1; /* je: equal / zero */

loc_000A709F: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4 + 0x28C) = edx;
    edx = edx + eax * 2 + 0x10;
    PUSH32(esp, esi);
    edx = edx + edx * 2;
    edx = MEM32(ecx + edx * 8);
    esi = eax + eax * 2 + 0x48;
    MEM32(ecx + esi * 8) = edx;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3727C8); /* mulss */
    MEMF(ecx + eax * 4 + 0x29C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);

loc_000A70D1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A70E0
 * Original: 0x000A70E0 - 0x000A71E2 (258 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A70E0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A70E0: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(ecx + edx * 4 + 0x29C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A71DF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000A70FA: ;
    xmm1 = XMM_SCALAR(MEMF(0x3727C8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + edx * 4 + 0x29C); /* divss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A7124; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000A7121: ;
    xmm0 = xmm2; /* movaps */

loc_000A7124: ;
    eax = MEM32(ecx + edx * 4 + 0x28C);
    eax = eax + edx * 2;
    eax = eax + eax * 2;
    xmm2 = XMM_SCALAR(MEMF(ecx + eax * 8 + 0x16C)); /* movss */
    PUSH32(esp, esi);
    esi = ecx + eax * 8 + 0x16C;
    eax = edx + edx * 2;
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + eax * 8 + 0x22C); /* subss */
    eax = ecx + eax * 8;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x22C); /* addss */
    MEMF(eax + 0x22C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x230); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x230); /* addss */
    MEMF(eax + 0x230) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x234); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x234); /* addss */
    MEMF(eax + 0x234) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x238); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + edx * 4 + 0x29C)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x238); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x238) = xmm2.f[0]; /* movss */
    MEMF(ecx + edx * 4 + 0x29C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);

loc_000A71DF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A71F0
 * Original: 0x000A71F0 - 0x000A745F (623 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A71F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A71F0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x4F7414);
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A720Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A7209u); } /* indirect call */
    }

loc_000A720C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    ebx = MEM32(0x4F7418);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x000A722Eu); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000A722E: ;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x000A723Cu); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000A723C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000A7246u); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000A7246: ;
    ecx = ebx;
    PUSH32(esp, 0x000A724Du); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A724D: ;
    SET_LO8(eax, MEM8(esp + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = edi + 0x10;
    MEM32(esp + 0x44) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A7263; /* je: equal / zero */

loc_000A725C: ;
    PUSH32(esp, 0x1000000);
    goto loc_000A7268;

loc_000A7263: ;
    PUSH32(esp, 0x1010101);

loc_000A7268: ;
    PUSH32(esp, 0x000A726Du); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000A726D: ;
    edx = MEM32(esp + 0x48);
    eax = esp + 0x14;
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x000A7284u); RECOMP_ABI_CALL(0x001C2D30u, sub_001C2D30); /* call 0x001C2D30 */

loc_000A7284: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7295; /* je: equal / zero */

loc_000A728C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A7295u); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_000A7295: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x48);
    ebp = esi + 4;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x000A72A7u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000A72A7: ;
    PUSH32(esp, 0x207);
    ecx = ebp;
    PUSH32(esp, 0x000A72B3u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000A72B3: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x000A72BCu); RECOMP_ABI_CALL(0x001D0BF0u, sub_001D0BF0); /* call 0x001D0BF0 */

loc_000A72BC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = esp + 0x10;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A7310u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000A7310: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = esp + 0x10;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A736Au); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000A736A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = esp + 0x10;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A73C4u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000A73C4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = esp + 0x10;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A7424u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000A7424: ;
    ecx = esi;
    PUSH32(esp, 0x000A742Bu); RECOMP_ABI_CALL(0x001D0700u, sub_001D0700); /* call 0x001D0700 */

loc_000A742B: ;
    ecx = esi;
    PUSH32(esp, 0x000A7432u); RECOMP_ABI_CALL(0x001D0780u, sub_001D0780); /* call 0x001D0780 */

loc_000A7432: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_000A7444; /* je: equal / zero */

loc_000A743C: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A7444u); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_000A7444: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x1010101);
    PUSH32(esp, 0x000A7452u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000A7452: ;
    ecx = ebx;
    PUSH32(esp, 0x000A7459u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A7459: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7460
 * Original: 0x000A7460 - 0x000A749E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7460(void)
{

loc_000A7460: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x11C);
    PUSH32(esp, 0x000A7477u); RECOMP_ABI_CALL(0x00194C60u, sub_00194C60); /* call 0x00194C60 */

loc_000A7477: ;
    MEM32(esi + 0x160) = eax;
    edx = MEM32(edi);
    eax = eax + eax * 2;
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(esi + eax * 8 + 0x22C), g_mxcsr, 1); /* cvttss2si */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7491u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A748Eu); } /* indirect call */
    }

loc_000A7491: ;
    POP32(esp, edi);
    MEM32(esi + 0x160) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A74A0
 * Original: 0x000A74A0 - 0x000A74F0 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A74A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A74A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(edi + 0x11C);
    PUSH32(esp, 0x000A74B3u); RECOMP_ABI_CALL(0x00194C60u, sub_00194C60); /* call 0x00194C60 */

loc_000A74B3: ;
    MEM32(esi + 0x160) = eax;
    SET_LO8(ecx, MEM8(eax + esi + 0x168));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A74E1; /* je: equal / zero */

loc_000A74C4: ;
    ecx = edi;
    PUSH32(esp, 0x000A74CBu); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000A74CB: ;
    ecx = MEM32(0x373524);
    PUSH32(esp, eax);
    MEM32(eax + 0x58) = ecx;
    PUSH32(esp, 0x19);
    ecx = edi;
    MEM32(eax + 0x48) = esi;
    PUSH32(esp, 0x000A74E1u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000A74E1: ;
    POP32(esp, edi);
    MEM32(esi + 0x160) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A74F0
 * Original: 0x000A74F0 - 0x000A7530 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A74F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A74F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    if ((_fca >= _fcb)) goto loc_000A752C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_000A74FA: ;
    eax = MEM32(0x3888C0);
    SET_LO8(edx, MEM8(eax + 0x1ED0));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A752B; /* jbe: below or equal (unsigned <=) */

loc_000A750C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_000A7511: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7518u); RECOMP_ABI_CALL(0x000A70E0u, sub_000A70E0); /* call 0x000A70E0 */

loc_000A7518: ;
    edx = MEM32(0x3888C0);
    eax = ZX8(MEM8(edx + 0x1ED0));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A7511; /* jl: less (signed <) */

loc_000A752A: ;
    POP32(esp, edi);

loc_000A752B: ;
    POP32(esp, esi);

loc_000A752C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A7530
 * Original: 0x000A7530 - 0x000A75ED (189 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7530: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x29C;
    edx = ebp + 0x238;
    eax = ebp + 0x178;
    goto loc_000A7560;

    /* nop */

loc_000A7560: ;
    ebx = edx + -12;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(esi + ebp + 0x168) = 1;
    MEM32(edi + -16) = ecx;
    MEMF(edi) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7591; /* je: equal / zero */

loc_000A7576: ;
    MEMF(edx + -12) = xmm1.f[0]; /* movss */
    MEMF(edx + -8) = xmm0.f[0]; /* movss */
    MEMF(edx + -4) = xmm0.f[0]; /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEM32(edx + 8) = ecx;

loc_000A7591: ;
    ebx = eax + -12;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A75B3; /* je: equal / zero */

loc_000A7598: ;
    MEMF(eax + -12) = xmm1.f[0]; /* movss */
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(eax + 8) = ecx;

loc_000A75B3: ;
    ebx = eax + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A75D5; /* je: equal / zero */

loc_000A75BA: ;
    MEMF(ebx) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x20) = ecx;

loc_000A75D5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A7560; /* jl: less (signed <) */

loc_000A75E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A75F0
 * Original: 0x000A75F0 - 0x000A7A48 (1112 bytes, 348 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A75F0(void)
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

loc_000A75F0: ;
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
    ebx = ecx;
    esi = MEM32(ebx + 0x2AC);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x2B0);
    ecx = esp + 0x50;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x48) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A761Eu); RECOMP_ABI_CALL(0x001C7670u, sub_001C7670); /* call 0x001C7670 */

loc_000A761E: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A762Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A762Cu); } /* indirect call */
    }

loc_000A762F: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A764Bu); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000A764B: ;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7659u); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000A7659: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A765Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A765Du); } /* indirect call */
    }

loc_000A765F: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7666u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A7666: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A766Bu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A766B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7672u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A7672: ;
    esi = MEM32(ebp + 8);
    eax = 3;
    edi = ebx + 8;
    PUSH32(esp, 0x207);
    ecx = edi;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 2;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    MEM32(esp + 0x48) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A76A8u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000A76A8: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 1);
    PUSH32(esp, 0x8003);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A76BBu); RECOMP_ABI_CALL(0x001CF320u, sub_001CF320); /* call 0x001CF320 */

loc_000A76BB: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A76C4u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000A76C4: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A76CDu); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000A76CD: ;
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A76D6u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_000A76D6: ;
    eax = 3;
    PUSH32(esp, 0);
    ecx = esi + 0x48;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A76F8u); RECOMP_ABI_CALL(0x001CD2C0u, sub_001CD2C0); /* call 0x001CD2C0 */

loc_000A76F8: ;
    PUSH32(esp, esi);
    esi = ebx + 4;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7703u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000A7703: ;
    edi = esi + 0x60;
    ecx = 0x10;
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(ebp + 0xC); /* cvtsi2ss */
    xmm2.f[0] = (float)(int32_t)MEM32(ebp + 0x10); /* cvtsi2ss */
    xmm4 = XMM_SCALAR(MEMF(0x2FFE28)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    esi = esp + 0x50;
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
    esi = MEM32(esp + 0x48);
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A77A7u); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000A77A7: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A77B0u); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_000A77B0: ;
    fp_push(MEMF(0x373528)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3074F0)); /* fmul dword ptr [0x3074f0] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A77C1u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A77C1: ;
    edi = MEM32(esp + 0x44);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A77D0u); RECOMP_ABI_CALL(0x001CF3B0u, sub_001CF3B0); /* call 0x001CF3B0 */

loc_000A77D0: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    eax = MEM32(esp + 0x40);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A784Au); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A784A: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    ecx = MEM32(esp + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    PUSH32(esp, ecx);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    edx = MEM32(esp + 0x40);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    PUSH32(esp, edx);
    edx = esp + 0x20;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    eax = MEM32(esp + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A78A8u); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A78A8: ;
    edx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A78D6u); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A78D6: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7904u); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A7904: ;
    fp_push(MEMF(0x373528)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x30FF9C)); /* fmul dword ptr [0x30ff9c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7915u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A7915: ;
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7920u); RECOMP_ABI_CALL(0x001CF3B0u, sub_001CF3B0); /* call 0x001CF3B0 */

loc_000A7920: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A794Eu); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A794E: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A797Cu); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A797C: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A79AAu); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A79AA: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A79D8u); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A79D8: ;
    fp_push(MEMF(0x373528)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF224)); /* fmul dword ptr [0x2ff224] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A79E9u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A79E9: ;
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A79F4u); RECOMP_ABI_CALL(0x001CF3B0u, sub_001CF3B0); /* call 0x001CF3B0 */

loc_000A79F4: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7A22u); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A7A22: ;
    eax = 0xFF000000u;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7A2Fu); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000A7A2F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7A36u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A7A36: ;
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A7A3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A7A3Cu); } /* indirect call */
    }

loc_000A7A3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A7A50
 * Original: 0x000A7A50 - 0x000A7C2A (474 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7A50(void)
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

loc_000A7A50: ;
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
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    edi = ecx + 4;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7A6Cu); RECOMP_ABI_CALL(0x001C7670u, sub_001C7670); /* call 0x001C7670 */

loc_000A7A6C: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x11C);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(eax + 0x40);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x58);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x5C);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x10) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7A99u); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_000A7A99: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    esi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x3C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7AC1u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000A7AC1: ;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7ACFu); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000A7ACF: ;
    eax = 0xFF000000u;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7ADCu); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000A7ADC: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7AE3u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A7AE3: ;
    ebx = edi + 4;
    PUSH32(esp, 0x207);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7AF2u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000A7AF2: ;
    PUSH32(esp, 2);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7AFBu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000A7AFB: ;
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7B04u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000A7B04: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7B0Du); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000A7B0D: ;
    eax = MEM32(ebp + 0x10);
    ecx = 3;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(eax + 0x14) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7B30u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000A7B30: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = esp + 0x30;
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
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x160);
    ecx = eax + eax * 2;
    esi = edi + ecx * 8 + 0x230;
    fp_push(MEMF(esi)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7B59u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A7B59: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    MEM8(esp + 0xC) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7B65u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A7B65: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    MEM8(esp + 0xD) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7B71u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A7B71: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    MEM8(esp + 0xE) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7B7Du); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A7B7D: ;
    ecx = ZX8(MEM8(esp + 0xD));
    edx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esp + 0xC));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(MEM8(esp + 0xE));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    ecx = ebx;
    MEM32(esp + 0x24) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7BABu); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000A7BAB: ;
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7BB4u); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_000A7BB4: ;
    PUSH32(esp, 0x204);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7BC0u); RECOMP_ABI_CALL(0x001CF200u, sub_001CF200); /* call 0x001CF200 */

loc_000A7BC0: ;
    PUSH32(esp, 2);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7BC9u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000A7BC9: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7BD2u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_000A7BD2: ;
    esi = MEM32(ebp + 0xC);
    edx = MEM32(esi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A7BE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A7BE3u); } /* indirect call */
    }

loc_000A7BE6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7C0Eu); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A7C0E: ;
    edi = MEM32(esp + 0x24);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7C19u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A7C19: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7C21u); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_000A7C21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A7C30
 * Original: 0x000A7C30 - 0x000A7FA1 (881 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7C30: ;
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
    esi = ecx;
    ebx = MEM32(esi + 0x2B0);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x2AC);
    ecx = esp + 0x20;
    MEM32(esp + 0x1C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7C57u); RECOMP_ABI_CALL(0x001C7670u, sub_001C7670); /* call 0x001C7670 */

loc_000A7C57: ;
    eax = MEM32(edi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A7C68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A7C65u); } /* indirect call */
    }

loc_000A7C68: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm5 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */
    if (CMP_LE(_fas, _fbs)) goto loc_000A7C96; /* jle: less or equal (signed <=) */

loc_000A7C8B: ;
    xmm5.f[0] = (float)(int32_t)MEM32(ebp + 0x10); /* cvtsi2ss */
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    goto loc_000A7CB7;

loc_000A7C96: ;
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FFE28); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm3 = xmm0; /* movaps */

loc_000A7CB7: ;
    _fa = (uint32_t)(MEM8(0x3C3F48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3C3F48), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A7CDE; /* jne: not equal / not zero */

loc_000A7CC0: ;
    MEM32(0x3C3F48) = MEM32(0x3C3F48) | 1;
    _fa = (uint32_t)(MEM32(0x3C3F48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C3F38) = eax;
    MEM32(0x3C3F3C) = eax;
    MEM32(0x3C3F40) = eax;
    MEM32(0x3C3F44) = eax;

loc_000A7CDE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(0x3C3F04) = xmm1.f[0]; /* movss */
    MEMF(0x3C3F14) = xmm1.f[0]; /* movss */
    MEMF(0x3C3F24) = xmm1.f[0]; /* movss */
    MEMF(0x3C3F34) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    MEMF(0x3C3EF8) = xmm0.f[0]; /* movss */
    MEMF(0x3C3EFC) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F00) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F08) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F0C) = xmm6.f[0]; /* movss */
    MEMF(0x3C3F10) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F18) = xmm7.f[0]; /* movss */
    MEMF(0x3C3F1C) = xmm6.f[0]; /* movss */
    MEMF(0x3C3F20) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F28) = xmm7.f[0]; /* movss */
    MEMF(0x3C3F2C) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F30) = xmm0.f[0]; /* movss */
    MEMF(0x3C3ED8) = xmm0.f[0]; /* movss */
    MEMF(0x3C3EDC) = xmm0.f[0]; /* movss */
    MEMF(0x3C3EE0) = xmm0.f[0]; /* movss */
    MEMF(0x3C3EE4) = xmm5.f[0]; /* movss */
    MEMF(0x3C3EE8) = xmm4.f[0]; /* movss */
    MEMF(0x3C3EEC) = xmm5.f[0]; /* movss */
    MEMF(0x3C3EF0) = xmm4.f[0]; /* movss */
    MEMF(0x3C3EF4) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    if (CMP_NE(_fa, _fb)) goto loc_000A7E04; /* jne: not equal / not zero */

loc_000A7DBB: ;
    MEMF(0x3C3EC8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x3C3ECC) = xmm0.f[0]; /* movss */
    MEMF(0x3C3ED0) = xmm1.f[0]; /* movss */
    MEMF(0x3C3ED4) = xmm0.f[0]; /* movss */
    MEMF(0x3C3EB8) = xmm2.f[0]; /* movss */
    MEMF(0x3C3EBC) = xmm0.f[0]; /* movss */
    MEMF(0x3C3EC0) = xmm3.f[0]; /* movss */
    MEMF(0x3C3EC4) = xmm0.f[0]; /* movss */
    goto loc_000A7E4B;

loc_000A7E04: ;
    MEMF(0x3C3ECC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x3C3EC8) = xmm0.f[0]; /* movss */
    MEMF(0x3C3ED0) = xmm0.f[0]; /* movss */
    MEMF(0x3C3ED4) = xmm1.f[0]; /* movss */
    MEMF(0x3C3EB8) = xmm0.f[0]; /* movss */
    MEMF(0x3C3EBC) = xmm2.f[0]; /* movss */
    MEMF(0x3C3EC0) = xmm0.f[0]; /* movss */
    MEMF(0x3C3EC4) = xmm3.f[0]; /* movss */

loc_000A7E4B: ;
    ecx = MEM32(esi + 0x2C4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C3EF8);
    PUSH32(esp, 0x30FFE8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7E64u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A7E64: ;
    ecx = MEM32(esi + 0x2C4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C3ED8);
    PUSH32(esp, 0x30FFE4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7E7Du); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A7E7D: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7E99u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000A7E99: ;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7EA7u); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000A7EA7: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A7EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A7EABu); } /* indirect call */
    }

loc_000A7EAD: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7EB4u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A7EB4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7EBEu); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000A7EBE: ;
    PUSH32(esp, 7);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7EC7u); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_000A7EC7: ;
    edi = MEM32(ebp + 8);
    eax = 3;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x2C4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7EE6u); RECOMP_ABI_CALL(0x001D04E0u, sub_001D04E0); /* call 0x001D04E0 */

loc_000A7EE6: ;
    ecx = MEM32(esi + 0x2C4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30FFDC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7EFBu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A7EFB: ;
    ecx = MEM32(esi + 0x2C4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30FFD0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7F10u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A7F10: ;
    ecx = MEM32(esi + 0x2C4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30FFC4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7F25u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A7F25: ;
    ecx = MEM32(esi + 0x2C4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30FFB8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7F3Au); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A7F3A: ;
    ecx = MEM32(esi + 0x2C4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C3EC8);
    PUSH32(esp, 0x30FFAC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7F53u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A7F53: ;
    ecx = MEM32(esi + 0x2C4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C3EB8);
    PUSH32(esp, 0x30FFA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7F6Cu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A7F6C: ;
    ecx = MEM32(esi + 0x2C4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7F77u); RECOMP_ABI_CALL(0x001D04F0u, sub_001D04F0); /* call 0x001D04F0 */

loc_000A7F77: ;
    esi = MEM32(esi + 0x2C4);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7F88u); RECOMP_ABI_CALL(0x001D0B60u, sub_001D0B60); /* call 0x001D0B60 */

loc_000A7F88: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A7F8Fu); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A7F8F: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A7F98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A7F95u); } /* indirect call */
    }

loc_000A7F98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A7FB0
 * Original: 0x000A7FB0 - 0x000A81F5 (581 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7FB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000A7FBBu); RECOMP_ABI_CALL(0x000BCBA0u, sub_000BCBA0); /* call 0x000BCBA0 */

loc_000A7FBB: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    MEM32(esi) = 0x30FF88;
    MEM32(esi + 0x160) = 0xFFFFFFFFu;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x16C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x170) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x174) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x178) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x17C) = xmm0.f[0]; /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x180) = ebx;
    eax = esi + 0x16C;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x2C) = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x22C) = xmm1.f[0]; /* movss */
    eax = esi + 0x22C;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = ebx;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = ebx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = ebx;
    ecx = esi + 0x168;
    eax = esi + 0x29C;
    edx = 4;

loc_000A8176: ;
    MEM8(ecx + -4) = LO8(ebx);
    MEM8(ecx) = 1;
    MEM32(eax + -16) = ebx;
    MEMF(eax) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A8176; /* jne: not equal / not zero */

loc_000A818A: ;
    ecx = esi;
    PUSH32(esp, 0x000A8191u); RECOMP_ABI_CALL(0x000A7530u, sub_000A7530); /* call 0x000A7530 */

loc_000A8191: ;
    PUSH32(esp, 0x000A8196u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A8196: ;
    ecx = eax;
    PUSH32(esp, 0x000A819Du); RECOMP_ABI_CALL(0x001C1810u, sub_001C1810); /* call 0x001C1810 */

loc_000A819D: ;
    ecx = eax;
    MEM32(esi + 0x2AC) = eax;
    PUSH32(esp, 0x000A81AAu); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_000A81AA: ;
    MEM32(esi + 0x2B0) = eax;
    PUSH32(esp, 0x000A81B5u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A81B5: ;
    ecx = eax;
    PUSH32(esp, 0x000A81BCu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A81BC: ;
    ecx = eax;
    PUSH32(esp, 0x000A81C3u); RECOMP_ABI_CALL(0x001C2370u, sub_001C2370); /* call 0x001C2370 */

loc_000A81C3: ;
    ebp = eax;
    edi = esi + 0x2B4;
    goto loc_000A81D0;

    /* nop */

loc_000A81D0: ;
    ecx = ebx;
    eax = 0x100;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A81E3u); RECOMP_ABI_CALL(0x000BCAF0u, sub_000BCAF0); /* call 0x000BCAF0 */

loc_000A81E3: ;
    MEM32(edi) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A81D0; /* jl: less (signed <) */

loc_000A81EE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8200
 * Original: 0x000A8200 - 0x000A8324 (292 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8200(void)
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

loc_000A8200: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A831D; /* je: equal / zero */

loc_000A8218: ;
    eax = MEM32(esi + 0x160);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    ebx = MEM32(esi + eax * 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x000A8233u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A8233: ;
    ecx = eax;
    PUSH32(esp, 0x000A823Au); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A823A: ;
    ecx = eax;
    PUSH32(esp, 0x000A8241u); RECOMP_ABI_CALL(0x001C1A60u, sub_001C1A60); /* call 0x001C1A60 */

loc_000A8241: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000A8266u); RECOMP_ABI_CALL(0x001C6420u, sub_001C6420); /* call 0x001C6420 */

loc_000A8266: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x30FFF8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A8284; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x30FFF8)) */

loc_000A8275: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x30FFF4); /* comiss */
    if ((_fca >= _fcb)) goto loc_000A828C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x30FFF4)) */

loc_000A8284: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A828C; /* je: equal / zero */

loc_000A8288: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_000A828E;

loc_000A828C: ;
    SET_LO8(eax, 1);

loc_000A828E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    edi = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_000A82E9; /* jg: greater (signed >) */

loc_000A829D: ;
    ebx = esi + ebp * 4 + 0x2B0;

loc_000A82A4: ;
    edx = MEM32(ebx + 4);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A82B3u); RECOMP_ABI_CALL(0x001D1370u, sub_001D1370); /* call 0x001D1370 */

loc_000A82B3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A82C8; /* jne: not equal / not zero */

loc_000A82B7: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    goto loc_000A82D6;

loc_000A82C8: ;
    ecx = edi;
    eax = 0x100;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_000A82D6: ;
    ecx = esi;
    PUSH32(esp, 0x000A82DDu); RECOMP_ABI_CALL(0x000A75F0u, sub_000A75F0); /* call 0x000A75F0 */

loc_000A82DD: ;
    eax = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A82A4; /* jle: less or equal (signed <=) */

loc_000A82E9: ;
    eax = MEM32(esi + 0x160);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    ecx = MEM32(esi + edx * 8);
    edx = MEM32(esp + 0x34);
    eax = 0x100;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi + ecx * 4 + 0x2B4);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A831Au); RECOMP_ABI_CALL(0x000A7A50u, sub_000A7A50); /* call 0x000A7A50 */

loc_000A831A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000A831D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A8330
 * Original: 0x000A8330 - 0x000A836C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8330: ;
    eax = MEM32(0x3C3EB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A836B; /* jne: not equal / not zero */

loc_000A8339: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x2C8);
    PUSH32(esp, 0x30FFFC);
    PUSH32(esp, 0x000A834Du); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000A834D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8361; /* je: equal / zero */

loc_000A8354: ;
    ecx = eax;
    PUSH32(esp, 0x000A835Bu); RECOMP_ABI_CALL(0x000A7FB0u, sub_000A7FB0); /* call 0x000A7FB0 */

loc_000A835B: ;
    MEM32(0x3C3EB4) = eax;
    esp += 4; return; /* ret */

loc_000A8361: ;
    MEM32(0x3C3EB4) = 0;

loc_000A836B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8370
 * Original: 0x000A8370 - 0x000A84EE (382 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8370: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x11C);
    PUSH32(esp, 0x000A8385u); RECOMP_ABI_CALL(0x00194C60u, sub_00194C60); /* call 0x00194C60 */

loc_000A8385: ;
    MEM32(esi + 0x160) = eax;
    SET_LO8(ecx, MEM8(eax + esi + 0x164));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A84DD; /* jne: not equal / not zero */

loc_000A839A: ;
    SET_LO8(ecx, MEM8(eax + esi + 0x168));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A84DD; /* je: equal / zero */

loc_000A83A9: ;
    ecx = esp + 7;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A83B3u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A83B3: ;
    ecx = eax;
    PUSH32(esp, 0x000A83BAu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A83BA: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A83C4u); RECOMP_ABI_CALL(0x001C33E0u, sub_001C33E0); /* call 0x001C33E0 */

loc_000A83C4: ;
    SET_LO8(eax, MEM8(esp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A83D1; /* je: equal / zero */

loc_000A83CC: ;
    PUSH32(esp, 0x000A83D1u); RECOMP_ABI_CALL(0x0018E810u, sub_0018E810); /* call 0x0018E810 */

loc_000A83D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A83D9u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A83D9: ;
    ecx = eax;
    PUSH32(esp, 0x000A83E0u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A83E0: ;
    edi = eax;
    ecx = edi;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x000A83EDu); RECOMP_ABI_CALL(0x001C1A60u, sub_001C1A60); /* call 0x001C1A60 */

loc_000A83ED: ;
    ebx = eax;
    ecx = edi;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x000A83FAu); RECOMP_ABI_CALL(0x001C2370u, sub_001C2370); /* call 0x001C2370 */

loc_000A83FA: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0x000A8418u); RECOMP_ABI_CALL(0x000BCBE0u, sub_000BCBE0); /* call 0x000BCBE0 */

loc_000A8418: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A84DA; /* je: equal / zero */

loc_000A8424: ;
    eax = MEM32(esi + 0x160);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + eax * 2;
    _fa = (uint32_t)(MEM32(esi + ecx * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + ecx * 8), ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A8473; /* jl: less (signed <) */

loc_000A8435: ;
    edi = esp + 0x28;
    ebx = esi + 0x2B4;
    /* nop */

loc_000A8440: ;
    edx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(edi) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A8451u); RECOMP_ABI_CALL(0x000BCB10u, sub_000BCB10); /* call 0x000BCB10 */

loc_000A8451: ;
    eax = MEM32(esi + 0x160);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    ecx = MEM32(esi + eax * 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A8440; /* jle: less or equal (signed <=) */

loc_000A846B: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x20);

loc_000A8473: ;
    ecx = ebx;
    PUSH32(esp, 0x000A847Au); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A847A: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A848Cu); RECOMP_ABI_CALL(0x000A8200u, sub_000A8200); /* call 0x000A8200 */

loc_000A848C: ;
    ecx = ebx;
    PUSH32(esp, 0x000A8493u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A8493: ;
    eax = MEM32(esi + 0x160);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    eax = MEM32(esi + eax * 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A84C8; /* jl: less (signed <) */

loc_000A84A6: ;
    edi = esp + eax * 4 + 0x28;
    ebx = esi + eax * 4 + 0x2B4;
    ebp = eax + 1;

loc_000A84B4: ;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A84BFu); RECOMP_ABI_CALL(0x000BCB20u, sub_000BCB20); /* call 0x000BCB20 */

loc_000A84BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A84B4; /* jne: not equal / not zero */

loc_000A84C8: ;
    PUSH32(esp, 0x000A84CDu); RECOMP_ABI_CALL(0x000A5840u, sub_000A5840); /* call 0x000A5840 */

loc_000A84CD: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A84DA; /* je: equal / zero */

loc_000A84D5: ;
    PUSH32(esp, 0x000A84DAu); RECOMP_ABI_CALL(0x0018E830u, sub_0018E830); /* call 0x0018E830 */

loc_000A84DA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000A84DD: ;
    MEM32(esi + 0x160) = 0xFFFFFFFFu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A84F0
 * Original: 0x000A84F0 - 0x000A850E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A84F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A84F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A84F8u); RECOMP_ABI_CALL(0x000A6D40u, sub_000A6D40); /* call 0x000A6D40 */

loc_000A84F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A8508; /* je: equal / zero */

loc_000A84FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8505u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000A8505: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A8508: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8510
 * Original: 0x000A8510 - 0x000A8563 (83 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8510: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C0);
    ecx = MEM32(esi + 0x3BC);
    PUSH32(esp, eax);
    MEM32(esi) = 0x310028;
    PUSH32(esp, 0x000A852Bu); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_000A852B: ;
    ecx = MEM32(esi + 0x3BC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A8537u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A8537: ;
    ecx = eax;
    PUSH32(esp, 0x000A853Eu); RECOMP_ABI_CALL(0x001C1890u, sub_001C1890); /* call 0x001C1890 */

loc_000A853E: ;
    eax = MEM32(esi + 0x3C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8550; /* je: equal / zero */

loc_000A8548: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A8550u); RECOMP_ABI_CALL(0x000BD1F0u, sub_000BD1F0); /* call 0x000BD1F0 */

loc_000A8550: ;
    ecx = esi + 0x370;
    PUSH32(esp, 0x000A855Bu); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_000A855B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000BCAD0(); return; /* tail jmp 0x000BCAD0 */

}

/**
 * sub_000A8570
 * Original: 0x000A8570 - 0x000A8576 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8570(void)
{

loc_000A8570: ;
    eax = MEM32(0x3C3F4C);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8580
 * Original: 0x000A8580 - 0x000A85F9 (121 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + esi * 4 + 0x348);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A85F4; /* je: equal / zero */

loc_000A8593: ;
    ecx = esi + esi * 4 + 0x2D;
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(edi + ecx * 8), g_mxcsr, 1); /* cvttss2si */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(edi + esi * 4 + 0x348) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000A85E5; /* jne: not equal / not zero */

loc_000A85A8: ;
    eax = eax + esi * 2 + 0xD;
    eax = eax + eax * 4;
    eax = edi + eax * 8;
    ecx = esi + esi * 4;
    edx = edi + ecx * 8;
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEM8(edx + 0x188) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x21));
    MEM8(edx + 0x189) = LO8(ecx);
    ecx = MEM32(eax + 0x14);
    MEM32(edx + 0x17C) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(edx + 0x184) = ecx;
    SET_LO8(eax, MEM8(eax + 0x22));
    MEM8(edx + 0x18A) = LO8(eax);

loc_000A85E5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(edi + esi * 4 + 0x358) = xmm0.f[0]; /* movss */

loc_000A85F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A8600
 * Original: 0x000A8600 - 0x000A864E (78 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8600: ;
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
 * sub_000A8650
 * Original: 0x000A8650 - 0x000A8653 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8650(void)
{

loc_000A8650: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8660
 * Original: 0x000A8660 - 0x000A867B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8660: ;
    ecx = MEM32(0x3C3F4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A867A; /* je: equal / zero */

loc_000A866A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A8670u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A866Eu); } /* indirect call */
    }

loc_000A8670: ;
    MEM32(0x3C3F4C) = 0;

loc_000A867A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8680
 * Original: 0x000A8680 - 0x000A86C7 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8680(void)
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

loc_000A8680: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A868Cu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A868C: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000A8696u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A8696: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x000A86A2u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A86A2: ;
    fp_push(MEMF(edi)); /* fld float */
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, 0x000A86ADu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A86AD: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi + 3) = LO8(ebx);
    MEM8(esi + 2) = LO8(ecx);
    eax = esi;
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
 * sub_000A86D0
 * Original: 0x000A86D0 - 0x000A8703 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A86D0(void)
{

loc_000A86D0: ;
    edx = ZX8(MEM8(ecx + 3));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 2));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(ecx + 1));
    ecx = ZX8(MEM8(ecx));
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8710
 * Original: 0x000A8710 - 0x000A8751 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8710: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, 1);
    MEM32(eax + 0x14) = edx;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ecx);
    MEM32(eax + 0x24) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8760
 * Original: 0x000A8760 - 0x000A8889 (297 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8760: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000A8785; /* je: equal / zero */

loc_000A8778: ;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x348)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0x348), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A8881; /* jge: greater or equal (signed >=) */

loc_000A8785: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(edx + esi + 0x164) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000A8797; /* je: equal / zero */

loc_000A8790: ;
    MEM32(esi + edx * 4 + 0x348) = MEM32(esi + edx * 4 + 0x348) + 1;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x348)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000A8797: ;
    eax = MEM32(esi + edx * 4 + 0x348);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x20); /* cvtsi2ss */
    eax = eax + edx * 2 + 0xD;
    ecx = eax + eax * 4;
    eax = esi + ecx * 8;
    ecx = MEM32(esp + 0x24);
    MEMF(eax) = xmm0.f[0]; /* movss */
    edi = ZX8(MEM8(ecx));
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = ZX8(MEM8(ecx + 1));
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = ZX8(MEM8(ecx + 2));
    ecx = ZX8(MEM8(ecx + 3));
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = MEM32(esp + 8);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = eax + 4;
    MEM32(ecx) = edi;
    edi = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edi;
    edi = MEM32(esp + 0x10);
    MEM32(ecx + 8) = edi;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x3C));
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEM32(ecx + 0xC) = edi;
    edi = MEM32(esp + 0x2C);
    SET_LO8(ecx, MEM8(esp + 0x38));
    MEM8(eax + 0x21) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0x40));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    MEM32(eax + 0x14) = edi;
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x1C) = ebp;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ebx);
    eax = edx + edx * 4 + 0x2D;
    eax = (uint32_t)recomp_cvt_si32((double)MEMF(esi + eax * 8), g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8870; /* jne: not equal / not zero */

loc_000A8848: ;
    eax = edx + edx * 4;
    eax = esi + eax * 8;
    MEM8(eax + 0x188) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x40));
    MEM8(eax + 0x189) = LO8(ecx);
    MEM32(eax + 0x17C) = edi;
    MEM32(eax + 0x184) = ebp;
    MEM8(eax + 0x18A) = LO8(ebx);

loc_000A8870: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    POP32(esp, ebp);
    MEMF(esi + edx * 4 + 0x358) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);

loc_000A8881: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_000A8890
 * Original: 0x000A8890 - 0x000A89A7 (279 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A8890: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    xmm0 = XMM_SCALAR(MEMF(edi + esi * 4 + 0x358)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A89A2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000A88AE: ;
    xmm1 = XMM_SCALAR(MEMF(0x3727C8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + esi * 4 + 0x358); /* divss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000A88D8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000A88D5: ;
    xmm0 = xmm2; /* movaps */

loc_000A88D8: ;
    eax = MEM32(edi + esi * 4 + 0x348);
    eax = eax + esi * 2 + 0xD;
    ecx = eax + eax * 4;
    xmm2 = XMM_SCALAR(MEMF(edi + ecx * 8)); /* movss */
    edx = edi + ecx * 8;
    eax = esi + esi * 4 + 0x2D;
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + eax * 8); /* subss */
    eax = edi + eax * 8;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    ecx = (uint32_t)recomp_cvt_si32((double)MEMF(eax), g_mxcsr, 1); /* cvttss2si */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0xC); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x18); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm2.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000A898C; /* jne: not equal / not zero */

loc_000A896E: ;
    SET_LO8(ecx, MEM8(edx + 0x20));
    MEM8(eax + 0x20) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + 0x21));
    MEM8(eax + 0x21) = LO8(ecx);
    ecx = MEM32(edx + 0x14);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(edx + 0x1C);
    MEM32(eax + 0x1C) = ecx;
    SET_LO8(edx, MEM8(edx + 0x22));
    MEM8(eax + 0x22) = LO8(edx);

loc_000A898C: ;
    xmm0 = XMM_SCALAR(MEMF(edi + esi * 4 + 0x358)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(edi + esi * 4 + 0x358) = xmm0.f[0]; /* movss */

loc_000A89A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A89B0
 * Original: 0x000A89B0 - 0x000A8C1F (623 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A89B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A89B0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x4F7414);
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A89D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A89D3u); } /* indirect call */
    }

loc_000A89D6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x3C);
    esi = MEM32(0x4F7418);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A89F8u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000A89F8: ;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A8A06u); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000A8A06: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A8A10u); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000A8A10: ;
    ecx = esi;
    PUSH32(esp, 0x000A8A17u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A8A17: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = edi + 0x10;
    MEM32(esp + 0x40) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A8A2D; /* je: equal / zero */

loc_000A8A26: ;
    PUSH32(esp, 0x1000000);
    goto loc_000A8A32;

loc_000A8A2D: ;
    PUSH32(esp, 0x1010101);

loc_000A8A32: ;
    PUSH32(esp, 0x000A8A37u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000A8A37: ;
    edx = esp + 0x14;
    ebp = ebp << 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x48) = ebp;
    PUSH32(esp, 0x000A8A4Au); RECOMP_ABI_CALL(0x001C2D30u, sub_001C2D30); /* call 0x001C2D30 */

loc_000A8A4A: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8A5B; /* je: equal / zero */

loc_000A8A52: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000A8A5Bu); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_000A8A5B: ;
    ebp = ebx + 4;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x000A8A67u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000A8A67: ;
    PUSH32(esp, 0x207);
    ecx = ebp;
    PUSH32(esp, 0x000A8A73u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000A8A73: ;
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x000A8A7Cu); RECOMP_ABI_CALL(0x001D0BF0u, sub_001D0BF0); /* call 0x001D0BF0 */

loc_000A8A7C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x44;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x28);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x000A8AD0u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000A8AD0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x44;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x28);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x000A8B2Au); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000A8B2A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x44;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x28);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x000A8B84u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000A8B84: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x44;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x28);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x000A8BE4u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000A8BE4: ;
    ecx = ebx;
    PUSH32(esp, 0x000A8BEBu); RECOMP_ABI_CALL(0x001D0700u, sub_001D0700); /* call 0x001D0700 */

loc_000A8BEB: ;
    ecx = ebx;
    PUSH32(esp, 0x000A8BF2u); RECOMP_ABI_CALL(0x001D0780u, sub_001D0780); /* call 0x001D0780 */

loc_000A8BF2: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8C02; /* je: equal / zero */

loc_000A8BFA: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A8C02u); RECOMP_ABI_CALL(0x001C2CF0u, sub_001C2CF0); /* call 0x001C2CF0 */

loc_000A8C02: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x1010101);
    PUSH32(esp, 0x000A8C10u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000A8C10: ;
    ecx = esi;
    PUSH32(esp, 0x000A8C17u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A8C17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A8C20
 * Original: 0x000A8C20 - 0x000A8C70 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000A8C20: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* comiss */
    PUSH32(esp, edi);
    edi = ecx;
    if ((_fca >= _fcb)) goto loc_000A8C6C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(esp + 4)) */

loc_000A8C2D: ;
    eax = MEM32(0x3888C0);
    SET_LO8(ecx, MEM8(eax + 0x1ED0));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A8C6B; /* jbe: below or equal (unsigned <=) */

loc_000A8C3F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_000A8C44: ;
    SET_LO8(eax, MEM8(edi + esi + 0x164));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8C58; /* je: equal / zero */

loc_000A8C4F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A8C58u); RECOMP_ABI_CALL(0x000A8890u, sub_000A8890); /* call 0x000A8890 */

loc_000A8C58: ;
    ecx = MEM32(0x3888C0);
    edx = ZX8(MEM8(ecx + 0x1ED0));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A8C44; /* jl: less (signed <) */

loc_000A8C6A: ;
    POP32(esp, ebx);

loc_000A8C6B: ;
    POP32(esp, esi);

loc_000A8C6C: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A8C70
 * Original: 0x000A8C70 - 0x000A8D6E (254 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8C70: ;
    PUSH32(esp, ecx);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x358;
    edx = ebp + 0x174;
    eax = ebp + 0x214;
    SET_LO8(ecx, 1);
    goto loc_000A8CA4;

loc_000A8CA0: ;
    ebp = MEM32(esp + 0x10);

loc_000A8CA4: ;
    MEM8(esi + ebp + 0x164) = LO8(ecx);
    ebp = edx + -12;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(edi + -16) = ebx;
    MEMF(edi) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8CE8; /* je: equal / zero */

loc_000A8CB9: ;
    MEMF(edx + -12) = xmm1.f[0]; /* movss */
    MEMF(edx + -8) = xmm0.f[0]; /* movss */
    MEMF(edx + -4) = xmm0.f[0]; /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEM32(edx + 8) = ebx;
    MEMF(edx + 0xC) = xmm1.f[0]; /* movss */
    MEM32(edx + 0x10) = ebx;
    MEM8(edx + 0x14) = LO8(ecx);
    MEM8(edx + 0x15) = LO8(ecx);
    MEM8(edx + 0x16) = LO8(ecx);
    MEM32(edx + 0x18) = ebx;

loc_000A8CE8: ;
    ebp = eax + -12;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8D1E; /* je: equal / zero */

loc_000A8CEF: ;
    MEMF(eax + -12) = xmm1.f[0]; /* movss */
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(eax + 8) = ebx;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x10) = ebx;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM8(eax + 0x15) = LO8(ecx);
    MEM8(eax + 0x16) = LO8(ecx);
    MEM32(eax + 0x18) = ebx;

loc_000A8D1E: ;
    ebp = eax + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8D55; /* je: equal / zero */

loc_000A8D25: ;
    MEMF(ebp) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x30) = ebx;
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x38) = ebx;
    MEM8(eax + 0x3C) = LO8(ecx);
    MEM8(eax + 0x3D) = LO8(ecx);
    MEM8(eax + 0x3E) = LO8(ecx);
    MEM32(eax + 0x40) = ebx;

loc_000A8D55: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A8CA0; /* jl: less (signed <) */

loc_000A8D68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8D70
 * Original: 0x000A8D70 - 0x000A90DE (878 bytes, 234 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8D70: ;
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
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x3BC);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x3C0);
    ecx = esp + 0x40;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x38) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8D9Fu); RECOMP_ABI_CALL(0x001C7670u, sub_001C7670); /* call 0x001C7670 */

loc_000A8D9F: ;
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A8DB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A8DADu); } /* indirect call */
    }

loc_000A8DB0: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8DCCu); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000A8DCC: ;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8DDAu); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000A8DDA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A8DE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A8DDEu); } /* indirect call */
    }

loc_000A8DE0: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8DE7u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A8DE7: ;
    PUSH32(esp, 0x10101);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8DF1u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A8DF1: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8DF8u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A8DF8: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8E02u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000A8E02: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8E0Bu); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_000A8E0B: ;
    esi = ebx + 4;
    ebx = esi + 4;
    PUSH32(esp, 0x207);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8E1Du); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000A8E1D: ;
    PUSH32(esp, 2);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8E26u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000A8E26: ;
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8E2Fu); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000A8E2F: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8E38u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000A8E38: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8E41u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_000A8E41: ;
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2.f[0] = (float)(int32_t)MEM32(ebp + 0x10); /* cvtsi2ss */
    ecx = 3;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2.f[0] = (float)(int32_t)MEM32(ebp + 0x14); /* cvtsi2ss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 2;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8E90u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000A8E90: ;
    eax = MEM32(ebp + 8);
    xmm3 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edi = esi + 0x60;
    ecx = 0x10;
    esi = esp + 0x40;
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
    edi = MEM32(esp + 0x28);
    eax = eax + eax * 4;
    SET_LO8(ecx, MEM8(edi + eax * 8 + 0x188));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = edi + eax * 8;
    eax = MEM32(esi + 0x17C);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm6 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x180)); /* movss */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000A8F78; /* jne: not equal / not zero */

loc_000A8F25: ;
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000A8F78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A9099; /* jle: less or equal (signed <=) */

loc_000A8F80: ;
    MEM32(esp + 0x30) = eax;

loc_000A8F84: ;
    SET_LO8(eax, MEM8(esi + 0x189));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebx;
    PUSH32(esp, 0x8006);
    if (CMP_EQ(_fa, _fb)) goto loc_000A8F99; /* je: equal / zero */

loc_000A8F95: ;
    PUSH32(esp, 1);
    goto loc_000A8F9E;

loc_000A8F99: ;
    PUSH32(esp, 0x8004);

loc_000A8F9E: ;
    PUSH32(esp, 0x8003);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8FA8u); RECOMP_ABI_CALL(0x001CF320u, sub_001CF320); /* call 0x001CF320 */

loc_000A8FA8: ;
    eax = MEM32(esi + 0x184);
    ecx = eax;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8FCDu); RECOMP_ABI_CALL(0x001CF3B0u, sub_001CF3B0); /* call 0x001CF3B0 */

loc_000A8FCD: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A8FFBu); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A8FFB: ;
    SET_LO8(eax, MEM8(esi + 0x188));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9051; /* je: equal / zero */

loc_000A900B: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_000A908F;

loc_000A9051: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000A908F: ;
    MEM32(esp + 0x30) = MEM32(esp + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A8F84; /* jne: not equal / not zero */

loc_000A9099: ;
    PUSH32(esp, 0x1010101);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A90A3u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A90A3: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A90AAu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A90AA: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A90B4u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000A90B4: ;
    esi = MEM32(esp + 0x38);
    eax = 0xFF000000u;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A90C5u); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000A90C5: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A90CCu); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A90CC: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A90D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A90D2u); } /* indirect call */
    }

loc_000A90D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A90E0
 * Original: 0x000A90E0 - 0x000A9349 (617 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A90E0(void)
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

loc_000A90E0: ;
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
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    edi = ecx + 4;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A90FCu); RECOMP_ABI_CALL(0x001C7670u, sub_001C7670); /* call 0x001C7670 */

loc_000A90FC: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x11C);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(eax + 0x40);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x58);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x5C);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(esp + 0x18) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9129u); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_000A9129: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    esi = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x44) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9151u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000A9151: ;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A915Fu); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000A915F: ;
    eax = 0xFF000000u;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A916Cu); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000A916C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9173u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A9173: ;
    ebx = edi + 4;
    PUSH32(esp, 0x207);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9182u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000A9182: ;
    PUSH32(esp, 2);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A918Bu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000A918B: ;
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9194u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000A9194: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A919Du); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000A919D: ;
    eax = MEM32(ebp + 0x14);
    ecx = 3;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 2;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = esp + 0x30;
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
    edi = MEM32(esp + 0x24);
    ecx = eax + eax * 4;
    esi = edi + ecx * 8;
    fp_push(MEMF(esi + 0x16C)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A91DEu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A91DE: ;
    fp_push(MEMF(esi + 0x170)); /* fld float */
    MEM8(esp + 0x14) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A91EDu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A91ED: ;
    fp_push(MEMF(esi + 0x174)); /* fld float */
    MEM8(esp + 0x15) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A91FCu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A91FC: ;
    MEM8(esp + 0x16) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x18A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A92A1; /* je: equal / zero */

loc_000A920E: ;
    edx = edi + 0x370;
    PUSH32(esp, edx);
    ecx = edi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A921Du); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000A921D: ;
    PUSH32(esp, 0x1000000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9227u); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A9227: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A922Eu); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A922E: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9238u); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000A9238: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9241u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000A9241: ;
    eax = MEM32(ebp + 8);
    eax = eax + eax * 4 + 0x2D;
    fp_push(MEMF(edi + eax * 8)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9250u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000A9250: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9284u); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A9284: ;
    PUSH32(esp, 0x1010101);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A928Eu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A928E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9295u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A9295: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A929Fu); RECOMP_ABI_CALL(0x001C3330u, sub_001C3330); /* call 0x001C3330 */

loc_000A929F: ;
    goto loc_000A92BF;

loc_000A92A1: ;
    eax = MEM32(ebp + 8);
    ecx = eax + eax * 4 + 0x2D;
    edx = (uint32_t)recomp_cvt_si32((double)MEMF(edi + ecx * 8), g_mxcsr, 1); /* cvttss2si */
    PUSH32(esp, edx);
    eax = edi + 0xB4;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A92BCu); RECOMP_ABI_CALL(0x000A89B0u, sub_000A89B0); /* call 0x000A89B0 */

loc_000A92BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A92BF: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = edi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A92CBu); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000A92CB: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x305);
    PUSH32(esp, 0x304);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A92E1u); RECOMP_ABI_CALL(0x001CF320u, sub_001CF320); /* call 0x001CF320 */

loc_000A92E1: ;
    edx = ZX8(MEM8(esp + 0x14));
    eax = ZX8(MEM8(esp + 0x15));
    ecx = ZX8(MEM8(esp + 0x16));
    edx = edx | 0xFFFFFF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3F800000);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    MEM32(esp + 0x38) = edx;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A932Cu); RECOMP_ABI_CALL(0x000BCC60u, sub_000BCC60); /* call 0x000BCC60 */

loc_000A932C: ;
    esi = MEM32(esp + 0x2C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9337u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A9337: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9340u); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_000A9340: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A9350
 * Original: 0x000A9350 - 0x000A969C (844 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9350: ;
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
    esi = ecx;
    ebx = MEM32(esi + 0x3C0);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x3BC);
    ecx = esp + 0x20;
    MEM32(esp + 0x1C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9377u); RECOMP_ABI_CALL(0x001C7670u, sub_001C7670); /* call 0x001C7670 */

loc_000A9377: ;
    eax = MEM32(edi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A9388u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9385u); } /* indirect call */
    }

loc_000A9388: ;
    xmm2.f[0] = (float)(int32_t)MEM32(ebp + 0xC); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fa = (uint32_t)(MEM8(0x3C3FE0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3C3FE0), 1 (8-bit) */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FFE28); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm3 = xmm0; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_000A93D9; /* jne: not equal / not zero */

loc_000A93BB: ;
    MEM32(0x3C3FE0) = MEM32(0x3C3FE0) | 1;
    _fa = (uint32_t)(MEM32(0x3C3FE0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C3FD0) = eax;
    MEM32(0x3C3FD4) = eax;
    MEM32(0x3C3FD8) = eax;
    MEM32(0x3C3FDC) = eax;

loc_000A93D9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(0x3C3F9C) = xmm1.f[0]; /* movss */
    MEMF(0x3C3FAC) = xmm1.f[0]; /* movss */
    MEMF(0x3C3FBC) = xmm1.f[0]; /* movss */
    MEMF(0x3C3FCC) = xmm1.f[0]; /* movss */
    MEMF(0x3C3F7C) = xmm1.f[0]; /* movss */
    MEMF(0x3C3F80) = xmm1.f[0]; /* movss */
    MEMF(0x3C3F84) = xmm1.f[0]; /* movss */
    MEMF(0x3C3F88) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    MEMF(0x3C3F90) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F94) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F98) = xmm0.f[0]; /* movss */
    MEMF(0x3C3FA0) = xmm0.f[0]; /* movss */
    MEMF(0x3C3FA4) = xmm4.f[0]; /* movss */
    MEMF(0x3C3FA8) = xmm0.f[0]; /* movss */
    MEMF(0x3C3FB0) = xmm5.f[0]; /* movss */
    MEMF(0x3C3FB4) = xmm4.f[0]; /* movss */
    MEMF(0x3C3FB8) = xmm0.f[0]; /* movss */
    MEMF(0x3C3FC0) = xmm5.f[0]; /* movss */
    MEMF(0x3C3FC4) = xmm0.f[0]; /* movss */
    MEMF(0x3C3FC8) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F70) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F74) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F78) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F8C) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    if (CMP_NE(_fa, _fb)) goto loc_000A94FF; /* jne: not equal / not zero */

loc_000A94B6: ;
    MEMF(0x3C3F60) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x3C3F64) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F68) = xmm1.f[0]; /* movss */
    MEMF(0x3C3F6C) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F50) = xmm2.f[0]; /* movss */
    MEMF(0x3C3F54) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F58) = xmm3.f[0]; /* movss */
    MEMF(0x3C3F5C) = xmm0.f[0]; /* movss */
    goto loc_000A9546;

loc_000A94FF: ;
    MEMF(0x3C3F64) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x3C3F60) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F68) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F6C) = xmm1.f[0]; /* movss */
    MEMF(0x3C3F50) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F54) = xmm2.f[0]; /* movss */
    MEMF(0x3C3F58) = xmm0.f[0]; /* movss */
    MEMF(0x3C3F5C) = xmm3.f[0]; /* movss */

loc_000A9546: ;
    ecx = MEM32(esi + 0x3C8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C3F90);
    PUSH32(esp, 0x30FFE8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A955Fu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A955F: ;
    ecx = MEM32(esi + 0x3C8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C3F70);
    PUSH32(esp, 0x30FFE4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9578u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A9578: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9594u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000A9594: ;
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A95A2u); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000A95A2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A95A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A95A6u); } /* indirect call */
    }

loc_000A95A8: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A95AFu); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A95AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A95B9u); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000A95B9: ;
    PUSH32(esp, 7);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A95C2u); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_000A95C2: ;
    edi = MEM32(ebp + 8);
    eax = 3;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x3C8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A95E1u); RECOMP_ABI_CALL(0x001D04E0u, sub_001D04E0); /* call 0x001D04E0 */

loc_000A95E1: ;
    ecx = MEM32(esi + 0x3C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30FFDC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A95F6u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A95F6: ;
    ecx = MEM32(esi + 0x3C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30FFD0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A960Bu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A960B: ;
    ecx = MEM32(esi + 0x3C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30FFC4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9620u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A9620: ;
    ecx = MEM32(esi + 0x3C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x30FFB8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9635u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A9635: ;
    ecx = MEM32(esi + 0x3C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C3F60);
    PUSH32(esp, 0x30FFAC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A964Eu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A964E: ;
    ecx = MEM32(esi + 0x3C8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C3F50);
    PUSH32(esp, 0x30FFA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9667u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000A9667: ;
    ecx = MEM32(esi + 0x3C8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9672u); RECOMP_ABI_CALL(0x001D04F0u, sub_001D04F0); /* call 0x001D04F0 */

loc_000A9672: ;
    esi = MEM32(esi + 0x3C8);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A9683u); RECOMP_ABI_CALL(0x001D0B60u, sub_001D0B60); /* call 0x001D0B60 */

loc_000A9683: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A968Au); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A968A: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A9693u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A9690u); } /* indirect call */
    }

loc_000A9693: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A96A0
 * Original: 0x000A96A0 - 0x000A99D1 (817 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A96A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A96A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000A96AAu); RECOMP_ABI_CALL(0x000BCBA0u, sub_000BCBA0); /* call 0x000BCBA0 */

loc_000A96AA: ;
    MEM32(edi) = 0x310028;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC4C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x168) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x16C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x170) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x174) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x178) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x180) = xmm1.f[0]; /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x17C) = esi;
    MEM32(edi + 0x184) = esi;
    MEM32(edi + 0x18C) = esi;
    eax = edi + 0x168;
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    SET_LO8(ecx, 1);
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ecx);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x3C) = esi;
    MEMF(eax + 0x40) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x44) = esi;
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = LO8(ecx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM32(eax + 0x4C) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x3C) = esi;
    MEMF(eax + 0x40) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x44) = esi;
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = LO8(ecx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM32(eax + 0x4C) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x3C) = esi;
    MEMF(eax + 0x40) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x44) = esi;
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = LO8(ecx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM32(eax + 0x4C) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + 0x208;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = esi;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x1C) = esi;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ecx);
    MEM32(eax + 0x24) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = esi;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x1C) = esi;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ecx);
    MEM32(eax + 0x24) = esi;
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x3C) = esi;
    MEMF(eax + 0x40) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x44) = esi;
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = LO8(ecx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM32(eax + 0x4C) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x3C) = esi;
    MEMF(eax + 0x40) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x44) = esi;
    MEM8(eax + 0x48) = LO8(ecx);
    MEM8(eax + 0x49) = LO8(ecx);
    MEM8(eax + 0x4A) = LO8(ecx);
    MEM32(eax + 0x4C) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = esi;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x1C) = esi;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ecx);
    MEM32(eax + 0x24) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = esi;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x1C) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + -8) = LO8(ecx);
    MEM8(eax + -7) = LO8(ecx);
    MEM8(eax + -6) = LO8(ecx);
    MEM32(eax + -4) = esi;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -20) = esi;
    MEMF(eax + -16) = xmm1.f[0]; /* movss */
    MEM32(eax + -12) = esi;
    MEM8(eax + -8) = LO8(ecx);
    MEM8(eax + -7) = LO8(ecx);
    MEM8(eax + -6) = LO8(ecx);
    MEM32(eax + -4) = esi;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = esi;
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x1C) = esi;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ecx);
    MEM32(eax + 0x24) = esi;
    PUSH32(esp, 0x000A9944u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_000A9944: ;
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edi + 0x370;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000A9959u); RECOMP_ABI_CALL(0x001CDD00u, sub_001CDD00); /* call 0x001CDD00 */

loc_000A9959: ;
    ecx = edi;
    MEM32(edi + 0x160) = esi;
    PUSH32(esp, 0x000A9966u); RECOMP_ABI_CALL(0x000A8C70u, sub_000A8C70); /* call 0x000A8C70 */

loc_000A9966: ;
    PUSH32(esp, 0x000A996Bu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A996B: ;
    ecx = eax;
    PUSH32(esp, 0x000A9972u); RECOMP_ABI_CALL(0x001C1810u, sub_001C1810); /* call 0x001C1810 */

loc_000A9972: ;
    ecx = eax;
    MEM32(edi + 0x3BC) = eax;
    PUSH32(esp, 0x000A997Fu); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_000A997F: ;
    MEM32(edi + 0x3C0) = eax;
    PUSH32(esp, 0x000A998Au); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A998A: ;
    ecx = eax;
    PUSH32(esp, 0x000A9991u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A9991: ;
    ecx = eax;
    PUSH32(esp, 0x000A9998u); RECOMP_ABI_CALL(0x001C2370u, sub_001C2370); /* call 0x001C2370 */

loc_000A9998: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    ecx = edi;
    PUSH32(esp, 0x000A99AAu); RECOMP_ABI_CALL(0x000BCAF0u, sub_000BCAF0); /* call 0x000BCAF0 */

loc_000A99AA: ;
    MEM32(edi + 0x3C4) = eax;
    eax = 3;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = eax;
    MEM32(ebx + 0x10) = eax;
    MEM32(edi + 0x384) = 2;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A99E0
 * Original: 0x000A99E0 - 0x000A9A3F (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A99E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A99E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3BC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9A3B; /* je: equal / zero */

loc_000A99ED: ;
    eax = MEM32(esi + 0x3C4);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A99FCu); RECOMP_ABI_CALL(0x001D1370u, sub_001D1370); /* call 0x001D1370 */

loc_000A99FC: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000A9A17u); RECOMP_ABI_CALL(0x000A8D70u, sub_000A8D70); /* call 0x000A8D70 */

loc_000A9A17: ;
    edx = MEM32(esi + 0x3C4);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000A9A3Au); RECOMP_ABI_CALL(0x000A90E0u, sub_000A90E0); /* call 0x000A90E0 */

loc_000A9A3A: ;
    POP32(esp, edi);

loc_000A9A3B: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A9A40
 * Original: 0x000A9A40 - 0x000A9A7C (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9A40: ;
    eax = MEM32(0x3C3F4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9A7B; /* jne: not equal / not zero */

loc_000A9A49: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x3D0);
    PUSH32(esp, 0x31003C);
    PUSH32(esp, 0x000A9A5Du); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000A9A5D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9A71; /* je: equal / zero */

loc_000A9A64: ;
    ecx = eax;
    PUSH32(esp, 0x000A9A6Bu); RECOMP_ABI_CALL(0x000A96A0u, sub_000A96A0); /* call 0x000A96A0 */

loc_000A9A6B: ;
    MEM32(0x3C3F4C) = eax;
    esp += 4; return; /* ret */

loc_000A9A71: ;
    MEM32(0x3C3F4C) = 0;

loc_000A9A7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9A80
 * Original: 0x000A9A80 - 0x000A9B95 (277 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9A80(void)
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

loc_000A9A80: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x11C);
    PUSH32(esp, 0x000A9A96u); RECOMP_ABI_CALL(0x00194C60u, sub_00194C60); /* call 0x00194C60 */

loc_000A9A96: ;
    ebp = eax;
    SET_LO8(eax, MEM8(esi + ebp + 0x160));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9B8D; /* jne: not equal / not zero */

loc_000A9AA7: ;
    SET_LO8(eax, MEM8(esi + ebp + 0x164));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9B8D; /* je: equal / zero */

loc_000A9AB6: ;
    ecx = ebp + ebp * 4 + 0x2D;
    xmm0 = XMM_SCALAR(MEMF(esi + ecx * 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000A9B8D; /* jnp: not parity */

loc_000A9AD0: ;
    edx = esp + 0xB;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A9ADAu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A9ADA: ;
    ecx = eax;
    PUSH32(esp, 0x000A9AE1u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A9AE1: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A9AEBu); RECOMP_ABI_CALL(0x001C33E0u, sub_001C33E0); /* call 0x001C33E0 */

loc_000A9AEB: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9AF8; /* je: equal / zero */

loc_000A9AF3: ;
    PUSH32(esp, 0x000A9AF8u); RECOMP_ABI_CALL(0x0018E810u, sub_0018E810); /* call 0x0018E810 */

loc_000A9AF8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A9AFFu); RECOMP_ABI_CALL(0x001C17B0u, sub_001C17B0); /* call 0x001C17B0 */

loc_000A9AFF: ;
    ecx = eax;
    PUSH32(esp, 0x000A9B06u); RECOMP_ABI_CALL(0x001C1720u, sub_001C1720); /* call 0x001C1720 */

loc_000A9B06: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x000A9B0Fu); RECOMP_ABI_CALL(0x001C1A60u, sub_001C1A60); /* call 0x001C1A60 */

loc_000A9B0F: ;
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x000A9B18u); RECOMP_ABI_CALL(0x001C2370u, sub_001C2370); /* call 0x001C2370 */

loc_000A9B18: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = ecx;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A9B35u); RECOMP_ABI_CALL(0x000BCBE0u, sub_000BCBE0); /* call 0x000BCBE0 */

loc_000A9B35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A9B8B; /* je: equal / zero */

loc_000A9B3D: ;
    eax = MEM32(esi + 0x3C4);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A9B58u); RECOMP_ABI_CALL(0x000BCB10u, sub_000BCB10); /* call 0x000BCB10 */

loc_000A9B58: ;
    ecx = ebx;
    PUSH32(esp, 0x000A9B5Fu); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000A9B5F: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000A9B72u); RECOMP_ABI_CALL(0x000A99E0u, sub_000A99E0); /* call 0x000A99E0 */

loc_000A9B72: ;
    ecx = ebx;
    PUSH32(esp, 0x000A9B79u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000A9B79: ;
    PUSH32(esp, 0x000A9B7Eu); RECOMP_ABI_CALL(0x000A5840u, sub_000A5840); /* call 0x000A5840 */

loc_000A9B7E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9B8B; /* je: equal / zero */

loc_000A9B86: ;
    PUSH32(esp, 0x000A9B8Bu); RECOMP_ABI_CALL(0x0018E830u, sub_0018E830); /* call 0x0018E830 */

loc_000A9B8B: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000A9B8D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}
