/**
 * Medal of Honor European Assault - Recompiled code chunk 33
 * Functions: 250 (0x00120420 - 0x00127F20)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00120420
 * Original: 0x00120420 - 0x00120457 (55 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120420: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00120453; /* je: equal / zero */

loc_0012042B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120431u); RECOMP_ABI_CALL(0x000F44E0u, sub_000F44E0); /* call 0x000F44E0 */

loc_00120431: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00120443u); RECOMP_ABI_CALL(0x00120170u, sub_00120170); /* call 0x00120170 */

loc_00120443: ;
    ecx = MEM32(eax + 0xF0);
    MEM8(ecx + 0x6C) = 0;
    MEM32(esi + 0x1D8) = eax;

loc_00120453: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120460
 * Original: 0x00120460 - 0x00120498 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120460: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00120494; /* je: equal / zero */

loc_0012046B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120471u); RECOMP_ABI_CALL(0x000F44E0u, sub_000F44E0); /* call 0x000F44E0 */

loc_00120471: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120494; /* je: equal / zero */

loc_00120478: ;
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00120484u); RECOMP_ABI_CALL(0x00120170u, sub_00120170); /* call 0x00120170 */

loc_00120484: ;
    MEM32(esi + 0x1DC) = eax;
    ecx = MEM32(eax + 0xF0);
    MEM8(ecx + 0x6C) = 0;

loc_00120494: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001204A0
 * Original: 0x001204A0 - 0x00120503 (99 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001204A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001204A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001204A8u); RECOMP_ABI_CALL(0x0011FD60u, sub_0011FD60); /* call 0x0011FD60 */

loc_001204A8: ;
    eax = MEM32(esi + 0x1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001204BE; /* jne: not equal / not zero */

loc_001204B2: ;
    PUSH32(esp, 0x33D1321F);
    ecx = esi;
    PUSH32(esp, 0x001204BEu); RECOMP_ABI_CALL(0x00114270u, sub_00114270); /* call 0x00114270 */

loc_001204BE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x170); PUSH32(esp, 0x001204C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001204C2u); } /* indirect call */
    }

loc_001204C8: ;
    PUSH32(esp, 0xD6B65E17u);
    PUSH32(esp, 0x001204D2u); RECOMP_ABI_CALL(0x000F44E0u, sub_000F44E0); /* call 0x000F44E0 */

loc_001204D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001204F5; /* je: equal / zero */

loc_001204D9: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001204E5u); RECOMP_ABI_CALL(0x00120170u, sub_00120170); /* call 0x00120170 */

loc_001204E5: ;
    MEM32(esi + 0x1DC) = eax;
    edx = MEM32(eax + 0xF0);
    MEM8(edx + 0x6C) = 0;

loc_001204F5: ;
    eax = MEM32(esi + 0x30);
    ecx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00120501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001204FEu); } /* indirect call */
    }

loc_00120501: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120510
 * Original: 0x00120510 - 0x001205C2 (178 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120510: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0x0012051Bu); RECOMP_ABI_CALL(0x0007E940u, sub_0007E940); /* call 0x0007E940 */

loc_0012051B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001205BB; /* je: equal / zero */

loc_00120524: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001205BB; /* je: equal / zero */

loc_0012052D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001205BA; /* jne: not equal / not zero */

loc_0012053B: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001205BA; /* je: equal / zero */

loc_00120542: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012054Fu); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_0012054F: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001205B9; /* je: equal / zero */

loc_00120557: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0012055Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012055Bu); } /* indirect call */
    }

loc_0012055E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012057D; /* jne: not equal / not zero */

loc_00120563: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0012056Du); RECOMP_ABI_CALL(0x00016AE0u, sub_00016AE0); /* call 0x00016AE0 */

loc_0012056D: ;
    ecx = MEM32(ebx + 4);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x14F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14F0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001205A4;

loc_0012057D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012058C; /* je: equal / zero */

loc_00120582: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012058C; /* je: equal / zero */

loc_00120587: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001205B9; /* jne: not equal / not zero */

loc_0012058C: ;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00120596u); RECOMP_ABI_CALL(0x00016AE0u, sub_00016AE0); /* call 0x00016AE0 */

loc_00120596: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(0x14F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14F4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001205A4: ;
    PUSH32(esp, 0x001205A9u); RECOMP_ABI_CALL(0x00120950u, sub_00120950); /* call 0x00120950 */

loc_001205A9: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x001205B2u); RECOMP_ABI_CALL(0x000BC9E0u, sub_000BC9E0); /* call 0x000BC9E0 */

loc_001205B2: ;
    MEM32(edi + 0xC) = 1;

loc_001205B9: ;
    POP32(esp, esi);

loc_001205BA: ;
    POP32(esp, edi);

loc_001205BB: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001205D0
 * Original: 0x001205D0 - 0x001205F5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001205D0(void)
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

loc_001205D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x4C); PUSH32(esp, 0x001205D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001205D6u); } /* indirect call */
    }

loc_001205D9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x001205E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001205DFu); } /* indirect call */
    }

loc_001205E2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x110); PUSH32(esp, 0x001205ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001205E6u); } /* indirect call */
    }

loc_001205EC: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001204A0(); return; /* tail jmp 0x001204A0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120600
 * Original: 0x00120600 - 0x00120608 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120600: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00113C60(); return; /* tail jmp 0x00113C60 */

}

/**
 * sub_00120610
 * Original: 0x00120610 - 0x00120618 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120610: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00190DF0(); return; /* tail jmp 0x00190DF0 */

}

/**
 * sub_00120620
 * Original: 0x00120620 - 0x00120628 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120620: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00113C60(); return; /* tail jmp 0x00113C60 */

}

/**
 * sub_00120630
 * Original: 0x00120630 - 0x00120634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120630(void)
{

loc_00120630: ;
    SET_LO8(eax, MEM8(ecx + 4));
    esp += 4; return; /* ret */

}

/**
 * sub_00120640
 * Original: 0x00120640 - 0x0012067A (58 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120640: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012066E; /* je: equal / zero */

loc_0012064C: ;
    PUSH32(esp, edi);
    /* nop */

loc_00120650: ;
    edi = esi;
    eax = MEM32(edi + 8);
    esi = MEM32(esi);
    ecx = edi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0012065Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012065Cu); } /* indirect call */
    }

loc_0012065E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00120664u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00120664: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120650; /* jne: not equal / not zero */

loc_0012066D: ;
    POP32(esp, edi);

loc_0012066E: ;
    eax = MEM32(ebx);
    MEM32(eax) = eax;
    ebx = MEM32(ebx);
    POP32(esp, esi);
    MEM32(ebx + 4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00120680
 * Original: 0x00120680 - 0x001206BF (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120680: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = edi + 0x14;
    MEM32(esi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0012069A; /* je: equal / zero */

loc_00120694: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012069Au); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0012069A: ;
    ecx = edi;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x001206A8u); RECOMP_ABI_CALL(0x0012F6E0u, sub_0012F6E0); /* call 0x0012F6E0 */

loc_001206A8: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001206B8; /* je: equal / zero */

loc_001206AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001206B5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001206B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001206B8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001206C0
 * Original: 0x001206C0 - 0x0012073F (127 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001206C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001206C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001206DA; /* je: equal / zero */

loc_001206D1: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001206D1; /* jne: not equal / not zero */

loc_001206DA: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012072D; /* jne: not equal / not zero */

loc_001206E0: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012072D; /* je: equal / zero */

loc_001206E7: ;
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x001206F5u); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_001206F5: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012073A; /* je: equal / zero */

loc_001206FD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00120702u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001206FFu); } /* indirect call */
    }

loc_00120702: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012073A; /* je: equal / zero */

loc_00120707: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012073A; /* je: equal / zero */

loc_0012070C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012073A; /* je: equal / zero */

loc_00120711: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012073A; /* je: equal / zero */

loc_00120716: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012073A; /* je: equal / zero */

loc_0012071B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00120728u); RECOMP_ABI_CALL(0x001FAF90u, sub_001FAF90); /* call 0x001FAF90 */

loc_00120728: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0012072D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0012073Au); RECOMP_ABI_CALL(0x001FAF90u, sub_001FAF90); /* call 0x001FAF90 */

loc_0012073A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120740
 * Original: 0x00120740 - 0x00120781 (65 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120740: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012077C; /* je: equal / zero */

loc_0012074A: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);

loc_00120750: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    edi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_00120774; /* jne: not equal / not zero */

loc_0012075A: ;
    eax = MEM32(esi + 4);
    MEM32(eax) = edi;
    ecx = esi + 8;
    MEM32(edi + 4) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0012076Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120769u); } /* indirect call */
    }

loc_0012076B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120771u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00120771: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120774: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00120750; /* jne: not equal / not zero */

loc_0012077A: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0012077C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120790
 * Original: 0x00120790 - 0x001207D9 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120790: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x2FF02C;
    edi = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_001207C3; /* je: equal / zero */

loc_001207BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001207C3u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_001207C3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001207D2; /* je: equal / zero */

loc_001207CA: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001207D2u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_001207D2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001207E0
 * Original: 0x001207E0 - 0x0012081B (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001207E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001207E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0xEA8;
    edi = 0x10;
    /* nop */

loc_001207F0: ;
    ecx = MEM32(esi + -224);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xE0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + -4;
    MEM32(eax) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_0012080F; /* je: equal / zero */

loc_00120809: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012080Fu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_0012080F: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0;
    if ((_fa != 0)) goto loc_001207F0; /* jne: not equal / not zero */

loc_00120818: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120820
 * Original: 0x00120820 - 0x00120823 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120820: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120830
 * Original: 0x00120830 - 0x00120838 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120830: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00120930(); return; /* tail jmp 0x00120930 */

}

/**
 * sub_00120840
 * Original: 0x00120840 - 0x00120848 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120840: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00120930(); return; /* tail jmp 0x00120930 */

}

/**
 * sub_00120850
 * Original: 0x00120850 - 0x001208B9 (105 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120850: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0x80000000u;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx + 0xC);
    eax = ebx * 8 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012088B; /* jle: less or equal (signed <=) */

loc_00120883: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00120889u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120886u); } /* indirect call */
    }

loc_00120889: ;
    goto loc_0012089F;

loc_0012088B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ebp = edi + eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    POP32(esp, edi);
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebp);

loc_0012089F: ;
    ecx = ebx;
    MEM32(esi) = eax;
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 8) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001208C0
 * Original: 0x001208C0 - 0x00120923 (99 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001208C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001208C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x530EB4);
    eax = eax * 8 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_001208F0; /* je: equal / zero */

loc_001208DC: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001208E7; /* je: equal / zero */

loc_001208E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001208F0; /* jne: not equal / not zero */

loc_001208E7: ;
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x28); PUSH32(esp, 0x001208EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001208EBu); } /* indirect call */
    }

loc_001208EE: ;
    goto loc_00120900;

loc_001208F0: ;
    edi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = edx;

loc_00120900: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00120920; /* js: sign (negative) */

loc_00120907: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00120920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012091Du); } /* indirect call */
    }

loc_00120920: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120930
 * Original: 0x00120930 - 0x0012094E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00120938u); RECOMP_ABI_CALL(0x0011DB60u, sub_0011DB60); /* call 0x0011DB60 */

loc_00120938: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00120948; /* je: equal / zero */

loc_0012093F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00120945u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00120945: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120948: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120950
 * Original: 0x00120950 - 0x00120983 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120950: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x0012095Bu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0012095B: ;
    esi = eax;
    ecx = esi + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120971; /* je: equal / zero */

loc_00120967: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120971u); RECOMP_ABI_CALL(0x00120790u, sub_00120790); /* call 0x00120790 */

loc_00120971: ;
    eax = MEM32(edi + 4);
    MEM32(esi) = edi;
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120990
 * Original: 0x00120990 - 0x0012099B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120990: ;
    MEM32(ecx) = 0x3197C0;
    g_seh_ebp = ebp; sub_000EE540(); return; /* tail jmp 0x000EE540 */

}

/**
 * sub_001209A0
 * Original: 0x001209A0 - 0x001209A3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001209A0(void)
{

loc_001209A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001209B0
 * Original: 0x001209B0 - 0x00120A9D (237 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001209B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001209B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001209BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001209BAu); } /* indirect call */
    }

loc_001209BD: ;
    edx = MEM32(eax + 0x30);
    ecx = eax + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001209C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001209C3u); } /* indirect call */
    }

loc_001209C6: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x23);
    ecx = 0x3C6600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001209DEu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_001209DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_001209FD; /* jne: not equal / not zero */

loc_001209E4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, 0x24);
    PUSH32(esp, ecx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x001209F7u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_001209F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120A0C; /* je: equal / zero */

loc_001209FB: ;
    PUSH32(esp, 1);

loc_001209FD: ;
    ecx = edi;
    PUSH32(esp, 0x00120A04u); RECOMP_ABI_CALL(0x00121980u, sub_00121980); /* call 0x00121980 */

loc_00120A04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120A98; /* jne: not equal / not zero */

loc_00120A0C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25);
    ecx = 0x3C6600;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120A22u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120A22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00120A91; /* jne: not equal / not zero */

loc_00120A28: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, 0x26);
    ecx = 0x3C6600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120A3Bu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120A3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120A4D; /* je: equal / zero */

loc_00120A3F: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00120A48u); RECOMP_ABI_CALL(0x00121A00u, sub_00121A00); /* call 0x00121A00 */

loc_00120A48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00120A4D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27);
    PUSH32(esp, ecx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00120A63u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120A63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120A75; /* je: equal / zero */

loc_00120A67: ;
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x00120A70u); RECOMP_ABI_CALL(0x00121A00u, sub_00121A00); /* call 0x00121A00 */

loc_00120A70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00120A75: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    ecx = 0x3C6600;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120A8Bu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120A8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120A98; /* je: equal / zero */

loc_00120A8F: ;
    PUSH32(esp, 3);

loc_00120A91: ;
    ecx = edi;
    PUSH32(esp, 0x00120A98u); RECOMP_ABI_CALL(0x00121A00u, sub_00121A00); /* call 0x00121A00 */

loc_00120A98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120AA0
 * Original: 0x00120AA0 - 0x00120AA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120AA0(void)
{

loc_00120AA0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00120AB0
 * Original: 0x00120AB0 - 0x00120B01 (81 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120AB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00120AEA; /* je: equal / zero */

loc_00120AC9: ;
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00120AD4u); RECOMP_ABI_CALL(0x000795A0u, sub_000795A0); /* call 0x000795A0 */

loc_00120AD4: ;
    ecx = MEM32(esi + 4);
    eax = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00120AE6u); RECOMP_ABI_CALL(0x000C6C40u, sub_000C6C40); /* call 0x000C6C40 */

loc_00120AE6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00120AEA: ;
    eax = ZX8(MEM8(ecx + 0x11));
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00120AFDu); RECOMP_ABI_CALL(0x000C6C40u, sub_000C6C40); /* call 0x000C6C40 */

loc_00120AFD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120B10
 * Original: 0x00120B10 - 0x00120B5B (75 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120B10(void)
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

loc_00120B10: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3197BC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00120B4C; /* jbe: below or equal (unsigned <=) */

loc_00120B24: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x14); /* addss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x37621C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120B58; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x37621C)) */

loc_00120B45: ;
    MEM8(ecx + 0x18) = 1;
    esp += 12; return; /* ret 8 */

loc_00120B4C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x18) = 0;

loc_00120B58: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120B60
 * Original: 0x00120B60 - 0x00120C2D (205 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120B60(void)
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

loc_00120B60: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(0x3210B0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_00120C2A; /* jae: above or equal (unsigned >=) */

loc_00120B8C: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_00120C2A; /* jae: above or equal (unsigned >=) (xmm4.f[0] vs xmm2.f[0]) */

loc_00120B9E: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm1 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_00120BAF; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00120BAC: ;
    xmm1 = xmm3; /* movaps */

loc_00120BAF: ;
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_00120BBA; /* ja: above (unsigned >) (xmm3.f[0] vs xmm2.f[0]) */

loc_00120BB7: ;
    xmm0 = xmm3; /* movaps */

loc_00120BBA: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x300764); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120BE3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00120BDE: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00120BEB;

loc_00120BE3: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120BEB; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_00120BE8: ;
    xmm1 = xmm4; /* movaps */

loc_00120BEB: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120BF5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00120BF0: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00120BFD;

loc_00120BF5: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120BFD; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00120BFA: ;
    xmm0 = xmm4; /* movaps */

loc_00120BFD: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120C0B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_00120C06: ;
    xmm2 = xmm1; /* movaps */
    goto loc_00120C12;

loc_00120C0B: ;
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_00120C12: ;
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00120C26; /* ja: above (unsigned >) (xmm1.f[0] vs xmm4.f[0]) */

loc_00120C1F: ;
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm4; /* movaps */

loc_00120C26: ;
    MEMF(ecx) = xmm0.f[0]; /* movss */

loc_00120C2A: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00120C30
 * Original: 0x00120C30 - 0x00120C68 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00120C38u); RECOMP_ABI_CALL(0x000EE530u, sub_000EE530); /* call 0x000EE530 */

loc_00120C38: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = ecx;
    MEM8(esi + 0x18) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi) = 0x3197C0;
    MEM32(esi + 4) = eax;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00120C62u); RECOMP_ABI_CALL(0x00120AB0u, sub_00120AB0); /* call 0x00120AB0 */

loc_00120C62: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120C70
 * Original: 0x00120C70 - 0x001210B0 (1088 bytes, 356 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120C70(void)
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

loc_00120C70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00120C81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120C7Eu); } /* indirect call */
    }

loc_00120C81: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x17);
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00120C9Bu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120C9B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x7C); PUSH32(esp, 0x00120CA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120C9Eu); } /* indirect call */
    }

loc_00120CA1: ;
    edx = MEM32(edi + 0x1C0);
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00120CC9; /* je: equal / zero */

loc_00120CB4: ;
    ecx = edi;
    PUSH32(esp, 0x00120CBBu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00120CBB: ;
    _fa = (uint32_t)(MEM32(eax + 0x1278)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1278), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120CC9; /* jne: not equal / not zero */

loc_00120CC4: ;
    MEM8(esp + 0x14) = 1;

loc_00120CC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9E);
    ecx = 0x3C6600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120CE2u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120CE2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9D);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x312444); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    PUSH32(esp, ecx);
    ecx = 0x3C6600;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00120D15u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120D15: ;
    edx = MEM32(esi + 4);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x312444); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    PUSH32(esp, edx);
    ecx = 0x3888C0;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00120D3Du); RECOMP_ABI_CALL(0x0007A300u, sub_0007A300); /* call 0x0007A300 */

loc_00120D3D: ;
    SET_LO8(ecx, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120D53; /* je: equal / zero */

loc_00120D44: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_00120D53: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3197BC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00120D8E; /* jbe: below or equal (unsigned <=) */

loc_00120D67: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x14); /* addss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x37621C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00120D9A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x37621C)) */

loc_00120D88: ;
    MEM8(esi + 0x18) = 1;
    goto loc_00120D9A;

loc_00120D8E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x18) = 0;

loc_00120D9A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00120DACu); RECOMP_ABI_CALL(0x00114980u, sub_00114980); /* call 0x00114980 */

loc_00120DAC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9B);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    ecx = 0x3C6600;
    PUSH32(esp, edx);
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00120DDBu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120DDB: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x312444); /* mulss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9C);
    ecx = 0x3C6600;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120E06u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120E06: ;
    ebp = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x312444); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FEC54); /* mulss */
    PUSH32(esp, 0x10);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    ecx = 0x3C6600;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00120E44u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120E44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120E63; /* je: equal / zero */

loc_00120E48: ;
    _fa = (uint32_t)(MEM32(edi + 0x3F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3F8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120E61; /* jne: not equal / not zero */

loc_00120E51: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    goto loc_00120E63;

loc_00120E61: ;
    SET_LO8(ebx, 1);

loc_00120E63: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00120E79u); RECOMP_ABI_CALL(0x00114950u, sub_00114950); /* call 0x00114950 */

loc_00120E79: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120E86; /* je: equal / zero */

loc_00120E7D: ;
    ecx = edi;
    PUSH32(esp, 0x00120E84u); RECOMP_ABI_CALL(0x00114000u, sub_00114000); /* call 0x00114000 */

loc_00120E84: ;
    goto loc_00120EA6;

loc_00120E86: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 5);
    PUSH32(esp, 0x11);
    ecx = 0x3C6600;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120E9Bu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120E9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120EA6; /* je: equal / zero */

loc_00120E9F: ;
    ecx = edi;
    PUSH32(esp, 0x00120EA6u); RECOMP_ABI_CALL(0x00115000u, sub_00115000); /* call 0x00115000 */

loc_00120EA6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 7);
    PUSH32(esp, 0x15);
    ecx = 0x3C6600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120EBBu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120EBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120EC9; /* je: equal / zero */

loc_00120EBF: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00120EC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120EC3u); } /* indirect call */
    }

loc_00120EC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x1B);
    ecx = 0x3C6600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120EDEu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120EDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120EEC; /* je: equal / zero */

loc_00120EE2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00120EECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120EE6u); } /* indirect call */
    }

loc_00120EEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21);
    ecx = 0x3C6600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120F02u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120F02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120F0D; /* je: equal / zero */

loc_00120F06: ;
    ecx = edi;
    PUSH32(esp, 0x00120F0Du); RECOMP_ABI_CALL(0x0011B190u, sub_0011B190); /* call 0x0011B190 */

loc_00120F0D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22);
    PUSH32(esp, ecx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00120F23u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120F23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120F2E; /* je: equal / zero */

loc_00120F27: ;
    ecx = edi;
    PUSH32(esp, 0x00120F2Eu); RECOMP_ABI_CALL(0x0011B340u, sub_0011B340); /* call 0x0011B340 */

loc_00120F2E: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00120F4B; /* je: equal / zero */

loc_00120F3D: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00120F49u); RECOMP_ABI_CALL(0x001209B0u, sub_001209B0); /* call 0x001209B0 */

loc_00120F49: ;
    goto loc_00120F89;

loc_00120F4B: ;
    edx = MEM32(edi + 0x30);
    ecx = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00120F54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120F51u); } /* indirect call */
    }

loc_00120F54: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x14);
    ecx = 0x3C6600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00120F6Bu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120F6B: ;
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x13);
    PUSH32(esp, ecx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00120F81u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120F81: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00120F89u); RECOMP_ABI_CALL(0x00124B50u, sub_00124B50); /* call 0x00124B50 */

loc_00120F89: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x1F);
    ecx = 0x3C6600;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120F9Eu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120F9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120FAC; /* je: equal / zero */

loc_00120FA2: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00120FACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120FA6u); } /* indirect call */
    }

loc_00120FAC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00120FC1u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120FC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120FCC; /* je: equal / zero */

loc_00120FC5: ;
    ecx = edi;
    PUSH32(esp, 0x00120FCCu); RECOMP_ABI_CALL(0x001147C0u, sub_001147C0); /* call 0x001147C0 */

loc_00120FCC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    PUSH32(esp, 0x16);
    ecx = 0x3C6600;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120FE1u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00120FE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120FEF; /* je: equal / zero */

loc_00120FE5: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00120FEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120FE9u); } /* indirect call */
    }

loc_00120FEF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x12);
    PUSH32(esp, ecx);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00121004u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00121004: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012100F; /* je: equal / zero */

loc_00121008: ;
    ecx = edi;
    PUSH32(esp, 0x0012100Fu); RECOMP_ABI_CALL(0x001171C0u, sub_001171C0); /* call 0x001171C0 */

loc_0012100F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x1C);
    ecx = 0x3C6600;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00121024u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00121024: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012102F; /* je: equal / zero */

loc_00121028: ;
    ecx = edi;
    PUSH32(esp, 0x0012102Fu); RECOMP_ABI_CALL(0x00113F60u, sub_00113F60); /* call 0x00113F60 */

loc_0012102F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x1A);
    ecx = 0x3C6600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121044u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00121044: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121052; /* je: equal / zero */

loc_00121048: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00121052u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012104Cu); } /* indirect call */
    }

loc_00121052: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x1E);
    ecx = 0x3C6600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121067u); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_00121067: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00121078; /* je: equal / zero */

loc_0012106C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00121078u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121072u); } /* indirect call */
    }

loc_00121078: ;
    ecx = edi;
    PUSH32(esp, 0x0012107Fu); RECOMP_ABI_CALL(0x00115990u, sub_00115990); /* call 0x00115990 */

loc_0012107F: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001210A7; /* je: equal / zero */

loc_00121085: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD1);
    ecx = 0x3C6600;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012109Eu); RECOMP_ABI_CALL(0x000C66D0u, sub_000C66D0); /* call 0x000C66D0 */

loc_0012109E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001210A7u); RECOMP_ABI_CALL(0x000EE730u, sub_000EE730); /* call 0x000EE730 */

loc_001210A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001210B0
 * Original: 0x001210B0 - 0x001210D4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001210B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001210B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3197C0;
    PUSH32(esp, 0x001210BEu); RECOMP_ABI_CALL(0x000EE540u, sub_000EE540); /* call 0x000EE540 */

loc_001210BE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001210CE; /* je: equal / zero */

loc_001210C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001210CBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001210CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001210CE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001210E0
 * Original: 0x001210E0 - 0x00121115 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001210E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001210E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1530;
    ecx = edi;
    MEM32(esi) = 0x319950;
    MEM32(esi + 0x30) = 0x319800;
    MEM32(esi + 0x38) = 0x3197F4;
    PUSH32(esp, 0x00121105u); RECOMP_ABI_CALL(0x000EA2B0u, sub_000EA2B0); /* call 0x000EA2B0 */

loc_00121105: ;
    ecx = edi;
    PUSH32(esp, 0x0012110Cu); RECOMP_ABI_CALL(0x000EADA0u, sub_000EADA0); /* call 0x000EADA0 */

loc_0012110C: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0011DB60(); return; /* tail jmp 0x0011DB60 */

}

/**
 * sub_00121120
 * Original: 0x00121120 - 0x00121130 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121120(void)
{

loc_00121120: ;
    eax = MEM32(ecx + 0x1500);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = MEM32(eax + 0x376254);
    esp += 4; return; /* ret */

}

/**
 * sub_00121130
 * Original: 0x00121130 - 0x00121150 (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121130(void)
{

loc_00121130: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0012113Du); RECOMP_ABI_CALL(0x00113CA0u, sub_00113CA0); /* call 0x00113CA0 */

loc_0012113D: ;
    PUSH32(esp, 0x1F);
    ecx = esi;
    PUSH32(esp, 0x00121146u); RECOMP_ABI_CALL(0x0011FE00u, sub_0011FE00); /* call 0x0011FE00 */

loc_00121146: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121150
 * Original: 0x00121150 - 0x00121181 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121150(void)
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

loc_00121150: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0012115Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121155u); } /* indirect call */
    }

loc_0012115B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121170; /* je: equal / zero */

loc_0012115F: ;
    ecx = MEM32(esi + 0x1500);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    POP32(esp, esi);
    fp_push(MEMF(ecx + 0x376268)); /* fld float */
    esp += 4; return; /* ret */

loc_00121170: ;
    edx = MEM32(esi + 0x1500);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    POP32(esp, esi);
    fp_push(MEMF(edx + 0x376264)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00121190
 * Original: 0x00121190 - 0x001211AD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121190: ;
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001211AA; /* je: equal / zero */

loc_0012119A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001211AAu); RECOMP_ABI_CALL(0x000ECF70u, sub_000ECF70); /* call 0x000ECF70 */

loc_001211AA: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001211B0
 * Original: 0x001211B0 - 0x001211CA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001211B0(void)
{

loc_001211B0: ;
    edx = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x30); /* subss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001211C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001211C4u); } /* indirect call */
    }

loc_001211C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001211D0
 * Original: 0x001211D0 - 0x001211DF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001211D0(void)
{

loc_001211D0: ;
    SET_LO8(eax, 1);
    MEM8(ecx + 0x1574) = LO8(eax);
    MEM8(ecx + 0x1575) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001211E0
 * Original: 0x001211E0 - 0x001211ED (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001211E0(void)
{

loc_001211E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x150C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001211F0
 * Original: 0x001211F0 - 0x00121202 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001211F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001211F0: ;
    eax = MEM32(ecx + 0x1CC);
    _fb = (uint32_t)(MEM32(ecx + 0x1E0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x1E0)));
    eax = eax - MEM32(ecx + 0x1E0);
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
 * sub_00121210
 * Original: 0x00121210 - 0x00121228 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121210: ;
    SET_LO8(eax, MEM8(0x3C2F20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121225; /* jne: not equal / not zero */

loc_00121219: ;
    SET_LO8(eax, MEM8(0x3C35A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121225; /* jne: not equal / not zero */

loc_00121222: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00121225: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121230
 * Original: 0x00121230 - 0x00121273 (67 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121230(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00121230: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x360E7561);
    esi = ecx;
    PUSH32(esp, 0x0012123Du); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_0012123D: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00121249u); RECOMP_ABI_CALL(0x0011EAF0u, sub_0011EAF0); /* call 0x0011EAF0 */

loc_00121249: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x152C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x152C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012126F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121267: ;
    MEMF(esi + 0x152C) = xmm1.f[0]; /* movss */

loc_0012126F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121280
 * Original: 0x00121280 - 0x00121298 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121280: ;
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121295; /* je: equal / zero */

loc_0012128A: ;
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EA3D0(); return; /* tail jmp 0x000EA3D0 */

loc_00121295: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001212A0
 * Original: 0x001212A0 - 0x001212B8 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001212A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001212A0: ;
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001212B5; /* je: equal / zero */

loc_001212AA: ;
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EAE90(); return; /* tail jmp 0x000EAE90 */

loc_001212B5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001212C0
 * Original: 0x001212C0 - 0x001212D8 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001212C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001212C0: ;
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001212D5; /* je: equal / zero */

loc_001212CA: ;
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EA3E0(); return; /* tail jmp 0x000EA3E0 */

loc_001212D5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001212E0
 * Original: 0x001212E0 - 0x00121300 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001212E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001212E0: ;
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001212F5; /* je: equal / zero */

loc_001212EA: ;
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EA410(); return; /* tail jmp 0x000EA410 */

loc_001212F5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121300
 * Original: 0x00121300 - 0x00121318 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121300: ;
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121315; /* je: equal / zero */

loc_0012130A: ;
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EA420(); return; /* tail jmp 0x000EA420 */

loc_00121315: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121320
 * Original: 0x00121320 - 0x00121338 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121320: ;
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121335; /* je: equal / zero */

loc_0012132A: ;
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EA450(); return; /* tail jmp 0x000EA450 */

loc_00121335: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121340
 * Original: 0x00121340 - 0x00121358 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121340: ;
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121355; /* je: equal / zero */

loc_0012134A: ;
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EB840(); return; /* tail jmp 0x000EB840 */

loc_00121355: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121360
 * Original: 0x00121360 - 0x00121376 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121360: ;
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121375; /* je: equal / zero */

loc_0012136A: ;
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EA480(); return; /* tail jmp 0x000EA480 */

loc_00121375: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00121380
 * Original: 0x00121380 - 0x00121398 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121380: ;
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121395; /* je: equal / zero */

loc_0012138A: ;
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000ECF50(); return; /* tail jmp 0x000ECF50 */

loc_00121395: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001213A0
 * Original: 0x001213A0 - 0x001213BC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001213A0(void)
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

loc_001213A0: ;
    eax = MEM32(ecx + 0x1500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001213B2; /* jne: not equal / not zero */

loc_001213AB: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    esp += 4; return; /* ret */

loc_001213B2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    fp_push(MEMF(eax + 0x376258)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001213C0
 * Original: 0x001213C0 - 0x001213E2 (34 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001213C0(void)
{

loc_001213C0: ;
    eax = MEM32(ecx + 0x1500);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    edx = MEM32(eax + 0x376260);
    MEM32(ecx + 0x3A8) = edx;
    eax = MEM32(eax + 0x37625C);
    MEM32(ecx + 0x3AC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001213F0
 * Original: 0x001213F0 - 0x00121406 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001213F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001213F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x001213F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001213F2u); } /* indirect call */
    }

loc_001213F8: ;
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00121403u); RECOMP_ABI_CALL(0x0007A300u, sub_0007A300); /* call 0x0007A300 */

loc_00121403: ;
    fp_push(MEMF(eax)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00121410
 * Original: 0x00121410 - 0x00121413 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121410(void)
{

loc_00121410: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121420
 * Original: 0x00121420 - 0x00121427 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121420(void)
{

loc_00121420: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00121426u); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_00121426: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00121430
 * Original: 0x00121430 - 0x0012143B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121430: ;
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EA370(); return; /* tail jmp 0x000EA370 */

}

/**
 * sub_00121440
 * Original: 0x00121440 - 0x00121451 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121440: ;
    eax = MEM32(ecx + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x0012144Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121446u); } /* indirect call */
    }

loc_0012144C: ;
    eax = ZX8(LO8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00121460
 * Original: 0x00121460 - 0x00121478 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121460: ;
    eax = MEM32(ecx + -48);
    _fb = (uint32_t)(0xFFFFFFD0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0012146Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121466u); } /* indirect call */
    }

loc_0012146C: ;
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00121477u); RECOMP_ABI_CALL(0x00079550u, sub_00079550); /* call 0x00079550 */

loc_00121477: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00121480
 * Original: 0x00121480 - 0x001214E4 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121480: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0012148Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121485u); } /* indirect call */
    }

loc_0012148B: ;
    _fb = (uint32_t)(0x151C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x151C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001214D2; /* je: equal / zero */

loc_00121496: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001214C0; /* je: equal / zero */

loc_00121499: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001214AE; /* je: equal / zero */

loc_0012149C: ;
    PUSH32(esp, 0x319AE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001214A7u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001214A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001214AE: ;
    PUSH32(esp, 0x308DCC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001214B9u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001214B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001214C0: ;
    PUSH32(esp, 0x308DC4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001214CBu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001214CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001214D2: ;
    PUSH32(esp, 0x308DBC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001214DDu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001214DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001214F0
 * Original: 0x001214F0 - 0x001214F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001214F0(void)
{

loc_001214F0: ;
    MEM8(ecx + 0x1541) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00121500
 * Original: 0x00121500 - 0x00121508 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121500(void)
{

loc_00121500: ;
    MEM8(ecx + 0x1541) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00121510
 * Original: 0x00121510 - 0x00121518 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121510(void)
{

loc_00121510: ;
    MEM8(ecx + 0x1542) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00121520
 * Original: 0x00121520 - 0x00121528 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121520(void)
{

loc_00121520: ;
    MEM8(ecx + 0x1542) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00121530
 * Original: 0x00121530 - 0x001215B6 (134 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00121530: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0012153Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121537u); } /* indirect call */
    }

loc_0012153A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012156F; /* je: equal / zero */

loc_0012153E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00121562; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0012154C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00121562; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121557: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012156F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121562: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0012156Fu); RECOMP_ABI_CALL(0x00116E20u, sub_00116E20); /* call 0x00116E20 */

loc_0012156F: ;
    ecx = MEM32(esi + 0x1C0);
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012159C; /* je: equal / zero */

loc_0012157D: ;
    ecx = esi;
    PUSH32(esp, 0x00121584u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00121584: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012159C; /* je: equal / zero */

loc_00121588: ;
    SET_LO8(eax, MEM8(esi + 0x1541));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001215B2; /* jne: not equal / not zero */

loc_00121592: ;
    SET_LO8(eax, MEM8(esi + 0x1542));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001215B2; /* jne: not equal / not zero */

loc_0012159C: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001215B2u); RECOMP_ABI_CALL(0x0011AC60u, sub_0011AC60); /* call 0x0011AC60 */

loc_001215B2: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001215C0
 * Original: 0x001215C0 - 0x001215E3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001215C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001215C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001215CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001215C7u); } /* indirect call */
    }

loc_001215CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001215DB; /* je: equal / zero */

loc_001215CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001215DBu); RECOMP_ABI_CALL(0x00116E20u, sub_00116E20); /* call 0x00116E20 */

loc_001215DB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00115060(); return; /* tail jmp 0x00115060 */

}

/**
 * sub_001215F0
 * Original: 0x001215F0 - 0x001215F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001215F0(void)
{

loc_001215F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00121600
 * Original: 0x00121600 - 0x00121657 (87 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121600: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x1530;
    PUSH32(esp, 0x0012160Eu); RECOMP_ABI_CALL(0x000EA370u, sub_000EA370); /* call 0x000EA370 */

loc_0012160E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x234643ED) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x234643ED (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012162C; /* jg: greater (signed >) */

loc_00121615: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0012164C; /* je: equal / zero */

loc_00121617: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3F7A0CDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA3F7A0CDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012164C; /* je: equal / zero */

loc_0012161E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD3B29318u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD3B29318u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012164C; /* je: equal / zero */

loc_00121625: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF06CBFD9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF06CBFD9u (32-bit) */
    goto loc_0012163F;

loc_0012162C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x256BF40B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x256BF40B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012164C; /* je: equal / zero */

loc_00121633: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34D37203) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34D37203 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012164C; /* je: equal / zero */

loc_0012163A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61829B73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61829B73 (32-bit) */

loc_0012163F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0012164C; /* je: equal / zero */

loc_00121641: ;
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x0012164Au); RECOMP_ABI_CALL(0x00117220u, sub_00117220); /* call 0x00117220 */

loc_0012164A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012164C: ;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00121655u); RECOMP_ABI_CALL(0x00117220u, sub_00117220); /* call 0x00117220 */

loc_00121655: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121660
 * Original: 0x00121660 - 0x001216B7 (87 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121660: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x1530;
    PUSH32(esp, 0x0012166Eu); RECOMP_ABI_CALL(0x000EA370u, sub_000EA370); /* call 0x000EA370 */

loc_0012166E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x234643ED) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x234643ED (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012168C; /* jg: greater (signed >) */

loc_00121675: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001216AC; /* je: equal / zero */

loc_00121677: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3F7A0CDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA3F7A0CDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001216AC; /* je: equal / zero */

loc_0012167E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD3B29318u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD3B29318u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001216AC; /* je: equal / zero */

loc_00121685: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF06CBFD9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF06CBFD9u (32-bit) */
    goto loc_0012169F;

loc_0012168C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x256BF40B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x256BF40B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001216AC; /* je: equal / zero */

loc_00121693: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34D37203) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34D37203 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001216AC; /* je: equal / zero */

loc_0012169A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61829B73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61829B73 (32-bit) */

loc_0012169F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_001216AC; /* je: equal / zero */

loc_001216A1: ;
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x001216AAu); RECOMP_ABI_CALL(0x00117220u, sub_00117220); /* call 0x00117220 */

loc_001216AA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001216AC: ;
    PUSH32(esp, 0xA);
    ecx = esi;
    PUSH32(esp, 0x001216B5u); RECOMP_ABI_CALL(0x00117220u, sub_00117220); /* call 0x00117220 */

loc_001216B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001216C0
 * Original: 0x001216C0 - 0x001216E2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001216C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001216C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x1544); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001216DF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x1544)) */

loc_001216CC: ;
    eax = MEM32(ecx + 0x38C);
    SET_LO8(ecx, MEM8(eax + 0x3C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001216DF; /* jne: not equal / not zero */

loc_001216D9: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001216DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001216F0
 * Original: 0x001216F0 - 0x00121701 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001216F0(void)
{

loc_001216F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x376160)); /* movss */
    MEMF(ecx + 0x1544) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00121710
 * Original: 0x00121710 - 0x0012175B (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121710: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00121728; /* jne: not equal / not zero */

loc_0012171D: ;
    MEM32(esi + 0x1578) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00121728: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00121732u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012172Cu); } /* indirect call */
    }

loc_00121732: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121749; /* jne: not equal / not zero */

loc_00121737: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    MEM32(esi + 0x1578) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00121749: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    MEM32(esi + 0x1578) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121760
 * Original: 0x00121760 - 0x00121825 (197 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121760: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00121769u); RECOMP_ABI_CALL(0x0011D690u, sub_0011D690); /* call 0x0011D690 */

loc_00121769: ;
    xmm0 = XMM_SCALAR(MEMF(0x3DEA60)); /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x1530;
    MEM32(esi) = 0x319950;
    MEM32(esi + 0x30) = 0x319800;
    MEM32(esi + 0x38) = 0x3197F4;
    MEM32(esi + 0x1500) = 0xFFFFFFFFu;
    MEM8(esi + 0x1508) = LO8(ebx);
    MEM32(esi + 0x1510) = ebx;
    MEM8(esi + 0x1514) = LO8(ebx);
    MEM32(esi + 0x1518) = ebx;
    MEMF(esi + 0x152C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001217BCu); RECOMP_ABI_CALL(0x000EA250u, sub_000EA250); /* call 0x000EA250 */

loc_001217BC: ;
    xmm0 = XMM_SCALAR(MEMF(0x319AF0)); /* movss */
    MEM8(esi + 0x1540) = LO8(ebx);
    MEM8(esi + 0x1574) = LO8(ebx);
    MEM8(esi + 0x1575) = LO8(ebx);
    MEM32(esi + 0x1570) = 0xFFFFFFFFu;
    xmm1 = XMM_SCALAR(MEMF(0x3761B4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x340) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3761B8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x300768)); /* movss */
    MEMF(esi + 0x344) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x348) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x358) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00121830
 * Original: 0x00121830 - 0x0012192D (253 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121830: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x1508) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001218BD; /* je: equal / zero */

loc_00121841: ;
    eax = MEM32(esi + 0x150C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012185D; /* jne: not equal / not zero */

loc_0012184C: ;
    SET_LO8(eax, MEM8(esi + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121892; /* je: equal / zero */

loc_00121856: ;
    PUSH32(esp, 0xDA9B5D5Fu);
    goto loc_00121887;

loc_0012185D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121873; /* jne: not equal / not zero */

loc_00121862: ;
    SET_LO8(eax, MEM8(esi + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121892; /* je: equal / zero */

loc_0012186C: ;
    PUSH32(esp, 0x644C7E5D);
    goto loc_00121887;

loc_00121873: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121892; /* jne: not equal / not zero */

loc_00121878: ;
    SET_LO8(eax, MEM8(esi + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121892; /* je: equal / zero */

loc_00121882: ;
    PUSH32(esp, 0x2A05B3E8);

loc_00121887: ;
    ecx = esi + 0x1530;
    PUSH32(esp, 0x00121892u); RECOMP_ABI_CALL(0x000EB840u, sub_000EB840); /* call 0x000EB840 */

loc_00121892: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0012189Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121896u); } /* indirect call */
    }

loc_0012189C: ;
    PUSH32(esp, 0x88978F1Au);
    ecx = eax + 0x424;
    PUSH32(esp, 0x001218ACu); RECOMP_ABI_CALL(0x001586D0u, sub_001586D0); /* call 0x001586D0 */

loc_001218AC: ;
    PUSH32(esp, 0xEEBFE1A5u);
    PUSH32(esp, 0x001218B6u); RECOMP_ABI_CALL(0x00084720u, sub_00084720); /* call 0x00084720 */

loc_001218B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001218BD: ;
    SET_LO8(eax, MEM8(esi + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001218D2; /* je: equal / zero */

loc_001218C7: ;
    ecx = esi + 0x1530;
    PUSH32(esp, 0x001218D2u); RECOMP_ABI_CALL(0x000EA480u, sub_000EA480); /* call 0x000EA480 */

loc_001218D2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x001218DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001218D6u); } /* indirect call */
    }

loc_001218DC: ;
    PUSH32(esp, 0x88978F1Au);
    ecx = eax + 0x424;
    PUSH32(esp, 0x001218ECu); RECOMP_ABI_CALL(0x00158690u, sub_00158690); /* call 0x00158690 */

loc_001218EC: ;
    eax = MEM32(esi + 0x1510);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012191C; /* je: equal / zero */

loc_001218F6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00121900u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001218FAu); } /* indirect call */
    }

loc_00121900: ;
    ecx = MEM32(esi + 0x1510);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x3980);
    PUSH32(esp, 0x00121912u); RECOMP_ABI_CALL(0x00165E90u, sub_00165E90); /* call 0x00165E90 */

loc_00121912: ;
    MEM32(esi + 0x1510) = 0;

loc_0012191C: ;
    PUSH32(esp, 0x171F2227);
    PUSH32(esp, 0x00121926u); RECOMP_ABI_CALL(0x00084720u, sub_00084720); /* call 0x00084720 */

loc_00121926: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121930
 * Original: 0x00121930 - 0x00121978 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi + 0x1510) = edi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00121947u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121941u); } /* indirect call */
    }

loc_00121947: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi);
    ebx = MEM32(eax + 0x3980);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00121960u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012195Au); } /* indirect call */
    }

loc_00121960: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121966u); RECOMP_ABI_CALL(0x00165340u, sub_00165340); /* call 0x00165340 */

loc_00121966: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00121972u); RECOMP_ABI_CALL(0x00166290u, sub_00166290); /* call 0x00166290 */

loc_00121972: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121980
 * Original: 0x00121980 - 0x001219FE (126 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00121980: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0012198Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121986u); } /* indirect call */
    }

loc_0012198C: ;
    edi = MEM32(eax + 0x39A8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001219F7; /* je: equal / zero */

loc_00121996: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001219CE; /* jne: not equal / not zero */

loc_0012199E: ;
    SET_LO8(eax, MEM8(edi + 0x100));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001219F7; /* jne: not equal / not zero */

loc_001219A8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x152C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001219F7; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x152C)) */

loc_001219B4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001219C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001219BDu); } /* indirect call */
    }

loc_001219C0: ;
    ecx = edi;
    PUSH32(esp, 0x001219C7u); RECOMP_ABI_CALL(0x00167440u, sub_00167440); /* call 0x00167440 */

loc_001219C7: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001219CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001219F7; /* jne: not equal / not zero */

loc_001219D3: ;
    SET_LO8(eax, MEM8(edi + 0x100));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001219F7; /* je: equal / zero */

loc_001219DD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001219E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001219E6u); } /* indirect call */
    }

loc_001219E9: ;
    ecx = edi;
    PUSH32(esp, 0x001219F0u); RECOMP_ABI_CALL(0x001674B0u, sub_001674B0); /* call 0x001674B0 */

loc_001219F0: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001219F7: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121A00
 * Original: 0x00121A00 - 0x00121A59 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121A00: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00121A0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121A06u); } /* indirect call */
    }

loc_00121A0C: ;
    ecx = MEM32(eax + 0x39A8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121A54; /* je: equal / zero */

loc_00121A16: ;
    SET_LO8(eax, MEM8(ecx + 0x100));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121A54; /* je: equal / zero */

loc_00121A20: ;
    eax = MEM32(esp + 0xC);
    edx = esp + 7;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121A30u); RECOMP_ABI_CALL(0x001674D0u, sub_001674D0); /* call 0x001674D0 */

loc_00121A30: ;
    SET_LO8(eax, MEM8(esp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121A54; /* je: equal / zero */

loc_00121A38: ;
    xmm0 = XMM_SCALAR(MEMF(0x3DEA60)); /* movss */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40000000);
    ecx = esi;
    MEMF(esi + 0x152C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00121A54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121A51u); } /* indirect call */
    }

loc_00121A54: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121A60
 * Original: 0x00121A60 - 0x00121AE2 (130 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121A60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4395D999);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x00121A72u); RECOMP_ABI_CALL(0x00116E20u, sub_00116E20); /* call 0x00116E20 */

loc_00121A72: ;
    ecx = esi + 0x13D4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121A81; /* je: equal / zero */

loc_00121A7C: ;
    PUSH32(esp, 0x00121A81u); RECOMP_ABI_CALL(0x00127B00u, sub_00127B00); /* call 0x00127B00 */

loc_00121A81: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00121A8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121A85u); } /* indirect call */
    }

loc_00121A8B: ;
    edi = MEM32(eax + 0x39A8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121AB2; /* je: equal / zero */

loc_00121A95: ;
    SET_LO8(eax, MEM8(edi + 0x100));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121AB2; /* je: equal / zero */

loc_00121A9F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00121AABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121AA8u); } /* indirect call */
    }

loc_00121AAB: ;
    ecx = edi;
    PUSH32(esp, 0x00121AB2u); RECOMP_ABI_CALL(0x001674B0u, sub_001674B0); /* call 0x001674B0 */

loc_00121AB2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esi + 0x152C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00121AC4u); RECOMP_ABI_CALL(0x00119E30u, sub_00119E30); /* call 0x00119E30 */

loc_00121AC4: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00121ACDu); RECOMP_ABI_CALL(0x0011B8B0u, sub_0011B8B0); /* call 0x0011B8B0 */

loc_00121ACD: ;
    ecx = MEM32(esi + 0x384);
    PUSH32(esp, 0x00121AD8u); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_00121AD8: ;
    POP32(esp, edi);
    MEM32(eax + 0x28) = 0x1F;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121AF0
 * Original: 0x00121AF0 - 0x00121B9C (172 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00121AF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00121AFDu); RECOMP_ABI_CALL(0x0011C530u, sub_0011C530); /* call 0x0011C530 */

loc_00121AFD: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF020); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1514)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121B26; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121B18: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 0x1514) = xmm1.f[0]; /* movss */
    goto loc_00121B31;

loc_00121B26: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x1514) = xmm0.f[0]; /* movss */

loc_00121B31: ;
    eax = MEM32(esi + 0x19C);
    ecx = MEM32(esi + 0x1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121B98; /* jne: not equal / not zero */

loc_00121B41: ;
    SET_LO8(edx, MEM8(eax + 0x115C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121B98; /* je: equal / zero */

loc_00121B4B: ;
    eax = MEM32(ecx + 0x1128);
    _fa = (uint32_t)(MEM16(eax + 0x1CE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CE), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121B98; /* jne: not equal / not zero */

loc_00121B5B: ;
    _fa = (uint32_t)(MEM16(eax + 0x1CC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x1CC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121B98; /* jne: not equal / not zero */

loc_00121B65: ;
    _fa = (uint32_t)(MEM32(0x389414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x389414), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121B8C; /* jne: not equal / not zero */

loc_00121B6E: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x3C3B64);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00121B84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121B7Eu); } /* indirect call */
    }

loc_00121B84: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00121B8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121B87u); } /* indirect call */
    }

loc_00121B8A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00121B8C: ;
    eax = MEM32(esi + -48);
    ecx = esi + -48;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00121B98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121B92u); } /* indirect call */
    }

loc_00121B98: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121BA0
 * Original: 0x00121BA0 - 0x00121C66 (198 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00121BA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ecx + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121C60; /* je: equal / zero */

loc_00121BB7: ;
    eax = MEM32(ebp + 8);
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x90)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x94)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x30105C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121C50; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00121C2B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x305098); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00121C50; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00121C4A: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_00121C50: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1530) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1530;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00121C60u); RECOMP_ABI_CALL(0x000EA4B0u, sub_000EA4B0); /* call 0x000EA4B0 */

loc_00121C60: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121C70
 * Original: 0x00121C70 - 0x00121D04 (148 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121C70(void)
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

loc_00121C70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00121C78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121C75u); } /* indirect call */
    }

loc_00121C78: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_00121CF9; /* jb: below (unsigned <) */

loc_00121C84: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121CE0; /* je: equal / zero */

loc_00121C90: ;
    PUSH32(esp, eax);
    ecx = edi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00121CA0u); RECOMP_ABI_CALL(0x0007BED0u, sub_0007BED0); /* call 0x0007BED0 */

loc_00121CA0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00121CA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121CA4u); } /* indirect call */
    }

loc_00121CA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121CBF; /* je: equal / zero */

loc_00121CAB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00121CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121CAFu); } /* indirect call */
    }

loc_00121CB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00121CBCu); RECOMP_ABI_CALL(0x000841C0u, sub_000841C0); /* call 0x000841C0 */

loc_00121CBC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00121CBF: ;
    _fa = (uint32_t)(MEM32(0x389414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x389414), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121CE0; /* jne: not equal / not zero */

loc_00121CC8: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(0x3C3B64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00121CD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121CD4u); } /* indirect call */
    }

loc_00121CD7: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00121CDFu); RECOMP_ABI_CALL(0x00098FB0u, sub_00098FB0); /* call 0x00098FB0 */

loc_00121CDF: ;
    POP32(esp, ebx);

loc_00121CE0: ;
    ecx = edi + 0x13D4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00121D00; /* je: equal / zero */

loc_00121CEB: ;
    POP32(esp, edi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00128710(); return; /* tail jmp 0x00128710 */

loc_00121CF9: ;
    ecx = edi;
    PUSH32(esp, 0x00121D00u); RECOMP_ABI_CALL(0x00121660u, sub_00121660); /* call 0x00121660 */

loc_00121D00: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00121D10
 * Original: 0x00121D10 - 0x00121D3B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D10(void)
{

loc_00121D10: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00121D24u); RECOMP_ABI_CALL(0x00120420u, sub_00120420); /* call 0x00120420 */

loc_00121D24: ;
    edx = MEM32(esi + 0x1D8);
    ecx = MEM32(edx + 0x1128);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00121D37u); RECOMP_ABI_CALL(0x00187F80u, sub_00187F80); /* call 0x00187F80 */

loc_00121D37: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121D40
 * Original: 0x00121D40 - 0x00121D67 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121D40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00121D63; /* je: equal / zero */

loc_00121D4B: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121D53u); RECOMP_ABI_CALL(0x00120170u, sub_00120170); /* call 0x00120170 */

loc_00121D53: ;
    MEM32(esi + 0x1E0) = eax;
    eax = MEM32(eax + 0xF0);
    MEM8(eax + 0x6C) = 0;

loc_00121D63: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121D70
 * Original: 0x00121D70 - 0x00121D89 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121D70: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00121D78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121D72u); } /* indirect call */
    }

loc_00121D78: ;
    ecx = MEM32(0x3888C0);
    _fb = (uint32_t)(0x1E9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1E9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00121D90
 * Original: 0x00121D90 - 0x00121E06 (118 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121D90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C0);
    ecx = eax;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121E04; /* jne: not equal / not zero */

loc_00121DA3: ;
    eax = eax >> 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121E04; /* jne: not equal / not zero */

loc_00121DAA: ;
    edx = MEM32(esi + 0x1CC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x1E0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121E04; /* je: equal / zero */

loc_00121DB8: ;
    ecx = esi;
    PUSH32(esp, 0x00121DBFu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00121DBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121DE2; /* je: equal / zero */

loc_00121DC3: ;
    eax = MEM32(eax + 0x1128);
    ecx = MEM32(eax + 0x1C0);
    SET_LO8(eax, MEM8(ecx + 0x47));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121DE2; /* je: equal / zero */

loc_00121DD6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x00121DE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121DDCu); } /* indirect call */
    }

loc_00121DE2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00121DEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121DE8u); } /* indirect call */
    }

loc_00121DEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121DFC; /* je: equal / zero */

loc_00121DEF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00121DFCu); RECOMP_ABI_CALL(0x00116E20u, sub_00116E20); /* call 0x00116E20 */

loc_00121DFC: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00114030(); return; /* tail jmp 0x00114030 */

loc_00121E04: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121E10
 * Original: 0x00121E10 - 0x00121E95 (133 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121E10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00121E31; /* je: equal / zero */

loc_00121E1F: ;
    ecx = esi + 0x1530;
    PUSH32(esp, 0x00121E2Au); RECOMP_ABI_CALL(0x000EA2B0u, sub_000EA2B0); /* call 0x000EA2B0 */

loc_00121E2A: ;
    MEM8(esi + 0x1540) = 0;

loc_00121E31: ;
    eax = MEM32(esi);
    ecx = esi;
    ebx = esi + 0x30;
    edi = esi + 0x1530;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00121E44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121E3Eu); } /* indirect call */
    }

loc_00121E44: ;
    ecx = MEM32(0x3888C0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx + 0x1E98);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x00121E5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121E59u); } /* indirect call */
    }

loc_00121E5F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00121E6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121E64u); } /* indirect call */
    }

loc_00121E6A: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00121E72u); RECOMP_ABI_CALL(0x000EA260u, sub_000EA260); /* call 0x000EA260 */

loc_00121E72: ;
    MEM8(esi + 0x1540) = LO8(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00121E82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121E7Cu); } /* indirect call */
    }

loc_00121E82: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00121E8Bu); RECOMP_ABI_CALL(0x000ECF10u, sub_000ECF10); /* call 0x000ECF10 */

loc_00121E8B: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000EADF0(); return; /* tail jmp 0x000EADF0 */

}

/**
 * sub_00121EA0
 * Original: 0x00121EA0 - 0x00121EBF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121EA0(void)
{

loc_00121EA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00121EB4u); RECOMP_ABI_CALL(0x0011FA80u, sub_0011FA80); /* call 0x0011FA80 */

loc_00121EB4: ;
    ecx = esi;
    PUSH32(esp, 0x00121EBBu); RECOMP_ABI_CALL(0x00121E10u, sub_00121E10); /* call 0x00121E10 */

loc_00121EBB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121EC0
 * Original: 0x00121EC0 - 0x00122062 (418 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + 0x1500);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x319AF4);
    PUSH32(esp, 0x00121EDBu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00121EDB: ;
    SET_LO8(eax, MEM8(esi + 0x1540));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x1500) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00121EFA; /* je: equal / zero */

loc_00121EEE: ;
    PUSH32(esp, edi);
    ecx = esi + 0x1530;
    PUSH32(esp, 0x00121EFAu); RECOMP_ABI_CALL(0x000EA2F0u, sub_000EA2F0); /* call 0x000EA2F0 */

loc_00121EFA: ;
    ecx = esi;
    PUSH32(esp, 0x00121F01u); RECOMP_ABI_CALL(0x00114170u, sub_00114170); /* call 0x00114170 */

loc_00121F01: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012205D; /* je: equal / zero */

loc_00121F0D: ;
    eax = MEM32(esi + 0x1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122056; /* jne: not equal / not zero */

loc_00121F1B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00121F25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121F1Fu); } /* indirect call */
    }

loc_00121F25: ;
    ecx = MEM32(0x3888C0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0x1E98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61829B73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x61829B73 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00121FE4; /* ja: above (unsigned >) */

loc_00121F40: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00121FCC; /* je: equal / zero */

loc_00121F46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28B2770A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28B2770A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00121FA9; /* ja: above (unsigned >) */

loc_00121F4D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00121F91; /* je: equal / zero */

loc_00121F4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x234643ED) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x234643ED (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F79; /* je: equal / zero */

loc_00121F56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x256BF40B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x256BF40B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122056; /* jne: not equal / not zero */

loc_00121F61: ;
    PUSH32(esp, 0xB7ACDF12u);
    ecx = esi;
    PUSH32(esp, 0x00121F6Du); RECOMP_ABI_CALL(0x00114270u, sub_00114270); /* call 0x00114270 */

loc_00121F6D: ;
    ecx = esi;
    PUSH32(esp, 0x00121F74u); RECOMP_ABI_CALL(0x001204A0u, sub_001204A0); /* call 0x001204A0 */

loc_00121F74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00121F79: ;
    PUSH32(esp, 0xE8A5C26Bu);
    ecx = esi;
    PUSH32(esp, 0x00121F85u); RECOMP_ABI_CALL(0x00114270u, sub_00114270); /* call 0x00114270 */

loc_00121F85: ;
    ecx = esi;
    PUSH32(esp, 0x00121F8Cu); RECOMP_ABI_CALL(0x001204A0u, sub_001204A0); /* call 0x001204A0 */

loc_00121F8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00121F91: ;
    PUSH32(esp, 0x8D104A49u);
    ecx = esi;
    PUSH32(esp, 0x00121F9Du); RECOMP_ABI_CALL(0x00114270u, sub_00114270); /* call 0x00114270 */

loc_00121F9D: ;
    ecx = esi;
    PUSH32(esp, 0x00121FA4u); RECOMP_ABI_CALL(0x001204A0u, sub_001204A0); /* call 0x001204A0 */

loc_00121FA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00121FA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34D37203) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34D37203 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122056; /* jne: not equal / not zero */

loc_00121FB4: ;
    PUSH32(esp, 0xC4B6A698u);
    ecx = esi;
    PUSH32(esp, 0x00121FC0u); RECOMP_ABI_CALL(0x00114270u, sub_00114270); /* call 0x00114270 */

loc_00121FC0: ;
    ecx = esi;
    PUSH32(esp, 0x00121FC7u); RECOMP_ABI_CALL(0x001204A0u, sub_001204A0); /* call 0x001204A0 */

loc_00121FC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00121FCC: ;
    PUSH32(esp, 0x22E1A1A6);
    ecx = esi;
    PUSH32(esp, 0x00121FD8u); RECOMP_ABI_CALL(0x00114270u, sub_00114270); /* call 0x00114270 */

loc_00121FD8: ;
    ecx = esi;
    PUSH32(esp, 0x00121FDFu); RECOMP_ABI_CALL(0x001204A0u, sub_001204A0); /* call 0x001204A0 */

loc_00121FDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00121FE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEFFD269Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEFFD269Eu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00122043; /* ja: above (unsigned >) */

loc_00121FEB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0012202B; /* je: equal / zero */

loc_00121FED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3F7A0CDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA3F7A0CDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122013; /* je: equal / zero */

loc_00121FF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD3B29318u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD3B29318u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122056; /* jne: not equal / not zero */

loc_00121FFB: ;
    PUSH32(esp, 0xB73FDF1Fu);
    ecx = esi;
    PUSH32(esp, 0x00122007u); RECOMP_ABI_CALL(0x00114270u, sub_00114270); /* call 0x00114270 */

loc_00122007: ;
    ecx = esi;
    PUSH32(esp, 0x0012200Eu); RECOMP_ABI_CALL(0x001204A0u, sub_001204A0); /* call 0x001204A0 */

loc_0012200E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00122013: ;
    PUSH32(esp, 0xC9B07F5Du);
    ecx = esi;
    PUSH32(esp, 0x0012201Fu); RECOMP_ABI_CALL(0x00114270u, sub_00114270); /* call 0x00114270 */

loc_0012201F: ;
    ecx = esi;
    PUSH32(esp, 0x00122026u); RECOMP_ABI_CALL(0x001204A0u, sub_001204A0); /* call 0x001204A0 */

loc_00122026: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0012202B: ;
    PUSH32(esp, 0x56084B44);
    ecx = esi;
    PUSH32(esp, 0x00122037u); RECOMP_ABI_CALL(0x00114270u, sub_00114270); /* call 0x00114270 */

loc_00122037: ;
    ecx = esi;
    PUSH32(esp, 0x0012203Eu); RECOMP_ABI_CALL(0x001204A0u, sub_001204A0); /* call 0x001204A0 */

loc_0012203E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00122043: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF06CBFD9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF06CBFD9u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122056; /* jne: not equal / not zero */

loc_0012204A: ;
    PUSH32(esp, 0x768DF8EE);
    ecx = esi;
    PUSH32(esp, 0x00122056u); RECOMP_ABI_CALL(0x00114270u, sub_00114270); /* call 0x00114270 */

loc_00122056: ;
    ecx = esi;
    PUSH32(esp, 0x0012205Du); RECOMP_ABI_CALL(0x001204A0u, sub_001204A0); /* call 0x001204A0 */

loc_0012205D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122070
 * Original: 0x00122070 - 0x00122185 (277 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122070: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0012207Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122075u); } /* indirect call */
    }

loc_0012207B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x1500);
    if ((_fa == 0)) goto loc_001220E3; /* je: equal / zero */

loc_00122086: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x37626C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001220A4; /* je: equal / zero */

loc_00122093: ;
    edx = MEM32(eax + 0x37629C);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001220A4u); RECOMP_ABI_CALL(0x00120370u, sub_00120370); /* call 0x00120370 */

loc_001220A4: ;
    eax = MEM32(esi + 0x1500);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x376270);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001220C8; /* je: equal / zero */

loc_001220B7: ;
    eax = MEM32(eax + 0x3762A0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001220C8u); RECOMP_ABI_CALL(0x00120370u, sub_00120370); /* call 0x00120370 */

loc_001220C8: ;
    eax = MEM32(esi + 0x1500);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x37627C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012215A; /* je: equal / zero */

loc_001220DB: ;
    edx = MEM32(eax + 0x3762A4);
    goto loc_0012213E;

loc_001220E3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x376284);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122101; /* je: equal / zero */

loc_001220F0: ;
    edx = MEM32(eax + 0x3762B4);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00122101u); RECOMP_ABI_CALL(0x00120370u, sub_00120370); /* call 0x00120370 */

loc_00122101: ;
    eax = MEM32(esi + 0x1500);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x376288);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122125; /* je: equal / zero */

loc_00122114: ;
    eax = MEM32(eax + 0x3762B8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00122125u); RECOMP_ABI_CALL(0x00120370u, sub_00120370); /* call 0x00120370 */

loc_00122125: ;
    eax = MEM32(esi + 0x1500);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x376294);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012215A; /* je: equal / zero */

loc_00122138: ;
    edx = MEM32(eax + 0x3762BC);

loc_0012213E: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00122147u); RECOMP_ABI_CALL(0x00120420u, sub_00120420); /* call 0x00120420 */

loc_00122147: ;
    eax = MEM32(esi + 0x1D8);
    ecx = MEM32(eax + 0x1128);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0012215Au); RECOMP_ABI_CALL(0x00187F80u, sub_00187F80); /* call 0x00187F80 */

loc_0012215A: ;
    eax = MEM32(0x3C376C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012217D; /* je: equal / zero */

loc_00122163: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012216Du); RECOMP_ABI_CALL(0x00120170u, sub_00120170); /* call 0x00120170 */

loc_0012216D: ;
    MEM32(esi + 0x1E0) = eax;
    ecx = MEM32(eax + 0xF0);
    MEM8(ecx + 0x6C) = 0;

loc_0012217D: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00115940(); return; /* tail jmp 0x00115940 */

}

/**
 * sub_00122190
 * Original: 0x00122190 - 0x0012230C (380 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122190: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    MEM32(esp + 0xA8) = 0;
    MEM32(esp + 0xAC) = 0;
    MEM32(esp + 0xB0) = 0;
    MEM32(esp + 0xA4) = 0x2FF02C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001221D5u); RECOMP_ABI_CALL(0x000EEBB0u, sub_000EEBB0); /* call 0x000EEBB0 */

loc_001221D5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x001221DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001221D9u); } /* indirect call */
    }

loc_001221DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001222E3; /* je: equal / zero */

loc_001221E8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001221F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001221ECu); } /* indirect call */
    }

loc_001221F2: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x001221FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001221F8u); } /* indirect call */
    }

loc_001221FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122207; /* jne: not equal / not zero */

loc_00122203: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00122208;

loc_00122207: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00122208: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00122230; /* ja: above (unsigned >) */

loc_0012220F: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x12230C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00122216u) goto loc_00122216;
    if (_jt == 0x0012221Du) goto loc_0012221D;
    if (_jt == 0x00122224u) goto loc_00122224;
    if (_jt == 0x0012222Bu) goto loc_0012222B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00122216: ;
    eax = 0xE9E96DA0u;
    goto loc_00122230;

loc_0012221D: ;
    eax = 0x25E27514;
    goto loc_00122230;

loc_00122224: ;
    eax = 0xEB44F05;
    goto loc_00122230;

loc_0012222B: ;
    eax = 0xD3C56149u;

loc_00122230: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122236u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00122236: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012224D; /* je: equal / zero */

loc_0012223D: ;
    edx = esp + 0x22;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00122243: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00122243; /* jne: not equal / not zero */

loc_0012224D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x90)); /* movss */
    ecx = MEM32(esp + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x94)); /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x98)); /* movss */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = 7;
    MEM32(esp + 0x18) = 0x11;
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    edi = esi + 0x30;
    if (CMP_EQ(_fa, _fb)) goto loc_001222AF; /* je: equal / zero */

loc_001222A2: ;
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001222AFu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_001222AF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xA8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001222C9; /* je: equal / zero */

loc_001222BA: ;
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001222C9u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_001222C9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x001222D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001222CDu); } /* indirect call */
    }

loc_001222D0: ;
    MEM32(esp + 0xE4) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001222E3u); RECOMP_ABI_CALL(0x00114250u, sub_00114250); /* call 0x00114250 */

loc_001222E3: ;
    ecx = MEM32(esp + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xA4) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_00122306; /* je: equal / zero */

loc_001222F9: ;
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122306u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00122306: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00122320
 * Original: 0x00122320 - 0x0012233D (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122320: ;
    eax = MEM32(ecx + -48);
    _fb = (uint32_t)(0xFFFFFFD0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0012232Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122326u); } /* indirect call */
    }

loc_0012232C: ;
    ecx = MEM32(0x3888C0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, MEM8(eax + ecx + 0x1E91));
    esp += 4; return; /* ret */

}

/**
 * sub_00122340
 * Original: 0x00122340 - 0x001228CA (1418 bytes, 408 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00122340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0012235Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122357u); } /* indirect call */
    }

loc_0012235D: ;
    ecx = MEM32(edi + 0x90);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(edi + 0x1550) = ecx;
    edx = MEM32(edi + 0x94);
    MEM32(edi + 0x1554) = edx;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(edi + 0x98);
    MEM32(edi + 0x1558) = eax;
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1558)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edi + 0x1558) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x1564) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3197E4)); /* movss */
    MEMF(edi + 0x1568) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edi + 0x156C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1560) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001223F6; /* je: equal / zero */

loc_001223CE: ;
    ecx = ZX8(MEM8(esi + 0x39EC));
    MEM32(edi + 0x1570) = ecx;
    ecx = esi;
    MEM8(esi + 0x39EC) = 0xFF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001223E9u); RECOMP_ABI_CALL(0x00132040u, sub_00132040); /* call 0x00132040 */

loc_001223E9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x001223F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001223EDu); } /* indirect call */
    }

loc_001223F3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_001223F6: ;
    edi = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0x307E40;
    goto loc_00122420;

loc_0012240F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_00122420;

    /* nop */
    goto loc_00122420;

    /* nop */

loc_00122420: ;
    eax = MEM32(edi + 0x1568);
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1564)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012244Au); RECOMP_ABI_CALL(0x00266140u, sub_00266140); /* call 0x00266140 */

loc_0012244A: ;
    ecx = MEM32(edi + 0x156C);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012245Au); RECOMP_ABI_CALL(0x002661A0u, sub_002661A0); /* call 0x002661A0 */

loc_0012245A: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0x1550)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x1550); /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x1554)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x1558)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x28); /* addss */
    ecx = MEM32(0x3DEA20);
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x1554)); /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x1558)); /* movss */
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x7C) = 0xD;
    MEM8(esp + 0x78) = 1;
    MEM32(esp + 0x88) = ebx;
    MEM32(esp + 0xB8) = 0;
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122532u); RECOMP_ABI_CALL(0x00223510u, sub_00223510); /* call 0x00223510 */

loc_00122532: ;
    eax = MEM32(esp + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122574; /* je: equal / zero */

loc_0012253D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x1564); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + esi * 4 + 0x30) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122582; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_0012255E: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x156C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00122582;

loc_00122574: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + esi * 4 + 0x30) = xmm0.f[0]; /* movss */

loc_00122582: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x156C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3197D4)); /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(edi + 0x156C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x80) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0012240F; /* jl: less (signed <) */

loc_001225AF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = edx;

loc_001225C0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001225CE; /* jl: less (signed <) */

loc_001225CB: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFF8u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001225CE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001225FD; /* je: equal / zero */

loc_001225D2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001225FA; /* jp: parity */

loc_001225EC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012262B; /* jle: less or equal (signed <=) */

loc_001225F2: ;
    MEM32(esp + 0xC) = ebx;
    ecx = edx;
    goto loc_0012262B;

loc_001225FA: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012262B;

loc_001225FD: ;
    xmm1 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00122628; /* jp: parity */

loc_00122614: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    esi = 1;
    ebx = edi;
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00122628; /* jne: not equal / not zero */

loc_00122622: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;

loc_00122628: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_0012262B: ;
    eax = MEM32(esp + 0x10);
    edi = eax + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012263A; /* jl: less (signed <) */

loc_00122637: ;
    edi = eax + -7;

loc_0012263A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x30)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0012265E; /* je: equal / zero */

loc_00122644: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012265B; /* jp: parity */

loc_0012264D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012267B; /* jle: less or equal (signed <=) */

loc_00122653: ;
    MEM32(esp + 0xC) = ebx;
    ecx = edx;
    goto loc_0012267B;

loc_0012265B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012267B;

loc_0012265E: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012267B; /* jp: parity */

loc_00122667: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    esi = 1;
    ebx = edi;
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012267B; /* jne: not equal / not zero */

loc_00122675: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;

loc_0012267B: ;
    eax = MEM32(esp + 0x10);
    edi = eax + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012268A; /* jl: less (signed <) */

loc_00122687: ;
    edi = eax + -6;

loc_0012268A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x30)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001226AE; /* je: equal / zero */

loc_00122694: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001226AB; /* jp: parity */

loc_0012269D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001226CB; /* jle: less or equal (signed <=) */

loc_001226A3: ;
    MEM32(esp + 0xC) = ebx;
    ecx = edx;
    goto loc_001226CB;

loc_001226AB: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001226CB;

loc_001226AE: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001226CB; /* jp: parity */

loc_001226B7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    esi = 1;
    ebx = edi;
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001226CB; /* jne: not equal / not zero */

loc_001226C5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;

loc_001226CB: ;
    eax = MEM32(esp + 0x10);
    edi = eax + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001226DA; /* jl: less (signed <) */

loc_001226D7: ;
    edi = eax + -5;

loc_001226DA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x30)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001226FE; /* je: equal / zero */

loc_001226E4: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001226FB; /* jp: parity */

loc_001226ED: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012271B; /* jle: less or equal (signed <=) */

loc_001226F3: ;
    MEM32(esp + 0xC) = ebx;
    ecx = edx;
    goto loc_0012271B;

loc_001226FB: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012271B;

loc_001226FE: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012271B; /* jp: parity */

loc_00122707: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    esi = 1;
    ebx = edi;
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012271B; /* jne: not equal / not zero */

loc_00122715: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;

loc_0012271B: ;
    eax = MEM32(esp + 0x10);
    edi = eax + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012272A; /* jl: less (signed <) */

loc_00122727: ;
    edi = eax + -4;

loc_0012272A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x30)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0012274E; /* je: equal / zero */

loc_00122734: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012274B; /* jp: parity */

loc_0012273D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012276B; /* jle: less or equal (signed <=) */

loc_00122743: ;
    MEM32(esp + 0xC) = ebx;
    ecx = edx;
    goto loc_0012276B;

loc_0012274B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012276B;

loc_0012274E: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012276B; /* jp: parity */

loc_00122757: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    esi = 1;
    ebx = edi;
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012276B; /* jne: not equal / not zero */

loc_00122765: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;

loc_0012276B: ;
    eax = MEM32(esp + 0x10);
    edi = eax + 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012277A; /* jl: less (signed <) */

loc_00122777: ;
    edi = eax + -3;

loc_0012277A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x30)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0012279E; /* je: equal / zero */

loc_00122784: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012279B; /* jp: parity */

loc_0012278D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001227BB; /* jle: less or equal (signed <=) */

loc_00122793: ;
    MEM32(esp + 0xC) = ebx;
    ecx = edx;
    goto loc_001227BB;

loc_0012279B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001227BB;

loc_0012279E: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001227BB; /* jp: parity */

loc_001227A7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    esi = 1;
    ebx = edi;
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_001227BB; /* jne: not equal / not zero */

loc_001227B5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;

loc_001227BB: ;
    eax = MEM32(esp + 0x10);
    edi = eax + 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001227CA; /* jl: less (signed <) */

loc_001227C7: ;
    edi = eax + -2;

loc_001227CA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x30)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001227EE; /* je: equal / zero */

loc_001227D4: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001227EB; /* jp: parity */

loc_001227DD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012280B; /* jle: less or equal (signed <=) */

loc_001227E3: ;
    MEM32(esp + 0xC) = ebx;
    ecx = edx;
    goto loc_0012280B;

loc_001227EB: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012280B;

loc_001227EE: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012280B; /* jp: parity */

loc_001227F7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    esi = 1;
    ebx = edi;
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012280B; /* jne: not equal / not zero */

loc_00122805: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;

loc_0012280B: ;
    eax = MEM32(esp + 0x10);
    edi = eax + 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012281A; /* jl: less (signed <) */

loc_00122817: ;
    edi = eax + -1;

loc_0012281A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012283E; /* je: equal / zero */

loc_0012281E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012283B; /* jp: parity */

loc_0012282D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00122861; /* jle: less or equal (signed <=) */

loc_00122833: ;
    MEM32(esp + 0xC) = ebx;
    ecx = edx;
    goto loc_00122861;

loc_0012283B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00122861;

loc_0012283E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00122861; /* jp: parity */

loc_0012284D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    esi = 1;
    ebx = edi;
    edx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00122861; /* jne: not equal / not zero */

loc_0012285B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;

loc_00122861: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001225C0; /* jl: less (signed <) */

loc_00122875: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    eax = MEM32(esp + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_001228A1; /* jne: not equal / not zero */

loc_0012287E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0x1564) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(eax + 0x156C) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001228A1: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x1564) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    POP32(esp, esi);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + 0x156C) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001228D0
 * Original: 0x001228D0 - 0x00122EA5 (1493 bytes, 306 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001228D0(void)
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

loc_001228D0: ;
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
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1550;
    PUSH32(esp, edi);
    ecx = esi + 0x1530;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001228F3u); RECOMP_ABI_CALL(0x000EAEF0u, sub_000EAEF0); /* call 0x000EAEF0 */

loc_001228F3: ;
    _fa = (uint32_t)(MEM32(esi + 0x1570)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1570), 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x64) = 1;
    MEM32(esp + 0x68) = 0x14;
    MEM32(esp + 0x6C) = 0x32;
    if (CMP_EQ(_fa, _fb)) goto loc_00122E9C; /* je: equal / zero */

loc_00122918: ;
    xmm0 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x1564); /* comiss */
    if ((_fca > _fcb)) goto loc_00122931; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x1564)) */

loc_00122929: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1564)); /* movss */

loc_00122931: ;
    eax = MEM32(esi + 0x1568);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122956u); RECOMP_ABI_CALL(0x00266140u, sub_00266140); /* call 0x00266140 */

loc_00122956: ;
    ecx = MEM32(esi + 0x156C);
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122966u); RECOMP_ABI_CALL(0x002661A0u, sub_002661A0); /* call 0x002661A0 */

loc_00122966: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    edx = esp + 0x30;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122A38u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00122A38: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00122AC9; /* jnp: not parity */

loc_00122A96: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    goto loc_00122ACF;

loc_00122AC9: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_00122ACF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = xmm3; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3210B0); /* mulss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm4 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00122B77; /* jnp: not parity */

loc_00122B3D: ;
    xmm6 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm6.f[0] = xmm6.f[0] / MEMF(esp + 0xC); /* divss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    goto loc_00122B7D;

loc_00122B77: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_00122B7D: ;
    xmm7 = xmm2; /* movaps */
    xmm6 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    eax = esp + 0x20;
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    MEMF(esp + 0xB4) = xmm6.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122BD0u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_00122BD0: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122BE1u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_00122BE1: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122BEFu); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_00122BEF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00122BF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122BF3u); } /* indirect call */
    }

loc_00122BF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122C0C; /* je: equal / zero */

loc_00122BFD: ;
    edx = MEM32(eax);
    ecx = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00122C0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122C06u); } /* indirect call */
    }

loc_00122C0C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00122C10: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + ebx + 0x64); /* cvtsi2ss */
    edx = MEM32(esi + 0x1568);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3197EC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1564); /* addss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122C51u); RECOMP_ABI_CALL(0x00266140u, sub_00266140); /* call 0x00266140 */

loc_00122C51: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3197F0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x156C); /* addss */
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122C76u); RECOMP_ABI_CALL(0x002661A0u, sub_002661A0); /* call 0x002661A0 */

loc_00122C76: ;
    xmm3 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x44); /* addss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x48); /* addss */
    MEMF(esp + 0xC0) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1554)); /* movss */
    eax = esp + 0xF0;
    MEMF(esp + 0xC4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1558)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEA20);
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xE0) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xE4) = xmm3.f[0]; /* movss */
    MEM32(esp + 0xEC) = 0xD;
    MEM8(esp + 0xE8) = 1;
    MEM32(esp + 0xF8) = 0x307E40;
    MEM32(esp + 0x128) = 0;
    MEMF(esp + 0x11C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xFC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122D65u); RECOMP_ABI_CALL(0x00223510u, sub_00223510); /* call 0x00223510 */

loc_00122D65: ;
    eax = MEM32(esp + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + ebx + 0x58) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00122D8D; /* je: equal / zero */

loc_00122D7E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x114)); /* movss */
    MEMF(esp + ebx + 0x58) = xmm1.f[0]; /* movss */

loc_00122D8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    MEM32(esp + 0xF0) = 0x307E40;
    if (CMP_L(_fas, _fbs)) goto loc_00122C10; /* jl: less (signed <) */

loc_00122DA4: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00122DEF; /* jnp: not parity */

loc_00122DC4: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00122E1F; /* jnp: not parity */

loc_00122DCD: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00122DEF; /* jnp: not parity */

loc_00122DD6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1564)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esi + 0x1564) = xmm0.f[0]; /* movss */
    goto loc_00122E84;

loc_00122DEF: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00122E1F; /* jnp: not parity */

loc_00122DF8: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00122E28; /* jnp: not parity */

loc_00122E01: ;
    xmm1.f[0] = xmm1.f[0] * MEMF(0x300BA0); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x1564); /* mulss */
    MEMF(esi + 0x1564) = xmm0.f[0]; /* movss */
    goto loc_00122E84;

loc_00122E1F: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00122E43; /* jp: parity */

loc_00122E28: ;
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3197EC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x1564); /* addss */
    MEMF(esi + 0x1564) = xmm1.f[0]; /* movss */

loc_00122E43: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x1560)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1560)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 0x1560) = xmm3.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00122E84; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00122E6C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1558)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3197DC); /* subss */
    MEMF(esi + 0x1558) = xmm0.f[0]; /* movss */

loc_00122E84: ;
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3197F0); /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x156C); /* addss */
    MEMF(esi + 0x156C) = xmm4.f[0]; /* movss */

loc_00122E9C: ;
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
 * sub_00122EB0
 * Original: 0x00122EB0 - 0x00122F91 (225 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122EB0: ;
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
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x1570)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1570), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122F8B; /* je: equal / zero */

loc_00122ECA: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00122ED2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122ECCu); } /* indirect call */
    }

loc_00122ED2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122F8B; /* je: equal / zero */

loc_00122EDC: ;
    SET_LO8(ecx, MEM8(edi + 0x1570));
    MEM8(esi + 0x39EC) = LO8(ecx);
    MEM32(edi + 0x1570) = 0xFFFFFFFFu;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x00122EFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122EF6u); } /* indirect call */
    }

loc_00122EFC: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00122F04u); RECOMP_ABI_CALL(0x00113D20u, sub_00113D20); /* call 0x00113D20 */

loc_00122F04: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
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
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x00122F7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122F78u); } /* indirect call */
    }

loc_00122F7E: ;
    edx = MEM32(edi + 0x30);
    ecx = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00122F8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122F88u); } /* indirect call */
    }

loc_00122F8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00122FA0
 * Original: 0x00122FA0 - 0x00122FE2 (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122FA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1570)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1570), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122FBA; /* je: equal / zero */

loc_00122FB1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122FBA; /* je: equal / zero */

loc_00122FB5: ;
    PUSH32(esp, 0x00122FBAu); RECOMP_ABI_CALL(0x00122EB0u, sub_00122EB0); /* call 0x00122EB0 */

loc_00122FBA: ;
    SET_LO8(eax, MEM8(esi + 0x1540));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00122FD0; /* je: equal / zero */

loc_00122FC4: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x1530;
    PUSH32(esp, 0x00122FD0u); RECOMP_ABI_CALL(0x000EAEA0u, sub_000EAEA0); /* call 0x000EAEA0 */

loc_00122FD0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00122FDDu); RECOMP_ABI_CALL(0x00116D50u, sub_00116D50); /* call 0x00116D50 */

loc_00122FDD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00122FF0
 * Original: 0x00122FF0 - 0x001230C1 (209 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00122FF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00122FFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00122FF5u); } /* indirect call */
    }

loc_00122FFB: ;
    ecx = MEM32(0x3737A4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41F00000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012300Fu); RECOMP_ABI_CALL(0x000C33E0u, sub_000C33E0); /* call 0x000C33E0 */

loc_0012300F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00123019u); RECOMP_ABI_CALL(0x001177F0u, sub_001177F0); /* call 0x001177F0 */

loc_00123019: ;
    ecx = esi;
    PUSH32(esp, 0x00123020u); RECOMP_ABI_CALL(0x00121600u, sub_00121600); /* call 0x00121600 */

loc_00123020: ;
    ecx = esi;
    PUSH32(esp, 0x00123027u); RECOMP_ABI_CALL(0x00122340u, sub_00122340); /* call 0x00122340 */

loc_00123027: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00123031u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012302Bu); } /* indirect call */
    }

loc_00123031: ;
    SET_LO8(eax, MEM8(esi + 0x1514));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012304A; /* je: equal / zero */

loc_0012303B: ;
    ecx = MEM32(0x3C37B4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x0012304Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123044u); } /* indirect call */
    }

loc_0012304A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x00123054u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012304Eu); } /* indirect call */
    }

loc_00123054: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123064; /* je: equal / zero */

loc_00123058: ;
    ecx = MEM32(0x3C3B38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00123064u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123061u); } /* indirect call */
    }

loc_00123064: ;
    ecx = MEM32(esi + 0x1CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x1E0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001230A6; /* jne: not equal / not zero */

loc_00123072: ;
    _fa = (uint32_t)(MEM32(0x389414)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x389414), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012308C; /* jne: not equal / not zero */

loc_0012307B: ;
    ecx = MEM32(0x3C3AF8);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0012308Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123087u); } /* indirect call */
    }

loc_0012308A: ;
    goto loc_00123092;

loc_0012308C: ;
    eax = MEM32(esi + 0x1E8);

loc_00123092: ;
    ecx = MEM32(esi + 0x208);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001230A3u); RECOMP_ABI_CALL(0x000355A0u, sub_000355A0); /* call 0x000355A0 */

loc_001230A3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001230A6: ;
    ecx = MEM32(esi + 0x384);
    PUSH32(esp, 0x001230B1u); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_001230B1: ;
    MEM32(eax + 0x28) = 0x13;
    MEM8(esi + 0x1575) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001230D0
 * Original: 0x001230D0 - 0x0012317D (173 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001230D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001230D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1540));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001230EB; /* je: equal / zero */

loc_001230E0: ;
    ecx = esi + 0x1530;
    PUSH32(esp, 0x001230EBu); RECOMP_ABI_CALL(0x000EADF0u, sub_000EADF0); /* call 0x000EADF0 */

loc_001230EB: ;
    eax = MEM32(esi + 0x1500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012311C; /* jne: not equal / not zero */

loc_001230F6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00123102u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001230FCu); } /* indirect call */
    }

loc_00123102: ;
    ecx = MEM32(0x3888C0);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx + 0x1E94);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0012311Au); RECOMP_ABI_CALL(0x00121EC0u, sub_00121EC0); /* call 0x00121EC0 */

loc_0012311A: ;
    goto loc_00123138;

loc_0012311C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123131; /* jne: not equal / not zero */

loc_00123121: ;
    eax = MEM32(esi + 0x1504);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00123131u); RECOMP_ABI_CALL(0x00121EC0u, sub_00121EC0); /* call 0x00121EC0 */

loc_00123131: ;
    ecx = esi;
    PUSH32(esp, 0x00123138u); RECOMP_ABI_CALL(0x001205D0u, sub_001205D0); /* call 0x001205D0 */

loc_00123138: ;
    ecx = esi;
    PUSH32(esp, 0x0012313Fu); RECOMP_ABI_CALL(0x00122EB0u, sub_00122EB0); /* call 0x00122EB0 */

loc_0012313F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00123149u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123143u); } /* indirect call */
    }

loc_00123149: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x42F00000);
    PUSH32(esp, 0x00123155u); RECOMP_ABI_CALL(0x000C34E0u, sub_000C34E0); /* call 0x000C34E0 */

loc_00123155: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x1574) = LO8(ebx);
    MEM8(esi + 0x1575) = LO8(ebx);
    MEM8(esi + 0x1542) = LO8(ebx);
    MEM8(esi + 0x1541) = LO8(ebx);
    MEM32(esi + 0x1578) = 2;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00123180
 * Original: 0x00123180 - 0x00123365 (485 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123180: ;
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
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x20);
    esi = ecx;
    ecx = eax + -6;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012334C; /* ja: above (unsigned >) */

loc_001231A5: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x123368); /* switch: 12 entries, 9 targets */
    if (_jt == 0x001231ACu) goto loc_001231AC;
    if (_jt == 0x00123231u) goto loc_00123231;
    if (_jt == 0x00123238u) goto loc_00123238;
    if (_jt == 0x0012323Fu) goto loc_0012323F;
    if (_jt == 0x00123246u) goto loc_00123246;
    if (_jt == 0x0012329Au) goto loc_0012329A;
    if (_jt == 0x001232D0u) goto loc_001232D0;
    if (_jt == 0x00123314u) goto loc_00123314;
    if (_jt == 0x0012334Cu) goto loc_0012334C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001231AC: ;
    eax = MEM32(esi + 0x1C0);
    ecx = eax;
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123341; /* jne: not equal / not zero */

loc_001231C0: ;
    eax = eax >> 0x1D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123341; /* jne: not equal / not zero */

loc_001231CB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001231D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001231CFu); } /* indirect call */
    }

loc_001231D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123341; /* je: equal / zero */

loc_001231DE: ;
    edi = MEM32(edi);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001231E9u); RECOMP_ABI_CALL(0x0001EE00u, sub_0001EE00); /* call 0x0001EE00 */

loc_001231E9: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx);
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 5;
    MEM32(esp + 0x14) = 0x360E7561;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012320Bu); RECOMP_ABI_CALL(0x000143A0u, sub_000143A0); /* call 0x000143A0 */

loc_0012320B: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    ecx = esp + 0xA8;
    MEM32(esp + 0x1C) = 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123223u); RECOMP_ABI_CALL(0x00187920u, sub_00187920); /* call 0x00187920 */

loc_00123223: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012324B; /* ja: above (unsigned >) */

loc_0012322A: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x123388); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00123231u) goto loc_00123231;
    if (_jt == 0x00123238u) goto loc_00123238;
    if (_jt == 0x0012323Fu) goto loc_0012323F;
    if (_jt == 0x00123246u) goto loc_00123246;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00123231: ;
    eax = 0xE9E96DA0u;
    goto loc_0012324B;

loc_00123238: ;
    eax = 0x25E27514;
    goto loc_0012324B;

loc_0012323F: ;
    eax = 0xEB44F05;
    goto loc_0012324B;

loc_00123246: ;
    eax = 0xD3C56149u;

loc_0012324B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123251u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00123251: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012326A; /* je: equal / zero */

loc_00123258: ;
    edx = esp + 0x22;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_00123260: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123260; /* jne: not equal / not zero */

loc_0012326A: ;
    eax = MEM32(esi + 0x30);
    ecx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00123273u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123270u); } /* indirect call */
    }

loc_00123273: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xE8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123286u); RECOMP_ABI_CALL(0x00114250u, sub_00114250); /* call 0x00114250 */

loc_00123286: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012328Fu); RECOMP_ABI_CALL(0x0001EE80u, sub_0001EE80); /* call 0x0001EE80 */

loc_0012328F: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0012329A: ;
    ecx = MEM32(0x3C3B38);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001232A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001232A4u); } /* indirect call */
    }

loc_001232A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123341; /* je: equal / zero */

loc_001232AF: ;
    edx = MEM32(ebp + 8);
    ecx = MEM32(0x3C3B38);
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x20);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001232C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001232C2u); } /* indirect call */
    }

loc_001232C5: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001232D0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001232D7u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_001232D7: ;
    SET_LO8(ecx, MEM8(eax + 0x115C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123341; /* je: equal / zero */

loc_001232E1: ;
    eax = MEM32(esi + 0x1C0);
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00123341; /* jne: not equal / not zero */

loc_001232EE: ;
    ecx = MEM32(esi + 0x384);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001232F9u); RECOMP_ABI_CALL(0x00259910u, sub_00259910); /* call 0x00259910 */

loc_001232F9: ;
    ecx = MEM32(0x3C3B64);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00123307u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123304u); } /* indirect call */
    }

loc_00123307: ;
    SET_LO8(ebx, 1);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00123314: ;
    SET_LO8(eax, MEM8(esi + 0x1514));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123341; /* jne: not equal / not zero */

loc_0012331E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00123328u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123322u); } /* indirect call */
    }

loc_00123328: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1518)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1518) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123341; /* jne: not equal / not zero */

loc_00123330: ;
    ecx = MEM32(0x3C37B4);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0012333Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123339u); } /* indirect call */
    }

loc_0012333F: ;
    SET_LO8(ebx, 1);

loc_00123341: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0012334C: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012335Cu); RECOMP_ABI_CALL(0x001188A0u, sub_001188A0); /* call 0x001188A0 */

loc_0012335C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001233A0
 * Original: 0x001233A0 - 0x001234CE (302 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001233A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001233A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001233B7u); RECOMP_ABI_CALL(0x0011C980u, sub_0011C980); /* call 0x0011C980 */

loc_001233B7: ;
    edx = MEM32(esi + -48);
    edi = esi + -48;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x001233C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001233BFu); } /* indirect call */
    }

loc_001233C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001234B0; /* je: equal / zero */

loc_001233CD: ;
    SET_LO8(eax, MEM8(esi + 0x1510));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001234B0; /* je: equal / zero */

loc_001233DB: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    eax = esp + 0x30;
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    ebx = esi + 0x1500;
    PUSH32(esp, eax);
    ecx = ebx;
    XMM_STORE(esp + 0x64, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123411u); RECOMP_ABI_CALL(0x000ECF40u, sub_000ECF40); /* call 0x000ECF40 */

loc_00123411: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xD8); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    ecx = esp + 0x14;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123451u); RECOMP_ABI_CALL(0x00014490u, sub_00014490); /* call 0x00014490 */

loc_00123451: ;
    xmm3 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    edx = esp + 0x20;
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, edx);
    ecx = ebx;
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm5.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001234B0u); RECOMP_ABI_CALL(0x000EADE0u, sub_000EADE0); /* call 0x000EADE0 */

loc_001234B0: ;
    SET_LO8(eax, MEM8(esi + 0x388));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001234C5; /* je: equal / zero */

loc_001234BA: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001234C5u); RECOMP_ABI_CALL(0x001228D0u, sub_001228D0); /* call 0x001228D0 */

loc_001234C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001234D0
 * Original: 0x001234D0 - 0x00123625 (341 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001234D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001234D0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1D0;
    if (CMP_NE(_fa, _fb)) goto loc_001234ED; /* jne: not equal / not zero */

loc_001234E7: ;
    edi = esi + 0x1D4;

loc_001234ED: ;
    eax = MEM32(edi);
    edx = MEM32(esi + 0x1CC);
    ecx = MEM32(esi + 0x1E4);
    ebx = MEM32(esp + 0x1C);
    ebp = MEM32(eax + 0x1120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM8(esp + 0x20) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, ebx);
    MEM8(esp + 0x17) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    PUSH32(esp, 0x00123519u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00123519: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00123523u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00123523: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x319B1C);
    PUSH32(esp, 0x00123531u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00123531: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x1120);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012361B; /* je: equal / zero */

loc_00123544: ;
    PUSH32(esp, 0x00123549u); RECOMP_ABI_CALL(0x000E8970u, sub_000E8970); /* call 0x000E8970 */

loc_00123549: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00123555u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123552u); } /* indirect call */
    }

loc_00123555: ;
    ebp = eax;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x1128);
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x14) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00123576; /* jne: not equal / not zero */

loc_00123571: ;
    PUSH32(esp, 0x00123576u); RECOMP_ABI_CALL(0x00187D60u, sub_00187D60); /* call 0x00187D60 */

loc_00123576: ;
    ecx = esi + 0x30;
    PUSH32(esp, ecx);
    edx = SX16(LO16(eax));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00123586u); RECOMP_ABI_CALL(0x000F4990u, sub_000F4990); /* call 0x000F4990 */

loc_00123586: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001235E6; /* je: equal / zero */

loc_0012358E: ;
    eax = MEM32(esi + 0x200);
    edx = MEM32(esi + 0x204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ecx = esi + 0x1FC;
    if (CMP_EQ(_fa, _fb)) goto loc_001235B0; /* je: equal / zero */

loc_001235A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001235AA; /* je: equal / zero */

loc_001235A8: ;
    MEM32(eax) = ebp;

loc_001235AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 4;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001235C4;

loc_001235B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001235C4u); RECOMP_ABI_CALL(0x0013D8F0u, sub_0013D8F0); /* call 0x0013D8F0 */

loc_001235C4: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x001235CDu); RECOMP_ABI_CALL(0x001890A0u, sub_001890A0); /* call 0x001890A0 */

loc_001235CD: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0x1F4) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x001235DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001235D7u); } /* indirect call */
    }

loc_001235DD: ;
    MEM8(esi + 0x1F9) = 1;
    goto loc_0012360D;

loc_001235E6: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001235F0u); RECOMP_ABI_CALL(0x00117A50u, sub_00117A50); /* call 0x00117A50 */

loc_001235F0: ;
    edx = MEM32(esi + 0x1FC);
    MEM32(edx + eax * 4) = ebp;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00123601u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001235FFu); } /* indirect call */
    }

loc_00123601: ;
    MEM32(edi) = ebp;
    ecx = MEM32(ebp + 0xF0);
    MEM8(ecx + 0x6C) = 0;

loc_0012360D: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012361B; /* je: equal / zero */

loc_00123615: ;
    MEM32(esi + 0x1E4) = ebp;

loc_0012361B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00123630
 * Original: 0x00123630 - 0x0012374E (286 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123630: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 0x1120) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123746; /* je: equal / zero */

loc_0012364D: ;
    PUSH32(esp, ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1CC) (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x0012365Du); RECOMP_ABI_CALL(0x000E8970u, sub_000E8970); /* call 0x000E8970 */

loc_0012365D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00123669u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123666u); } /* indirect call */
    }

loc_00123669: ;
    edi = eax;
    eax = MEM32(esi + 0x1D8);
    eax = MEM32(eax + 0x1128);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x1CE);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x1CC);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x0012369Fu); RECOMP_ABI_CALL(0x000F4990u, sub_000F4990); /* call 0x000F4990 */

loc_0012369F: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1128);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001236B4u); RECOMP_ABI_CALL(0x00187AA0u, sub_00187AA0); /* call 0x00187AA0 */

loc_001236B4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123711; /* je: equal / zero */

loc_001236B8: ;
    eax = MEM32(esi + 0x200);
    edx = MEM32(esi + 0x204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ecx = esi + 0x1FC;
    if (CMP_EQ(_fa, _fb)) goto loc_001236DA; /* je: equal / zero */

loc_001236CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001236D4; /* je: equal / zero */

loc_001236D2: ;
    MEM32(eax) = edi;

loc_001236D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 4;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001236EE;

loc_001236DA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001236EEu); RECOMP_ABI_CALL(0x0013D8F0u, sub_0013D8F0); /* call 0x0013D8F0 */

loc_001236EE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x1F4) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00123700u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001236FAu); } /* indirect call */
    }

loc_00123700: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM8(esi + 0x1F9) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00123711: ;
    ecx = MEM32(esi + 0x1D8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0012371Fu); RECOMP_ABI_CALL(0x00117A50u, sub_00117A50); /* call 0x00117A50 */

loc_0012371F: ;
    edx = MEM32(esi + 0x1FC);
    MEM32(edx + eax * 4) = edi;
    ecx = MEM32(esi + 0x1D8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00123734u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123732u); } /* indirect call */
    }

loc_00123734: ;
    MEM32(esi + 0x1D8) = edi;
    ecx = MEM32(edi + 0xF0);
    POP32(esp, edi);
    MEM8(ecx + 0x6C) = 0;
    POP32(esp, ebx);

loc_00123746: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123750
 * Original: 0x00123750 - 0x00123850 (256 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123750: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00123758u); RECOMP_ABI_CALL(0x00115E90u, sub_00115E90); /* call 0x00115E90 */

loc_00123758: ;
    SET_LO8(eax, MEM8(esi + 0x1575));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012384E; /* je: equal / zero */

loc_00123766: ;
    ecx = esi;
    PUSH32(esp, 0x0012376Du); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_0012376D: ;
    SET_LO8(ecx, MEM8(eax + 0x115C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012384E; /* je: equal / zero */

loc_0012377B: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x1575) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0012378Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123786u); } /* indirect call */
    }

loc_0012378C: ;
    _fb = (uint32_t)(0x424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x424;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51D65C) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001237A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012379Au); } /* indirect call */
    }

loc_001237A0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001237F5; /* je: equal / zero */

loc_001237A3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x1500);
    if ((_fa != 0)) goto loc_001237FB; /* jne: not equal / not zero */

loc_001237AC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = MEM32(eax + 0x37628C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001237C5; /* je: equal / zero */

loc_001237B9: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001237C5u); RECOMP_ABI_CALL(0x001234D0u, sub_001234D0); /* call 0x001234D0 */

loc_001237C5: ;
    ecx = MEM32(esi + 0x1500);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    eax = MEM32(ecx + 0x376290);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001237E4; /* je: equal / zero */

loc_001237D8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001237E4u); RECOMP_ABI_CALL(0x001234D0u, sub_001234D0); /* call 0x001234D0 */

loc_001237E4: ;
    edx = MEM32(esi + 0x1500);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    eax = MEM32(edx + 0x376298);
    goto loc_00123842;

loc_001237F5: ;
    eax = MEM32(esi + 0x1500);

loc_001237FB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = MEM32(eax + 0x376274);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123814; /* je: equal / zero */

loc_00123808: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123814u); RECOMP_ABI_CALL(0x001234D0u, sub_001234D0); /* call 0x001234D0 */

loc_00123814: ;
    ecx = MEM32(esi + 0x1500);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    eax = MEM32(ecx + 0x376278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123833; /* je: equal / zero */

loc_00123827: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123833u); RECOMP_ABI_CALL(0x001234D0u, sub_001234D0); /* call 0x001234D0 */

loc_00123833: ;
    edx = MEM32(esi + 0x1500);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    eax = MEM32(edx + 0x376280);

loc_00123842: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012384E; /* je: equal / zero */

loc_00123846: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012384Eu); RECOMP_ABI_CALL(0x00123630u, sub_00123630); /* call 0x00123630 */

loc_0012384E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123850
 * Original: 0x00123850 - 0x0012393B (235 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123850: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0012385Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123855u); } /* indirect call */
    }

loc_0012385B: ;
    _fb = (uint32_t)(0x424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x424;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x51D65C) = eax;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x1574) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00123876u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123870u); } /* indirect call */
    }

loc_00123876: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x1500);
    if ((_fa == 0)) goto loc_001238D8; /* je: equal / zero */

loc_00123881: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x37626C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001238A0; /* je: equal / zero */

loc_0012388E: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x37629C);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001238A0u); RECOMP_ABI_CALL(0x001234D0u, sub_001234D0); /* call 0x001234D0 */

loc_001238A0: ;
    eax = MEM32(esi + 0x1500);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x376270);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001238C7; /* je: equal / zero */

loc_001238B3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x3762A0));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001238C7u); RECOMP_ABI_CALL(0x001234D0u, sub_001234D0); /* call 0x001234D0 */

loc_001238C7: ;
    eax = MEM32(esi + 0x1500);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = MEM32(eax + 0x37627C);
    goto loc_0012392D;

loc_001238D8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x376284);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001238F9; /* je: equal / zero */

loc_001238E5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x3762B4));
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001238F9u); RECOMP_ABI_CALL(0x001234D0u, sub_001234D0); /* call 0x001234D0 */

loc_001238F9: ;
    eax = MEM32(esi + 0x1500);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + 0x376288);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012391E; /* je: equal / zero */

loc_0012390C: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x3762B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0012391Eu); RECOMP_ABI_CALL(0x001234D0u, sub_001234D0); /* call 0x001234D0 */

loc_0012391E: ;
    ecx = MEM32(esi + 0x1500);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x78);
    eax = MEM32(ecx + 0x376294);

loc_0012392D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123939; /* je: equal / zero */

loc_00123931: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123939u); RECOMP_ABI_CALL(0x00123630u, sub_00123630); /* call 0x00123630 */

loc_00123939: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123940
 * Original: 0x00123940 - 0x001239CF (143 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123940(void)
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

loc_00123940: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0012394Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123947u); } /* indirect call */
    }

loc_0012394A: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00123958u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123952u); } /* indirect call */
    }

loc_00123958: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x00123964u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012395Eu); } /* indirect call */
    }

loc_00123964: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012396D; /* jne: not equal / not zero */

loc_00123969: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012396E;

loc_0012396D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012396E: ;
    ecx = MEM32(esi + 0x1500);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x319AF4);
    PUSH32(esp, 0x00123981u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00123981: ;
    SET_LO8(eax, MEM8(esi + 0x1540));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x1500) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001239A0; /* je: equal / zero */

loc_00123994: ;
    PUSH32(esp, edi);
    ecx = esi + 0x1530;
    PUSH32(esp, 0x001239A0u); RECOMP_ABI_CALL(0x000EA2F0u, sub_000EA2F0); /* call 0x000EA2F0 */

loc_001239A0: ;
    ecx = esi;
    PUSH32(esp, 0x001239A7u); RECOMP_ABI_CALL(0x00114170u, sub_00114170); /* call 0x00114170 */

loc_001239A7: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001239B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001239B0u); } /* indirect call */
    }

loc_001239B3: ;
    ecx = esi;
    PUSH32(esp, 0x001239BAu); RECOMP_ABI_CALL(0x00123850u, sub_00123850); /* call 0x00123850 */

loc_001239BA: ;
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x001239C2u); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_001239C2: ;
    ecx = esi;
    PUSH32(esp, 0x001239C9u); RECOMP_ABI_CALL(0x00122190u, sub_00122190); /* call 0x00122190 */

loc_001239C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001239D0
 * Original: 0x001239D0 - 0x00123B1A (330 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001239D0(void)
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

loc_001239D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x001239DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001239D8u); } /* indirect call */
    }

loc_001239DB: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(ecx);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001239EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001239E9u); } /* indirect call */
    }

loc_001239EF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123A79; /* jne: not equal / not zero */

loc_001239F7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00123A01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001239FBu); } /* indirect call */
    }

loc_00123A01: ;
    PUSH32(esp, 0xB28CA9C9u);
    ecx = eax + 0x42C;
    PUSH32(esp, 0x00123A11u); RECOMP_ABI_CALL(0x0015A160u, sub_0015A160); /* call 0x0015A160 */

loc_00123A11: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123A2E; /* je: equal / zero */

loc_00123A17: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00123A22u); RECOMP_ABI_CALL(0x0015ADB0u, sub_0015ADB0); /* call 0x0015ADB0 */

loc_00123A22: ;
    PUSH32(esp, 0x43160000);
    ecx = edi;
    PUSH32(esp, 0x00123A2Eu); RECOMP_ABI_CALL(0x0015A910u, sub_0015A910); /* call 0x0015A910 */

loc_00123A2E: ;
    ecx = MEM32(esi + 0x1CC);
    eax = MEM32(esi + 0x1D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x1128);
    PUSH32(esp, 0x270F);
    PUSH32(esp, 0x00123A50u); RECOMP_ABI_CALL(0x00187E30u, sub_00187E30); /* call 0x00187E30 */

loc_00123A50: ;
    eax = MEM32(esi + 0x1D4);
    edi = MEM32(esi + 0x1CC);
    ecx = MEM32(eax + 0x1128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, 0x270F);
    PUSH32(esp, 0x00123A72u); RECOMP_ABI_CALL(0x00187E30u, sub_00187E30); /* call 0x00187E30 */

loc_00123A72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00123A79: ;
    eax = MEM32(esi + 0x1D8);
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123A9C; /* je: equal / zero */

loc_00123A88: ;
    eax = MEM32(eax + 0x1128);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0x1CE);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0x1CC);

loc_00123A9C: ;
    eax = MEM32(esi + 0x1500);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x319AF4);
    PUSH32(esp, 0x00123AAFu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00123AAF: ;
    SET_LO8(eax, MEM8(esi + 0x1540));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x1500) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00123ACE; /* je: equal / zero */

loc_00123AC2: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x1530;
    PUSH32(esp, 0x00123ACEu); RECOMP_ABI_CALL(0x000EA2F0u, sub_000EA2F0); /* call 0x000EA2F0 */

loc_00123ACE: ;
    ecx = esi;
    PUSH32(esp, 0x00123AD5u); RECOMP_ABI_CALL(0x00114170u, sub_00114170); /* call 0x00114170 */

loc_00123AD5: ;
    ecx = esi;
    PUSH32(esp, 0x00123ADCu); RECOMP_ABI_CALL(0x00123850u, sub_00123850); /* call 0x00123850 */

loc_00123ADC: ;
    eax = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123AF3; /* je: equal / zero */

loc_00123AE6: ;
    ecx = MEM32(eax + 0x1128);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00123AF3u); RECOMP_ABI_CALL(0x00187AA0u, sub_00187AA0); /* call 0x00187AA0 */

loc_00123AF3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00123AFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123AF7u); } /* indirect call */
    }

loc_00123AFA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    POP32(esp, ebx);
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00123B13; /* jbe: below or equal (unsigned <=) */

loc_00123B07: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00123B13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123B10u); } /* indirect call */
    }

loc_00123B13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123B20
 * Original: 0x00123B20 - 0x00123BA1 (129 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123B20: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    esi = ecx;
    ecx = MEM32(edi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123B99; /* je: equal / zero */

loc_00123B35: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00123B3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00123B37u); } /* indirect call */
    }

loc_00123B3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123B99; /* je: equal / zero */

loc_00123B3E: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123B4Au); RECOMP_ABI_CALL(0x000374C0u, sub_000374C0); /* call 0x000374C0 */

loc_00123B4A: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123B98; /* je: equal / zero */

loc_00123B53: ;
    edx = MEM32(esi + 0x1CC);
    SET_LO8(eax, MEM8(edx + 0x115C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123B98; /* je: equal / zero */

loc_00123B63: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00123B6Du); RECOMP_ABI_CALL(0x00114260u, sub_00114260); /* call 0x00114260 */

loc_00123B6D: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00123B79u); RECOMP_ABI_CALL(0x001239D0u, sub_001239D0); /* call 0x001239D0 */

loc_00123B79: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123B8F; /* je: equal / zero */

loc_00123B81: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x27);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123B8Cu); RECOMP_ABI_CALL(0x000355A0u, sub_000355A0); /* call 0x000355A0 */

loc_00123B8C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00123B8F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00123B95u); RECOMP_ABI_CALL(0x00039570u, sub_00039570); /* call 0x00039570 */

loc_00123B95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00123B98: ;
    POP32(esp, ebx);

loc_00123B99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123BB0
 * Original: 0x00123BB0 - 0x00123BB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123BB0(void)
{

loc_00123BB0: ;
    eax = MEM32(ecx + 0x1500);
    esp += 4; return; /* ret */

}

/**
 * sub_00123BC0
 * Original: 0x00123BC0 - 0x00123BC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123BC0(void)
{

loc_00123BC0: ;
    SET_LO8(eax, MEM8(ecx + 0x1508));
    esp += 4; return; /* ret */

}

/**
 * sub_00123BD0
 * Original: 0x00123BD0 - 0x00123BD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123BD0(void)
{

loc_00123BD0: ;
    eax = MEM32(ecx + 0x150C);
    esp += 4; return; /* ret */

}

/**
 * sub_00123BE0
 * Original: 0x00123BE0 - 0x00123BED (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123BE0(void)
{

loc_00123BE0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x1514) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123BF0
 * Original: 0x00123BF0 - 0x00123BF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123BF0(void)
{

loc_00123BF0: ;
    SET_LO8(eax, MEM8(ecx + 0x1514));
    esp += 4; return; /* ret */

}

/**
 * sub_00123C00
 * Original: 0x00123C00 - 0x00123C08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123C00: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00123C20(); return; /* tail jmp 0x00123C20 */

}

/**
 * sub_00123C10
 * Original: 0x00123C10 - 0x00123C18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123C10: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00123C20(); return; /* tail jmp 0x00123C20 */

}

/**
 * sub_00123C20
 * Original: 0x00123C20 - 0x00123C6A (74 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x1530;
    ecx = edi;
    MEM32(esi) = 0x319950;
    MEM32(esi + 0x30) = 0x319800;
    MEM32(esi + 0x38) = 0x3197F4;
    PUSH32(esp, 0x00123C45u); RECOMP_ABI_CALL(0x000EA2B0u, sub_000EA2B0); /* call 0x000EA2B0 */

loc_00123C45: ;
    ecx = edi;
    PUSH32(esp, 0x00123C4Cu); RECOMP_ABI_CALL(0x000EADA0u, sub_000EADA0); /* call 0x000EADA0 */

loc_00123C4C: ;
    ecx = esi;
    PUSH32(esp, 0x00123C53u); RECOMP_ABI_CALL(0x0011DB60u, sub_0011DB60); /* call 0x0011DB60 */

loc_00123C53: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00123C63; /* je: equal / zero */

loc_00123C5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00123C60u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00123C60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00123C63: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123C70
 * Original: 0x00123C70 - 0x00123C7F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123C70: ;
    edx = MEM32(ecx + 0x2F8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00123C80
 * Original: 0x00123C80 - 0x00123C91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123C80: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + ecx + 0x48;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123CA0
 * Original: 0x00123CA0 - 0x00123CAF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123CA0(void)
{

loc_00123CA0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    MEM8(eax + ecx + -9) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123CB0
 * Original: 0x00123CB0 - 0x00123CBE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123CB0(void)
{

loc_00123CB0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    SET_LO8(eax, MEM8(eax + ecx + -9));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123CC0
 * Original: 0x00123CC0 - 0x00123D48 (136 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123CC0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123D3E; /* je: equal / zero */

loc_00123CD3: ;
    PUSH32(esp, edi);
    edi = eax + ecx;
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00123CE0;

    /* nop */

loc_00123CE0: ;
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx + edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123CE0; /* jne: not equal / not zero */

loc_00123CEA: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00123D37; /* jle: less or equal (signed <=) */

loc_00123CF1: ;
    ecx = MEM32(edi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123D37; /* je: equal / zero */

loc_00123CF8: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, 0x319B38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00123D09u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00123D09: ;
    eax = esp + 0x14;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;

loc_00123D12: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123D12; /* jne: not equal / not zero */

loc_00123D19: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_00123D20: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123D20; /* jne: not equal / not zero */

loc_00123D28: ;
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
    POP32(esp, esi);

loc_00123D37: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00123D3E: ;
    MEM8(eax + ecx) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00123D50
 * Original: 0x00123D50 - 0x00123D62 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123D50(void)
{

loc_00123D50: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(esp + 8));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    MEM8(eax + ecx + -11) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00123D70
 * Original: 0x00123D70 - 0x00123D8F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123D70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x44);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x48);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00123D90
 * Original: 0x00123D90 - 0x00123D9E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123D90(void)
{

loc_00123D90: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    SET_LO8(eax, MEM8(eax + ecx + -11));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123DA0
 * Original: 0x00123DA0 - 0x00123E73 (211 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123DA0: ;
    SET_LO8(edx, MEM8(ecx + 0x41));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123DB5; /* je: equal / zero */

loc_00123DA9: ;
    SET_LO8(edx, MEM8(ecx + 0x42));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123DB5; /* jne: not equal / not zero */

loc_00123DB0: ;
    eax = 1;

loc_00123DB5: ;
    SET_LO8(edx, MEM8(ecx + 0x8D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123DCA; /* je: equal / zero */

loc_00123DBF: ;
    SET_LO8(edx, MEM8(ecx + 0x8E));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123DCA; /* jne: not equal / not zero */

loc_00123DC9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123DCA: ;
    SET_LO8(edx, MEM8(ecx + 0xD9));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123DDF; /* je: equal / zero */

loc_00123DD4: ;
    SET_LO8(edx, MEM8(ecx + 0xDA));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123DDF; /* jne: not equal / not zero */

loc_00123DDE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123DDF: ;
    SET_LO8(edx, MEM8(ecx + 0x125));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123DF4; /* je: equal / zero */

loc_00123DE9: ;
    SET_LO8(edx, MEM8(ecx + 0x126));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123DF4; /* jne: not equal / not zero */

loc_00123DF3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123DF4: ;
    SET_LO8(edx, MEM8(ecx + 0x171));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123E09; /* je: equal / zero */

loc_00123DFE: ;
    SET_LO8(edx, MEM8(ecx + 0x172));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123E09; /* jne: not equal / not zero */

loc_00123E08: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123E09: ;
    SET_LO8(edx, MEM8(ecx + 0x1BD));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123E1E; /* je: equal / zero */

loc_00123E13: ;
    SET_LO8(edx, MEM8(ecx + 0x1BE));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123E1E; /* jne: not equal / not zero */

loc_00123E1D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123E1E: ;
    SET_LO8(edx, MEM8(ecx + 0x209));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123E33; /* je: equal / zero */

loc_00123E28: ;
    SET_LO8(edx, MEM8(ecx + 0x20A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123E33; /* jne: not equal / not zero */

loc_00123E32: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123E33: ;
    SET_LO8(edx, MEM8(ecx + 0x255));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123E48; /* je: equal / zero */

loc_00123E3D: ;
    SET_LO8(edx, MEM8(ecx + 0x256));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123E48; /* jne: not equal / not zero */

loc_00123E47: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123E48: ;
    SET_LO8(edx, MEM8(ecx + 0x2A1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123E5D; /* je: equal / zero */

loc_00123E52: ;
    SET_LO8(edx, MEM8(ecx + 0x2A2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123E5D; /* jne: not equal / not zero */

loc_00123E5C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123E5D: ;
    SET_LO8(edx, MEM8(ecx + 0x2ED));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123E72; /* je: equal / zero */

loc_00123E67: ;
    SET_LO8(edx, MEM8(ecx + 0x2EE));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00123E72; /* jne: not equal / not zero */

loc_00123E71: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123E72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123E80
 * Original: 0x00123E80 - 0x00123E91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00123E80: ;
    PUSH32(esp, 0x00123E85u); RECOMP_ABI_CALL(0x00123DA0u, sub_00123DA0); /* call 0x00123DA0 */

loc_00123E85: ;
    _fb = (uint32_t)(MEM32(ecx + 0x3C0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x3C0)));
    eax = eax - MEM32(ecx + 0x3C0);
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
 * sub_00123EA0
 * Original: 0x00123EA0 - 0x00123EAD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123EA0: ;
    eax = MEM32(ecx + 0x3C4);
    _fb = (uint32_t)(MEM32(ecx + 0x3C0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x3C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123EB0
 * Original: 0x00123EB0 - 0x00123F83 (211 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123EB0: ;
    SET_LO8(edx, MEM8(ecx + 0x41));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123EC5; /* je: equal / zero */

loc_00123EB9: ;
    SET_LO8(edx, MEM8(ecx + 0x42));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123EC5; /* je: equal / zero */

loc_00123EC0: ;
    eax = 1;

loc_00123EC5: ;
    SET_LO8(edx, MEM8(ecx + 0x8D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123EDA; /* je: equal / zero */

loc_00123ECF: ;
    SET_LO8(edx, MEM8(ecx + 0x8E));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123EDA; /* je: equal / zero */

loc_00123ED9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123EDA: ;
    SET_LO8(edx, MEM8(ecx + 0xD9));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123EEF; /* je: equal / zero */

loc_00123EE4: ;
    SET_LO8(edx, MEM8(ecx + 0xDA));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123EEF; /* je: equal / zero */

loc_00123EEE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123EEF: ;
    SET_LO8(edx, MEM8(ecx + 0x125));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F04; /* je: equal / zero */

loc_00123EF9: ;
    SET_LO8(edx, MEM8(ecx + 0x126));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F04; /* je: equal / zero */

loc_00123F03: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123F04: ;
    SET_LO8(edx, MEM8(ecx + 0x171));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F19; /* je: equal / zero */

loc_00123F0E: ;
    SET_LO8(edx, MEM8(ecx + 0x172));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F19; /* je: equal / zero */

loc_00123F18: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123F19: ;
    SET_LO8(edx, MEM8(ecx + 0x1BD));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F2E; /* je: equal / zero */

loc_00123F23: ;
    SET_LO8(edx, MEM8(ecx + 0x1BE));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F2E; /* je: equal / zero */

loc_00123F2D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123F2E: ;
    SET_LO8(edx, MEM8(ecx + 0x209));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F43; /* je: equal / zero */

loc_00123F38: ;
    SET_LO8(edx, MEM8(ecx + 0x20A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F43; /* je: equal / zero */

loc_00123F42: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123F43: ;
    SET_LO8(edx, MEM8(ecx + 0x255));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F58; /* je: equal / zero */

loc_00123F4D: ;
    SET_LO8(edx, MEM8(ecx + 0x256));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F58; /* je: equal / zero */

loc_00123F57: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123F58: ;
    SET_LO8(edx, MEM8(ecx + 0x2A1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F6D; /* je: equal / zero */

loc_00123F62: ;
    SET_LO8(edx, MEM8(ecx + 0x2A2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F6D; /* je: equal / zero */

loc_00123F6C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123F6D: ;
    SET_LO8(edx, MEM8(ecx + 0x2ED));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F82; /* je: equal / zero */

loc_00123F77: ;
    SET_LO8(edx, MEM8(ecx + 0x2EE));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00123F82; /* je: equal / zero */

loc_00123F81: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00123F82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123F90
 * Original: 0x00123F90 - 0x00123F9E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123F90(void)
{

loc_00123F90: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + ecx + -76;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123FA0
 * Original: 0x00123FA0 - 0x00123FAE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123FA0(void)
{

loc_00123FA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x2F4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123FB0
 * Original: 0x00123FB0 - 0x00123FF5 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123FB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    eax = esp + 0xC;
    esi = ecx;
    edi = 0xA;
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x00123FCFu); RECOMP_ABI_CALL(0x000796C0u, sub_000796C0); /* call 0x000796C0 */

loc_00123FCF: ;
    _fb = (uint32_t)(0x43) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x43;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00123FD2: ;
    ecx = esi + -2;
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00123FE0u); RECOMP_ABI_CALL(0x00079760u, sub_00079760); /* call 0x00079760 */

loc_00123FE0: ;
    PUSH32(esp, esi);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00123FEBu); RECOMP_ABI_CALL(0x00079760u, sub_00079760); /* call 0x00079760 */

loc_00123FEB: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00123FD2; /* jne: not equal / not zero */

loc_00123FF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00124000
 * Original: 0x00124000 - 0x00124068 (104 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124000: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi + 0x3C8) = 1;
    MEM32(edi + 0x3C0) = ebx;
    MEM32(edi + 0x3C4) = ebx;
    edx = edi + 0x2F8;
    eax = edi + 0x41;
    ecx = edi + 0x324;
    esi = 0xA;

loc_00124031: ;
    MEM8(eax + 2) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + -65) = LO8(ebx);
    MEM32(edx) = ebx;
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + -4) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00124031; /* jne: not equal / not zero */

loc_00124058: ;
    ecx = 8;
    esi = 0x319B44;
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
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00124070
 * Original: 0x00124070 - 0x001241BC (332 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124070: ;
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
    edi = MEM32(ebp + 8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    esi = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ebx = eax + esi;
    eax = MEM32(ebp + 0x1C);
    MEM32(esp + 0xC) = esi;
    MEM32(ebp + 8) = edi;
    MEM32(ebx + 0x44) = eax;
    MEM32(ebx + 0x48) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001240A8; /* je: equal / zero */

loc_001240A5: ;
    MEM32(ebx + 0x48) = eax;

loc_001240A8: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124110; /* je: equal / zero */

loc_001240AF: ;
    edx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001240B3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001240B3; /* jne: not equal / not zero */

loc_001240BD: ;
    eax = MEM32(ebx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00124122; /* jle: less or equal (signed <=) */

loc_001240C4: ;
    ecx = MEM32(ebx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124122; /* je: equal / zero */

loc_001240CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x319B38);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001240DCu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_001240DC: ;
    eax = esp + 0x20;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_001240E5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001240E5; /* jne: not equal / not zero */

loc_001240EC: ;
    edi = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001240F1: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001240F1; /* jne: not equal / not zero */

loc_001240F9: ;
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
    esi = MEM32(esp + 0xC);
    edi = MEM32(ebp + 8);
    goto loc_00124122;

loc_00124110: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x319B64);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012411Fu); RECOMP_ABI_CALL(0x002BF604u, sub_002BF604); /* call 0x002BF604 */

loc_0012411F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124122: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(edx, MEM8(ebp + 0x18));
    MEM8(ebx + 0x41) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012413F; /* je: equal / zero */

loc_0012412C: ;
    eax = ebx;
    edx = eax + 1;

loc_00124131: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124131; /* jne: not equal / not zero */

loc_00124138: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ebx + 0x40) = LO8(eax);
    goto loc_00124146;

loc_0012413F: ;
    MEM8(0x40) = 0;

loc_00124146: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    SET_LO8(edx, MEM8(ebp + 0x10));
    MEM8(ebx + 0x43) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebx + 0x42) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00124166; /* je: equal / zero */

loc_00124159: ;
    MEM32(esi + edi * 4 + 0x2F8) = 3;
    goto loc_00124178;

loc_00124166: ;
    SET_LO8(ebx, MEM8(ebp + 0x20));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + edi * 4 + 0x2F8) = ecx;

loc_00124178: ;
    ecx = MEM32(ebp + 0x28);
    eax = edi + 0x32;
    edi = MEM32(ecx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM32(eax) = edi;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001241A6; /* je: equal / zero */

loc_00124197: ;
    MEM32(esi + 0x3C4) = MEM32(esi + 0x3C4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x3C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

loc_001241A6: ;
    eax = MEM32(esi + 0x3C0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x3C0) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001241C0
 * Original: 0x001241C0 - 0x001241EB (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001241C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001241C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x31) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x31;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001241F0
 * Original: 0x001241F0 - 0x0012422A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001241F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001241F0: ;
    SET_LO8(ecx, MEM8(0x3DEE40));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00124224; /* jne: not equal / not zero */

loc_001241FF: ;
    edx = MEM32(0x3DEE40);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x3DEA70;
    MEM32(0x3DEE40) = edx;
    PUSH32(esp, 0x00124217u); RECOMP_ABI_CALL(0x00124000u, sub_00124000); /* call 0x00124000 */

loc_00124217: ;
    PUSH32(esp, 0x2D6FA0);
    PUSH32(esp, 0x00124221u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_00124221: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124224: ;
    eax = 0x3DEA70;
    esp += 4; return; /* ret */

}

/**
 * sub_00124230
 * Original: 0x00124230 - 0x00124254 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124230(void)
{

loc_00124230: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0012423Du); RECOMP_ABI_CALL(0x00113CA0u, sub_00113CA0); /* call 0x00113CA0 */

loc_0012423D: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x00124246u); RECOMP_ABI_CALL(0x0011FE00u, sub_0011FE00); /* call 0x0011FE00 */

loc_00124246: ;
    MEM32(esi + 0x1520) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124260
 * Original: 0x00124260 - 0x00124267 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124260(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00124260: ;
    fp_push(MEMF(0x2FE99C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124270
 * Original: 0x00124270 - 0x001242A9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124270(void)
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

loc_00124270: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x0012427Au); RECOMP_ABI_CALL(0x00079160u, sub_00079160); /* call 0x00079160 */

loc_0012427A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001242A2; /* ja: above (unsigned >) */

loc_0012427F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1242AC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00124286u) goto loc_00124286;
    if (_jt == 0x0012428Du) goto loc_0012428D;
    if (_jt == 0x00124294u) goto loc_00124294;
    if (_jt == 0x0012429Bu) goto loc_0012429B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00124286: ;
    fp_push(MEMF(0x3764B0)); /* fld float */
    esp += 4; return; /* ret */

loc_0012428D: ;
    fp_push(MEMF(0x3764B4)); /* fld float */
    esp += 4; return; /* ret */

loc_00124294: ;
    fp_push(MEMF(0x3764B8)); /* fld float */
    esp += 4; return; /* ret */

loc_0012429B: ;
    fp_push(MEMF(0x3764BC)); /* fld float */
    esp += 4; return; /* ret */

loc_001242A2: ;
    fp_push(MEMF(0x2FE99C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001242C0
 * Original: 0x001242C0 - 0x001242E1 (33 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001242C0(void)
{

loc_001242C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x3764C4)); /* movss */
    MEMF(ecx + 0x3A8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3764C0)); /* movss */
    MEMF(ecx + 0x3AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_001242F0
 * Original: 0x001242F0 - 0x001242FA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001242F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001242F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001242F6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001242F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00124300
 * Original: 0x00124300 - 0x00124348 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124300: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x208);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xE11D0E3);
    ecx = eax + 8;
    PUSH32(esp, 0x00124319u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_00124319: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012431Fu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012431F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124328u); RECOMP_ABI_CALL(0x00025640u, sub_00025640); /* call 0x00025640 */

loc_00124328: ;
    ecx = eax;
    PUSH32(esp, 0x0012432Fu); RECOMP_ABI_CALL(0x00025480u, sub_00025480); /* call 0x00025480 */

loc_0012432F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124340; /* je: equal / zero */

loc_00124333: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124339u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_00124339: ;
    ecx = eax;
    PUSH32(esp, 0x00124340u); RECOMP_ABI_CALL(0x00124F50u, sub_00124F50); /* call 0x00124F50 */

loc_00124340: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00114820(); return; /* tail jmp 0x00114820 */

}

/**
 * sub_00124350
 * Original: 0x00124350 - 0x00124456 (262 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124350: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00124368u); RECOMP_ABI_CALL(0x00039C80u, sub_00039C80); /* call 0x00039C80 */

loc_00124368: ;
    esi = eax;
    PUSH32(esp, 0x0012436Fu); RECOMP_ABI_CALL(0x00039CA0u, sub_00039CA0); /* call 0x00039CA0 */

loc_0012436F: ;
    ebx = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00124450; /* je: equal / zero */

loc_0012437D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 8;

loc_00124382: ;
    ecx = esi;
    PUSH32(esp, 0x00124389u); RECOMP_ABI_CALL(0x00039FC0u, sub_00039FC0); /* call 0x00039FC0 */

loc_00124389: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001243FD; /* je: equal / zero */

loc_0012438D: ;
    PUSH32(esp, 0x2EAC092A);
    ecx = esi;
    PUSH32(esp, 0x00124399u); RECOMP_ABI_CALL(0x0003AE00u, sub_0003AE00); /* call 0x0003AE00 */

loc_00124399: ;
    PUSH32(esp, 0x620975A3);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x001243A7u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001243A7: ;
    PUSH32(esp, 0xB7A55890u);
    ecx = esi;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x001243B7u); RECOMP_ABI_CALL(0x0003AE00u, sub_0003AE00); /* call 0x0003AE00 */

loc_001243B7: ;
    PUSH32(esp, 0xFB002419u);
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x001243C5u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001243C5: ;
    PUSH32(esp, 0x8E9071C6u);
    ecx = esi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x001243D5u); RECOMP_ABI_CALL(0x0003AE00u, sub_0003AE00); /* call 0x0003AE00 */

loc_001243D5: ;
    PUSH32(esp, 0xA9DDBCD1u);
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x001243E5u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001243E5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00124411; /* jne: not equal / not zero */

loc_001243ED: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012440D; /* jne: not equal / not zero */

loc_001243F1: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012440D; /* jne: not equal / not zero */

loc_001243F9: ;
    ebx = MEM32(esp + 0x1C);

loc_001243FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124382; /* jne: not equal / not zero */

loc_0012440B: ;
    goto loc_00124437;

loc_0012440D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124422; /* je: equal / zero */

loc_00124411: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00124422u); RECOMP_ABI_CALL(0x00120370u, sub_00120370); /* call 0x00120370 */

loc_00124422: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124437; /* je: equal / zero */

loc_00124426: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00124437u); RECOMP_ABI_CALL(0x00120370u, sub_00120370); /* call 0x00120370 */

loc_00124437: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00124450; /* je: equal / zero */

loc_00124441: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124450u); RECOMP_ABI_CALL(0x00120420u, sub_00120420); /* call 0x00120420 */

loc_00124450: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00124460
 * Original: 0x00124460 - 0x00124485 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124460(void)
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

loc_00124460: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3888C0);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp) = ecx;
    fp_push(MEMF(esp)); /* fld float */
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124490
 * Original: 0x00124490 - 0x001244F9 (105 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001244AFu); RECOMP_ABI_CALL(0x00019170u, sub_00019170); /* call 0x00019170 */

loc_001244AF: ;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001244BDu); RECOMP_ABI_CALL(0x00018400u, sub_00018400); /* call 0x00018400 */

loc_001244BD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001244C4u); RECOMP_ABI_CALL(0x00018D10u, sub_00018D10); /* call 0x00018D10 */

loc_001244C4: ;
    esi = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    ecx = esp + 0x10;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001244F0u); RECOMP_ABI_CALL(0x00018F40u, sub_00018F40); /* call 0x00018F40 */

loc_001244F0: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00124500
 * Original: 0x00124500 - 0x0012456A (106 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124500: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00124508u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_00124508: ;
    ecx = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012453D; /* je: equal / zero */

loc_00124513: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00124566; /* jne: not equal / not zero */

loc_00124516: ;
    eax = esi + 0x1510;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00124526u); RECOMP_ABI_CALL(0x00124E80u, sub_00124E80); /* call 0x00124E80 */

loc_00124526: ;
    ecx = MEM32(esi + 0x1504);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124566; /* je: equal / zero */

loc_00124530: ;
    edx = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

loc_0012453D: ;
    eax = esi + 0x1510;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0012454Du); RECOMP_ABI_CALL(0x00124E80u, sub_00124E80); /* call 0x00124E80 */

loc_0012454D: ;
    ecx = MEM32(esi + 0x1504);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124566; /* je: equal / zero */

loc_00124557: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x00124566u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124560u); } /* indirect call */
    }

loc_00124566: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124570
 * Original: 0x00124570 - 0x0012457B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124570(void)
{

loc_00124570: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00124578u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124572u); } /* indirect call */
    }

loc_00124578: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124580
 * Original: 0x00124580 - 0x001247C1 (577 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00124595u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012458Fu); } /* indirect call */
    }

loc_00124595: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    edi = eax + 0x60;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    PUSH32(esp, 0x41700000);
    ecx = esp + 0x14;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001245CAu); RECOMP_ABI_CALL(0x00116FC0u, sub_00116FC0); /* call 0x00116FC0 */

loc_001245CA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x2FF460); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, 0x4001);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x300914); /* subss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124621u); RECOMP_ABI_CALL(0x00113940u, sub_00113940); /* call 0x00113940 */

loc_00124621: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001247B7; /* je: equal / zero */

loc_0012462C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    edx = esp + 0x10;
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124696u); RECOMP_ABI_CALL(0x000182D0u, sub_000182D0); /* call 0x000182D0 */

loc_00124696: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x001246A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012469Du); } /* indirect call */
    }

loc_001246A3: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x375FD0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x375FD4); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x375FD8); /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00124773; /* je: equal / zero */

loc_001246EA: ;
    PUSH32(esp, 0x41700000);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124701u); RECOMP_ABI_CALL(0x00124490u, sub_00124490); /* call 0x00124490 */

loc_00124701: ;
    ecx = MEM32(eax);
    edi = MEM32(ebp + 8);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(edi + 8) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0012471Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124718u); } /* indirect call */
    }

loc_0012471E: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x375FD8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x375FD0); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x375FD4); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 8); /* addss */
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124769u); RECOMP_ABI_CALL(0x0011C410u, sub_0011C410); /* call 0x0011C410 */

loc_00124769: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00124773: ;
    PUSH32(esp, 0);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124786u); RECOMP_ABI_CALL(0x0011C410u, sub_0011C410); /* call 0x0011C410 */

loc_00124786: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001247B7; /* je: equal / zero */

loc_0012478A: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001247B7: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001247D0
 * Original: 0x001247D0 - 0x001248E3 (275 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001247D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001247D0: ;
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
    eax = MEM32(esi + 0x1504);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001248DB; /* je: equal / zero */

loc_001247EB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001247F0u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_001247F0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001247F7u); RECOMP_ABI_CALL(0x00124E10u, sub_00124E10); /* call 0x00124E10 */

loc_001247F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012480F; /* jne: not equal / not zero */

loc_001247FB: ;
    ecx = MEM32(esi + 0x1504);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00124807u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124805u); } /* indirect call */
    }

loc_00124807: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0012480F: ;
    eax = MEM32(esi + 0x1520);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001248DB; /* je: equal / zero */

loc_0012481D: ;
    PUSH32(esp, 0);
    edi = esi + 0x1510;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012482Du); RECOMP_ABI_CALL(0x00124580u, sub_00124580); /* call 0x00124580 */

loc_0012482D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001248DB; /* je: equal / zero */

loc_00124835: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, edi);
    ecx = esp + 0x14;
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
    PUSH32(esp, 0x001248AAu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_001248AA: ;
    esi = MEM32(esi + 0x1504);
    ecx = MEM32(esi + 0x144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001248CC; /* je: equal / zero */

loc_001248BA: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001248C4u); RECOMP_ABI_CALL(0x000F2820u, sub_000F2820); /* call 0x000F2820 */

loc_001248C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001248CC: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x001248DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001248D5u); } /* indirect call */
    }

loc_001248DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001248F0
 * Original: 0x001248F0 - 0x00124A02 (274 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001248F0(void)
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

loc_001248F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x94));
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x388));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001249F9; /* jne: not equal / not zero */

loc_00124913: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x00124920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012491Au); } /* indirect call */
    }

loc_00124920: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xFFFFFFD0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xFFFFFFD0u)) >> 32) & 1);
    edi = edi + 0xFFFFFFD0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edi;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x0012493Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124937u); } /* indirect call */
    }

loc_0012493D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00124958; /* jne: not equal / not zero */

loc_00124941: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x168); PUSH32(esp, 0x0012494Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124949u); } /* indirect call */
    }

loc_0012494F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00124958: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001249B9; /* je: equal / zero */

loc_00124960: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124969u); RECOMP_ABI_CALL(0x000169F0u, sub_000169F0); /* call 0x000169F0 */

loc_00124969: ;
    edx = MEM32(ebp + 0xC);
    ebx = MEM32(esp + 0x18);
    eax = MEM32(esi);
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edx);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, esi);
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x154); PUSH32(esp, 0x00124982u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012497Cu); } /* indirect call */
    }

loc_00124982: ;
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00124991u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012498Bu); } /* indirect call */
    }

loc_00124991: ;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012499Bu); RECOMP_ABI_CALL(0x000165B0u, sub_000165B0); /* call 0x000165B0 */

loc_0012499B: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001249A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012499Fu); } /* indirect call */
    }

loc_001249A2: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001249AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001249ABu); } /* indirect call */
    }

loc_001249AE: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001249B7u); RECOMP_ABI_CALL(0x00017190u, sub_00017190); /* call 0x00017190 */

loc_001249B7: ;
    goto loc_001249BD;

loc_001249B9: ;
    ebx = MEM32(esp + 0x18);

loc_001249BD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001249CDu); RECOMP_ABI_CALL(0x000791D0u, sub_000791D0); /* call 0x000791D0 */

loc_001249CD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001249D4u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_001249D4: ;
    edx = MEM32(ebx + -48);
    esi = ebx + -48;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001249DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001249DCu); } /* indirect call */
    }

loc_001249DF: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_001249F9; /* jb: below (unsigned <) */

loc_001249EB: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(ebx + 0x388) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x001249F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001249F6u); } /* indirect call */
    }

loc_001249F9: ;
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
 * sub_00124A10
 * Original: 0x00124A10 - 0x00124A2C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124A10(void)
{

loc_00124A10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00124A1Eu); RECOMP_ABI_CALL(0x0011C980u, sub_0011C980); /* call 0x0011C980 */

loc_00124A1E: ;
    PUSH32(esp, edi);
    ecx = esi + -48;
    PUSH32(esp, 0x00124A27u); RECOMP_ABI_CALL(0x001247D0u, sub_001247D0); /* call 0x001247D0 */

loc_00124A27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124A30
 * Original: 0x00124A30 - 0x00124B4C (284 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124A30: ;
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
    edi = ecx;
    ecx = MEM32(edi + 0x1504);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124A4E; /* je: equal / zero */

loc_00124A48: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00124A4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124A4Cu); } /* indirect call */
    }

loc_00124A4E: ;
    PUSH32(esp, 0x9D80CA55u);
    PUSH32(esp, 0xD4B7D42);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124A5Du); RECOMP_ABI_CALL(0x00133580u, sub_00133580); /* call 0x00133580 */

loc_00124A5D: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124A67u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_00124A67: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ebx = edi + 0x1510;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124A7Au); RECOMP_ABI_CALL(0x00124580u, sub_00124580); /* call 0x00124580 */

loc_00124A7A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
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
    PUSH32(esp, 0x00124AEFu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_00124AEF: ;
    ecx = MEM32(esi + 0x144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124B05; /* je: equal / zero */

loc_00124AF9: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124B03u); RECOMP_ABI_CALL(0x000F2820u, sub_000F2820); /* call 0x000F2820 */

loc_00124B03: ;
    goto loc_00124B14;

loc_00124B05: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x00124B14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124B0Eu); } /* indirect call */
    }

loc_00124B14: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9D80CA55u);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124B24u); RECOMP_ABI_CALL(0x0013B390u, sub_0013B390); /* call 0x0013B390 */

loc_00124B24: ;
    ecx = MEM32(edi + 0x1504);
    _fb = (uint32_t)(0x1500) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1500;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124B3A; /* je: equal / zero */

loc_00124B34: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124B3Au); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_00124B3A: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(edi + 4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124B45u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_00124B45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00124B50
 * Original: 0x00124B50 - 0x00124BEC (156 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00124B58u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_00124B58: ;
    ecx = eax;
    PUSH32(esp, 0x00124B5Fu); RECOMP_ABI_CALL(0x00124E10u, sub_00124E10); /* call 0x00124E10 */

loc_00124B5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124BE8; /* je: equal / zero */

loc_00124B67: ;
    eax = MEM32(esi + 0x1520);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124BB2; /* je: equal / zero */

loc_00124B76: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124BAB; /* jne: not equal / not zero */

loc_00124B7A: ;
    PUSH32(esp, 0x00124B7Fu); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_00124B7F: ;
    ecx = esi + 0x1510;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = eax;
    PUSH32(esp, 0x00124B91u); RECOMP_ABI_CALL(0x00124E80u, sub_00124E80); /* call 0x00124E80 */

loc_00124B91: ;
    ecx = MEM32(esi + 0x1504);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124BB2; /* je: equal / zero */

loc_00124B9B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x40400000);
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x00124BA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124BA3u); } /* indirect call */
    }

loc_00124BA9: ;
    goto loc_00124BB2;

loc_00124BAB: ;
    ecx = esi;
    PUSH32(esp, 0x00124BB2u); RECOMP_ABI_CALL(0x00124A30u, sub_00124A30); /* call 0x00124A30 */

loc_00124BB2: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1520) = edi;
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00124BE8; /* je: equal / zero */

loc_00124BC1: ;
    PUSH32(esp, 0x00124BC6u); RECOMP_ABI_CALL(0x00124BF0u, sub_00124BF0); /* call 0x00124BF0 */

loc_00124BC6: ;
    ecx = esi + 0x1510;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x00124BD8u); RECOMP_ABI_CALL(0x00124E80u, sub_00124E80); /* call 0x00124E80 */

loc_00124BD8: ;
    ecx = MEM32(esi + 0x1504);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124BE8; /* je: equal / zero */

loc_00124BE2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00124BE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124BE6u); } /* indirect call */
    }

loc_00124BE8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00124BF0
 * Original: 0x00124BF0 - 0x00124BF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124BF0(void)
{

loc_00124BF0: ;
    eax = 0x375FE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00124C00
 * Original: 0x00124C00 - 0x00124C19 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124C00(void)
{

loc_00124C00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0;
    MEM8(eax + 4) = 1;
    MEM8(eax + 5) = 0;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00124C20
 * Original: 0x00124C20 - 0x00124C21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124C20(void)
{

loc_00124C20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00124C30
 * Original: 0x00124C30 - 0x00124C31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124C30(void)
{

loc_00124C30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00124C40
 * Original: 0x00124C40 - 0x00124C41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124C40(void)
{

loc_00124C40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00124C50
 * Original: 0x00124C50 - 0x00124C62 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124C50(void)
{

loc_00124C50: ;
    MEM32(0x375FE0) = 0;
    MEM8(0x375FE4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00124C70
 * Original: 0x00124C70 - 0x00124C71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124C70(void)
{

loc_00124C70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00124C80
 * Original: 0x00124C80 - 0x00124C92 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124C80(void)
{

loc_00124C80: ;
    MEM32(0x375FE0) = 0;
    MEM8(0x375FE4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00124CA0
 * Original: 0x00124CA0 - 0x00124CAB (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124CA0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124CA7; /* jne: not equal / not zero */

loc_00124CA6: ;
    esp += 4; return; /* ret */

loc_00124CA7: ;
    eax = MEM32(eax + 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_00124CB0
 * Original: 0x00124CB0 - 0x00124D6D (189 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124CB0(void)
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

loc_00124CB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FF3A8)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00124CDA; /* jne: not equal / not zero */

loc_00124CD4: ;
    MEM32(esp + 0x10) = edi;
    goto loc_00124CE1;

loc_00124CDA: ;
    eax = MEM32(eax + 0x5C);
    MEM32(esp + 0x10) = eax;

loc_00124CE1: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00124D64; /* jle: less or equal (signed <=) */

loc_00124CEF: ;
    /* nop */

loc_00124CF0: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx + 0x54);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00124CFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124CFCu); } /* indirect call */
    }

loc_00124CFF: ;
    ecx = MEM32(ebp + 8);
    esi = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x60)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x64)); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x68)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124D2Fu); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00124D2F: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00124D57; /* jbe: below or equal (unsigned <=) */

loc_00124D3D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00124D53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124D4Du); } /* indirect call */
    }

loc_00124D53: ;
    MEM32(esp + 0x1C) = eax;

loc_00124D57: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124CF0; /* jl: less (signed <) */

loc_00124D60: ;
    eax = MEM32(esp + 0x1C);

loc_00124D64: ;
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
 * sub_00124D70
 * Original: 0x00124D70 - 0x00124D90 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124D70(void)
{

loc_00124D70: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x54);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00124D83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124D80u); } /* indirect call */
    }

loc_00124D83: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00124D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124D87u); } /* indirect call */
    }

loc_00124D8D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124DB0
 * Original: 0x00124DB0 - 0x00124E0F (95 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124DB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00124DC3; /* jne: not equal / not zero */

loc_00124DBF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00124DC6;

loc_00124DC3: ;
    edi = MEM32(eax + 0x5C);

loc_00124DC6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00124DFB; /* jle: less or equal (signed <=) */

loc_00124DCC: ;
    /* nop */

loc_00124DD0: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x54);
    edx = MEM32(ecx + esi * 4);
    ecx = MEM32(edx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00124DE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124DDDu); } /* indirect call */
    }

loc_00124DE0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00124DEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124DE4u); } /* indirect call */
    }

loc_00124DEA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM8(eax + 0x25A2) = LO8(ebx);
    MEM8(eax + 0x25A1) = LO8(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_00124DD0; /* jl: less (signed <) */

loc_00124DFB: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00124E05u); RECOMP_ABI_CALL(0x00024660u, sub_00024660); /* call 0x00024660 */

loc_00124E05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124E10
 * Original: 0x00124E10 - 0x00124E2D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124E10: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124E2A; /* je: equal / zero */

loc_00124E17: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124E2A; /* je: equal / zero */

loc_00124E1D: ;
    ecx = MEM32(eax + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124E2A; /* je: equal / zero */

loc_00124E24: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00124E2A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00124E30
 * Original: 0x00124E30 - 0x00124E72 (66 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x00124E40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124E3Au); } /* indirect call */
    }

loc_00124E40: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124E4A; /* jne: not equal / not zero */

loc_00124E46: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00124E4D;

loc_00124E4A: ;
    esi = MEM32(edx + 0x5C);

loc_00124E4D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00124E64; /* jle: less or equal (signed <=) */

loc_00124E53: ;
    edx = MEM32(edx + 0x54);

loc_00124E56: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124E6B; /* je: equal / zero */

loc_00124E5C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124E56; /* jl: less (signed <) */

loc_00124E64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00124E6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124E80
 * Original: 0x00124E80 - 0x00124F4D (205 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124E80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00124F45; /* je: equal / zero */

loc_00124E97: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124EA1u); RECOMP_ABI_CALL(0x000246D0u, sub_000246D0); /* call 0x000246D0 */

loc_00124EA1: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124EADu); RECOMP_ABI_CALL(0x00124CB0u, sub_00124CB0); /* call 0x00124CB0 */

loc_00124EAD: ;
    edi = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x2C;
    if ((_fa == 0)) goto loc_00124F09; /* je: equal / zero */

loc_00124EBC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00124EF5; /* je: equal / zero */

loc_00124EBF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00124ECB; /* je: equal / zero */

loc_00124EC2: ;
    MEM32(ebp + 0xC) = 0;
    goto loc_00124F31;

loc_00124ECB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124EEEu); RECOMP_ABI_CALL(0x000246A0u, sub_000246A0); /* call 0x000246A0 */

loc_00124EEE: ;
    ecx = 0x24;
    goto loc_00124F31;

loc_00124EF5: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124F02u); RECOMP_ABI_CALL(0x000246A0u, sub_000246A0); /* call 0x000246A0 */

loc_00124F02: ;
    ecx = 0x22;
    goto loc_00124F31;

loc_00124F09: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 9);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124F2Cu); RECOMP_ABI_CALL(0x000246A0u, sub_000246A0); /* call 0x000246A0 */

loc_00124F2C: ;
    ecx = 0x23;

loc_00124F31: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124F45; /* je: equal / zero */

loc_00124F35: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124F45; /* jne: not equal / not zero */

loc_00124F3B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124F42u); RECOMP_ABI_CALL(0x0002D910u, sub_0002D910); /* call 0x0002D910 */

loc_00124F42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124F45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00124F50
 * Original: 0x00124F50 - 0x00124FE9 (153 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124F50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124FE1; /* je: equal / zero */

loc_00124F66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124F70; /* je: equal / zero */

loc_00124F6A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124F70u); RECOMP_ABI_CALL(0x00124DB0u, sub_00124DB0); /* call 0x00124DB0 */

loc_00124F70: ;
    MEM32(esi) = edi;
    ecx = MEM32(0x3E8D08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124FE1; /* je: equal / zero */

loc_00124F7C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00124F81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00124F7Eu); } /* indirect call */
    }

loc_00124F81: ;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124F89u); RECOMP_ABI_CALL(0x00024660u, sub_00024660); /* call 0x00024660 */

loc_00124F89: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00124FDD; /* je: equal / zero */

loc_00124FA4: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124FAEu); RECOMP_ABI_CALL(0x000246D0u, sub_000246D0); /* call 0x000246D0 */

loc_00124FAE: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124FBAu); RECOMP_ABI_CALL(0x00124CB0u, sub_00124CB0); /* call 0x00124CB0 */

loc_00124FBA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 8);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124FDDu); RECOMP_ABI_CALL(0x000246A0u, sub_000246A0); /* call 0x000246A0 */

loc_00124FDD: ;
    MEM8(esi + 5) = 1;

loc_00124FE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124FF0
 * Original: 0x00124FF0 - 0x001250F0 (256 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124FF0(void)
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

loc_00124FF0: ;
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
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012500Au); RECOMP_ABI_CALL(0x000246D0u, sub_000246D0); /* call 0x000246D0 */

loc_0012500A: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    SET_LO8(ebx, MEM8(esi + 5));
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00125057u); RECOMP_ABI_CALL(0x002662E0u, sub_002662E0); /* call 0x002662E0 */

loc_00125057: ;
    fp_push(MEMF(0x319B88)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_0012506B; /* jb: below (unsigned <) */

loc_00125065: ;
    MEM8(esi + 5) = 1;
    goto loc_0012506F;

loc_0012506B: ;
    MEM8(esi + 5) = 0;

loc_0012506F: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001250E7; /* je: equal / zero */

loc_00125076: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001250E7; /* je: equal / zero */

loc_0012507C: ;
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001250E7; /* jle: less or equal (signed <=) */

loc_00125083: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00125095; /* je: equal / zero */

loc_00125087: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x319B8C); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001250E7; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x319B8C)) */

loc_00125095: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001250A7u); RECOMP_ABI_CALL(0x000246D0u, sub_000246D0); /* call 0x000246D0 */

loc_001250A7: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001250B3u); RECOMP_ABI_CALL(0x00124CB0u, sub_00124CB0); /* call 0x00124CB0 */

loc_001250B3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 8);
    edi = eax;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001250D8u); RECOMP_ABI_CALL(0x000246A0u, sub_000246A0); /* call 0x000246A0 */

loc_001250D8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001250E7; /* je: equal / zero */

loc_001250DC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001250E4u); RECOMP_ABI_CALL(0x0002D910u, sub_0002D910); /* call 0x0002D910 */

loc_001250E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001250E7: ;
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
 * sub_001250F0
 * Original: 0x001250F0 - 0x00125172 (130 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001250F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001250F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001250FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001250FAu); } /* indirect call */
    }

loc_001250FD: ;
    edx = MEM32(esi);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00125107u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125104u); } /* indirect call */
    }

loc_00125107: ;
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x00125112u); RECOMP_ABI_CALL(0x00114100u, sub_00114100); /* call 0x00114100 */

loc_00125112: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125126; /* je: equal / zero */

loc_00125116: ;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, 0x319BBC);
    goto loc_00125146;

loc_00125126: ;
    ecx = esi;
    PUSH32(esp, 0x0012512Du); RECOMP_ABI_CALL(0x00114110u, sub_00114110); /* call 0x00114110 */

loc_0012512D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    if (CMP_EQ(_fa, _fb)) goto loc_00125141; /* je: equal / zero */

loc_0012513A: ;
    PUSH32(esp, 0x319BA8);
    goto loc_00125146;

loc_00125141: ;
    PUSH32(esp, 0x30F0A4);

loc_00125146: ;
    ecx = MEM32(esi + 0x1F0);
    PUSH32(esp, 0x00125151u); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_00125151: ;
    ecx = esi;
    PUSH32(esp, 0x00125158u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00125158: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012516D; /* je: equal / zero */

loc_0012515C: ;
    ecx = esi;
    PUSH32(esp, 0x00125163u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00125163: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0012516Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012516Au); } /* indirect call */
    }

loc_0012516D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00125180
 * Original: 0x00125180 - 0x001251CE (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125180(void)
{

loc_00125180: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    ecx = esi + 0x38;
    PUSH32(esp, 0x0012518Cu); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_0012518C: ;
    PUSH32(esp, esi);
    ecx = esi + 0x68;
    PUSH32(esp, 0x00125195u); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_00125195: ;
    PUSH32(esp, esi);
    ecx = esi + 0xA4;
    PUSH32(esp, 0x001251A1u); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_001251A1: ;
    PUSH32(esp, esi);
    ecx = esi + 0xD8;
    PUSH32(esp, 0x001251ADu); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_001251AD: ;
    PUSH32(esp, esi);
    ecx = esi + 0x124;
    PUSH32(esp, 0x001251B9u); RECOMP_ABI_CALL(0x0014C8E0u, sub_0014C8E0); /* call 0x0014C8E0 */

loc_001251B9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x001251C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001251C2u); } /* indirect call */
    }

loc_001251C5: ;
    MEM8(esi + 0x108) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001251D0
 * Original: 0x001251D0 - 0x001251D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001251D0(void)
{

loc_001251D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001251E0
 * Original: 0x001251E0 - 0x001251EE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001251E0(void)
{

loc_001251E0: ;
    ecx = MEM32(ecx + 0x154);
    PUSH32(esp, 0x001251EBu); RECOMP_ABI_CALL(0x0011F6D0u, sub_0011F6D0); /* call 0x0011F6D0 */

loc_001251EB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001251F0
 * Original: 0x001251F0 - 0x00125203 (19 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001251F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001251F0: ;
    ecx = MEM32(ecx + 0x154);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_00113E10(); return; /* tail jmp 0x00113E10 */

}

/**
 * sub_00125210
 * Original: 0x00125210 - 0x00125211 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125210(void)
{

loc_00125210: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125220
 * Original: 0x00125220 - 0x00125221 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125220(void)
{

loc_00125220: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125230
 * Original: 0x00125230 - 0x00125231 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125230(void)
{

loc_00125230: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125240
 * Original: 0x00125240 - 0x0012524A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125240: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125246u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00125246: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00125250
 * Original: 0x00125250 - 0x0012529B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125250: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125299; /* je: equal / zero */

loc_0012525D: ;
    SET_LO8(ecx, MEM8(0x3DEE50));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012528C; /* jne: not equal / not zero */

loc_0012526C: ;
    ecx = MEM32(0x3DEE50);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BD0);
    MEM32(0x3DEE50) = ecx;
    PUSH32(esp, 0x00125284u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00125284: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE4C) = eax;

loc_0012528C: ;
    eax = MEM32(0x3DEE4C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00125299u); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_00125299: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001252A0
 * Original: 0x001252A0 - 0x00125313 (115 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001252A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001252A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001252ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001252A9u); } /* indirect call */
    }

loc_001252AC: ;
    ecx = eax;
    MEM32(esi + 0x154) = eax;
    PUSH32(esp, 0x001252B9u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_001252B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001252D3; /* je: equal / zero */

loc_001252BD: ;
    ecx = MEM32(esi + 0x154);
    PUSH32(esp, 0x001252C8u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_001252C8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001252D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001252D0u); } /* indirect call */
    }

loc_001252D3: ;
    SET_LO8(ecx, MEM8(0x3DEE50));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125302; /* jne: not equal / not zero */

loc_001252E2: ;
    ecx = MEM32(0x3DEE50);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BD0);
    MEM32(0x3DEE50) = ecx;
    PUSH32(esp, 0x001252FAu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001252FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE4C) = eax;

loc_00125302: ;
    eax = MEM32(0x3DEE4C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012530Fu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0012530F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125320
 * Original: 0x00125320 - 0x00125363 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125320: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x3DEE68));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125352; /* jne: not equal / not zero */

loc_00125332: ;
    ecx = MEM32(0x3DEE68);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319C00);
    MEM32(0x3DEE68) = ecx;
    PUSH32(esp, 0x0012534Au); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012534A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE64) = eax;

loc_00125352: ;
    eax = MEM32(0x3DEE64);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012535Fu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0012535F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125370
 * Original: 0x00125370 - 0x001253DF (111 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125370: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x154);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00125384u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125381u); } /* indirect call */
    }

loc_00125384: ;
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x0012538Du); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_0012538D: ;
    SET_LO8(ecx, MEM8(eax + 0x115C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001253D1; /* je: equal / zero */

loc_00125397: ;
    ecx = MEM32(edi + 0x200);
    _fb = (uint32_t)(MEM32(edi + 0x1FC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + 0x1FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001253D9; /* jle: less or equal (signed <=) */

loc_001253AB: ;
    ecx = edi;
    PUSH32(esp, 0x001253B2u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_001253B2: ;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = ebx;
    PUSH32(esp, 0x001253C3u); RECOMP_ABI_CALL(0x00126140u, sub_00126140); /* call 0x00126140 */

loc_001253C3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001253CBu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_001253CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001253D1: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x001253D9u); RECOMP_ABI_CALL(0x00114130u, sub_00114130); /* call 0x00114130 */

loc_001253D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001253E0
 * Original: 0x001253E0 - 0x00125423 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001253E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001253E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x3DEE60));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125412; /* jne: not equal / not zero */

loc_001253F2: ;
    ecx = MEM32(0x3DEE60);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BF0);
    MEM32(0x3DEE60) = ecx;
    PUSH32(esp, 0x0012540Au); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0012540A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE5C) = eax;

loc_00125412: ;
    eax = MEM32(0x3DEE5C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012541Fu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0012541F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125430
 * Original: 0x00125430 - 0x00125446 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125430: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x154);
    edx = MEM32(edx + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x58)); return; /* indirect tail jmp */

}

/**
 * sub_00125450
 * Original: 0x00125450 - 0x0012546C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125450(void)
{

loc_00125450: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x154);
    PUSH32(esp, 0x0012545Eu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_0012545E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00125469u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125466u); } /* indirect call */
    }

loc_00125469: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125470
 * Original: 0x00125470 - 0x0012548C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125470(void)
{

loc_00125470: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x154);
    PUSH32(esp, 0x0012547Eu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_0012547E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00125489u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125486u); } /* indirect call */
    }

loc_00125489: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125490
 * Original: 0x00125490 - 0x001254BB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125490: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x154);
    ecx = esi;
    PUSH32(esp, 0x001254A1u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_001254A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001254B7; /* je: equal / zero */

loc_001254A5: ;
    ecx = esi;
    PUSH32(esp, 0x001254ACu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_001254AC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001254B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001254B4u); } /* indirect call */
    }

loc_001254B7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001254C0
 * Original: 0x001254C0 - 0x001254DC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001254C0(void)
{

loc_001254C0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x154);
    PUSH32(esp, 0x001254CEu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_001254CE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001254D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001254D6u); } /* indirect call */
    }

loc_001254D9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001254E0
 * Original: 0x001254E0 - 0x001254F7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001254E0(void)
{

loc_001254E0: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x154);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001254F4u); RECOMP_ABI_CALL(0x001250F0u, sub_001250F0); /* call 0x001250F0 */

loc_001254F4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125500
 * Original: 0x00125500 - 0x0012552B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125500: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x154);
    ecx = esi;
    PUSH32(esp, 0x00125511u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00125511: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125527; /* je: equal / zero */

loc_00125515: ;
    ecx = esi;
    PUSH32(esp, 0x0012551Cu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_0012551C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x41);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00125527u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125524u); } /* indirect call */
    }

loc_00125527: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125530
 * Original: 0x00125530 - 0x0012554C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125530(void)
{

loc_00125530: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x154);
    PUSH32(esp, 0x0012553Eu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_0012553E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00125549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125546u); } /* indirect call */
    }

loc_00125549: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125550
 * Original: 0x00125550 - 0x001255AC (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125550: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x154);
    ecx = MEM32(esi + 0x1C0);
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00125595; /* je: equal / zero */

loc_00125568: ;
    edx = MEM32(0x376198);
    PUSH32(esp, 0x42340000);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0012557Bu); RECOMP_ABI_CALL(0x001145C0u, sub_001145C0); /* call 0x001145C0 */

loc_0012557B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00125584u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00125584: ;
    ecx = eax;
    PUSH32(esp, 0x0012558Bu); RECOMP_ABI_CALL(0x000F39C0u, sub_000F39C0); /* call 0x000F39C0 */

loc_0012558B: ;
    MEM32(esi + 0x1C0) = MEM32(esi + 0x1C0) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00125595: ;
    ecx = esi;
    PUSH32(esp, 0x0012559Cu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_0012559C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB961928);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001255AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001255A7u); } /* indirect call */
    }

loc_001255AA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001255B0
 * Original: 0x001255B0 - 0x0012560F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001255B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001255B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x154);
    PUSH32(esp, 0x001255C1u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_001255C1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x428603F5);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001255CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001255CCu); } /* indirect call */
    }

loc_001255CF: ;
    SET_LO8(ecx, MEM8(0x3DEE50));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001255FE; /* jne: not equal / not zero */

loc_001255DE: ;
    ecx = MEM32(0x3DEE50);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BD0);
    MEM32(0x3DEE50) = ecx;
    PUSH32(esp, 0x001255F6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001255F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE4C) = eax;

loc_001255FE: ;
    eax = MEM32(0x3DEE4C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012560Bu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0012560B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125610
 * Original: 0x00125610 - 0x00125653 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125610: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x154);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00125622u); RECOMP_ABI_CALL(0x00115990u, sub_00115990); /* call 0x00115990 */

loc_00125622: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012564E; /* je: equal / zero */

loc_00125628: ;
    edx = MEM32(esi + 0x30);
    ecx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00125631u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012562Eu); } /* indirect call */
    }

loc_00125631: ;
    edx = MEM32(edi + 0xD4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4B);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012564Bu); RECOMP_ABI_CALL(0x000355A0u, sub_000355A0); /* call 0x000355A0 */

loc_0012564B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012564E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125660
 * Original: 0x00125660 - 0x001256C4 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125660: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x154);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00125676u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125673u); } /* indirect call */
    }

loc_00125676: ;
    eax = MEM32(esi + 0x1C0);
    eax = eax >> 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001256B0; /* je: equal / zero */

loc_00125683: ;
    ecx = MEM32(0x376198);
    PUSH32(esp, 0x42340000);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00125696u); RECOMP_ABI_CALL(0x001145C0u, sub_001145C0); /* call 0x001145C0 */

loc_00125696: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0012569Fu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_0012569F: ;
    ecx = eax;
    PUSH32(esp, 0x001256A6u); RECOMP_ABI_CALL(0x000F39C0u, sub_000F39C0); /* call 0x000F39C0 */

loc_001256A6: ;
    MEM32(esi + 0x1C0) = MEM32(esi + 0x1C0) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x1C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001256B0: ;
    ecx = esi;
    PUSH32(esp, 0x001256B7u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_001256B7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001256C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001256BFu); } /* indirect call */
    }

loc_001256C2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001256D0
 * Original: 0x001256D0 - 0x001256E4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001256D0(void)
{

loc_001256D0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x154);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20000000);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001256E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001256E0u); } /* indirect call */
    }

loc_001256E3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001256F0
 * Original: 0x001256F0 - 0x00125760 (112 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001256F0(void)
{

loc_001256F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    esi = MEM32(eax + 0x154);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00125707u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00125707: ;
    ecx = eax;
    PUSH32(esp, 0x0012570Eu); RECOMP_ABI_CALL(0x000F4830u, sub_000F4830); /* call 0x000F4830 */

loc_0012570E: ;
    ecx = MEM32(edi + 0x38);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00125719u); RECOMP_ABI_CALL(0x0011BF70u, sub_0011BF70); /* call 0x0011BF70 */

loc_00125719: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00125722u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00125722: ;
    ecx = eax;
    PUSH32(esp, 0x00125729u); RECOMP_ABI_CALL(0x000F4830u, sub_000F4830); /* call 0x000F4830 */

loc_00125729: ;
    ecx = esi;
    PUSH32(esp, 0x00125730u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00125730: ;
    edi = MEM32(esi + 0x1F0);
    edx = MEM32(eax);
    ebx = MEM32(edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0012573Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012573Cu); } /* indirect call */
    }

loc_0012573F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x194); PUSH32(esp, 0x00125748u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125742u); } /* indirect call */
    }

loc_00125748: ;
    ecx = esi;
    PUSH32(esp, 0x0012574Fu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_0012574F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0012575Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125757u); } /* indirect call */
    }

loc_0012575A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125760
 * Original: 0x00125760 - 0x00125810 (176 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125760: ;
    _fa = (uint32_t)(MEM8(0x3DEE50)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3DEE50), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012578E; /* jne: not equal / not zero */

loc_0012576D: ;
    edi = MEM32(0x3DEE50);
    edi = edi | 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BD0);
    MEM32(0x3DEE50) = edi;
    PUSH32(esp, 0x00125786u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00125786: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE4C) = eax;

loc_0012578E: ;
    eax = MEM32(0x3DEE4C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012579Bu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_0012579B: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(ecx + 0x154);
    ecx = esi;
    PUSH32(esp, 0x001257ABu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_001257AB: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(edi + 0x1120)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D3C2D50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1120), 0x6D3C2D50 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001257D9; /* jne: not equal / not zero */

loc_001257B9: ;
    eax = MEM32(esi + 0x1C0);
    edx = eax;
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001257D9; /* je: equal / zero */

loc_001257C9: ;
    eax = eax & 0xFDFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + 0x1C0) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001257D9: ;
    eax = MEM32(esi + 0x1C0);
    eax = eax >> 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00125802; /* je: equal / zero */

loc_001257E6: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x001257EFu); RECOMP_ABI_CALL(0x000F39C0u, sub_000F39C0); /* call 0x000F39C0 */

loc_001257EF: ;
    ecx = MEM32(edi + 0x1220);
    PUSH32(esp, 0x42340000);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00125802u); RECOMP_ABI_CALL(0x001145C0u, sub_001145C0); /* call 0x001145C0 */

loc_00125802: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125810
 * Original: 0x00125810 - 0x00125827 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125810(void)
{

loc_00125810: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x154);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00125824u); RECOMP_ABI_CALL(0x001250F0u, sub_001250F0); /* call 0x001250F0 */

loc_00125824: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125830
 * Original: 0x00125830 - 0x00125865 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125830: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x154);
    ecx = esi;
    PUSH32(esp, 0x00125841u); RECOMP_ABI_CALL(0x001148D0u, sub_001148D0); /* call 0x001148D0 */

loc_00125841: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00125849u); RECOMP_ABI_CALL(0x0011E220u, sub_0011E220); /* call 0x0011E220 */

loc_00125849: ;
    ecx = MEM32(0x373578);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4295D999);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00125860u); RECOMP_ABI_CALL(0x000ABEE0u, sub_000ABEE0); /* call 0x000ABEE0 */

loc_00125860: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00125870
 * Original: 0x00125870 - 0x001258C2 (82 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125870: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x154);
    PUSH32(esp, 0x00125881u); RECOMP_ABI_CALL(0x00117920u, sub_00117920); /* call 0x00117920 */

loc_00125881: ;
    SET_LO8(ecx, MEM8(0x3DEE50));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001258B0; /* jne: not equal / not zero */

loc_00125890: ;
    ecx = MEM32(0x3DEE50);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BD0);
    MEM32(0x3DEE50) = ecx;
    PUSH32(esp, 0x001258A8u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001258A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE4C) = eax;

loc_001258B0: ;
    ecx = MEM32(0x3DEE4C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001258BEu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_001258BE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001258D0
 * Original: 0x001258D0 - 0x00125A0F (319 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001258D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001258D0: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125A0D; /* jne: not equal / not zero */

loc_001258DE: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    MEM8(edi + 0x30) = 1;
    esi = MEM32(eax + 0x154);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    ecx = 0x3888C0;
    PUSH32(esp, 0x001258FDu); RECOMP_ABI_CALL(0x00079180u, sub_00079180); /* call 0x00079180 */

loc_001258FD: ;
    ecx = eax;
    PUSH32(esp, 0x00125904u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_00125904: ;
    PUSH32(esp, 0x19);
    ecx = esi;
    PUSH32(esp, 0x0012590Du); RECOMP_ABI_CALL(0x00115570u, sub_00115570); /* call 0x00115570 */

loc_0012590D: ;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00125916u); RECOMP_ABI_CALL(0x00117220u, sub_00117220); /* call 0x00117220 */

loc_00125916: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00125922u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012591Fu); } /* indirect call */
    }

loc_00125922: ;
    eax = MEM32(esi + 0x1C0);
    eax = eax >> 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00125938; /* je: equal / zero */

loc_0012592F: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00125938u); RECOMP_ABI_CALL(0x0011D250u, sub_0011D250); /* call 0x0011D250 */

loc_00125938: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x43960000);
    ecx = edi + 0x34;
    PUSH32(esp, 0x00125948u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_00125948: ;
    ecx = esi;
    PUSH32(esp, 0x0012594Fu); RECOMP_ABI_CALL(0x00114110u, sub_00114110); /* call 0x00114110 */

loc_0012594F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125963; /* je: equal / zero */

loc_00125953: ;
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x17);
    PUSH32(esp, 2);
    PUSH32(esp, 0x319D68);
    goto loc_00125983;

loc_00125963: ;
    ecx = esi;
    PUSH32(esp, 0x0012596Au); RECOMP_ABI_CALL(0x00114100u, sub_00114100); /* call 0x00114100 */

loc_0012596A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x17);
    PUSH32(esp, 2);
    if (CMP_EQ(_fa, _fb)) goto loc_0012597E; /* je: equal / zero */

loc_00125977: ;
    PUSH32(esp, 0x319D50);
    goto loc_00125983;

loc_0012597E: ;
    PUSH32(esp, 0x319D38);

loc_00125983: ;
    ecx = MEM32(esi + 0x1F0);
    PUSH32(esp, 0x0012598Eu); RECOMP_ABI_CALL(0x000F2ED0u, sub_000F2ED0); /* call 0x000F2ED0 */

loc_0012598E: ;
    eax = MEM32(esi + 0x1440);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001259C5; /* jne: not equal / not zero */

loc_00125998: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x130); PUSH32(esp, 0x001259A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001259A0u); } /* indirect call */
    }

loc_001259A6: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1ED0), 1 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001259EC; /* ja: above (unsigned >) */

loc_001259B4: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2686FA2A);
    PUSH32(esp, 0x001259C0u); RECOMP_ABI_CALL(0x00148480u, sub_00148480); /* call 0x00148480 */

loc_001259C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001259EC;

loc_001259C5: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x1ED0), 1 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001259EC; /* ja: above (unsigned >) */

loc_001259D4: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xECB9B42Au);
    PUSH32(esp, 0x001259E0u); RECOMP_ABI_CALL(0x00148480u, sub_00148480); /* call 0x00148480 */

loc_001259E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x12);
    ecx = esi;
    PUSH32(esp, 0x001259ECu); RECOMP_ABI_CALL(0x00117220u, sub_00117220); /* call 0x00117220 */

loc_001259EC: ;
    edi = MEM32(esi + 0x1F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0x319D30);
    ecx = esi;
    PUSH32(esp, 0x00125A04u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00125A04: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00125A0Cu); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_00125A0C: ;
    POP32(esp, esi);

loc_00125A0D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00125A10
 * Original: 0x00125A10 - 0x00125B31 (289 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x30) = 0;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    ecx = MEM32(esi + 8);
    if (TEST_Z(_fa, _fb)) goto loc_00125ADE; /* je: equal / zero */

loc_00125A2C: ;
    _fa = (uint32_t)(MEM8(0x3DEE50)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3DEE50), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x154);
    if (TEST_NZ(_fa, _fb)) goto loc_00125A5B; /* jne: not equal / not zero */

loc_00125A3C: ;
    eax = MEM32(0x3DEE50);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BD0);
    MEM32(0x3DEE50) = eax;
    PUSH32(esp, 0x00125A53u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00125A53: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE4C) = eax;

loc_00125A5B: ;
    edx = MEM32(0x3DEE4C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00125A69u); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_00125A69: ;
    SET_LO8(eax, MEM8(0x3C2F20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125A99; /* je: equal / zero */

loc_00125A72: ;
    PUSH32(esp, 1);
    ecx = 0x3C250C;
    PUSH32(esp, 0x00125A7Eu); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_00125A7E: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xECB9B42Au);
    MEM8(0x3C2F20) = 0;
    PUSH32(esp, 0x00125A91u); RECOMP_ABI_CALL(0x00148500u, sub_00148500); /* call 0x00148500 */

loc_00125A91: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125A99: ;
    PUSH32(esp, 0x00125A9Eu); RECOMP_ABI_CALL(0x00083A30u, sub_00083A30); /* call 0x00083A30 */

loc_00125A9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125AC3; /* je: equal / zero */

loc_00125AA2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00125AA8u); RECOMP_ABI_CALL(0x00083A30u, sub_00083A30); /* call 0x00083A30 */

loc_00125AA8: ;
    ecx = eax;
    PUSH32(esp, 0x00125AAFu); RECOMP_ABI_CALL(0x00083A40u, sub_00083A40); /* call 0x00083A40 */

loc_00125AAF: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xECB9B42Au);
    PUSH32(esp, 0x00125ABBu); RECOMP_ABI_CALL(0x00148500u, sub_00148500); /* call 0x00148500 */

loc_00125ABB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125AC3: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00125ACAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125AC7u); } /* indirect call */
    }

loc_00125ACA: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xECB9B42Au);
    PUSH32(esp, 0x00125AD6u); RECOMP_ABI_CALL(0x00148500u, sub_00148500); /* call 0x00148500 */

loc_00125AD6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125ADE: ;
    edx = MEM32(ecx + 0x154);
    eax = MEM32(edx + 0x1440);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125B12; /* je: equal / zero */

loc_00125AEE: ;
    MEM8(esi + 0x30) = 0;
    PUSH32(esp, 0x00125AF7u); RECOMP_ABI_CALL(0x00126180u, sub_00126180); /* call 0x00126180 */

loc_00125AF7: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00125AFFu); RECOMP_ABI_CALL(0x0014C6B0u, sub_0014C6B0); /* call 0x0014C6B0 */

loc_00125AFF: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0xECB9B42Au);
    PUSH32(esp, 0x00125B0Bu); RECOMP_ABI_CALL(0x00148500u, sub_00148500); /* call 0x00148500 */

loc_00125B0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00125B12: ;
    PUSH32(esp, 1);
    ecx = 0x3C250C;
    PUSH32(esp, 0x00125B1Eu); RECOMP_ABI_CALL(0x00077AB0u, sub_00077AB0); /* call 0x00077AB0 */

loc_00125B1E: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2686FA2A);
    PUSH32(esp, 0x00125B2Au); RECOMP_ABI_CALL(0x00148500u, sub_00148500); /* call 0x00148500 */

loc_00125B2A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00125B40
 * Original: 0x00125B40 - 0x00125BC8 (136 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125B40(void)
{

loc_00125B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00125B49u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00125B49: ;
    eax = MEM32(esp + 0xC);
    edi = esi + 0x38;
    ecx = edi;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi) = 0x319D7C;
    PUSH32(esp, 0x00125B60u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00125B60: ;
    MEM32(edi) = 0x319C18;
    edi = esi + 0x68;
    ecx = edi;
    PUSH32(esp, 0x00125B70u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00125B70: ;
    MEM32(edi) = 0x319C50;
    edi = esi + 0xA4;
    ecx = edi;
    PUSH32(esp, 0x00125B83u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00125B83: ;
    MEM32(edi) = 0x319C88;
    edi = esi + 0xD8;
    ecx = edi;
    PUSH32(esp, 0x00125B96u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00125B96: ;
    ecx = edi + 0x34;
    MEM32(edi) = 0x319CC0;
    PUSH32(esp, 0x00125BA4u); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_00125BA4: ;
    edi = esi + 0x124;
    ecx = edi;
    PUSH32(esp, 0x00125BB1u); RECOMP_ABI_CALL(0x0014C810u, sub_0014C810); /* call 0x0014C810 */

loc_00125BB1: ;
    MEM32(edi) = 0x319CF8;
    POP32(esp, edi);
    MEM32(esi + 0x154) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00125BD0
 * Original: 0x00125BD0 - 0x00125E94 (708 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125BD0(void)
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

loc_00125BD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x154);
    SET_LO8(eax, MEM8(esi + 0xF4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125E8D; /* jne: not equal / not zero */

loc_00125BE8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00125BEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125BECu); } /* indirect call */
    }

loc_00125BEF: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (!(_fa & 1u) /* fcompi */) goto loc_00125E8D; /* jae: above or equal (unsigned >=) */

loc_00125BFF: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125C2E; /* je: equal / zero */

loc_00125C0B: ;
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0x2FF7D4;
    MEM32(esp + 0x18) = 0x4B238884;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00125C25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125C22u); } /* indirect call */
    }

loc_00125C25: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00125C2Eu); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_00125C2E: ;
    SET_LO8(eax, MEM8(edi + 0x45));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125C59; /* jne: not equal / not zero */

loc_00125C35: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125C59; /* je: equal / zero */

loc_00125C3B: ;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125C59; /* jne: not equal / not zero */

loc_00125C4A: ;
    ecx = esi;
    PUSH32(esp, 0x00125C51u); RECOMP_ABI_CALL(0x00115F10u, sub_00115F10); /* call 0x00115F10 */

loc_00125C51: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125E8C; /* jne: not equal / not zero */

loc_00125C59: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00125C60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125C5Du); } /* indirect call */
    }

loc_00125C60: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00125C6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125C68u); } /* indirect call */
    }

loc_00125C6B: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    ecx = MEM32(0x3888C0);
    SET_LO8(eax, MEM8(ecx + 0x1ED4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_00125DC3; /* je: equal / zero */

loc_00125C87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00125DC3; /* je: equal / zero */

loc_00125C8F: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125DC3; /* je: equal / zero */

loc_00125C9A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00125CA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125C9Cu); } /* indirect call */
    }

loc_00125CA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125DC3; /* je: equal / zero */

loc_00125CAA: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125CB6; /* je: equal / zero */

loc_00125CB1: ;
    _fb = (uint32_t)(0xFFFFFFD0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFD0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00125CB8;

loc_00125CB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00125CB8: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x30;
    ebx = eax + 0x30;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x00125CC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125CC1u); } /* indirect call */
    }

loc_00125CC7: ;
    edx = MEM32(ebx);
    ecx = ebx;
    MEM8(esp + 0x20) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x00125CD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125CCFu); } /* indirect call */
    }

loc_00125CD5: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00125DC3; /* jne: not equal / not zero */

loc_00125CE2: ;
    ecx = MEM32(edi + 0xC);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00125CF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125CF1u); } /* indirect call */
    }

loc_00125CF7: ;
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00125D02u); RECOMP_ABI_CALL(0x00083F90u, sub_00083F90); /* call 0x00083F90 */

loc_00125D02: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00125D0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125D0Au); } /* indirect call */
    }

loc_00125D0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125D18; /* jne: not equal / not zero */

loc_00125D11: ;
    SET_LO8(eax, MEM8(edi + 0x45));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125D5B; /* je: equal / zero */

loc_00125D18: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    ecx = MEM32(edi + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00125D39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125D33u); } /* indirect call */
    }

loc_00125D39: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00125D50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125D4Du); } /* indirect call */
    }

loc_00125D50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */

loc_00125D5B: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = esi;
    MEMF(esp) = xmm1.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00125D86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125D83u); } /* indirect call */
    }

loc_00125D86: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DF5C28F);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(esi);
    PUSH32(esp, 0xA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00125DA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125DA3u); } /* indirect call */
    }

loc_00125DA9: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00125DB4u); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_00125DB4: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00125DBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125DB8u); } /* indirect call */
    }

loc_00125DBE: ;
    goto loc_00125E44;

loc_00125DC3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x00125DCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125DC7u); } /* indirect call */
    }

loc_00125DCD: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00125E04; /* jne: not equal / not zero */

loc_00125DDE: ;
    _fa = (uint32_t)(MEM32(esi + 0x13D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x13D8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125DEE; /* jne: not equal / not zero */

loc_00125DE7: ;
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    goto loc_00125E04;

loc_00125DEE: ;
    _fa = (uint32_t)(MEM32(esi + 0x1424)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1424), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125E04; /* jne: not equal / not zero */

loc_00125DF7: ;
    xmm1 = XMM_SCALAR(MEMF(0x319B90)); /* movss */
    MEMF(edi + 0x30) = xmm1.f[0]; /* movss */

loc_00125E04: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x30); /* subss */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00125E17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125E14u); } /* indirect call */
    }

loc_00125E17: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DF5C28F);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00125E2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125E29u); } /* indirect call */
    }

loc_00125E2F: ;
    PUSH32(esp, eax);
    ecx = 0x3C6600;
    PUSH32(esp, 0x00125E3Au); RECOMP_ABI_CALL(0x000C6760u, sub_000C6760); /* call 0x000C6760 */

loc_00125E3A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00125E44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125E3Eu); } /* indirect call */
    }

loc_00125E44: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x1C) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00125E50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125E4Du); } /* indirect call */
    }

loc_00125E50: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00125E5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125E58u); } /* indirect call */
    }

loc_00125E5B: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0xC) / fp_top()); /* fdivr dword ptr [esp + 0xc] */
    fp_push(MEMF(0x319B94)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00125E7F; /* jbe: below or equal (unsigned <=) */

loc_00125E6B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x319B94); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00125E7F; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x319B94)) */

loc_00125E7A: ;
    MEM8(esp + 0x1C) = 1;

loc_00125E7F: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00125E8Cu); RECOMP_ABI_CALL(0x00118640u, sub_00118640); /* call 0x00118640 */

loc_00125E8C: ;
    POP32(esp, edi);

loc_00125E8D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125EA0
 * Original: 0x00125EA0 - 0x0012609A (506 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125EA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x154);
    ecx = edi;
    PUSH32(esp, 0x00125EB5u); RECOMP_ABI_CALL(0x00115990u, sub_00115990); /* call 0x00115990 */

loc_00125EB5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012605A; /* je: equal / zero */

loc_00125EBF: ;
    ecx = edi;
    PUSH32(esp, 0x00125EC6u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00125EC6: ;
    SET_LO8(ecx, MEM8(eax + 0x115C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126043; /* je: equal / zero */

loc_00125ED4: ;
    eax = MEM32(edi + 0x30);
    ecx = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00125EDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125EDAu); } /* indirect call */
    }

loc_00125EDD: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125F11; /* je: equal / zero */

loc_00125EE3: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125EFD; /* jne: not equal / not zero */

loc_00125EEB: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x00125EF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125EEEu); } /* indirect call */
    }

loc_00125EF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00125EFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125F11; /* jne: not equal / not zero */

loc_00125F02: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00125F08u); RECOMP_ABI_CALL(0x00123940u, sub_00123940); /* call 0x00123940 */

loc_00125F08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00125F11: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125F2A; /* jne: not equal / not zero */

loc_00125F19: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00125F21u); RECOMP_ABI_CALL(0x00120210u, sub_00120210); /* call 0x00120210 */

loc_00125F21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00125F2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126049; /* je: equal / zero */

loc_00125F33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126032; /* je: equal / zero */

loc_00125F3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126032; /* je: equal / zero */

loc_00125F45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00125FB1; /* jne: not equal / not zero */

loc_00125F4B: ;
    eax = MEM32(esi + 0xD4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00125F5Au); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00125F5A: ;
    ecx = esp + 0x10;
    ebx = 0x300BC0;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = 0;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00125F77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125F74u); } /* indirect call */
    }

loc_00125F77: ;
    ecx = MEM32(esp + 0x14);
    eax = esp + 0x18;
    MEM32(edi + 0x454) = ecx;
    MEM32(esp + 0x18) = 0x2FF7D4;
    MEM32(esp + 0x1C) = 0xFB28D507u;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00125F9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00125F98u); } /* indirect call */
    }

loc_00125F9B: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00125FA4u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_00125FA4: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x00125FB1u); RECOMP_ABI_CALL(0x0014B350u, sub_0014B350); /* call 0x0014B350 */

loc_00125FB1: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125FBF; /* jne: not equal / not zero */

loc_00125FB7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00125FBFu); RECOMP_ABI_CALL(0x00119700u, sub_00119700); /* call 0x00119700 */

loc_00125FBF: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125FCD; /* jne: not equal / not zero */

loc_00125FC5: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00125FCDu); RECOMP_ABI_CALL(0x0011A660u, sub_0011A660); /* call 0x0011A660 */

loc_00125FCD: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125FDB; /* jne: not equal / not zero */

loc_00125FD3: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00125FDBu); RECOMP_ABI_CALL(0x00119890u, sub_00119890); /* call 0x00119890 */

loc_00125FDB: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126028; /* je: equal / zero */

loc_00125FE0: ;
    edi = MEM32(ebp + 0x154);
    ecx = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00125FEFu); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00125FEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125FF9; /* je: equal / zero */

loc_00125FF3: ;
    ebx = MEM32(eax + 0x1120);

loc_00125FF9: ;
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126007; /* je: equal / zero */

loc_00126003: ;
    esi = eax;
    goto loc_00126009;

loc_00126007: ;
    esi = MEM32(esi);

loc_00126009: ;
    edx = MEM32(edi + 0x30);
    ecx = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00126012u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012600Fu); } /* indirect call */
    }

loc_00126012: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4B);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00126025u); RECOMP_ABI_CALL(0x000355A0u, sub_000355A0); /* call 0x000355A0 */

loc_00126025: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00126028: ;
    POP32(esp, ebx);

loc_00126029: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00126032: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012603Au); RECOMP_ABI_CALL(0x001143C0u, sub_001143C0); /* call 0x001143C0 */

loc_0012603A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00126043: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012605A; /* jne: not equal / not zero */

loc_00126049: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00126051u); RECOMP_ABI_CALL(0x001199F0u, sub_001199F0); /* call 0x001199F0 */

loc_00126051: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012605A: ;
    edx = MEM32(edi + 0x1C0);
    edx = edx >> 0xD;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126029; /* je: equal / zero */

loc_00126068: ;
    ecx = MEM32(edi + 0x454);
    edx = esp + 0x14;
    MEM32(esp + 0x14) = 0x2FF7D4;
    MEM32(esp + 0x18) = 0xA7A66839u;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00126088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00126085u); } /* indirect call */
    }

loc_00126088: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00126091u); RECOMP_ABI_CALL(0x0014B3F0u, sub_0014B3F0); /* call 0x0014B3F0 */

loc_00126091: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001260A0
 * Original: 0x001260A0 - 0x00126112 (114 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001260A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001260A0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001260F1; /* jne: not equal / not zero */

loc_001260A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x158);
    PUSH32(esp, 0x001260B4u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_001260B4: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001260D2; /* je: equal / zero */

loc_001260BF: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001260CEu); RECOMP_ABI_CALL(0x00125B40u, sub_00125B40); /* call 0x00125B40 */

loc_001260CE: ;
    esi = eax;
    goto loc_001260D4;

loc_001260D2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001260D4: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0x001260DCu); RECOMP_ABI_CALL(0x00039DA0u, sub_00039DA0); /* call 0x00039DA0 */

loc_001260DC: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001260E4u); RECOMP_ABI_CALL(0x0014C930u, sub_0014C930); /* call 0x0014C930 */

loc_001260E4: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001260ECu); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_001260EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001260F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012610F; /* jne: not equal / not zero */

loc_001260F6: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00126103u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_00126103: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012610F; /* je: equal / zero */

loc_00126107: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0012610Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012610Du); } /* indirect call */
    }

loc_0012610F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00126120
 * Original: 0x00126120 - 0x00126128 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00126120: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x30)); return; /* indirect tail jmp */

}

/**
 * sub_00126130
 * Original: 0x00126130 - 0x00126138 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00126130: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x34)); return; /* indirect tail jmp */

}

/**
 * sub_00126140
 * Original: 0x00126140 - 0x00126176 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126140: ;
    SET_LO8(ecx, MEM8(0x3DEE58));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126170; /* jne: not equal / not zero */

loc_0012614F: ;
    ecx = MEM32(0x3DEE58);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BDC);
    MEM32(0x3DEE58) = ecx;
    PUSH32(esp, 0x00126167u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126167: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE54) = eax;
    esp += 4; return; /* ret */

loc_00126170: ;
    eax = MEM32(0x3DEE54);
    esp += 4; return; /* ret */

}

/**
 * sub_00126180
 * Original: 0x00126180 - 0x001261B6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126180: ;
    SET_LO8(ecx, MEM8(0x3DEE70));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001261B0; /* jne: not equal / not zero */

loc_0012618F: ;
    ecx = MEM32(0x3DEE70);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319C0C);
    MEM32(0x3DEE70) = ecx;
    PUSH32(esp, 0x001261A7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001261A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE6C) = eax;
    esp += 4; return; /* ret */

loc_001261B0: ;
    eax = MEM32(0x3DEE6C);
    esp += 4; return; /* ret */

}

/**
 * sub_001261C0
 * Original: 0x001261C0 - 0x001261F1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001261C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001261C0: ;
    eax = MEM32(0x376060);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x376060;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001261D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001261D0u); } /* indirect call */
    }

loc_001261D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001261EE; /* je: equal / zero */

loc_001261D7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001261DFu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_001261DF: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001261EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001261E7u); } /* indirect call */
    }

loc_001261EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001261D7; /* jne: not equal / not zero */

loc_001261EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00126200
 * Original: 0x00126200 - 0x00126231 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126200: ;
    eax = MEM32(0x3760E4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x3760E4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00126213u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00126210u); } /* indirect call */
    }

loc_00126213: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012622E; /* je: equal / zero */

loc_00126217: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012621Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_0012621F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012622Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00126227u); } /* indirect call */
    }

loc_0012622A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00126217; /* jne: not equal / not zero */

loc_0012622E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00126240
 * Original: 0x00126240 - 0x00126271 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126240: ;
    eax = MEM32(0x3760C0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x3760C0;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00126253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00126250u); } /* indirect call */
    }

loc_00126253: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012626E; /* je: equal / zero */

loc_00126257: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012625Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_0012625F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012626Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00126267u); } /* indirect call */
    }

loc_0012626A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00126257; /* jne: not equal / not zero */

loc_0012626E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00126280
 * Original: 0x00126280 - 0x001262B1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126280: ;
    eax = MEM32(0x37612C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x37612C;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00126293u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00126290u); } /* indirect call */
    }

loc_00126293: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001262AE; /* je: equal / zero */

loc_00126297: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012629Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_0012629F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001262AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001262A7u); } /* indirect call */
    }

loc_001262AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00126297; /* jne: not equal / not zero */

loc_001262AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001262C0
 * Original: 0x001262C0 - 0x001262EE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001262C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001262C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x34;
    PUSH32(esp, 0x001262CBu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_001262CB: ;
    ecx = esi;
    MEM32(esi) = 0x307EF0;
    PUSH32(esp, 0x001262D8u); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_001262D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001262E8; /* je: equal / zero */

loc_001262DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001262E5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_001262E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001262E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001262F0
 * Original: 0x001262F0 - 0x00126321 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001262F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001262F0: ;
    eax = MEM32(0x376114);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x376114;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00126303u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00126300u); } /* indirect call */
    }

loc_00126303: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012631E; /* je: equal / zero */

loc_00126307: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012630Fu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_0012630F: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012631Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00126317u); } /* indirect call */
    }

loc_0012631A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00126307; /* jne: not equal / not zero */

loc_0012631E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00126330
 * Original: 0x00126330 - 0x00126354 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126330: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x307EF0;
    PUSH32(esp, 0x0012633Eu); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_0012633E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012634E; /* je: equal / zero */

loc_00126345: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012634Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0012634B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012634E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126360
 * Original: 0x00126360 - 0x00126371 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126360(void)
{

loc_00126360: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0012636Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012636Bu); } /* indirect call */
    }

loc_0012636E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00126380
 * Original: 0x00126380 - 0x001263B6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126380: ;
    SET_LO8(ecx, MEM8(0x3DEE78));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001263B0; /* jne: not equal / not zero */

loc_0012638F: ;
    ecx = MEM32(0x3DEE78);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BD0);
    MEM32(0x3DEE78) = ecx;
    PUSH32(esp, 0x001263A7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001263A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE74) = eax;
    esp += 4; return; /* ret */

loc_001263B0: ;
    eax = MEM32(0x3DEE74);
    esp += 4; return; /* ret */

}

/**
 * sub_001263C0
 * Original: 0x001263C0 - 0x001263F6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001263C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001263C0: ;
    SET_LO8(ecx, MEM8(0x3DEE80));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001263F0; /* jne: not equal / not zero */

loc_001263CF: ;
    ecx = MEM32(0x3DEE80);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BDC);
    MEM32(0x3DEE80) = ecx;
    PUSH32(esp, 0x001263E7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001263E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE7C) = eax;
    esp += 4; return; /* ret */

loc_001263F0: ;
    eax = MEM32(0x3DEE7C);
    esp += 4; return; /* ret */

}

/**
 * sub_00126400
 * Original: 0x00126400 - 0x00126436 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126400: ;
    SET_LO8(ecx, MEM8(0x3DEE88));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126430; /* jne: not equal / not zero */

loc_0012640F: ;
    ecx = MEM32(0x3DEE88);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319BF0);
    MEM32(0x3DEE88) = ecx;
    PUSH32(esp, 0x00126427u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126427: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE84) = eax;
    esp += 4; return; /* ret */

loc_00126430: ;
    eax = MEM32(0x3DEE84);
    esp += 4; return; /* ret */

}

/**
 * sub_00126440
 * Original: 0x00126440 - 0x00126476 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126440: ;
    SET_LO8(ecx, MEM8(0x3DEE90));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126470; /* jne: not equal / not zero */

loc_0012644F: ;
    ecx = MEM32(0x3DEE90);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319C00);
    MEM32(0x3DEE90) = ecx;
    PUSH32(esp, 0x00126467u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126467: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE8C) = eax;
    esp += 4; return; /* ret */

loc_00126470: ;
    eax = MEM32(0x3DEE8C);
    esp += 4; return; /* ret */

}

/**
 * sub_00126480
 * Original: 0x00126480 - 0x001264B6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126480: ;
    SET_LO8(ecx, MEM8(0x3DEE98));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001264B0; /* jne: not equal / not zero */

loc_0012648F: ;
    ecx = MEM32(0x3DEE98);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x319C0C);
    MEM32(0x3DEE98) = ecx;
    PUSH32(esp, 0x001264A7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001264A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE94) = eax;
    esp += 4; return; /* ret */

loc_001264B0: ;
    eax = MEM32(0x3DEE94);
    esp += 4; return; /* ret */

}

/**
 * sub_001264C0
 * Original: 0x001264C0 - 0x001264F1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001264C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001264C0: ;
    eax = MEM32(0x375FF0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0x375FF0;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001264D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001264D0u); } /* indirect call */
    }

loc_001264D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001264EE; /* je: equal / zero */

loc_001264D7: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001264DFu); RECOMP_ABI_CALL(0x0014C8B0u, sub_0014C8B0); /* call 0x0014C8B0 */

loc_001264DF: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001264EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001264E7u); } /* indirect call */
    }

loc_001264EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001264D7; /* jne: not equal / not zero */

loc_001264EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00126500
 * Original: 0x00126500 - 0x0012650A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126500(void)
{

loc_00126500: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126510
 * Original: 0x00126510 - 0x0012652E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126510: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00126518u); RECOMP_ABI_CALL(0x00126530u, sub_00126530); /* call 0x00126530 */

loc_00126518: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126528; /* je: equal / zero */

loc_0012651F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00126525u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00126525: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00126528: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126530
 * Original: 0x00126530 - 0x0012659C (108 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00126530: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x124;
    PUSH32(esp, edi);
    MEM32(ecx) = 0x307EF0;
    PUSH32(esp, 0x00126545u); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_00126545: ;
    edi = esi + 0xD8;
    ecx = edi + 0x34;
    PUSH32(esp, 0x00126553u); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_00126553: ;
    ecx = edi;
    MEM32(edi) = 0x307EF0;
    PUSH32(esp, 0x00126560u); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_00126560: ;
    ecx = esi + 0xA4;
    MEM32(ecx) = 0x307EF0;
    PUSH32(esp, 0x00126571u); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_00126571: ;
    ecx = esi + 0x68;
    MEM32(ecx) = 0x307EF0;
    PUSH32(esp, 0x0012657Fu); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_0012657F: ;
    ecx = esi + 0x38;
    MEM32(ecx) = 0x307EF0;
    PUSH32(esp, 0x0012658Du); RECOMP_ABI_CALL(0x0014C500u, sub_0014C500); /* call 0x0014C500 */

loc_0012658D: ;
    POP32(esp, edi);
    MEM32(esi) = 0x307EF0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0014C500(); return; /* tail jmp 0x0014C500 */

}

/**
 * sub_001265A0
 * Original: 0x001265A0 - 0x001265D6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001265A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001265A0: ;
    SET_LO8(ecx, MEM8(0x3DEEA0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001265D0; /* jne: not equal / not zero */

loc_001265AF: ;
    ecx = MEM32(0x3DEEA0);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3193DC);
    MEM32(0x3DEEA0) = ecx;
    PUSH32(esp, 0x001265C7u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001265C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3DEE9C) = eax;
    esp += 4; return; /* ret */

loc_001265D0: ;
    eax = MEM32(0x3DEE9C);
    esp += 4; return; /* ret */

}

/**
 * sub_001265E0
 * Original: 0x001265E0 - 0x001265EA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001265E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001265E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001265E6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_001265E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001265F0
 * Original: 0x001265F0 - 0x0012793F (4943 bytes, 1226 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001265F0(void)
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

loc_001265F0: ;
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x128;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x130);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x6A6733EF);
    ecx = edi;
    PUSH32(esp, 0x0012660Du); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012660D: ;
    MEMF(0x376148) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x1B424119);
    ecx = edi;
    PUSH32(esp, 0x0012661Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012661F: ;
    MEMF(0x37614C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x1DBAE33B);
    ecx = edi;
    PUSH32(esp, 0x00126631u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126631: ;
    MEMF(0x376150) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x72F145A7);
    ecx = edi;
    PUSH32(esp, 0x00126643u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126643: ;
    MEMF(0x376164) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x635D1ECD);
    ecx = edi;
    PUSH32(esp, 0x00126655u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126655: ;
    MEMF(0x376168) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x546B4158);
    ecx = edi;
    PUSH32(esp, 0x00126667u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126667: ;
    MEMF(0x37616C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB0595117u);
    ecx = edi;
    PUSH32(esp, 0x00126679u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126679: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF020)); /* fmul dword ptr [0x2ff020] */
    PUSH32(esp, 0x55FBD4B0);
    ecx = edi;
    MEMF(0x376170) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00126691u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126691: ;
    PUSH32(esp, 0xE0A9919Bu);
    MEMF(0x376174) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x001266A3u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001266A3: ;
    MEMF(0x376178) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x5CBBFC29);
    ecx = edi;
    PUSH32(esp, 0x001266B5u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001266B5: ;
    MEMF(0x37617C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x8DF700E7u);
    ecx = edi;
    PUSH32(esp, 0x001266C7u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001266C7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF020)); /* fmul dword ptr [0x2ff020] */
    PUSH32(esp, 0x4D9DEE81);
    ecx = edi;
    MEMF(0x376180) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001266DFu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001266DF: ;
    PUSH32(esp, 0x513ED6);
    MEMF(0x376188) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x001266F1u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001266F1: ;
    MEMF(0x37615C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xEC2DBB84u);
    ecx = edi;
    PUSH32(esp, 0x00126703u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126703: ;
    MEMF(0x376160) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x69A587AA);
    ecx = edi;
    PUSH32(esp, 0x00126715u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126715: ;
    MEMF(0x37618C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xD1BFD846u);
    ecx = edi;
    PUSH32(esp, 0x00126727u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126727: ;
    MEMF(0x376190) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x572BEF44);
    ecx = edi;
    PUSH32(esp, 0x00126739u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126739: ;
    MEMF(0x376194) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012675D; /* je: equal / zero */

loc_0012674D: ;
    _fa = (uint32_t)(MEM8(eax + 0x1ED0)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1ED0), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012675D; /* jne: not equal / not zero */

loc_00126756: ;
    PUSH32(esp, 0x5D0B8A65);
    goto loc_00126762;

loc_0012675D: ;
    PUSH32(esp, 0x8EAB772Bu);

loc_00126762: ;
    ecx = edi;
    PUSH32(esp, 0x00126769u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126769: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    PUSH32(esp, esi);
    PUSH32(esp, 0xF9451C23u);
    ecx = edi;
    MEMF(0x376198) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00126782u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126782: ;
    MEMF(0x376234) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xAA37F105u);
    ecx = edi;
    PUSH32(esp, 0x00126794u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126794: ;
    MEMF(0x376238) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2ED0016D);
    ecx = edi;
    PUSH32(esp, 0x001267A6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001267A6: ;
    MEMF(0x37623C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x82C89A21u);
    ecx = edi;
    PUSH32(esp, 0x001267B8u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001267B8: ;
    MEMF(0x376240) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x21C54560);
    ecx = edi;
    PUSH32(esp, 0x001267CAu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001267CA: ;
    MEMF(0x376244) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xD4296B7);
    ecx = edi;
    PUSH32(esp, 0x001267DCu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001267DC: ;
    MEMF(0x376248) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x303F96FE);
    ecx = edi;
    PUSH32(esp, 0x001267EEu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001267EE: ;
    MEMF(0x37624C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x86C3408);
    ecx = edi;
    PUSH32(esp, 0x00126800u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126800: ;
    MEMF(0x376250) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x319DC0)); /* movss */
    MEMF(0x376154) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x310A3C)); /* movss */
    PUSH32(esp, 0xE4833D29u);
    ecx = edi;
    MEMF(0x376158) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00126832u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126832: ;
    MEMF(0x3761AC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x93840DBFu);
    ecx = edi;
    PUSH32(esp, 0x00126844u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126844: ;
    MEMF(0x3761A8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xC8FE0D34u);
    ecx = edi;
    PUSH32(esp, 0x00126856u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126856: ;
    MEMF(0x376230) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xD79FA096u);
    ecx = edi;
    PUSH32(esp, 0x00126868u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126868: ;
    MEMF(0x3764AC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3A40A685);
    ecx = edi;
    PUSH32(esp, 0x0012687Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012687A: ;
    MEMF(0x3764B0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x79B215AA);
    ecx = edi;
    PUSH32(esp, 0x0012688Cu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012688C: ;
    MEMF(0x3764B4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3D57D6B5);
    ecx = edi;
    PUSH32(esp, 0x0012689Eu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012689E: ;
    MEMF(0x3764B8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x5EC1F302);
    ecx = edi;
    PUSH32(esp, 0x001268B0u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001268B0: ;
    MEMF(0x3764BC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xC76FDC50u);
    ecx = edi;
    PUSH32(esp, 0x001268C2u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001268C2: ;
    MEMF(0x3764C0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xF1887970u);
    ecx = edi;
    PUSH32(esp, 0x001268D4u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001268D4: ;
    MEMF(0x3764C4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x617C1C3);
    ecx = edi;
    PUSH32(esp, 0x001268E6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001268E6: ;
    MEMF(0x3764C8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xD2515952u);
    ecx = edi;
    PUSH32(esp, 0x001268F8u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001268F8: ;
    MEMF(0x3764CC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x40410913);
    ecx = edi;
    PUSH32(esp, 0x0012690Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012690A: ;
    MEMF(0x3764D0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x198795B2);
    ecx = edi;
    PUSH32(esp, 0x0012691Cu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012691C: ;
    MEMF(0x3764D4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x8A5D892Bu);
    ecx = edi;
    PUSH32(esp, 0x0012692Eu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012692E: ;
    MEMF(0x3764D8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x91CF1EFFu);
    ecx = edi;
    PUSH32(esp, 0x00126940u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126940: ;
    MEMF(0x3764DC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB2956060u);
    ecx = edi;
    PUSH32(esp, 0x00126952u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126952: ;
    MEMF(0x3764E0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xEB53FCC1u);
    ecx = edi;
    PUSH32(esp, 0x00126964u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126964: ;
    MEMF(0x3764E4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x8D4B6DBDu);
    ecx = edi;
    PUSH32(esp, 0x00126976u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126976: ;
    MEMF(0x3764E8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x5A1ABFE0);
    ecx = edi;
    PUSH32(esp, 0x00126988u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126988: ;
    MEMF(0x3764EC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x14423C07);
    ecx = edi;
    PUSH32(esp, 0x0012699Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012699A: ;
    MEMF(0x3764F0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xC313EE5Au);
    ecx = edi;
    PUSH32(esp, 0x001269ACu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001269AC: ;
    MEMF(0x3764F4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x63450C91);
    ecx = edi;
    PUSH32(esp, 0x001269BEu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001269BE: ;
    MEMF(0x3764F8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB414DECCu);
    ecx = edi;
    PUSH32(esp, 0x001269D0u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001269D0: ;
    MEMF(0x3764FC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x4ED8A55C);
    ecx = edi;
    PUSH32(esp, 0x001269E2u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001269E2: ;
    MEMF(0x376500) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x11FF3083);
    ecx = edi;
    PUSH32(esp, 0x001269F4u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001269F4: ;
    MEMF(0x376504) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2AB0EFB9);
    ecx = edi;
    PUSH32(esp, 0x00126A06u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126A06: ;
    MEMF(0x376508) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x37618C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376194)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(0x37618C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x376190)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, 0xD1E249F7u);
    ecx = edi;
    MEMF(0x376190) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00126A48u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126A48: ;
    MEMF(0x37619C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x77954243);
    ecx = edi;
    PUSH32(esp, 0x00126A5Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126A5A: ;
    MEMF(0x3761A0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x467D58DE);
    ecx = edi;
    PUSH32(esp, 0x00126A6Cu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126A6C: ;
    MEMF(0x3761A4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x376254) = 0x31A11C;
    MEM32(0x3762CC) = 0x31A114;
    MEM32(0x376344) = 0x31A108;
    MEM32(0x3763BC) = 0x31A0FC;
    MEM32(0x376434) = 0x31A0F4;
    esi = 0x376254;
    /* nop */

loc_00126AB0: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x31A0E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126AC2u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126AC2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126AD1u); RECOMP_ABI_CALL(0x00036BC0u, sub_00036BC0); /* call 0x00036BC0 */

loc_00126AD1: ;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x31A0C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126AE6u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126AE6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126AF5u); RECOMP_ABI_CALL(0x00036BC0u, sub_00036BC0); /* call 0x00036BC0 */

loc_00126AF5: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x31A0A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126B0Au); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126B0A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126B19u); RECOMP_ABI_CALL(0x00036BC0u, sub_00036BC0); /* call 0x00036BC0 */

loc_00126B19: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x31A088);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126B2Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126B2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126B3Du); RECOMP_ABI_CALL(0x00036BC0u, sub_00036BC0); /* call 0x00036BC0 */

loc_00126B3D: ;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x31A064);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126B52u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126B52: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126B61u); RECOMP_ABI_CALL(0x00036BC0u, sub_00036BC0); /* call 0x00036BC0 */

loc_00126B61: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x31A04C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126B76u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126B76: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126B85u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126B85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126B8Bu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126B8B: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x31A034);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126BA0u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126BA0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126BAFu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126BAF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126BB5u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126BB5: ;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x31A018);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126BCAu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126BCA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126BD9u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126BD9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126BDFu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126BDF: ;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x319FFC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126BF4u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126BF4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126C03u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126C03: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126C09u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126C09: ;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x319FE4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126C1Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126C1E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126C2Du); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126C2D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126C33u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126C33: ;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x319FC8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126C48u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126C48: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126C57u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126C57: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126C5Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126C5D: ;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x319FB4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126C72u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126C72: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126C81u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126C81: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126C87u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126C87: ;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x319FA0);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126C9Cu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126C9C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126CABu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126CAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126CB1u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126CB1: ;
    MEM32(esi + 0x34) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x319F84);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126CC6u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126CC6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126CD5u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126CD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126CDBu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126CDB: ;
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x319F68);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126CF0u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126CF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126CFFu); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126CFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126D05u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126D05: ;
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x319F54);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126D1Au); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126D1A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126D29u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126D29: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126D2Fu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126D2F: ;
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x319F38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126D44u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126D44: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126D53u); RECOMP_ABI_CALL(0x00036C10u, sub_00036C10); /* call 0x00036C10 */

loc_00126D53: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126D59u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_00126D59: ;
    MEM32(esi + 0x44) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x319F18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126D6Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126D6E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126D7Du); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126D7D: ;
    MEM32(esi + 0x48) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x319EF8);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126D92u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126D92: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126DA1u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126DA1: ;
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x319ED8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126DB6u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126DB6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126DC5u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126DC5: ;
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x319EB8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126DDAu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126DDA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126DE9u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126DE9: ;
    MEM32(esi + 0x54) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x319E98);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126DFEu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126DFE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126E0Du); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126E0D: ;
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x319E78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126E22u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126E22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126E31u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126E31: ;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x319E5C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126E46u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126E46: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126E55u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126E55: ;
    MEM32(esi + 0x60) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x319E40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126E6Au); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126E6A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126E79u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126E79: ;
    MEM32(esi + 0x64) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x319E24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126E8Eu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126E8E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126E9Du); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126E9D: ;
    MEM32(esi + 0x68) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x319E04);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126EB2u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126EB2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126EC1u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126EC1: ;
    MEM32(esi + 0x6C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x319DE4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126ED6u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126ED6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126EE5u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126EE5: ;
    MEM32(esi + 0x70) = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x319DC4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00126EFAu); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_00126EFA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00126F09u); RECOMP_ABI_CALL(0x00036B40u, sub_00036B40); /* call 0x00036B40 */

loc_00126F09: ;
    MEM32(esi + 0x74) = eax;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3764AC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3764AC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00126AB0; /* jl: less (signed <) */

loc_00126F1B: ;
    PUSH32(esp, 0xAAD8EEF1u);
    ecx = edi;
    PUSH32(esp, 0x00126F27u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126F27: ;
    MEMF(0x376540) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x41E04C58);
    ecx = edi;
    PUSH32(esp, 0x00126F39u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_00126F39: ;
    PUSH32(esp, 0x8AD63F6Cu);
    ecx = edi;
    MEM8(0x376544) = LO8(eax);
    PUSH32(esp, 0x00126F4Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126F4A: ;
    MEMF(0x376548) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xD89B454);
    ecx = edi;
    PUSH32(esp, 0x00126F5Cu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126F5C: ;
    MEMF(0x37654C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xAAA7D3ACu);
    ecx = edi;
    PUSH32(esp, 0x00126F6Eu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126F6E: ;
    MEMF(0x376554) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xCDAC75E5u);
    ecx = edi;
    PUSH32(esp, 0x00126F80u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126F80: ;
    MEMF(0x376550) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xAF4B22CCu);
    ecx = edi;
    PUSH32(esp, 0x00126F92u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126F92: ;
    MEMF(0x376558) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x79954D6D);
    ecx = edi;
    PUSH32(esp, 0x00126FA4u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126FA4: ;
    MEMF(0x37655C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xA897A867u);
    ecx = edi;
    PUSH32(esp, 0x00126FB6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126FB6: ;
    MEMF(0x376560) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x6F3A91BC);
    ecx = edi;
    PUSH32(esp, 0x00126FC8u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126FC8: ;
    MEMF(0x376564) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB26A854Au);
    ecx = edi;
    PUSH32(esp, 0x00126FDAu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126FDA: ;
    MEMF(0x376568) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x90FA121Bu);
    ecx = edi;
    PUSH32(esp, 0x00126FECu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126FEC: ;
    MEMF(0x37656C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x34516289);
    ecx = edi;
    PUSH32(esp, 0x00126FFEu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00126FFE: ;
    MEMF(0x376570) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x9F95C3DEu);
    ecx = edi;
    PUSH32(esp, 0x00127010u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127010: ;
    MEMF(0x376574) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x51FA6E59);
    ecx = edi;
    PUSH32(esp, 0x00127022u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127022: ;
    PUSH32(esp, 0x833AD33);
    ecx = edi;
    MEM32(0x376578) = eax;
    PUSH32(esp, 0x00127033u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127033: ;
    PUSH32(esp, 0x7F349DA5);
    ecx = edi;
    MEM32(0x37657C) = eax;
    PUSH32(esp, 0x00127044u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127044: ;
    PUSH32(esp, 0xCD8593AEu);
    ecx = edi;
    MEM32(0x376580) = eax;
    PUSH32(esp, 0x00127055u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127055: ;
    PUSH32(esp, 0x943FBC9Bu);
    ecx = edi;
    MEM32(0x376584) = eax;
    PUSH32(esp, 0x00127066u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127066: ;
    PUSH32(esp, 0x46B6980);
    ecx = edi;
    MEM32(0x376588) = eax;
    PUSH32(esp, 0x00127077u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127077: ;
    MEM32(0x37658C) = eax;
    PUSH32(esp, 0xF358FEF4u);
    ecx = edi;
    PUSH32(esp, 0x00127088u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127088: ;
    PUSH32(esp, 0x1BE125D);
    ecx = edi;
    MEM32(0x376590) = eax;
    PUSH32(esp, 0x00127099u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127099: ;
    PUSH32(esp, 0xF2BE2FF3u);
    ecx = edi;
    MEM32(0x376594) = eax;
    PUSH32(esp, 0x001270AAu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001270AA: ;
    PUSH32(esp, 0xB4C99CA3u);
    ecx = edi;
    MEM32(0x376598) = eax;
    PUSH32(esp, 0x001270BBu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001270BB: ;
    PUSH32(esp, 0xE42EDCA9u);
    ecx = edi;
    MEM32(0x37659C) = eax;
    PUSH32(esp, 0x001270CCu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001270CC: ;
    PUSH32(esp, 0xE4C99237u);
    ecx = edi;
    MEM32(0x3765A0) = eax;
    PUSH32(esp, 0x001270DDu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001270DD: ;
    PUSH32(esp, 0xB155182Du);
    ecx = edi;
    MEM32(0x3765A4) = eax;
    PUSH32(esp, 0x001270EEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001270EE: ;
    PUSH32(esp, 0x12C76997);
    ecx = edi;
    MEM32(0x3765A8) = eax;
    PUSH32(esp, 0x001270FFu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001270FF: ;
    PUSH32(esp, 0x55B5457D);
    ecx = edi;
    MEM32(0x3765AC) = eax;
    PUSH32(esp, 0x00127110u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127110: ;
    PUSH32(esp, 0x433CFB1A);
    ecx = edi;
    MEM32(0x3765B0) = eax;
    PUSH32(esp, 0x00127121u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127121: ;
    PUSH32(esp, 0x3A4320D3);
    ecx = edi;
    MEM32(0x3765B4) = eax;
    PUSH32(esp, 0x00127132u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127132: ;
    PUSH32(esp, 0x8AE2DB90u);
    ecx = edi;
    MEM32(0x3765B8) = eax;
    PUSH32(esp, 0x00127143u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127143: ;
    PUSH32(esp, 0x5A1778CE);
    ecx = edi;
    MEM32(0x3765BC) = eax;
    PUSH32(esp, 0x00127154u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127154: ;
    PUSH32(esp, 0x5C7FA0A);
    ecx = edi;
    MEM32(0x3765C0) = eax;
    PUSH32(esp, 0x00127165u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127165: ;
    PUSH32(esp, 0xFB218927u);
    ecx = edi;
    MEM32(0x3765C4) = eax;
    PUSH32(esp, 0x00127176u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127176: ;
    PUSH32(esp, 0x2954394F);
    ecx = edi;
    MEM32(0x3765C8) = eax;
    PUSH32(esp, 0x00127187u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127187: ;
    MEMF(0x3765CC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xDBF4D54Cu);
    ecx = edi;
    PUSH32(esp, 0x00127199u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127199: ;
    MEMF(0x3765D0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB3EC1B44u);
    ecx = edi;
    PUSH32(esp, 0x001271ABu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001271AB: ;
    PUSH32(esp, 0xC6C6BDFBu);
    ecx = edi;
    MEM32(0x3765D4) = eax;
    PUSH32(esp, 0x001271BCu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001271BC: ;
    PUSH32(esp, 0xE6502E3Cu);
    ecx = edi;
    MEM32(0x3765D8) = eax;
    PUSH32(esp, 0x001271CDu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001271CD: ;
    MEM32(0x3765DC) = eax;
    PUSH32(esp, 0x9563AC3Fu);
    ecx = edi;
    PUSH32(esp, 0x001271DEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001271DE: ;
    PUSH32(esp, 0xF9EC7AFEu);
    ecx = edi;
    MEM32(0x3765E0) = eax;
    PUSH32(esp, 0x001271EFu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001271EF: ;
    MEMF(0x3765E4) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(0x3761B0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001273E0; /* jne: not equal / not zero */

loc_00127203: ;
    PUSH32(esp, 0x7983D514);
    ecx = edi;
    PUSH32(esp, 0x0012720Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012720F: ;
    MEMF(0x3761B4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xEF438189u);
    ecx = edi;
    PUSH32(esp, 0x00127221u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127221: ;
    MEMF(0x3761B8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x300764)); /* movss */
    PUSH32(esp, 0xDD4B34BBu);
    ecx = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00127241u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127241: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x306F24)); /* movss */
    PUSH32(esp, 0xF6666778u);
    ecx = edi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0012725Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012725F: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x301060)); /* movss */
    PUSH32(esp, 0xEF7D5639u);
    ecx = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0012727Du); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012727D: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x40);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x3761F0;
    PUSH32(esp, 0x001272E0u); RECOMP_ABI_CALL(0x000EE560u, sub_000EE560); /* call 0x000EE560 */

loc_001272E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x300764)); /* movss */
    PUSH32(esp, 0x2ADB18B0);
    ecx = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001272FAu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001272FA: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x306F24)); /* movss */
    PUSH32(esp, 0x1F64B73);
    ecx = edi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00127318u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127318: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x301060)); /* movss */
    PUSH32(esp, 0x18ED7A32);
    ecx = edi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00127336u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127336: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x3761C8;
    PUSH32(esp, 0x00127399u); RECOMP_ABI_CALL(0x000EE560u, sub_000EE560); /* call 0x000EE560 */

loc_00127399: ;
    PUSH32(esp, 0x6D55C168);
    ecx = edi;
    PUSH32(esp, 0x001273A5u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001273A5: ;
    MEMF(0x376218) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_001273C7; /* jb: below (unsigned <) */

loc_001273B7: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FFE28)); /* movss */
    MEMF(0x376218) = xmm0.f[0]; /* movss */

loc_001273C7: ;
    PUSH32(esp, 0x8A09C3FAu);
    ecx = edi;
    PUSH32(esp, 0x001273D3u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001273D3: ;
    MEMF(0x37621C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(0x3761B0) = 0;

loc_001273E0: ;
    PUSH32(esp, 0x239F5FD6);
    ecx = edi;
    PUSH32(esp, 0x001273ECu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001273EC: ;
    MEMF(0x376220) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x92FF583Eu);
    ecx = edi;
    PUSH32(esp, 0x001273FEu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001273FE: ;
    MEMF(0x376224) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x9DAA4D3Cu);
    ecx = edi;
    PUSH32(esp, 0x00127410u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127410: ;
    MEMF(0x376228) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x7AE40245);
    ecx = edi;
    PUSH32(esp, 0x00127422u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127422: ;
    MEMF(0x37622C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x8441AA55u);
    ecx = edi;
    PUSH32(esp, 0x00127434u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127434: ;
    PUSH32(esp, 0xF13C229Fu);
    ecx = edi;
    MEM32(0x376510) = eax;
    PUSH32(esp, 0x00127445u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127445: ;
    PUSH32(esp, 0x8356DA65u);
    ecx = edi;
    MEM32(0x376514) = eax;
    PUSH32(esp, 0x00127456u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127456: ;
    PUSH32(esp, 0x54DD3370);
    ecx = edi;
    MEM32(0x376518) = eax;
    PUSH32(esp, 0x00127467u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127467: ;
    PUSH32(esp, 0x445D80D5);
    ecx = edi;
    MEM32(0x37651C) = eax;
    PUSH32(esp, 0x00127478u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127478: ;
    PUSH32(esp, 0x1104B31E);
    ecx = edi;
    MEM32(0x376520) = eax;
    PUSH32(esp, 0x00127489u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127489: ;
    PUSH32(esp, 0x434AF0E5);
    ecx = edi;
    MEM32(0x376524) = eax;
    PUSH32(esp, 0x0012749Au); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0012749A: ;
    PUSH32(esp, 0xF29B1E0Fu);
    ecx = edi;
    MEM32(0x376528) = eax;
    PUSH32(esp, 0x001274ABu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001274AB: ;
    PUSH32(esp, 0x30464D65);
    ecx = edi;
    MEM32(0x37652C) = eax;
    PUSH32(esp, 0x001274BCu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001274BC: ;
    MEMF(0x376530) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x7EE553F9);
    ecx = edi;
    PUSH32(esp, 0x001274CEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001274CE: ;
    PUSH32(esp, 0x973A1F32u);
    ecx = edi;
    MEM32(0x376534) = eax;
    PUSH32(esp, 0x001274DFu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001274DF: ;
    MEMF(0x376538) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x376538)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF460); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012750C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127502: ;
    MEMF(0x376538) = xmm1.f[0]; /* movss */
    goto loc_00127529;

loc_0012750C: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x376538) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00127529; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127521: ;
    MEMF(0x376538) = xmm0.f[0]; /* movss */

loc_00127529: ;
    PUSH32(esp, 0x258F95D4);
    ecx = edi;
    PUSH32(esp, 0x00127535u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127535: ;
    MEMF(0x37653C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x37653C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF460); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127562; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127558: ;
    MEMF(0x37653C) = xmm1.f[0]; /* movss */
    goto loc_0012757F;

loc_00127562: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(0x37653C) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0012757F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127577: ;
    MEMF(0x37653C) = xmm0.f[0]; /* movss */

loc_0012757F: ;
    PUSH32(esp, 0x916DDAC9u);
    ecx = edi;
    PUSH32(esp, 0x0012758Bu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012758B: ;
    MEMF(0x3765E8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2F17DA42);
    ecx = edi;
    PUSH32(esp, 0x0012759Du); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0012759D: ;
    PUSH32(esp, 0xA9A0E6A3u);
    ecx = edi;
    MEM32(0x3765EC) = eax;
    PUSH32(esp, 0x001275AEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001275AE: ;
    PUSH32(esp, 0xD5ED758Du);
    ecx = edi;
    MEM32(0x3765F0) = eax;
    PUSH32(esp, 0x001275BFu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001275BF: ;
    PUSH32(esp, 0x96CC4CD4u);
    ecx = edi;
    MEM32(0x3765F4) = eax;
    PUSH32(esp, 0x001275D0u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001275D0: ;
    PUSH32(esp, 0x29252AC4);
    ecx = edi;
    MEM32(0x3765F8) = eax;
    PUSH32(esp, 0x001275E1u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001275E1: ;
    PUSH32(esp, 0xD17BF7A5u);
    ecx = edi;
    MEM32(0x3765FC) = eax;
    PUSH32(esp, 0x001275F2u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001275F2: ;
    PUSH32(esp, 0xC2E14D1Eu);
    ecx = edi;
    MEM32(0x376600) = eax;
    PUSH32(esp, 0x00127603u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127603: ;
    MEMF(0x376604) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x84428AADu);
    ecx = edi;
    PUSH32(esp, 0x00127615u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127615: ;
    PUSH32(esp, 0x3142D89B);
    ecx = edi;
    MEM32(0x376608) = eax;
    PUSH32(esp, 0x00127626u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127626: ;
    PUSH32(esp, 0x85EB7C27u);
    ecx = edi;
    MEM32(0x37660C) = eax;
    PUSH32(esp, 0x00127637u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127637: ;
    PUSH32(esp, 0x2517F2FE);
    ecx = edi;
    MEM32(0x376610) = eax;
    PUSH32(esp, 0x00127648u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127648: ;
    MEMF(0x376614) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB36B587Du);
    ecx = edi;
    PUSH32(esp, 0x0012765Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012765A: ;
    MEMF(0x376618) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x34D1B54F);
    ecx = edi;
    PUSH32(esp, 0x0012766Cu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012766C: ;
    MEMF(0x37661C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x1FCC17F7);
    ecx = edi;
    PUSH32(esp, 0x0012767Eu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012767E: ;
    MEMF(0x376620) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xCA8D3B3Cu);
    ecx = edi;
    PUSH32(esp, 0x00127690u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127690: ;
    MEMF(0x376624) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x8651B3E8u);
    ecx = edi;
    PUSH32(esp, 0x001276A2u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001276A2: ;
    PUSH32(esp, 0x7BF30CE6);
    ecx = edi;
    MEM32(0x376628) = eax;
    PUSH32(esp, 0x001276B3u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001276B3: ;
    MEMF(0x37662C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x4C02EA7D);
    ecx = edi;
    PUSH32(esp, 0x001276C5u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001276C5: ;
    MEMF(0x376630) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xCD750AEFu);
    ecx = edi;
    PUSH32(esp, 0x001276D7u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001276D7: ;
    MEMF(0x376634) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x8183BD05u);
    ecx = edi;
    PUSH32(esp, 0x001276E9u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001276E9: ;
    PUSH32(esp, 0xC6B89A73u);
    ecx = edi;
    MEM32(0x376638) = eax;
    PUSH32(esp, 0x001276FAu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001276FA: ;
    PUSH32(esp, 0xC882EE7Eu);
    ecx = edi;
    MEM32(0x37663C) = eax;
    PUSH32(esp, 0x0012770Bu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0012770B: ;
    PUSH32(esp, 0xB26580E9u);
    ecx = edi;
    MEM32(0x376640) = eax;
    PUSH32(esp, 0x0012771Cu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0012771C: ;
    PUSH32(esp, 0x6C28272C);
    ecx = edi;
    MEM32(0x376644) = eax;
    PUSH32(esp, 0x0012772Du); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0012772D: ;
    PUSH32(esp, 0x7970C673);
    ecx = edi;
    MEM32(0x376648) = eax;
    PUSH32(esp, 0x0012773Eu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_0012773E: ;
    PUSH32(esp, 0x6AEA7CC8);
    ecx = edi;
    MEM32(0x37664C) = eax;
    PUSH32(esp, 0x0012774Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012774F: ;
    MEMF(0x376650) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x2C49BB7B);
    ecx = edi;
    PUSH32(esp, 0x00127761u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127761: ;
    PUSH32(esp, 0xB7FE1233u);
    ecx = edi;
    MEM32(0x376654) = eax;
    PUSH32(esp, 0x00127772u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127772: ;
    PUSH32(esp, 0x5D60EB37);
    ecx = edi;
    MEM32(0x376658) = eax;
    PUSH32(esp, 0x00127783u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_00127783: ;
    PUSH32(esp, 0xA3AB3856u);
    ecx = edi;
    MEM32(0x37665C) = eax;
    PUSH32(esp, 0x00127794u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127794: ;
    MEMF(0x376660) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x6BE0CF6D);
    ecx = edi;
    PUSH32(esp, 0x001277A6u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001277A6: ;
    MEMF(0x376664) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xB26D7FE7u);
    ecx = edi;
    PUSH32(esp, 0x001277B8u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001277B8: ;
    MEMF(0x376668) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xFB3AE21Eu);
    ecx = edi;
    PUSH32(esp, 0x001277CAu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001277CA: ;
    MEMF(0x37666C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x13BF9715);
    ecx = edi;
    PUSH32(esp, 0x001277DCu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001277DC: ;
    MEMF(0x376670) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x6E47F3BC);
    ecx = edi;
    PUSH32(esp, 0x001277EEu); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_001277EE: ;
    PUSH32(esp, 0x669C9715);
    ecx = edi;
    MEM32(0x376674) = eax;
    PUSH32(esp, 0x001277FFu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001277FF: ;
    MEMF(0x376678) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x68AB2640);
    ecx = edi;
    PUSH32(esp, 0x00127811u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127811: ;
    MEMF(0x37667C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xBA792DF);
    ecx = edi;
    PUSH32(esp, 0x00127823u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127823: ;
    MEMF(0x376680) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xABF5EF13u);
    ecx = edi;
    PUSH32(esp, 0x00127835u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127835: ;
    MEMF(0x376684) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xEE4251D4u);
    ecx = edi;
    PUSH32(esp, 0x00127847u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127847: ;
    MEMF(0x376688) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x7AFB696C);
    ecx = edi;
    PUSH32(esp, 0x00127859u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127859: ;
    MEMF(0x37668C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x18526526);
    ecx = edi;
    PUSH32(esp, 0x0012786Bu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012786B: ;
    MEMF(0x376690) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x51A950B7);
    ecx = edi;
    PUSH32(esp, 0x0012787Du); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012787D: ;
    MEMF(0x376694) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xF9CBCA02u);
    ecx = edi;
    PUSH32(esp, 0x0012788Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012788F: ;
    MEMF(0x376698) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xFDD5C295u);
    ecx = edi;
    PUSH32(esp, 0x001278A1u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001278A1: ;
    MEMF(0x37669C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xCB0E2EF);
    ecx = edi;
    PUSH32(esp, 0x001278B3u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001278B3: ;
    MEMF(0x3766A0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xACE29F23u);
    ecx = edi;
    PUSH32(esp, 0x001278C5u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001278C5: ;
    MEMF(0x3766A4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xE95521E4u);
    ecx = edi;
    PUSH32(esp, 0x001278D7u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001278D7: ;
    MEMF(0x3766A8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x7DEC195C);
    ecx = edi;
    PUSH32(esp, 0x001278E9u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001278E9: ;
    MEMF(0x3766AC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xD77B46ACu);
    ecx = edi;
    PUSH32(esp, 0x001278FBu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_001278FB: ;
    MEMF(0x3766B0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x8FE4F24Cu);
    ecx = edi;
    PUSH32(esp, 0x0012790Du); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012790D: ;
    MEMF(0x3766B4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xE7064061u);
    ecx = edi;
    PUSH32(esp, 0x0012791Fu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_0012791F: ;
    MEMF(0x3766B8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x3A057CE8);
    ecx = edi;
    PUSH32(esp, 0x00127931u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_00127931: ;
    MEMF(0x3766BC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x128;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127940
 * Original: 0x00127940 - 0x0012798D (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127940: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(eax + 0x19) = LO8(ecx);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x1A) = LO8(ecx);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00127990
 * Original: 0x00127990 - 0x00127991 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127990(void)
{

loc_00127990: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001279A0
 * Original: 0x001279A0 - 0x001279C6 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001279A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001279A0: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001279B8; /* jne: not equal / not zero */

loc_001279A8: ;
    PUSH32(esp, 0x31A15C);
    PUSH32(esp, 0x001279B2u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_001279B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001279B8: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x24) = edx;
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001279D0
 * Original: 0x001279D0 - 0x001279F5 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001279D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001279D0: ;
    edx = ecx;
    eax = MEM32(edx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 0xA;
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001279ED; /* jle: less or equal (signed <=) */

loc_001279E3: ;
    PUSH32(esp, edi);
    edi = edx + 0x24;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_001279ED: ;
    MEM32(edx + 0x20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00127A00
 * Original: 0x00127A00 - 0x00127A07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127A00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00127A00: ;
    fp_push(MEMF(0x31A154)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127A10
 * Original: 0x00127A10 - 0x00127A17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127A10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00127A10: ;
    fp_push(MEMF(0x31A158)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127A20
 * Original: 0x00127A20 - 0x00127A34 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127A20(void)
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

loc_00127A20: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127A2D; /* jne: not equal / not zero */

loc_00127A26: ;
    fp_push(MEMF(0x376548)); /* fld float */
    esp += 4; return; /* ret */

loc_00127A2D: ;
    fp_push(MEMF(0x2FE99C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127A40
 * Original: 0x00127A40 - 0x00127A47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127A40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00127A40: ;
    fp_push(MEMF(0x2FE99C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127A50
 * Original: 0x00127A50 - 0x00127A57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127A50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00127A50: ;
    fp_push(MEMF(0x2FE99C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127A60
 * Original: 0x00127A60 - 0x00127A71 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127A60: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00127A6E; /* jle: less or equal (signed <=) */

loc_00127A67: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00127A6E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00127A80
 * Original: 0x00127A80 - 0x00127A8B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127A80: ;
    edx = MEM32(ecx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

}

/**
 * sub_00127A90
 * Original: 0x00127A90 - 0x00127A93 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127A90(void)
{

loc_00127A90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127AA0
 * Original: 0x00127AA0 - 0x00127ADD (61 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127AA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127AABu); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_00127AAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127AD9; /* jne: not equal / not zero */

loc_00127AB2: ;
    PUSH32(esp, 0x3099B0);
    PUSH32(esp, 0x00127ABCu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00127ABC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x309F3C);
    PUSH32(esp, 0x00127AC7u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00127AC7: ;
    PUSH32(esp, 0x3099B0);
    PUSH32(esp, 0x00127AD1u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_00127AD1: ;
    eax = MEM32(0x3766C0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00127AD9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127AE0
 * Original: 0x00127AE0 - 0x00127AE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127AE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00127AE0: ;
    fp_push(MEMF(0x3011DC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127AF0
 * Original: 0x00127AF0 - 0x00127AF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127AF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00127AF0: ;
    fp_push(MEMF(0x376540)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127B00
 * Original: 0x00127B00 - 0x00127B41 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127B00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = ecx;
    eax = MEM32(edx + 0x20);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = 0xA;
    if (CMP_G(_fas, _fbs)) ecx = eax; /* cmovg */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(edx + 4) = ebx;
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    MEM8(edx + 0x18) = LO8(ebx);
    MEM8(edx + 0x19) = LO8(ebx);
    MEM32(edx + 0x1C) = ebx;
    MEM32(edx + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00127B3C; /* jle: less or equal (signed <=) */

loc_00127B32: ;
    PUSH32(esp, edi);
    edi = edx + 0x24;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00127B3C: ;
    MEM32(edx + 0x20) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00127B50
 * Original: 0x00127B50 - 0x00127B7D (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127B50(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00127B50: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00127B75; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127B68: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127B7A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127B75: ;
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */

loc_00127B7A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127B80
 * Original: 0x00127B80 - 0x00127BA0 (32 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127B80(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00127B80: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127B9D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127B98: ;
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */

loc_00127B9D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00127BA0
 * Original: 0x00127BA0 - 0x00127EE5 (837 bytes, 229 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127BA0(void)
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

loc_00127BA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x51D65C);
    MEM32(esp + 0xC) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00127EDE; /* jle: less or equal (signed <=) */

loc_00127BBF: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x24;

loc_00127BC3: ;
    eax = MEM32(ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00127E1D; /* ja: above (unsigned >) */

loc_00127BD0: ;
    eax = ZX8(MEM8(eax + 0x127F08));
    { uint32_t _jt = MEM32(eax * 4 + 0x127EE8); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00127BDEu) goto loc_00127BDE;
    if (_jt == 0x00127C72u) goto loc_00127C72;
    if (_jt == 0x00127CD2u) goto loc_00127CD2;
    if (_jt == 0x00127D35u) goto loc_00127D35;
    if (_jt == 0x00127D47u) goto loc_00127D47;
    if (_jt == 0x00127D8Du) goto loc_00127D8D;
    if (_jt == 0x00127DE6u) goto loc_00127DE6;
    if (_jt == 0x00127E1Du) goto loc_00127E1D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00127BDE: ;
    xmm0 = XMM_SCALAR(MEMF(0x37654C)); /* movss */
    ecx = MEM32(esi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00127BF3u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00127BF3: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1230)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00127C20; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127C13: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127C25; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127C20: ;
    MEMF(esi + 8) = xmm1.f[0]; /* movss */

loc_00127C25: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00127C38u); RECOMP_ABI_CALL(0x00079180u, sub_00079180); /* call 0x00079180 */

loc_00127C38: ;
    ecx = eax;
    PUSH32(esp, 0x00127C3Fu); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_00127C3F: ;
    edx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(edx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127C58; /* je: equal / zero */

loc_00127C4E: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x00127C55u); RECOMP_ABI_CALL(0x00083610u, sub_00083610); /* call 0x00083610 */

loc_00127C55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00127C58: ;
    ecx = MEM32(edi + 0x35AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127E1D; /* je: equal / zero */

loc_00127C66: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00127C6Du); RECOMP_ABI_CALL(0x0016AC30u, sub_0016AC30); /* call 0x0016AC30 */

loc_00127C6D: ;
    goto loc_00127E1D;

loc_00127C72: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x376550); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00127C99; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127C8C: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127C9E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127C99: ;
    MEMF(esi + 8) = xmm1.f[0]; /* movss */

loc_00127C9E: ;
    eax = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00127CB1u); RECOMP_ABI_CALL(0x00079180u, sub_00079180); /* call 0x00079180 */

loc_00127CB1: ;
    ecx = eax;
    PUSH32(esp, 0x00127CB8u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_00127CB8: ;
    ecx = MEM32(edi + 0x35AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127E1D; /* je: equal / zero */

loc_00127CC6: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x00127CCDu); RECOMP_ABI_CALL(0x0016AC30u, sub_0016AC30); /* call 0x0016AC30 */

loc_00127CCD: ;
    goto loc_00127E1D;

loc_00127CD2: ;
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x376554)); /* movss */
    ecx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00127CF0u); RECOMP_ABI_CALL(0x00114230u, sub_00114230); /* call 0x00114230 */

loc_00127CF0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1230)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127D1A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127D10: ;
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    goto loc_00127E1D;

loc_00127D1A: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127E1D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127D2B: ;
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    goto loc_00127E1D;

loc_00127D35: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x37656C); /* addss */
    goto loc_00127DF3;

loc_00127D47: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x376568); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00127D6E; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127D61: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127D73; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127D6E: ;
    MEMF(esi + 8) = xmm1.f[0]; /* movss */

loc_00127D73: ;
    ecx = MEM32(edi + 0x35AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127E1D; /* je: equal / zero */

loc_00127D81: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00127D88u); RECOMP_ABI_CALL(0x0016AC30u, sub_0016AC30); /* call 0x0016AC30 */

loc_00127D88: ;
    goto loc_00127E1D;

loc_00127D8D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x376570); /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00127DB4; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127DA7: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127DB9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127DB4: ;
    MEMF(esi + 8) = xmm1.f[0]; /* movss */

loc_00127DB9: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00127DCCu); RECOMP_ABI_CALL(0x00079180u, sub_00079180); /* call 0x00079180 */

loc_00127DCC: ;
    ecx = eax;
    PUSH32(esp, 0x00127DD3u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_00127DD3: ;
    ecx = MEM32(edi + 0x35AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127E1D; /* je: equal / zero */

loc_00127DDD: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x00127DE4u); RECOMP_ABI_CALL(0x0016AC30u, sub_0016AC30); /* call 0x0016AC30 */

loc_00127DE4: ;
    goto loc_00127E1D;

loc_00127DE6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x376574); /* addss */

loc_00127DF3: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127E07; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127E00: ;
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    goto loc_00127E1D;

loc_00127E07: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3011DC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127E1D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3011DC)) */

loc_00127E10: ;
    xmm0 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */

loc_00127E1D: ;
    eax = MEM32(esi + 0x20);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00127BC3; /* jl: less (signed <) */

loc_00127E2C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00127EDE; /* je: equal / zero */

loc_00127E39: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127EA4; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(esi + 0xC)) */

loc_00127E42: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127E4F; /* jne: not equal / not zero */

loc_00127E4A: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    goto loc_00127E73;

loc_00127E4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127E5E; /* jne: not equal / not zero */

loc_00127E54: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    goto loc_00127E78;

loc_00127E5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127E6D; /* jne: not equal / not zero */

loc_00127E63: ;
    ecx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    goto loc_00127E78;

loc_00127E6D: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00127E89; /* jle: less or equal (signed <=) */

loc_00127E6F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 5);

loc_00127E73: ;
    edx = MEM32(esi);
    PUSH32(esp, 8);
    PUSH32(esp, edx);

loc_00127E78: ;
    ecx = 0x3888C0;
    PUSH32(esp, 0x00127E82u); RECOMP_ABI_CALL(0x00079180u, sub_00079180); /* call 0x00079180 */

loc_00127E82: ;
    ecx = eax;
    PUSH32(esp, 0x00127E89u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_00127E89: ;
    eax = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x31A144)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00127EA4: ;
    ecx = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x31A144)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esi + 0x1C) = ecx;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00127ED9; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127ECC: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127EDE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127ED9: ;
    MEMF(esi + 8) = xmm1.f[0]; /* movss */

loc_00127EDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00127F20
 * Original: 0x00127F20 - 0x001280AA (394 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127F20(void)
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

loc_00127F20: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, esi);
    esi = MEM32(0x51D65C);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001280A6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127F38: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2FF020); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001280A6; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127F58: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001280A6; /* jle: less or equal (signed <=) */

loc_00127F64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127FC6; /* jne: not equal / not zero */

loc_00127F69: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x376558); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00127F8D; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127F80: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127F92; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127F8D: ;
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */

loc_00127F92: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00127FAA; /* je: equal / zero */

loc_00127FA0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00127FA7u); RECOMP_ABI_CALL(0x00083610u, sub_00083610); /* call 0x00083610 */

loc_00127FA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00127FAA: ;
    ecx = MEM32(esi + 0x35AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001280A6; /* je: equal / zero */

loc_00127FB8: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 2;
    g_seh_ebp = ebp; sub_0016AC30(); return; /* tail jmp 0x0016AC30 */

loc_00127FC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128010; /* jne: not equal / not zero */

loc_00127FCB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x37655C); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00127FEF; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00127FE2: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00127FF4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00127FEF: ;
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */

loc_00127FF4: ;
    ecx = MEM32(esi + 0x35AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001280A6; /* je: equal / zero */

loc_00128002: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 3;
    g_seh_ebp = ebp; sub_0016AC30(); return; /* tail jmp 0x0016AC30 */

loc_00128010: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128056; /* jne: not equal / not zero */

loc_00128015: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x376560); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00128039; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0012802C: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012803E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00128039: ;
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */

loc_0012803E: ;
    ecx = MEM32(esi + 0x35AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001280A6; /* je: equal / zero */

loc_00128048: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 4;
    g_seh_ebp = ebp; sub_0016AC30(); return; /* tail jmp 0x0016AC30 */

loc_00128056: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x376564); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x376560); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 8); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_00128089; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0012807C: ;
    xmm1 = XMM_SCALAR(MEMF(0x3011DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0012808E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00128089: ;
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */

loc_0012808E: ;
    ecx = MEM32(esi + 0x35AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001280A6; /* je: equal / zero */

loc_00128098: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 5;
    g_seh_ebp = ebp; sub_0016AC30(); return; /* tail jmp 0x0016AC30 */

loc_001280A6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
