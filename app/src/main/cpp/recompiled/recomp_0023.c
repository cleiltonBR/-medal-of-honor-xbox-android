/**
 * Medal of Honor European Assault - Recompiled code chunk 23
 * Functions: 250 (0x000B96D0 - 0x000C1EB0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000B96D0
 * Original: 0x000B96D0 - 0x000B972E (94 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B96D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B96D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B96DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B96DCu); } /* indirect call */
    }

loc_000B96DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B96F2; /* je: equal / zero */

loc_000B96E5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B96EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B96E7u); } /* indirect call */
    }

loc_000B96EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B96F0u); RECOMP_ABI_CALL(0x000B8900u, sub_000B8900); /* call 0x000B8900 */

loc_000B96F0: ;
    goto loc_000B9708;

loc_000B96F2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000B96F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B96F4u); } /* indirect call */
    }

loc_000B96F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9729; /* je: equal / zero */

loc_000B96FB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B9702u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B96FFu); } /* indirect call */
    }

loc_000B9702: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9708u); RECOMP_ABI_CALL(0x000B0CB0u, sub_000B0CB0); /* call 0x000B0CB0 */

loc_000B9708: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9724; /* je: equal / zero */

loc_000B9711: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9724; /* je: equal / zero */

loc_000B9719: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B9721u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000B9721: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B9724: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B9729: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9730
 * Original: 0x000B9730 - 0x000B9731 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9730(void)
{

loc_000B9730: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9740
 * Original: 0x000B9740 - 0x000B974A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9740: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9746u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000B9746: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9750
 * Original: 0x000B9750 - 0x000B975A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9750: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9756u); RECOMP_ABI_CALL(0x00194DF0u, sub_00194DF0); /* call 0x00194DF0 */

loc_000B9756: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B9760
 * Original: 0x000B9760 - 0x000B9792 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9760: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x311120);
    ecx = esp + 8;
    MEM32(esi) = 0x3110F8;
    PUSH32(esp, 0x000B9778u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000B9778: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B977Fu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000B977F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B97A0
 * Original: 0x000B97A0 - 0x000B97E7 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B97A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B97A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x3110F8;
    if (CMP_EQ(_fa, _fb)) goto loc_000B97DF; /* je: equal / zero */

loc_000B97B0: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000B97CF; /* je: equal / zero */

loc_000B97BA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B97C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B97BEu); } /* indirect call */
    }

loc_000B97C0: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x2FF0D4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B97CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B97D5u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000B97D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_000B97DF: ;
    MEM32(esi) = 0x2FF0D4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B97F0
 * Original: 0x000B97F0 - 0x000BAB20 (4912 bytes, 1761 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B97F0(void)
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

loc_000B97F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0xC);
    edx = MEM32(ebx + 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x184);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B9812u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000B9812: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82E4948) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82E4948 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA18A; /* jg: greater (signed >) */

loc_000B981D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA167; /* je: equal / zero */

loc_000B9823: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC5906CE7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC5906CE7u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9D20; /* jg: greater (signed >) */

loc_000B982E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9CDD; /* je: equal / zero */

loc_000B9834: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93A08BC6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x93A08BC6u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9ABC; /* jg: greater (signed >) */

loc_000B983F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9A88; /* je: equal / zero */

loc_000B9845: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AB41544u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8AB41544u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B997A; /* jg: greater (signed >) */

loc_000B9850: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B994D; /* je: equal / zero */

loc_000B9856: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82CB0FACu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x82CB0FACu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B98D3; /* jg: greater (signed >) */

loc_000B985D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B98B0; /* je: equal / zero */

loc_000B985F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x806CB369u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x806CB369u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9892; /* je: equal / zero */

loc_000B9866: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81728B86u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x81728B86u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9871: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B987Au); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B987A: ;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x000B9885u); RECOMP_ABI_CALL(0x001939C0u, sub_001939C0); /* call 0x001939C0 */

loc_000B9885: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9892: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B989Bu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B989B: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B98A6u); RECOMP_ABI_CALL(0x000B2E00u, sub_000B2E00); /* call 0x000B2E00 */

loc_000B98A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B98B0: ;
    ebx = MEM32(esi + 0x60);
    ebp = MEM32(esi + 0x5C);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B98BFu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B98BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000B98C9u); RECOMP_ABI_CALL(0x000B2900u, sub_000B2900); /* call 0x000B2900 */

loc_000B98C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B98D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x872A89DAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x872A89DAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9911; /* je: equal / zero */

loc_000B98DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89419FC1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x89419FC1u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B98E5: ;
    eax = MEM32(esi + 0x94);
    ecx = MEM32(esi + 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B98FCu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B98FC: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9907u); RECOMP_ABI_CALL(0x000B29F0u, sub_000B29F0); /* call 0x000B29F0 */

loc_000B9907: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9911: ;
    edx = MEM32(esi + 0xB4);
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000B992Eu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B992E: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B9943u); RECOMP_ABI_CALL(0x000B2AC0u, sub_000B2AC0); /* call 0x000B2AC0 */

loc_000B9943: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B994D: ;
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000B9960u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9960: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B9970u); RECOMP_ABI_CALL(0x000B2CC0u, sub_000B2CC0); /* call 0x000B2CC0 */

loc_000B9970: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B997A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F7BF37Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F7BF37Cu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9A3D; /* jg: greater (signed >) */

loc_000B9985: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B99FE; /* je: equal / zero */

loc_000B9987: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C881333u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8C881333u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B99B7; /* je: equal / zero */

loc_000B998E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8EDB31BAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8EDB31BAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9999: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B99A2u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B99A2: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B99ADu); RECOMP_ABI_CALL(0x000B2D10u, sub_000B2D10); /* call 0x000B2D10 */

loc_000B99AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B99B7: ;
    edx = MEM32(esi + 0x13C);
    ecx = MEM32(esi + 0x134);
    eax = MEM32(esi + 0x138);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000B99DFu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B99DF: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B99F4u); RECOMP_ABI_CALL(0x000B20E0u, sub_000B20E0); /* call 0x000B20E0 */

loc_000B99F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B99FE: ;
    edx = MEM32(esi + 0x13C);
    eax = MEM32(esi + 0x140);
    ecx = MEM32(esi + 0x138);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000B9A28u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9A28: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9A33u); RECOMP_ABI_CALL(0x000B20E0u, sub_000B20E0); /* call 0x000B20E0 */

loc_000B9A33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9A3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D6943u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930D6943u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9A6D; /* je: equal / zero */

loc_000B9A44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93824A38u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x93824A38u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9A4F: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9A58u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9A58: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9A63u); RECOMP_ABI_CALL(0x000B2F50u, sub_000B2F50); /* call 0x000B2F50 */

loc_000B9A63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9A6D: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9A76u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B9A76: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B9A7Eu); RECOMP_ABI_CALL(0x000B1DF0u, sub_000B1DF0); /* call 0x000B1DF0 */

loc_000B9A7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9A88: ;
    eax = MEM32(esi + 0x160);
    edx = MEM32(esi + 0x158);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x000B9AA2u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9AA2: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B9AB2u); RECOMP_ABI_CALL(0x000B21B0u, sub_000B21B0); /* call 0x000B21B0 */

loc_000B9AB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9ABC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA553BFF7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA553BFF7u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9BDB; /* jg: greater (signed >) */

loc_000B9AC7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9BBD; /* je: equal / zero */

loc_000B9ACD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9BCA7BAEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9BCA7BAEu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9B72; /* jg: greater (signed >) */

loc_000B9AD8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9B46; /* je: equal / zero */

loc_000B9ADA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95A16DB5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x95A16DB5u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9B0A; /* je: equal / zero */

loc_000B9AE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97F3B184u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x97F3B184u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9AEC: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9AF5u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9AF5: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9B00u); RECOMP_ABI_CALL(0x000B1EF0u, sub_000B1EF0); /* call 0x000B1EF0 */

loc_000B9B00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9B0A: ;
    edx = MEM32(esi + 0xA8);
    eax = MEM32(esi + 0xA4);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000B9B27u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9B27: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B9B3Cu); RECOMP_ABI_CALL(0x000B2B20u, sub_000B2B20); /* call 0x000B2B20 */

loc_000B9B3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9B46: ;
    eax = MEM32(esi + 0x88);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9B5Du); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9B5D: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9B68u); RECOMP_ABI_CALL(0x000B2A50u, sub_000B2A50); /* call 0x000B2A50 */

loc_000B9B68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9B72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9BD0BE71u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9BD0BE71u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9BA7; /* je: equal / zero */

loc_000B9B79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F7C1FC8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9F7C1FC8u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9B84: ;
    eax = MEM32(esi + 0x64);
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9B95u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B9B95: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B9B9Du); RECOMP_ABI_CALL(0x000B2900u, sub_000B2900); /* call 0x000B2900 */

loc_000B9B9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9BA7: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9BB0u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B9BB0: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9BBD: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9BC6u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9BC6: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9BD1u); RECOMP_ABI_CALL(0x000B2260u, sub_000B2260); /* call 0x000B2260 */

loc_000B9BD1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9BDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xADCCE5FBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xADCCE5FBu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9C7D; /* jg: greater (signed >) */

loc_000B9BE6: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9C51; /* je: equal / zero */

loc_000B9BE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA917C65Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA917C65Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9C36; /* je: equal / zero */

loc_000B9BEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAA2FAED4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAA2FAED4u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9BFA: ;
    edx = MEM32(esi + 0x14C);
    eax = MEM32(esi + 0x150);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000B9C17u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9C17: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B9C2Cu); RECOMP_ABI_CALL(0x000B2280u, sub_000B2280); /* call 0x000B2280 */

loc_000B9C2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9C36: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9C3Fu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B9C3F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B9C47u); RECOMP_ABI_CALL(0x000B1F90u, sub_000B1F90); /* call 0x000B1F90 */

loc_000B9C47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9C51: ;
    eax = MEM32(esi + 0x16C);
    ecx = MEM32(esi + 0x168);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9C68u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9C68: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9C73u); RECOMP_ABI_CALL(0x000B21E0u, sub_000B21E0); /* call 0x000B21E0 */

loc_000B9C73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9C7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBDED10EAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBDED10EAu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9CBF; /* je: equal / zero */

loc_000B9C84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC3B360D0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC3B360D0u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9C8F: ;
    edx = MEM32(esi + 0x120);
    eax = MEM32(esi + 0x11C);
    ecx = MEM32(esi + 0x118);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9CADu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B9CAD: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B9CB5u); RECOMP_ABI_CALL(0x000B1FC0u, sub_000B1FC0); /* call 0x000B1FC0 */

loc_000B9CB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9CBF: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9CC8u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9CC8: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9CD3u); RECOMP_ABI_CALL(0x000B2E40u, sub_000B2E40); /* call 0x000B2E40 */

loc_000B9CD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9CDD: ;
    edx = MEM32(esi + 0x11C);
    eax = MEM32(esi + 0x118);
    ebx = MEM32(esi + 0x114);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000B9D00u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9D00: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000B9D16u); RECOMP_ABI_CALL(0x000B1FC0u, sub_000B1FC0); /* call 0x000B1FC0 */

loc_000B9D16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9D20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9915EB8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9915EB8u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9F6A; /* jg: greater (signed >) */

loc_000B9D2B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9F54; /* je: equal / zero */

loc_000B9D31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDACBD56Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDACBD56Du (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9E7F; /* jg: greater (signed >) */

loc_000B9D3C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E4B; /* je: equal / zero */

loc_000B9D42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD65B9428u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD65B9428u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9DDD; /* jg: greater (signed >) */

loc_000B9D4D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9D9A; /* je: equal / zero */

loc_000B9D4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCBD97238u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCBD97238u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9D7C; /* je: equal / zero */

loc_000B9D56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD0803664u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD0803664u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9D61: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9D6Au); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B9D6A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B9D72u); RECOMP_ABI_CALL(0x000B1D60u, sub_000B1D60); /* call 0x000B1D60 */

loc_000B9D72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9D7C: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9D85u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9D85: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9D90u); RECOMP_ABI_CALL(0x000B2D40u, sub_000B2D40); /* call 0x000B2D40 */

loc_000B9D90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9D9A: ;
    ecx = MEM32(esi + 0x124);
    edx = MEM32(esi + 0x130);
    eax = MEM32(esi + 0x128);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000B9DBEu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9DBE: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B9DD3u); RECOMP_ABI_CALL(0x000B2040u, sub_000B2040); /* call 0x000B2040 */

loc_000B9DD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9DDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD83B003Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD83B003Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9E0F; /* je: equal / zero */

loc_000B9DE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDA4B9471u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDA4B9471u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9DEF: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9DF8u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B9DF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B9E05u); RECOMP_ABI_CALL(0x000B1F80u, sub_000B1F80); /* call 0x000B1F80 */

loc_000B9E05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9E0F: ;
    ecx = MEM32(esi + 0x98);
    eax = MEM32(esi + 0x9C);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000B9E2Cu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9E2C: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B9E41u); RECOMP_ABI_CALL(0x000B1E90u, sub_000B1E90); /* call 0x000B1E90 */

loc_000B9E41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9E4B: ;
    ecx = MEM32(esi + 0x164);
    edx = MEM32(esi + 0x16C);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9E65u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9E65: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B9E75u); RECOMP_ABI_CALL(0x000B21E0u, sub_000B21E0); /* call 0x000B21E0 */

loc_000B9E75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9E7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE4A7BB50u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE4A7BB50u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B9F04; /* jg: greater (signed >) */

loc_000B9E86: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9ED8; /* je: equal / zero */

loc_000B9E88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDBA768BCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDBA768BCu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9EB8; /* je: equal / zero */

loc_000B9E8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDEE8DA06u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDEE8DA06u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9E9A: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9EA3u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9EA3: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9EAEu); RECOMP_ABI_CALL(0x000B2180u, sub_000B2180); /* call 0x000B2180 */

loc_000B9EAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9EB8: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9EC1u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B9EC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B9ECEu); RECOMP_ABI_CALL(0x000B1DC0u, sub_000B1DC0); /* call 0x000B1DC0 */

loc_000B9ECE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9ED8: ;
    edx = MEM32(esi + 0x160);
    eax = MEM32(esi + 0x15C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9EEFu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9EEF: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9EFAu); RECOMP_ABI_CALL(0x000B21B0u, sub_000B21B0); /* call 0x000B21B0 */

loc_000B9EFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9F04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE5F27AF5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE5F27AF5u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9F34; /* je: equal / zero */

loc_000B9F0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE81AD63Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE81AD63Cu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9F16: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9F1Fu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9F1F: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9F2Au); RECOMP_ABI_CALL(0x000B1E70u, sub_000B1E70); /* call 0x000B1E70 */

loc_000B9F2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9F34: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9F3Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B9F3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B9F4Au); RECOMP_ABI_CALL(0x000B2230u, sub_000B2230); /* call 0x000B2230 */

loc_000B9F4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9F54: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9F5Du); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000B9F5D: ;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9F6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF2A1FB23u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF2A1FB23u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA0A9; /* jg: greater (signed >) */

loc_000B9F75: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA086; /* je: equal / zero */

loc_000B9F7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xECCD4B38u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xECCD4B38u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA01F; /* jg: greater (signed >) */

loc_000B9F86: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B9FEB; /* je: equal / zero */

loc_000B9F88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEB145173u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEB145173u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9FCD; /* je: equal / zero */

loc_000B9F8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEC5767E1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEC5767E1u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000B9F9A: ;
    edx = MEM32(esi + 0x130);
    eax = MEM32(esi + 0x12C);
    ecx = MEM32(esi + 0x128);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9FB8u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9FB8: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9FC3u); RECOMP_ABI_CALL(0x000B2040u, sub_000B2040); /* call 0x000B2040 */

loc_000B9FC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9FCD: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000B9FD6u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000B9FD6: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B9FE1u); RECOMP_ABI_CALL(0x000B1F60u, sub_000B1F60); /* call 0x000B1F60 */

loc_000B9FE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000B9FEB: ;
    eax = MEM32(esi + 0x88);
    edx = MEM32(esi + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x000BA005u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA005: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BA015u); RECOMP_ABI_CALL(0x000B2A50u, sub_000B2A50); /* call 0x000B2A50 */

loc_000BA015: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA01F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED5A95DFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xED5A95DFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA04C; /* je: equal / zero */

loc_000BA026: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF21AECCCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF21AECCCu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA031: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA03Au); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA03A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA042u); RECOMP_ABI_CALL(0x000B21A0u, sub_000B21A0); /* call 0x000B21A0 */

loc_000BA042: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA04C: ;
    edx = MEM32(esi + 0x154);
    eax = MEM32(esi + 0x150);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000BA06Cu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA06C: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BA07Cu); RECOMP_ABI_CALL(0x000B2280u, sub_000B2280); /* call 0x000B2280 */

loc_000BA07C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA086: ;
    eax = MEM32(esi + 0x64);
    ebx = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA096u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA096: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000BA09Fu); RECOMP_ABI_CALL(0x000B2900u, sub_000B2900); /* call 0x000B2900 */

loc_000BA09F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA0A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x206F9EF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x206F9EF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA13C; /* jg: greater (signed >) */

loc_000BA0B4: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA121; /* je: equal / zero */

loc_000BA0B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF9871A82u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF9871A82u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA0FC; /* je: equal / zero */

loc_000BA0BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE46AF57u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE46AF57u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA0C8: ;
    ecx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x8C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000BA0E2u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA0E2: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BA0F2u); RECOMP_ABI_CALL(0x000B29F0u, sub_000B29F0); /* call 0x000B29F0 */

loc_000BA0F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA0FC: ;
    eax = MEM32(esi + 0xCC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA10Cu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA10C: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA117u); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_000BA117: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA121: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA12Au); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA12A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA132u); RECOMP_ABI_CALL(0x000B1DD0u, sub_000B1DD0); /* call 0x000B1DD0 */

loc_000BA132: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA13C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64220D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64220D2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA147: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA150u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA150: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BA15Du); RECOMP_ABI_CALL(0x000B2250u, sub_000B2250); /* call 0x000B2250 */

loc_000BA15D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA167: ;
    eax = MEM32(esi + 0x34);
    ebx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA177u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA177: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000BA180u); RECOMP_ABI_CALL(0x000B1D80u, sub_000B1D80); /* call 0x000B1D80 */

loc_000BA180: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA18A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DE6E895) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3DE6E895 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA61E; /* jg: greater (signed >) */

loc_000BA195: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA5FB; /* je: equal / zero */

loc_000BA19B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2952E938) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2952E938 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA3D4; /* jg: greater (signed >) */

loc_000BA1A6: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BAB16; /* je: equal / zero */

loc_000BA1AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E23D860) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E23D860 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA306; /* jg: greater (signed >) */

loc_000BA1B7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA2D2; /* je: equal / zero */

loc_000BA1BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB229E26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB229E26 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA271; /* jg: greater (signed >) */

loc_000BA1C8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA236; /* je: equal / zero */

loc_000BA1CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA915437) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA915437 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA218; /* je: equal / zero */

loc_000BA1D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAA9DA7C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAA9DA7C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA1DC: ;
    edx = MEM32(esi + 0x15C);
    eax = MEM32(esi + 0x158);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000BA1F9u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA1F9: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BA20Eu); RECOMP_ABI_CALL(0x000B21B0u, sub_000B21B0); /* call 0x000B21B0 */

loc_000BA20E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA218: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA221u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA221: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA22Cu); RECOMP_ABI_CALL(0x000B2DB0u, sub_000B2DB0); /* call 0x000B2DB0 */

loc_000BA22C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA236: ;
    ecx = MEM32(esi + 0x130);
    edx = MEM32(esi + 0x12C);
    eax = MEM32(esi + 0x124);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000BA257u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA257: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA267u); RECOMP_ABI_CALL(0x000B2040u, sub_000B2040); /* call 0x000B2040 */

loc_000BA267: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA271: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCA83C0F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCA83C0F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA29E; /* je: equal / zero */

loc_000BA278: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16349023) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16349023 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA283: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA28Cu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA28C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA294u); RECOMP_ABI_CALL(0x000B2F00u, sub_000B2F00); /* call 0x000B2F00 */

loc_000BA294: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA29E: ;
    ecx = MEM32(esi + 0xA4);
    edx = MEM32(esi + 0xAC);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA2B8u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA2B8: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA2C8u); RECOMP_ABI_CALL(0x000B2B20u, sub_000B2B20); /* call 0x000B2B20 */

loc_000BA2C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA2D2: ;
    ecx = MEM32(esi + 0xB0);
    edx = MEM32(esi + 0xB8);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA2ECu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA2EC: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA2FCu); RECOMP_ABI_CALL(0x000B2AC0u, sub_000B2AC0); /* call 0x000B2AC0 */

loc_000BA2FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA306: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x284E283F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x284E283F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA37F; /* jg: greater (signed >) */

loc_000BA30D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA361; /* je: equal / zero */

loc_000BA30F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FE7B563) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FE7B563 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA33C; /* je: equal / zero */

loc_000BA316: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24842ADA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24842ADA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA321: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA32Au); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA32A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA332u); RECOMP_ABI_CALL(0x000B1D00u, sub_000B1D00); /* call 0x000B1D00 */

loc_000BA332: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA33C: ;
    ecx = MEM32(esi + 0xC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA34Cu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA34C: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA357u); RECOMP_ABI_CALL(0x000B2CC0u, sub_000B2CC0); /* call 0x000B2CC0 */

loc_000BA357: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA361: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA36Au); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA36A: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA375u); RECOMP_ABI_CALL(0x000B1F40u, sub_000B1F40); /* call 0x000B1F40 */

loc_000BA375: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA37F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x286FD1BA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x286FD1BA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA3B9; /* je: equal / zero */

loc_000BA386: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28B49F50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28B49F50 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA391: ;
    edx = MEM32(esi + 0x78);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x000BA3A4u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA3A4: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA3AFu); RECOMP_ABI_CALL(0x000B1E10u, sub_000B1E10); /* call 0x000B1E10 */

loc_000BA3AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA3B9: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA3C2u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA3C2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA3CAu); RECOMP_ABI_CALL(0x000B22C0u, sub_000B22C0); /* call 0x000B22C0 */

loc_000BA3CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA3D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3344C3E6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3344C3E6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA528; /* jg: greater (signed >) */

loc_000BA3DF: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA4F0; /* je: equal / zero */

loc_000BA3E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E027C74) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E027C74 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA478; /* jg: greater (signed >) */

loc_000BA3F0: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA45A; /* je: equal / zero */

loc_000BA3F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A0936E3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2A0936E3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA437; /* je: equal / zero */

loc_000BA3F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B9E0DCB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B9E0DCB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA404: ;
    ecx = MEM32(esi + 0x120);
    edx = MEM32(esi + 0x11C);
    ebx = MEM32(esi + 0x114);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA421u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA421: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000BA42Du); RECOMP_ABI_CALL(0x000B1FC0u, sub_000B1FC0); /* call 0x000B1FC0 */

loc_000BA42D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA437: ;
    ebx = MEM32(esi + 0x30);
    ebp = MEM32(esi + 0x2C);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA446u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA446: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000BA450u); RECOMP_ABI_CALL(0x000B1D80u, sub_000B1D80); /* call 0x000B1D80 */

loc_000BA450: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA45A: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA463u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA463: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA46Eu); RECOMP_ABI_CALL(0x000B1EC0u, sub_000B1EC0); /* call 0x000B1EC0 */

loc_000BA46E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA478: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE5782E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2EE5782E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA4D5; /* je: equal / zero */

loc_000BA47F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x312E6DEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x312E6DEF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA48A: ;
    ecx = MEM32(esi + 0x128);
    eax = MEM32(esi + 0x12C);
    edx = MEM32(esi + 0x124);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000BA4B1u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA4B1: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BA4CBu); RECOMP_ABI_CALL(0x000B2040u, sub_000B2040); /* call 0x000B2040 */

loc_000BA4CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA4D5: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA4DEu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA4DE: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA4E6u); RECOMP_ABI_CALL(0x000B2170u, sub_000B2170); /* call 0x000B2170 */

loc_000BA4E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA4F0: ;
    eax = MEM32(esi + 0x154);
    ecx = MEM32(esi + 0x14C);
    edx = eax;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA513u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA513: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA51Eu); RECOMP_ABI_CALL(0x000B2280u, sub_000B2280); /* call 0x000B2280 */

loc_000BA51E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA528: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x369C6B6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x369C6B6E (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA5A8; /* jg: greater (signed >) */

loc_000BA52F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA58A; /* je: equal / zero */

loc_000BA531: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35E54C50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x35E54C50 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA56F; /* je: equal / zero */

loc_000BA538: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36356113) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36356113 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA543: ;
    ecx = MEM32(esi + 0xA0);
    edx = MEM32(esi + 0x9C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA55Au); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA55A: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA565u); RECOMP_ABI_CALL(0x000B1E90u, sub_000B1E90); /* call 0x000B1E90 */

loc_000BA565: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA56F: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA578u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA578: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA580u); RECOMP_ABI_CALL(0x000B2EB0u, sub_000B2EB0); /* call 0x000B2EB0 */

loc_000BA580: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA58A: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA593u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA593: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA59Eu); RECOMP_ABI_CALL(0x000B2D70u, sub_000B2D70); /* call 0x000B2D70 */

loc_000BA59E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA5A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3978BACB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3978BACB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA5DD; /* je: equal / zero */

loc_000BA5AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39D1857F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x39D1857F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA5BA: ;
    eax = MEM32(esi + 0x40);
    ebx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA5CAu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA5CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000BA5D3u); RECOMP_ABI_CALL(0x000B2950u, sub_000B2950); /* call 0x000B2950 */

loc_000BA5D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA5DD: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA5E6u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA5E6: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA5F1u); RECOMP_ABI_CALL(0x000B22D0u, sub_000B22D0); /* call 0x000B22D0 */

loc_000BA5F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA5FB: ;
    eax = MEM32(esi + 0x58);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA60Bu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA60B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000BA614u); RECOMP_ABI_CALL(0x000B28B0u, sub_000B28B0); /* call 0x000B28B0 */

loc_000BA614: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA61E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D5FA705) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D5FA705 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA88B; /* jg: greater (signed >) */

loc_000BA629: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA85E; /* je: equal / zero */

loc_000BA62F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E50EA3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4E50EA3B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA76D; /* jg: greater (signed >) */

loc_000BA63A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA74A; /* je: equal / zero */

loc_000BA640: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43C284D7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43C284D7 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA6F2; /* jg: greater (signed >) */

loc_000BA64B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA6B6; /* je: equal / zero */

loc_000BA64D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E3A1EB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E3A1EB4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA693; /* je: equal / zero */

loc_000BA654: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41325185) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41325185 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA65F: ;
    ecx = MEM32(esi + 0xA0);
    eax = MEM32(esi + 0x98);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000BA679u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA679: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BA689u); RECOMP_ABI_CALL(0x000B1E90u, sub_000B1E90); /* call 0x000B1E90 */

loc_000BA689: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA693: ;
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA6A3u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA6A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000BA6ACu); RECOMP_ABI_CALL(0x000B29A0u, sub_000B29A0); /* call 0x000B29A0 */

loc_000BA6AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA6B6: ;
    ecx = MEM32(esi + 0x164);
    eax = MEM32(esi + 0x168);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000BA6D3u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA6D3: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA6E8u); RECOMP_ABI_CALL(0x000B21E0u, sub_000B21E0); /* call 0x000B21E0 */

loc_000BA6E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA6F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49BB71F0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49BB71F0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA727; /* je: equal / zero */

loc_000BA6F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D8C1C1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D8C1C1A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA704: ;
    ebx = MEM32(esi + 0x54);
    ebp = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA713u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA713: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000BA71Du); RECOMP_ABI_CALL(0x000B28B0u, sub_000B28B0); /* call 0x000B28B0 */

loc_000BA71D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA727: ;
    ebx = MEM32(esi + 0x3C);
    ebp = MEM32(esi + 0x38);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA736u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA736: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000BA740u); RECOMP_ABI_CALL(0x000B2950u, sub_000B2950); /* call 0x000B2950 */

loc_000BA740: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA74A: ;
    ebx = MEM32(esi + 0x48);
    ebp = MEM32(esi + 0x44);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA759u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA759: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000BA763u); RECOMP_ABI_CALL(0x000B29A0u, sub_000B29A0); /* call 0x000B29A0 */

loc_000BA763: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA76D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53E7FA5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x53E7FA5F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA7EE; /* jg: greater (signed >) */

loc_000BA774: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA7CB; /* je: equal / zero */

loc_000BA776: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x503B0C7E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x503B0C7E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA7A8; /* je: equal / zero */

loc_000BA77D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5081A8FE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5081A8FE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA788: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA791u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA791: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BA79Eu); RECOMP_ABI_CALL(0x000B2210u, sub_000B2210); /* call 0x000B2210 */

loc_000BA79E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA7A8: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA7B9u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA7B9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA7C1u); RECOMP_ABI_CALL(0x000B28B0u, sub_000B28B0); /* call 0x000B28B0 */

loc_000BA7C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA7CB: ;
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA7DCu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA7DC: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA7E4u); RECOMP_ABI_CALL(0x000B29A0u, sub_000B29A0); /* call 0x000B29A0 */

loc_000BA7E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA7EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x540C6194) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x540C6194 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA83B; /* je: equal / zero */

loc_000BA7F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C993D5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C993D5D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA800: ;
    eax = MEM32(esi + 0x120);
    edx = MEM32(esi + 0x118);
    ebx = MEM32(esi + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x000BA820u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA820: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000BA831u); RECOMP_ABI_CALL(0x000B1FC0u, sub_000B1FC0); /* call 0x000B1FC0 */

loc_000BA831: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA83B: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA84Cu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA84C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA854u); RECOMP_ABI_CALL(0x000B2950u, sub_000B2950); /* call 0x000B2950 */

loc_000BA854: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA85E: ;
    edx = MEM32(esi + 0xC8);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x000BA871u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA871: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA881u); RECOMP_ABI_CALL(0x000B2C70u, sub_000B2C70); /* call 0x000B2C70 */

loc_000BA881: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA88B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x680E0ABB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x680E0ABB (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA9E7; /* jg: greater (signed >) */

loc_000BA896: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA9A4; /* je: equal / zero */

loc_000BA89C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65EC8006) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65EC8006 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BA933; /* jg: greater (signed >) */

loc_000BA8A7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BA909; /* je: equal / zero */

loc_000BA8A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F4918A9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F4918A9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA8EB; /* je: equal / zero */

loc_000BA8B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x654F240D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x654F240D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA8BB: ;
    ecx = edi;
    PUSH32(esp, 0x000BA8C2u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_000BA8C2: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BA8CAu); RECOMP_ABI_CALL(0x00194DF0u, sub_00194DF0); /* call 0x00194DF0 */

loc_000BA8CA: ;
    PUSH32(esp, 0xA4EAAD95u);
    ebx = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BA8D8u); RECOMP_ABI_CALL(0x00154D20u, sub_00154D20); /* call 0x00154D20 */

loc_000BA8D8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x100) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA8EB: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA8F4u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA8F4: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA8FFu); RECOMP_ABI_CALL(0x000B1F20u, sub_000B1F20); /* call 0x000B1F20 */

loc_000BA8FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA909: ;
    ecx = MEM32(esi + 0x74);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA919u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA919: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BA929u); RECOMP_ABI_CALL(0x000B1E10u, sub_000B1E10); /* call 0x000B1E10 */

loc_000BA929: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA933: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x674FFEED) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x674FFEED (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BA968; /* je: equal / zero */

loc_000BA93A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x679EB423) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x679EB423 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BA945: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BA956u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BA956: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA95Eu); RECOMP_ABI_CALL(0x000B1D80u, sub_000B1D80); /* call 0x000B1D80 */

loc_000BA95E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA968: ;
    ecx = MEM32(esi + 0x8C);
    eax = MEM32(esi + 0x90);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000BA985u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA985: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA99Au); RECOMP_ABI_CALL(0x000B29F0u, sub_000B29F0); /* call 0x000B29F0 */

loc_000BA99A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA9A4: ;
    ecx = MEM32(esi + 0x13C);
    edx = MEM32(esi + 0x140);
    eax = MEM32(esi + 0x134);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000BA9CDu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BA9CD: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BA9DDu); RECOMP_ABI_CALL(0x000B20E0u, sub_000B20E0); /* call 0x000B20E0 */

loc_000BA9DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BA9E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x75C41A82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x75C41A82 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BAABD; /* jg: greater (signed >) */

loc_000BA9F2: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BAA81; /* je: equal / zero */

loc_000BA9F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6924E8F6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6924E8F6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAA55; /* je: equal / zero */

loc_000BA9FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6BFDEAF4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6BFDEAF4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAAC4; /* jne: not equal / not zero */

loc_000BAA0A: ;
    ecx = MEM32(esi + 0x140);
    edx = MEM32(esi + 0x138);
    eax = MEM32(esi + 0x134);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000BAA31u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAA31: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BAA4Bu); RECOMP_ABI_CALL(0x000B20E0u, sub_000B20E0); /* call 0x000B20E0 */

loc_000BAA4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAA55: ;
    ecx = MEM32(esi + 0xB8);
    edx = MEM32(esi + 0xB4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BAA6Cu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAA6C: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BAA77u); RECOMP_ABI_CALL(0x000B2AC0u, sub_000B2AC0); /* call 0x000B2AC0 */

loc_000BAA77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAA81: ;
    ecx = MEM32(esi + 0x80);
    eax = MEM32(esi + 0x84);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000BAA9Eu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAA9E: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BAAB3u); RECOMP_ABI_CALL(0x000B2A50u, sub_000B2A50); /* call 0x000B2A50 */

loc_000BAAB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAABD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7BAF0C99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7BAF0C99 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAAF4; /* je: equal / zero */

loc_000BAAC4: ;
    ecx = edi;
    PUSH32(esp, 0x000BAACBu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000BAACB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAAD1u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000BAAD1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BAADCu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000BAADC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30FEA8);
    PUSH32(esp, 0x000BAAE7u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000BAAE7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAAF4: ;
    ecx = MEM32(esi + 0xAC);
    edx = MEM32(esi + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BAB0Bu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAB0B: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BAB16u); RECOMP_ABI_CALL(0x000B2B20u, sub_000B2B20); /* call 0x000B2B20 */

loc_000BAB16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_000BAB20
 * Original: 0x000BAB20 - 0x000BAB80 (96 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAB20: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 0xC) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000BAB74; /* jle: less or equal (signed <=) */

loc_000BAB39: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x184);
    PUSH32(esp, 0x400);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x311134);
    PUSH32(esp, 0x000BAB54u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000BAB54: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAB71; /* je: equal / zero */

loc_000BAB5B: ;
    PUSH32(esp, 0xB2FA0);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0x184);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x000BAB71u); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_000BAB71: ;
    MEM32(ebx + 4) = edi;

loc_000BAB74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BAB80
 * Original: 0x000BAB80 - 0x000BABA0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAB80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BAB96; /* jge: greater or equal (signed >=) */

loc_000BAB92: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000BAB96: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000BABC0
 * Original: 0x000BABC0 - 0x000BABE7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BABC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BABC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x311190);
    ecx = esp + 8;
    MEM32(esi) = 0x311168;
    PUSH32(esp, 0x000BABD8u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000BABD8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BABDFu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000BABDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BABF0
 * Original: 0x000BABF0 - 0x000BAC37 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BABF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BABF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x311168;
    if (CMP_EQ(_fa, _fb)) goto loc_000BAC2F; /* je: equal / zero */

loc_000BAC00: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000BAC1F; /* je: equal / zero */

loc_000BAC0A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BAC10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BAC0Eu); } /* indirect call */
    }

loc_000BAC10: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x2FF0D4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BAC1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAC25u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000BAC25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;

loc_000BAC2F: ;
    MEM32(esi) = 0x2FF0D4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BAC40
 * Original: 0x000BAC40 - 0x000BAC90 (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BAC40: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 0xC) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_000BAC8A; /* jle: less or equal (signed <=) */

loc_000BAC59: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xDC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BAC6Au); RECOMP_ABI_CALL(0x001552A0u, sub_001552A0); /* call 0x001552A0 */

loc_000BAC6A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAC87; /* je: equal / zero */

loc_000BAC71: ;
    PUSH32(esp, 0xB2300);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0xDC);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    PUSH32(esp, 0x000BAC87u); RECOMP_ABI_CALL(0x00012790u, sub_00012790); /* call 0x00012790 */

loc_000BAC87: ;
    MEM32(ebx + 4) = edi;

loc_000BAC8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BAC90
 * Original: 0x000BAC90 - 0x000BB926 (3222 bytes, 1103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BAC90(void)
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

loc_000BAC90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0xC);
    edx = MEM32(ebx + 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xDC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000BACB1u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000BACB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13BC0801) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13BC0801 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB2CE; /* jg: greater (signed >) */

loc_000BACBC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB284; /* je: equal / zero */

loc_000BACC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE890049u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCE890049u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BAFEB; /* jg: greater (signed >) */

loc_000BACCD: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BAFA9; /* je: equal / zero */

loc_000BACD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB56E7A2Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB56E7A2Eu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BAE72; /* jg: greater (signed >) */

loc_000BACDE: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BAE49; /* je: equal / zero */

loc_000BACE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D6CBC2Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9D6CBC2Au (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BADAE; /* jg: greater (signed >) */

loc_000BACEF: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BAD85; /* je: equal / zero */

loc_000BACF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E2DB890u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8E2DB890u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAD4C; /* je: equal / zero */

loc_000BACFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D6943u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930D6943u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAD23; /* je: equal / zero */

loc_000BAD03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9BD0BE71u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9BD0BE71u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BAD0E: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BAD17u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BAD17: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAD23: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000BAD33u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAD33: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BAD43u); RECOMP_ABI_CALL(0x000B23E0u, sub_000B23E0); /* call 0x000B23E0 */

loc_000BAD43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAD4C: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(esi + 0x68);
    eax = MEM32(esi + 0x6C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000BAD67u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAD67: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BAD7Cu); RECOMP_ABI_CALL(0x000B24E0u, sub_000B24E0); /* call 0x000B24E0 */

loc_000BAD7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAD85: ;
    ecx = MEM32(esi + 0x5C);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BAD95u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAD95: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BADA5u); RECOMP_ABI_CALL(0x000B24C0u, sub_000B24C0); /* call 0x000B24C0 */

loc_000BADA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BADAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA39E5F39u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA39E5F39u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAE02; /* je: equal / zero */

loc_000BADB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA7169489u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA7169489u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BADC0: ;
    ecx = MEM32(esi + 0xA4);
    edx = MEM32(esi + 0xB0);
    eax = MEM32(esi + 0xA8);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000BADE4u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BADE4: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BADF9u); RECOMP_ABI_CALL(0x000B25F0u, sub_000B25F0); /* call 0x000B25F0 */

loc_000BADF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAE02: ;
    ecx = MEM32(esi + 0x7C);
    edx = MEM32(esi + 0x94);
    eax = MEM32(esi + 0x80);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000BAE26u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAE26: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BAE40u); RECOMP_ABI_CALL(0x000B2570u, sub_000B2570); /* call 0x000B2570 */

loc_000BAE40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAE49: ;
    edx = MEM32(esi + 0x24);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x000BAE59u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAE59: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BAE69u); RECOMP_ABI_CALL(0x000B23A0u, sub_000B23A0); /* call 0x000B23A0 */

loc_000BAE69: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAE72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC97CA694u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC97CA694u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BAF25; /* jg: greater (signed >) */

loc_000BAE7D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BAEFC; /* je: equal / zero */

loc_000BAE7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBD5DCF2Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBD5DCF2Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAEC2; /* je: equal / zero */

loc_000BAE86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBE7B9602u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBE7B9602u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BAE91: ;
    edx = MEM32(esi + 0x58);
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BAEA9u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAEA9: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BAEB9u); RECOMP_ABI_CALL(0x000B2490u, sub_000B2490); /* call 0x000B2490 */

loc_000BAEB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAEC2: ;
    eax = MEM32(esi + 0xB0);
    ecx = MEM32(esi + 0xAC);
    edx = MEM32(esi + 0xA4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x000BAEE3u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAEE3: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BAEF3u); RECOMP_ABI_CALL(0x000B25F0u, sub_000B25F0); /* call 0x000B25F0 */

loc_000BAEF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAEFC: ;
    eax = MEM32(esi + 0x58);
    ecx = MEM32(esi + 0x54);
    edx = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BAF11u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAF11: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BAF1Cu); RECOMP_ABI_CALL(0x000B2490u, sub_000B2490); /* call 0x000B2490 */

loc_000BAF1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAF25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCB9F8FD4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCB9F8FD4u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BAF77; /* je: equal / zero */

loc_000BAF2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCD770255u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCD770255u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BAF37: ;
    eax = MEM32(esi + 0x6C);
    ecx = MEM32(esi + 0x68);
    MEM32(esp + 0x10) = ecx;
    edx = eax;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000BAF54u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAF54: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BAF6Eu); RECOMP_ABI_CALL(0x000B24E0u, sub_000B24E0); /* call 0x000B24E0 */

loc_000BAF6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAF77: ;
    eax = MEM32(esi + 0x98);
    ecx = MEM32(esi + 0x94);
    edx = MEM32(esi + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BAF95u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAF95: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BAFA0u); RECOMP_ABI_CALL(0x000B2570u, sub_000B2570); /* call 0x000B2570 */

loc_000BAFA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAFA9: ;
    ecx = MEM32(esi + 0xC4);
    edx = MEM32(esi + 0xD0);
    eax = MEM32(esi + 0xC8);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000BAFCDu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BAFCD: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BAFE2u); RECOMP_ABI_CALL(0x000B2700u, sub_000B2700); /* call 0x000B2700 */

loc_000BAFE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BAFEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC7B0C5Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFC7B0C5Cu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB198; /* jg: greater (signed >) */

loc_000BAFF6: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB163; /* je: equal / zero */

loc_000BAFFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9915EB8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9915EB8u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB0CD; /* jg: greater (signed >) */

loc_000BB007: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB0B8; /* je: equal / zero */

loc_000BB00D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD3A12CA9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD3A12CA9u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB089; /* je: equal / zero */

loc_000BB014: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDB570D6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDDB570D6u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB047; /* je: equal / zero */

loc_000BB01B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE326CFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE326CFFBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB026: ;
    edx = MEM32(esi + 0x60);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB033u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB033: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB03Eu); RECOMP_ABI_CALL(0x000B24C0u, sub_000B24C0); /* call 0x000B24C0 */

loc_000BB03E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB047: ;
    ecx = MEM32(esi + 0xB4);
    edx = MEM32(esi + 0xC0);
    eax = MEM32(esi + 0xB8);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000BB06Bu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB06B: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BB080u); RECOMP_ABI_CALL(0x000B2670u, sub_000B2670); /* call 0x000B2670 */

loc_000BB080: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB089: ;
    edx = MEM32(esi + 0x90);
    eax = MEM32(esi + 0x8C);
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB0A4u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB0A4: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB0AFu); RECOMP_ABI_CALL(0x000B2530u, sub_000B2530); /* call 0x000B2530 */

loc_000BB0AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB0B8: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB0C1u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BB0C1: ;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB0CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xEDC7B9E5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xEDC7B9E5u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB129; /* je: equal / zero */

loc_000BB0D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFBC26EAEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFBC26EAEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB0DF: ;
    ecx = MEM32(esi + 0xA4);
    edx = MEM32(esi + 0xAC);
    eax = MEM32(esi + 0xA8);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000BB106u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB106: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BB120u); RECOMP_ABI_CALL(0x000B25F0u, sub_000B25F0); /* call 0x000B25F0 */

loc_000BB120: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB129: ;
    eax = MEM32(esi + 0xA0);
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(esi + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x000BB14Au); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB14A: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BB15Au); RECOMP_ABI_CALL(0x000B25B0u, sub_000B25B0); /* call 0x000B25B0 */

loc_000BB15A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB163: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esi + 0x38);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000BB17Au); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB17A: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BB18Fu); RECOMP_ABI_CALL(0x000B2420u, sub_000B2420); /* call 0x000B2420 */

loc_000BB18F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB198: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9705392) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9705392 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB21B; /* jg: greater (signed >) */

loc_000BB19F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB206; /* je: equal / zero */

loc_000BB1A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x461489) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x461489 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB1D4; /* je: equal / zero */

loc_000BB1A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x206F9EF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x206F9EF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB1B3: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB1C0u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB1C0: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB1CBu); RECOMP_ABI_CALL(0x000B23E0u, sub_000B23E0); /* call 0x000B23E0 */

loc_000BB1CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB1D4: ;
    edx = MEM32(esi + 0xB0);
    eax = MEM32(esi + 0xAC);
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB1F2u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB1F2: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB1FDu); RECOMP_ABI_CALL(0x000B25F0u, sub_000B25F0); /* call 0x000B25F0 */

loc_000BB1FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB206: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB20Fu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BB20F: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB21B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103257E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103257E7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB252; /* je: equal / zero */

loc_000BB222: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12756D70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12756D70 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB22D: ;
    edx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB23Eu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB23E: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB249u); RECOMP_ABI_CALL(0x000B2420u, sub_000B2420); /* call 0x000B2420 */

loc_000BB249: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB252: ;
    ecx = MEM32(esi + 0xC0);
    edx = MEM32(esi + 0xBC);
    eax = MEM32(esi + 0xB8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB270u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB270: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB27Bu); RECOMP_ABI_CALL(0x000B2670u, sub_000B2670); /* call 0x000B2670 */

loc_000BB27B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB284: ;
    ecx = MEM32(esi + 0xCC);
    edx = MEM32(esi + 0xC8);
    eax = MEM32(esi + 0xC4);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000BB2ABu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB2AB: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BB2C5u); RECOMP_ABI_CALL(0x000B2700u, sub_000B2700); /* call 0x000B2700 */

loc_000BB2C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB2CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40DA9EFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40DA9EFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB636; /* jg: greater (signed >) */

loc_000BB2D9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB604; /* je: equal / zero */

loc_000BB2DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x281FC234) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x281FC234 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB4AB; /* jg: greater (signed >) */

loc_000BB2EA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB486; /* je: equal / zero */

loc_000BB2F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E98F0B4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E98F0B4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB3FA; /* jg: greater (signed >) */

loc_000BB2FB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB3BB; /* je: equal / zero */

loc_000BB301: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13C6DF4A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13C6DF4A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB381; /* je: equal / zero */

loc_000BB308: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1724E92A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1724E92A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB351; /* je: equal / zero */

loc_000BB30F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1AB368FD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1AB368FD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB31A: ;
    edx = MEM32(esi + 0x90);
    ecx = MEM32(esi + 0x74);
    eax = MEM32(esi + 0x8C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB338u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB338: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BB348u); RECOMP_ABI_CALL(0x000B2530u, sub_000B2530); /* call 0x000B2530 */

loc_000BB348: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB351: ;
    edx = MEM32(esi + 0x6C);
    eax = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x000BB368u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB368: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BB378u); RECOMP_ABI_CALL(0x000B24E0u, sub_000B24E0); /* call 0x000B24E0 */

loc_000BB378: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB381: ;
    ecx = MEM32(esi + 0xD0);
    edx = MEM32(esi + 0xCC);
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000BB3A2u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB3A2: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BB3B2u); RECOMP_ABI_CALL(0x000B2700u, sub_000B2700); /* call 0x000B2700 */

loc_000BB3B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB3BB: ;
    ecx = MEM32(esi + 0x80);
    eax = MEM32(esi + 0x98);
    edx = MEM32(esi + 0x7C);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x000BB3DCu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB3DC: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BB3F1u); RECOMP_ABI_CALL(0x000B2570u, sub_000B2570); /* call 0x000B2570 */

loc_000BB3F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB3FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2691E48A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2691E48A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB445; /* je: equal / zero */

loc_000BB401: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2772C7B8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2772C7B8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB40C: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(esi + 0x58);
    eax = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000BB427u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB427: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BB43Cu); RECOMP_ABI_CALL(0x000B2490u, sub_000B2490); /* call 0x000B2490 */

loc_000BB43C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB445: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x50);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000BB463u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB463: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BB47Du); RECOMP_ABI_CALL(0x000B2490u, sub_000B2490); /* call 0x000B2490 */

loc_000BB47D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB486: ;
    edx = MEM32(esi + 0x44);
    eax = MEM32(esi + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB497u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB497: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB4A2u); RECOMP_ABI_CALL(0x000B2450u, sub_000B2450); /* call 0x000B2450 */

loc_000BB4A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB4AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x306FC232) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x306FC232 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB571; /* jg: greater (signed >) */

loc_000BB4B6: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB535; /* je: equal / zero */

loc_000BB4B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A489D2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2A489D2D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB4F3; /* je: equal / zero */

loc_000BB4BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2DF8AAB0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2DF8AAB0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB4CA: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB4DAu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB4DA: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BB4EAu); RECOMP_ABI_CALL(0x000B2360u, sub_000B2360); /* call 0x000B2360 */

loc_000BB4EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB4F3: ;
    ecx = MEM32(esi + 0x84);
    edx = MEM32(esi + 0xA0);
    eax = MEM32(esi + 0x88);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000BB517u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB517: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BB52Cu); RECOMP_ABI_CALL(0x000B25B0u, sub_000B25B0); /* call 0x000B25B0 */

loc_000BB52C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB535: ;
    ecx = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x74);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000BB553u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB553: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BB568u); RECOMP_ABI_CALL(0x000B2530u, sub_000B2530); /* call 0x000B2530 */

loc_000BB568: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB571: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35459FD1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x35459FD1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB5CD; /* je: equal / zero */

loc_000BB578: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FAFDFAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FAFDFAF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB583: ;
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(esi + 0x88);
    eax = MEM32(esi + 0x84);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000BB5AAu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB5AA: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BB5C4u); RECOMP_ABI_CALL(0x000B25B0u, sub_000B25B0); /* call 0x000B25B0 */

loc_000BB5C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB5CD: ;
    edx = MEM32(esi + 0x98);
    ecx = MEM32(esi + 0x7C);
    eax = MEM32(esi + 0x94);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB5EBu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB5EB: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BB5FBu); RECOMP_ABI_CALL(0x000B2570u, sub_000B2570); /* call 0x000B2570 */

loc_000BB5FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB604: ;
    edx = MEM32(esi + 0xD0);
    eax = MEM32(esi + 0xCC);
    ecx = MEM32(esi + 0xC8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB622u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB622: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB62Du); RECOMP_ABI_CALL(0x000B2700u, sub_000B2700); /* call 0x000B2700 */

loc_000BB62D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB636: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65725DE6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65725DE6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB7B0; /* jg: greater (signed >) */

loc_000BB641: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB783; /* je: equal / zero */

loc_000BB647: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5EA69B72) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5EA69B72 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB719; /* jg: greater (signed >) */

loc_000BB652: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB6E4; /* je: equal / zero */

loc_000BB658: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x415D9568) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x415D9568 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB6C4; /* je: equal / zero */

loc_000BB65F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4AA286CF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4AA286CF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB6A3; /* je: equal / zero */

loc_000BB666: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D76190F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4D76190F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB671: ;
    edx = MEM32(esi + 0xA0);
    eax = MEM32(esi + 0x9C);
    ecx = MEM32(esi + 0x88);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB68Fu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB68F: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB69Au); RECOMP_ABI_CALL(0x000B25B0u, sub_000B25B0); /* call 0x000B25B0 */

loc_000BB69A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB6A3: ;
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB6B0u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB6B0: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB6BBu); RECOMP_ABI_CALL(0x000B23A0u, sub_000B23A0); /* call 0x000B23A0 */

loc_000BB6BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB6C4: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB6CDu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BB6CD: ;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x000BB6D8u); RECOMP_ABI_CALL(0x001939C0u, sub_001939C0); /* call 0x001939C0 */

loc_000BB6D8: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB6E4: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(esi + 0x48);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000BB6FBu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB6FB: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BB710u); RECOMP_ABI_CALL(0x000B2450u, sub_000B2450); /* call 0x000B2450 */

loc_000BB710: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB719: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6023D9BC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6023D9BC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB75A; /* je: equal / zero */

loc_000BB720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x654F240D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x654F240D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB72B: ;
    ecx = edi;
    PUSH32(esp, 0x000BB732u); RECOMP_ABI_CALL(0x00264430u, sub_00264430); /* call 0x00264430 */

loc_000BB732: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BB73Au); RECOMP_ABI_CALL(0x00194DF0u, sub_00194DF0); /* call 0x00194DF0 */

loc_000BB73A: ;
    PUSH32(esp, 0xA4EAAD95u);
    ebx = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BB748u); RECOMP_ABI_CALL(0x00154D20u, sub_00154D20); /* call 0x00154D20 */

loc_000BB748: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xD4) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB75A: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(esi + 0x6C);
    eax = MEM32(esi + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB76Fu); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB76F: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB77Au); RECOMP_ABI_CALL(0x000B24E0u, sub_000B24E0); /* call 0x000B24E0 */

loc_000BB77A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB783: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB797u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB797: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BB7A7u); RECOMP_ABI_CALL(0x000B2420u, sub_000B2420); /* call 0x000B2420 */

loc_000BB7A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB7B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x76712131) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x76712131 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000BB878; /* jg: greater (signed >) */

loc_000BB7BB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000BB857; /* je: equal / zero */

loc_000BB7C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x731FBAA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x731FBAA4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB80D; /* je: equal / zero */

loc_000BB7C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x73656DEF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x73656DEF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB886; /* jne: not equal / not zero */

loc_000BB7D3: ;
    edx = MEM32(esi + 0xC0);
    ecx = MEM32(esi + 0xB4);
    eax = MEM32(esi + 0xBC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB7F4u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB7F4: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BB804u); RECOMP_ABI_CALL(0x000B2670u, sub_000B2670); /* call 0x000B2670 */

loc_000BB804: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB80D: ;
    ecx = MEM32(esi + 0xB4);
    edx = MEM32(esi + 0xBC);
    eax = MEM32(esi + 0xB8);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000BB834u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB834: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BB84Eu); RECOMP_ABI_CALL(0x000B2670u, sub_000B2670); /* call 0x000B2670 */

loc_000BB84E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB857: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x000BB864u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB864: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BB86Fu); RECOMP_ABI_CALL(0x000B2360u, sub_000B2360); /* call 0x000B2360 */

loc_000BB86F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB878: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F50DFDB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F50DFDB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB8E2; /* je: equal / zero */

loc_000BB87F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F8C2964) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F8C2964 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB8B5; /* je: equal / zero */

loc_000BB886: ;
    ecx = edi;
    PUSH32(esp, 0x000BB88Du); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000BB88D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB893u); RECOMP_ABI_CALL(0x00154E00u, sub_00154E00); /* call 0x00154E00 */

loc_000BB893: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BB89Eu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000BB89E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3111A8);
    PUSH32(esp, 0x000BB8A9u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000BB8A9: ;
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

loc_000BB8B5: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000BB8C9u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB8C9: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BB8D9u); RECOMP_ABI_CALL(0x000B2450u, sub_000B2450); /* call 0x000B2450 */

loc_000BB8D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_000BB8E2: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x8C);
    edx = MEM32(esi + 0x74);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000BB903u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000BB903: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BB91Du); RECOMP_ABI_CALL(0x000B2530u, sub_000B2530); /* call 0x000B2530 */

loc_000BB91D: ;
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
 * sub_000BB930
 * Original: 0x000BB930 - 0x000BB950 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB930: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BB946; /* jge: greater or equal (signed >=) */

loc_000BB942: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000BB946: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000BB970
 * Original: 0x000BB970 - 0x000BBA32 (194 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB970: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB97Du); RECOMP_ABI_CALL(0x000B4D10u, sub_000B4D10); /* call 0x000B4D10 */

loc_000BB97D: ;
    eax = MEM32(0x3C6174);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB9DA; /* jne: not equal / not zero */

loc_000BB98B: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x311224);
    PUSH32(esp, 0x000BB99Cu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000BB99C: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB9D4; /* je: equal / zero */

loc_000BB9A5: ;
    PUSH32(esp, 0x311120);
    ecx = esp + 0xC;
    MEM32(esi) = 0x3110F8;
    PUSH32(esp, 0x000BB9B9u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000BB9B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB9C0u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000BB9C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(0x3C6174) = esi;
    goto loc_000BB9DA;

loc_000BB9D4: ;
    MEM32(0x3C6174) = edi;

loc_000BB9DA: ;
    _fa = (uint32_t)(MEM32(0x3C6178)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3C6178), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBA2C; /* jne: not equal / not zero */

loc_000BB9E2: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3111F0);
    PUSH32(esp, 0x000BB9F3u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000BB9F3: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBA26; /* je: equal / zero */

loc_000BB9FC: ;
    PUSH32(esp, 0x311190);
    ecx = esp + 0xC;
    MEM32(esi) = 0x311168;
    PUSH32(esp, 0x000BBA10u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000BBA10: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BBA17u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000BBA17: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x3C6178) = esi;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000BBA26: ;
    MEM32(0x3C6178) = edi;

loc_000BBA2C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBA40
 * Original: 0x000BBA40 - 0x000BBA7E (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBA40: ;
    PUSH32(esp, 0x000BBA45u); RECOMP_ABI_CALL(0x000B8820u, sub_000B8820); /* call 0x000B8820 */

loc_000BBA45: ;
    ecx = MEM32(0x3C6178);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBA5F; /* je: equal / zero */

loc_000BBA4F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BBA55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBA53u); } /* indirect call */
    }

loc_000BBA55: ;
    MEM32(0x3C6178) = 0;

loc_000BBA5F: ;
    eax = MEM32(0x3C6150);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBA7B; /* je: equal / zero */

loc_000BBA68: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBA6Eu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BBA6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C6150) = 0;

loc_000BBA7B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBA80
 * Original: 0x000BBA80 - 0x000BBACE (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBA80: ;
    PUSH32(esp, 0x000BBA85u); RECOMP_ABI_CALL(0x000B0220u, sub_000B0220); /* call 0x000B0220 */

loc_000BBA85: ;
    ecx = MEM32(0x3C6174);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBAA9; /* je: equal / zero */

loc_000BBA92: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0xBAB80);
    PUSH32(esp, 0x184);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBAA6u); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_000BBAA6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBAA9: ;
    ecx = MEM32(0x3C6178);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBACD; /* je: equal / zero */

loc_000BBAB6: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, 0xBB930);
    PUSH32(esp, 0xDC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBACAu); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_000BBACA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBACD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BBAD0
 * Original: 0x000BBAD0 - 0x000BBB2C (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBAD0: ;
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x184;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBB22; /* je: equal / zero */

loc_000BBAE2: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000BBAEBu); RECOMP_ABI_CALL(0x000B2FA0u, sub_000B2FA0); /* call 0x000B2FA0 */

loc_000BBAEB: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esp + 0x18C);
    edx = MEM32(esi + 4);
    PUSH32(esp, 0xBAB80);
    PUSH32(esp, 0x184);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBB12u); RECOMP_ABI_CALL(0x002BECF0u, sub_002BECF0); /* call 0x002BECF0 */

loc_000BBB12: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x000BBB20u); RECOMP_ABI_CALL(0x000B3150u, sub_000B3150); /* call 0x000B3150 */

loc_000BBB20: ;
    eax = esi;

loc_000BBB22: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x184;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBB30
 * Original: 0x000BBB30 - 0x000BBB8C (92 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBB30: ;
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBB82; /* je: equal / zero */

loc_000BBB42: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000BBB4Bu); RECOMP_ABI_CALL(0x000B2300u, sub_000B2300); /* call 0x000B2300 */

loc_000BBB4B: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esp + 0xE4);
    edx = MEM32(esi + 4);
    PUSH32(esp, 0xBB930);
    PUSH32(esp, 0xDC);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBB72u); RECOMP_ABI_CALL(0x002BECF0u, sub_002BECF0); /* call 0x002BECF0 */

loc_000BBB72: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x000BBB80u); RECOMP_ABI_CALL(0x000B2320u, sub_000B2320); /* call 0x000B2320 */

loc_000BBB80: ;
    eax = esi;

loc_000BBB82: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBB90
 * Original: 0x000BBB90 - 0x000BBBA9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBB90(void)
{

loc_000BBB90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BBB98u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000BBB98: ;
    MEM32(esi) = 0x310F60;
    MEM32(esi + 8) = 0x310F54;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBBB0
 * Original: 0x000BBBB0 - 0x000BBBD3 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBBB0: ;
    ecx = MEM32(0x3C6174);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BBBC1u); RECOMP_ABI_CALL(0x000BBAD0u, sub_000BBAD0); /* call 0x000BBAD0 */

loc_000BBBC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBBD1; /* jne: not equal / not zero */

loc_000BBBC5: ;
    ecx = MEM32(0x3C6178);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BBBD1u); RECOMP_ABI_CALL(0x000BBB30u, sub_000BBB30); /* call 0x000BBB30 */

loc_000BBBD1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBBE0
 * Original: 0x000BBBE0 - 0x000BBC68 (136 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBBE0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBBED; /* jne: not equal / not zero */

loc_000BBBE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000BBBED: ;
    ecx = MEM32(0x3C6174);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BBBFAu); RECOMP_ABI_CALL(0x000BBAD0u, sub_000BBAD0); /* call 0x000BBAD0 */

loc_000BBBFA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBC15; /* jne: not equal / not zero */

loc_000BBC00: ;
    ecx = MEM32(0x3C6178);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BBC0Cu); RECOMP_ABI_CALL(0x000BBB30u, sub_000BBB30); /* call 0x000BBB30 */

loc_000BBC0C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBC15; /* jne: not equal / not zero */

loc_000BBC12: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000BBC15: ;
    eax = MEM32(esi);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000BBC1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBC1Bu); } /* indirect call */
    }

loc_000BBC1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000BBC31; /* je: equal / zero */

loc_000BBC24: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000BBC29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBC26u); } /* indirect call */
    }

loc_000BBC29: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBC2Fu); RECOMP_ABI_CALL(0x000B8900u, sub_000B8900); /* call 0x000B8900 */

loc_000BBC2F: ;
    goto loc_000BBC47;

loc_000BBC31: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000BBC36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBC33u); } /* indirect call */
    }

loc_000BBC36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBC63; /* je: equal / zero */

loc_000BBC3A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000BBC41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBC3Eu); } /* indirect call */
    }

loc_000BBC41: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBC47u); RECOMP_ABI_CALL(0x000B0CB0u, sub_000B0CB0); /* call 0x000B0CB0 */

loc_000BBC47: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBC63; /* je: equal / zero */

loc_000BBC50: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBC63; /* je: equal / zero */

loc_000BBC58: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BBC60u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000BBC60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBC63: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBC70
 * Original: 0x000BBC70 - 0x000BBC8C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBC70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BBC7Fu); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000BBC7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBC88u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000BBC88: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BBC90
 * Original: 0x000BBC90 - 0x000BBCF3 (99 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBC90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000BBCAD; /* jne: not equal / not zero */

loc_000BBCA6: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBCADu); RECOMP_ABI_CALL(0x0003A9B0u, sub_0003A9B0); /* call 0x0003A9B0 */

loc_000BBCAD: ;
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBCB7u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000BBCB7: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBCEA; /* je: equal / zero */

loc_000BBCC0: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBCCCu); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_000BBCCC: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000BBCDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBCD5u); } /* indirect call */
    }

loc_000BBCDB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBCEA; /* je: equal / zero */

loc_000BBCDF: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BBCE7u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000BBCE7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBCEA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBD00
 * Original: 0x000BBD00 - 0x000BBD32 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBD00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBD0Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000BBD0D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBD16u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000BBD16: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBD2E; /* je: equal / zero */

loc_000BBD1F: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000BBD2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBD28u); } /* indirect call */
    }

loc_000BBD2E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBD40
 * Original: 0x000BBD40 - 0x000BBD98 (88 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBD40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBD4Du); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000BBD4D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBD56u); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000BBD56: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBD94; /* je: equal / zero */

loc_000BBD5F: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBD94; /* je: equal / zero */

loc_000BBD67: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BBD76u); RECOMP_ABI_CALL(0x00131F90u, sub_00131F90); /* call 0x00131F90 */

loc_000BBD76: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x000BBD80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBD7Au); } /* indirect call */
    }

loc_000BBD80: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBD94; /* je: equal / zero */

loc_000BBD88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBD94; /* je: equal / zero */

loc_000BBD8C: ;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000BBD94u); RECOMP_ABI_CALL(0x000B7C80u, sub_000B7C80); /* call 0x000B7C80 */

loc_000BBD94: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBDA0
 * Original: 0x000BBDA0 - 0x000BBDA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BBDA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000BBEB0(); return; /* tail jmp 0x000BBEB0 */

}

/**
 * sub_000BBDB0
 * Original: 0x000BBDB0 - 0x000BBE23 (115 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BBDB0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000BBE07; /* je: equal / zero */

loc_000BBDBD: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x184);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000BBDF0; /* js: sign (negative) */

loc_000BBDD2: ;
    edi = eax + 1;
    goto loc_000BBDE0;

    /* nop */
    edi = edi;

loc_000BBDE0: ;
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x184;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x000BBDEDu); RECOMP_ABI_CALL(0x000B3150u, sub_000B3150); /* call 0x000B3150 */

loc_000BBDED: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BBDE0; /* jne: not equal / not zero */

loc_000BBDF0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BBDFE; /* je: equal / zero */

loc_000BBDF5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000BBDFBu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000BBDFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBDFE: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000BBE07: ;
    ecx = edi;
    PUSH32(esp, 0x000BBE0Eu); RECOMP_ABI_CALL(0x000B3150u, sub_000B3150); /* call 0x000B3150 */

loc_000BBE0E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BBE1C; /* je: equal / zero */

loc_000BBE13: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BBE19u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BBE19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBE1C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBE30
 * Original: 0x000BBE30 - 0x000BBEA3 (115 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BBE30: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000BBE87; /* je: equal / zero */

loc_000BBE3D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xDC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000BBE70; /* js: sign (negative) */

loc_000BBE52: ;
    edi = eax + 1;
    goto loc_000BBE60;

    /* nop */
    edi = edi;

loc_000BBE60: ;
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xDC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x000BBE6Du); RECOMP_ABI_CALL(0x000B2320u, sub_000B2320); /* call 0x000B2320 */

loc_000BBE6D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BBE60; /* jne: not equal / not zero */

loc_000BBE70: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BBE7E; /* je: equal / zero */

loc_000BBE75: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000BBE7Bu); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000BBE7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBE7E: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000BBE87: ;
    ecx = edi;
    PUSH32(esp, 0x000BBE8Eu); RECOMP_ABI_CALL(0x000B2320u, sub_000B2320); /* call 0x000B2320 */

loc_000BBE8E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BBE9C; /* je: equal / zero */

loc_000BBE93: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BBE99u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BBE99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBE9C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBEB0
 * Original: 0x000BBEB0 - 0x000BBEDB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBEB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x310F60;
    MEM32(esi + 8) = 0x310F54;
    PUSH32(esp, 0x000BBEC5u); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_000BBEC5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BBED5; /* je: equal / zero */

loc_000BBECC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BBED2u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BBED2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBED5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBEE0
 * Original: 0x000BBEE0 - 0x000BBF2E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBEE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x3110F8;
    if (CMP_EQ(_fa, _fb)) goto loc_000BBF12; /* je: equal / zero */

loc_000BBEF0: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000BBF02; /* je: equal / zero */

loc_000BBEFA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BBF00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBEFEu); } /* indirect call */
    }

loc_000BBF00: ;
    goto loc_000BBF0B;

loc_000BBF02: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBF08u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000BBF08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBF0B: ;
    MEM32(esi + 4) = 0;

loc_000BBF12: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x2FF0D4;
    if (TEST_Z(_fa, _fb)) goto loc_000BBF28; /* je: equal / zero */

loc_000BBF1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BBF25u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BBF25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBF28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBF30
 * Original: 0x000BBF30 - 0x000BBF7E (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBF30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x311168;
    if (CMP_EQ(_fa, _fb)) goto loc_000BBF62; /* je: equal / zero */

loc_000BBF40: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_000BBF52; /* je: equal / zero */

loc_000BBF4A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BBF50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBF4Eu); } /* indirect call */
    }

loc_000BBF50: ;
    goto loc_000BBF5B;

loc_000BBF52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BBF58u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000BBF58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBF5B: ;
    MEM32(esi + 4) = 0;

loc_000BBF62: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x2FF0D4;
    if (TEST_Z(_fa, _fb)) goto loc_000BBF78; /* je: equal / zero */

loc_000BBF6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BBF75u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BBF75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BBF78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBF80
 * Original: 0x000BBF80 - 0x000BBF8A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBF80(void)
{

loc_000BBF80: ;
    eax = MEM32(ecx + 0xD4);
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000BBF90
 * Original: 0x000BBF90 - 0x000BBFD4 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000BBF9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BBF99u); } /* indirect call */
    }

loc_000BBF9C: ;
    SET_LO8(ecx, MEM8(esi + 0xCC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBFBD; /* je: equal / zero */

loc_000BBFA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB16BD083u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB16BD083u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBFB2; /* je: equal / zero */

loc_000BBFAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBFD0; /* jne: not equal / not zero */

loc_000BBFB2: ;
    MEM8(esi + 0xCC) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BBFBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F1066FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4F1066FB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BBFC9; /* je: equal / zero */

loc_000BBFC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BBFD0; /* jne: not equal / not zero */

loc_000BBFC9: ;
    MEM8(esi + 0xCC) = 1;

loc_000BBFD0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BBFE0
 * Original: 0x000BBFE0 - 0x000BBFEE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBFE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BBFE0: ;
    eax = MEM32(ecx + 0xC4);
    ecx = MEM32(eax + 4);
    g_seh_ebp = ebp; sub_00039DA0(); return; /* tail jmp 0x00039DA0 */

}

/**
 * sub_000BBFF0
 * Original: 0x000BBFF0 - 0x000BBFFD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BBFF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BBFF0: ;
    eax = MEM32(ecx + 0xD4);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BC000
 * Original: 0x000BC000 - 0x000BC10C (268 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC000(void)
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

loc_000BC000: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xD4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xD184E98Fu);
    ecx = esi;
    PUSH32(esp, 0x000BC01Cu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000BC01C: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000BC038; /* jb: below (unsigned <) */

loc_000BC030: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    goto loc_000BC041;

loc_000BC038: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */

loc_000BC041: ;
    PUSH32(esp, 0xA683D919u);
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000BC053u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000BC053: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000BC06F; /* jb: below (unsigned <) */

loc_000BC067: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    goto loc_000BC078;

loc_000BC06F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */

loc_000BC078: ;
    PUSH32(esp, 0x3F8A88A3);
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000BC08Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000BC08A: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    POP32(esp, esi);
    fp_push(MEMF(esp)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000BC0A5; /* jb: below (unsigned <) */

loc_000BC09E: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    goto loc_000BC0AD;

loc_000BC0A5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */

loc_000BC0AD: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000BC0B7u); RECOMP_ABI_CALL(0x000BC820u, sub_000BC820); /* call 0x000BC820 */

loc_000BC0B7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BC0CAu); RECOMP_ABI_CALL(0x000BC820u, sub_000BC820); /* call 0x000BC820 */

loc_000BC0CA: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BC0DDu); RECOMP_ABI_CALL(0x000BC820u, sub_000BC820); /* call 0x000BC820 */

loc_000BC0DD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEM32(eax + 4) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_000BC110
 * Original: 0x000BC110 - 0x000BC1CB (187 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC110(void)
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

loc_000BC110: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xD4);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x3CD06B6C);
    ecx = eax + 8;
    PUSH32(esp, 0x000BC129u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000BC129: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000BC142; /* jb: below (unsigned <) */

loc_000BC13B: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    goto loc_000BC14A;

loc_000BC142: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */

loc_000BC14A: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000BC154u); RECOMP_ABI_CALL(0x000BC820u, sub_000BC820); /* call 0x000BC820 */

loc_000BC154: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BC17Eu); RECOMP_ABI_CALL(0x000BC820u, sub_000BC820); /* call 0x000BC820 */

loc_000BC17E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) - fp_top()); /* fsubr dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BC19Bu); RECOMP_ABI_CALL(0x000BC820u, sub_000BC820); /* call 0x000BC820 */

loc_000BC19B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
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
 * sub_000BC1D0
 * Original: 0x000BC1D0 - 0x000BC2F4 (292 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC1D0(void)
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

loc_000BC1D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xD4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3CD06B6C);
    ecx = esi;
    PUSH32(esp, 0x000BC1ECu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000BC1EC: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000BC208; /* jb: below (unsigned <) */

loc_000BC200: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    goto loc_000BC211;

loc_000BC208: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */

loc_000BC211: ;
    PUSH32(esp, 0xC5AF0932u);
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000BC223u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000BC223: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000BC23F; /* jb: below (unsigned <) */

loc_000BC237: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    goto loc_000BC248;

loc_000BC23F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */

loc_000BC248: ;
    PUSH32(esp, 0x5A5FC396);
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000BC25Au); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000BC25A: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    POP32(esp, esi);
    fp_push(MEMF(esp + 4)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_000BC277; /* jb: below (unsigned <) */

loc_000BC26F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    goto loc_000BC280;

loc_000BC277: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */

loc_000BC280: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000BC28Bu); RECOMP_ABI_CALL(0x000BC820u, sub_000BC820); /* call 0x000BC820 */

loc_000BC28B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BC29Cu); RECOMP_ABI_CALL(0x000BC820u, sub_000BC820); /* call 0x000BC820 */

loc_000BC29C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BC2C3u); RECOMP_ABI_CALL(0x000BC820u, sub_000BC820); /* call 0x000BC820 */

loc_000BC2C3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEM32(eax + 4) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
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
 * sub_000BC300
 * Original: 0x000BC300 - 0x000BC42B (299 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC300(void)
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

loc_000BC300: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebp = esi + 4;
    ebx = esi + 0x10;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    MEM32(ebp) = 0x2FF764;
    MEM32(ebp + 4) = edi;
    PUSH32(esp, 0x000BC31Fu); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000BC31F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x3113DC;
    MEM32(ebp) = 0x3113C4;
    MEM32(ebx) = 0x311278;
    MEM32(esi + 0x18) = 0x311270;
    MEM32(esi + 0xC0) = edi;
    MEM32(esi + 0xC4) = 0x3C6184;
    eax = esi + 0xC8;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEM8(esi + 0xD0) = 0;
    MEM32(esi + 0xD4) = eax;
    MEMF(esi + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE0) = xmm0.f[0]; /* movss */
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3543808E);
    ecx = edi;
    PUSH32(esp, 0x000BC392u); RECOMP_ABI_CALL(0x00036860u, sub_00036860); /* call 0x00036860 */

loc_000BC392: ;
    PUSH32(esp, 0x5C038E93);
    ecx = edi;
    MEM8(esi + 0xD0) = LO8(eax);
    PUSH32(esp, 0x000BC3A4u); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000BC3A4: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0xDFA35CE);
    ecx = edi;
    MEMF(esi + 0xE4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BC3BCu); RECOMP_ABI_CALL(0x000367F0u, sub_000367F0); /* call 0x000367F0 */

loc_000BC3BC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FF9B4)); /* fmul dword ptr [0x2ff9b4] */
    PUSH32(esp, 0xA2278F58u);
    ecx = edi;
    MEMF(esi + 0xE8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BC3D4u); RECOMP_ABI_CALL(0x00036790u, sub_00036790); /* call 0x00036790 */

loc_000BC3D4: ;
    PUSH32(esp, 0xF0728DF0u);
    ecx = edi;
    MEM32(esi + 0xEC) = eax;
    PUSH32(esp, 0x000BC3E6u); RECOMP_ABI_CALL(0x00036820u, sub_00036820); /* call 0x00036820 */

loc_000BC3E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC3ECu); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000BC3EC: ;
    MEM32(esi + 0xF0) = eax;
    eax = MEM32(esi + 0xD4);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x55E59C6);
    ecx = eax + 8;
    PUSH32(esp, 0x000BC40Bu); RECOMP_ABI_CALL(0x000367C0u, sub_000367C0); /* call 0x000367C0 */

loc_000BC40B: ;
    PUSH32(esp, ebp);
    MEM32(esi + 0xF4) = eax;
    PUSH32(esp, 0x000BC417u); RECOMP_ABI_CALL(0x0014B630u, sub_0014B630); /* call 0x0014B630 */

loc_000BC417: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BC41Fu); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000BC41F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
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
 * sub_000BC430
 * Original: 0x000BC430 - 0x000BC486 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC430: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = esi + 0x10;
    edi = esi + 4;
    PUSH32(esp, ebx);
    MEM32(esi) = 0x3113DC;
    MEM32(edi) = 0x3113C4;
    MEM32(ebx) = 0x311278;
    MEM32(esi + 0x18) = 0x311270;
    PUSH32(esp, 0x000BC45Au); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_000BC45A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BC460u); RECOMP_ABI_CALL(0x0014B5A0u, sub_0014B5A0); /* call 0x0014B5A0 */

loc_000BC460: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0xC0;
    PUSH32(esp, 0x000BC46Eu); RECOMP_ABI_CALL(0x000BC890u, sub_000BC890); /* call 0x000BC890 */

loc_000BC46E: ;
    ecx = ebx;
    PUSH32(esp, 0x000BC475u); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_000BC475: ;
    ecx = edi;
    PUSH32(esp, 0x000BC47Cu); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_000BC47C: ;
    POP32(esp, edi);
    MEM32(esi) = 0x311258;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC490
 * Original: 0x000BC490 - 0x000BC50E (126 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC490: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000BC4D7; /* jne: not equal / not zero */

loc_000BC499: ;
    eax = MEM32(0x3C61A0);
    ecx = 0x3C61A0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000BC4A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC4A3u); } /* indirect call */
    }

loc_000BC4A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_000BC4C9; /* je: equal / zero */

loc_000BC4AE: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000BC4B6u); RECOMP_ABI_CALL(0x000BC300u, sub_000BC300); /* call 0x000BC300 */

loc_000BC4B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC4C9; /* je: equal / zero */

loc_000BC4BA: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC4C5u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000BC4C5: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BC4C9: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC4D3u); RECOMP_ABI_CALL(0x000356A0u, sub_000356A0); /* call 0x000356A0 */

loc_000BC4D3: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BC4D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC50A; /* jne: not equal / not zero */

loc_000BC4DC: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BC4E9u); RECOMP_ABI_CALL(0x000356C0u, sub_000356C0); /* call 0x000356C0 */

loc_000BC4E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC4F2; /* je: equal / zero */

loc_000BC4ED: ;
    esi = eax + -4;
    goto loc_000BC4F4;

loc_000BC4F2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BC4F4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000BC4FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC4FAu); } /* indirect call */
    }

loc_000BC4FC: ;
    eax = MEM32(0x3C61A0);
    PUSH32(esp, esi);
    ecx = 0x3C61A0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000BC50Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC507u); } /* indirect call */
    }

loc_000BC50A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC510
 * Original: 0x000BC510 - 0x000BC6BF (431 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC510: ;
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
    esi = ecx;
    eax = MEM32(esi + 0xF0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC52Eu); RECOMP_ABI_CALL(0x0010D160u, sub_0010D160); /* call 0x0010D160 */

loc_000BC52E: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC6B8; /* je: equal / zero */

loc_000BC53B: ;
    edi = esi + 0xC0;
    ecx = edi + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC54D; /* je: equal / zero */

loc_000BC548: ;
    eax = edi + -12;
    goto loc_000BC54F;

loc_000BC54D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BC54F: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC55Du); RECOMP_ABI_CALL(0x000BCA50u, sub_000BCA50); /* call 0x000BCA50 */

loc_000BC55D: ;
    eax = edi + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC569; /* je: equal / zero */

loc_000BC564: ;
    eax = edi + -12;
    goto loc_000BC56B;

loc_000BC569: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BC56B: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC6B8; /* je: equal / zero */

loc_000BC577: ;
    eax = MEM32(esi + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC590; /* jne: not equal / not zero */

loc_000BC582: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC58Eu); RECOMP_ABI_CALL(0x000BC000u, sub_000BC000); /* call 0x000BC000 */

loc_000BC58E: ;
    goto loc_000BC5B3;

loc_000BC590: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC5A2; /* jne: not equal / not zero */

loc_000BC594: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC5A0u); RECOMP_ABI_CALL(0x000BC110u, sub_000BC110); /* call 0x000BC110 */

loc_000BC5A0: ;
    goto loc_000BC5B3;

loc_000BC5A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC5B3; /* jne: not equal / not zero */

loc_000BC5A7: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC5B3u); RECOMP_ABI_CALL(0x000BC1D0u, sub_000BC1D0); /* call 0x000BC1D0 */

loc_000BC5B3: ;
    edx = MEM32(esi + 0xD4);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC5C6u); RECOMP_ABI_CALL(0x00039EE0u, sub_00039EE0); /* call 0x00039EE0 */

loc_000BC5C6: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x54); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    eax = esp + 0x10;
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC68Au); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000BC68A: ;
    edx = MEM32(ebx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000BC699u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC693u); } /* indirect call */
    }

loc_000BC699: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC6A6; /* je: equal / zero */

loc_000BC6A0: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC6A6u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000BC6A6: ;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(edi + 4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC6B1u); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_000BC6B1: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BC6B8u); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_000BC6B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC6C0
 * Original: 0x000BC6C0 - 0x000BC812 (338 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000BC6C0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xC0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC80B; /* je: equal / zero */

loc_000BC6D4: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xCC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xC8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000BC7F3; /* jb: below (unsigned <) (xmm3.f[0] vs xmm1.f[0]) */

loc_000BC70E: ;
    eax = MEM32(0x3C617C);
    PUSH32(esp, ebx);
    ebx = 1;
    goto loc_000BC721;

loc_000BC71B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */

loc_000BC721: ;
    _fa = (uint32_t)(MEM8(0x3C6180)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3C6180), LO8(ebx) (8-bit) */
    xmm2 = XMM_SCALAR(MEMF(esi + 0xD8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0xD4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xD4)); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC770; /* jne: not equal / not zero */

loc_000BC753: ;
    MEM32(0x3C6180) = MEM32(0x3C6180) | ebx;
    _fa = (uint32_t)(MEM32(0x3C6180)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000BC75Eu); RECOMP_ABI_CALL(0x000E6FC0u, sub_000E6FC0); /* call 0x000E6FC0 */

loc_000BC75E: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_000BC770: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x39B193);
    eax = 0x3039;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x2FE99C); /* subss */
    MEM32(0x3C617C) = eax;
    edx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xDC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0xDC) (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if (CMP_AE(_fa, _fb)) goto loc_000BC7DB; /* jae: above or equal (unsigned >=) */

loc_000BC7C8: ;
    ecx = esi + -16;
    PUSH32(esp, 0x000BC7D0u); RECOMP_ABI_CALL(0x000BC510u, sub_000BC510); /* call 0x000BC510 */

loc_000BC7D0: ;
    eax = MEM32(0x3C617C);
    xmm3 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_000BC7DB: ;
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    if ((_fca >= _fcb)) goto loc_000BC71B; /* jae: above or equal (unsigned >=) (xmm3.f[0] vs MEMF(esp + 0x24)) */

loc_000BC7E6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    POP32(esp, ebx);

loc_000BC7F3: ;
    MEMF(esi + 0xCC) = xmm2.f[0]; /* movss */
    MEMF(esi + 0xC8) = xmm3.f[0]; /* movss */
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */

loc_000BC80B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC820
 * Original: 0x000BC820 - 0x000BC86F (79 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC820(void)
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

loc_000BC820: ;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(0x3C6180));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC83D; /* jne: not equal / not zero */

loc_000BC830: ;
    MEM32(0x3C6180) = MEM32(0x3C6180) | eax;
    _fa = (uint32_t)(MEM32(0x3C6180)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000BC83Bu); RECOMP_ABI_CALL(0x000E6FC0u, sub_000E6FC0); /* call 0x000E6FC0 */

loc_000BC83B: ;
    goto loc_000BC842;

loc_000BC83D: ;
    eax = MEM32(0x3C617C);

loc_000BC842: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x39B193);
    ecx = 0x3039;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x3F800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp) = ecx;
    MEM32(0x3C617C) = ecx;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2FE99C)); /* fsub dword ptr [0x2fe99c] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BC870
 * Original: 0x000BC870 - 0x000BC88F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC870: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x311258;
    if (TEST_Z(_fa, _fb)) goto loc_000BC889; /* je: equal / zero */

loc_000BC880: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC886u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BC886: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BC889: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC890
 * Original: 0x000BC890 - 0x000BC8E6 (86 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC890: ;
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
    MEM32(esp + 8) = 0x311260;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BC8B2; /* je: equal / zero */

loc_000BC8AD: ;
    eax = esi + -12;
    goto loc_000BC8B4;

loc_000BC8B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BC8B4: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC8C5; /* je: equal / zero */

loc_000BC8BB: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFECu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_000BC8C5; /* je: equal / zero */

loc_000BC8C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000BC8C7;

loc_000BC8C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BC8C7: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BC8D5u); RECOMP_ABI_CALL(0x001565A0u, sub_001565A0); /* call 0x001565A0 */

loc_000BC8D5: ;
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
 * sub_000BC8F0
 * Original: 0x000BC8F0 - 0x000BC905 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC8F0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BC902; /* je: equal / zero */

loc_000BC8F7: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000BC902u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BC8FFu); } /* indirect call */
    }

loc_000BC902: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BC910
 * Original: 0x000BC910 - 0x000BC917 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC910(void)
{

loc_000BC910: ;
    eax = MEM32(ecx + 0xD0);
    esp += 4; return; /* ret */

}

/**
 * sub_000BC920
 * Original: 0x000BC920 - 0x000BC935 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC920: ;
    SET_LO8(eax, MEM8(ecx + 0xCC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x3113F0;
    if (CMP_NE(_fa, _fb)) goto loc_000BC934; /* jne: not equal / not zero */

loc_000BC92F: ;
    eax = 0x3113E4;

loc_000BC934: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC940
 * Original: 0x000BC940 - 0x000BC94E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC940: ;
    eax = ecx + -16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC94B; /* je: equal / zero */

loc_000BC947: ;
    eax = ecx + -12;
    esp += 4; return; /* ret */

loc_000BC94B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BC950
 * Original: 0x000BC950 - 0x000BC958 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC950: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000BCA00(); return; /* tail jmp 0x000BCA00 */

}

/**
 * sub_000BC960
 * Original: 0x000BC960 - 0x000BC968 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC960: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000BCA00(); return; /* tail jmp 0x000BCA00 */

}

/**
 * sub_000BC970
 * Original: 0x000BC970 - 0x000BC978 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC970: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000BCA00(); return; /* tail jmp 0x000BCA00 */

}

/**
 * sub_000BC980
 * Original: 0x000BC980 - 0x000BC998 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC980: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000BC995u); RECOMP_ABI_CALL(0x000BC9A0u, sub_000BC9A0); /* call 0x000BC9A0 */

loc_000BC995: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BC9A0
 * Original: 0x000BC9A0 - 0x000BC9E0 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC9A0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000BC9B4; /* je: equal / zero */

loc_000BC9AF: ;
    esi = eax + -20;
    goto loc_000BC9B6;

loc_000BC9B4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BC9B6: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x311260;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000BC9D3u); RECOMP_ABI_CALL(0x001568D0u, sub_001568D0); /* call 0x001568D0 */

loc_000BC9D3: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BC9E0
 * Original: 0x000BC9E0 - 0x000BC9FF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC9E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x2FEC40;
    if (CMP_EQ(_fa, _fb)) goto loc_000BC9F6; /* je: equal / zero */

loc_000BC9F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC9F6u); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000BC9F6: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCA00
 * Original: 0x000BCA00 - 0x000BCA1E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCA00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BCA08u); RECOMP_ABI_CALL(0x000BC430u, sub_000BC430); /* call 0x000BC430 */

loc_000BCA08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BCA18; /* je: equal / zero */

loc_000BCA0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BCA15u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BCA15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BCA18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCA20
 * Original: 0x000BCA20 - 0x000BCA48 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCA20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BCA31; /* je: equal / zero */

loc_000BCA2C: ;
    esi = eax + -20;
    goto loc_000BCA33;

loc_000BCA31: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCA33: ;
    ecx = esi;
    PUSH32(esp, 0x000BCA3Au); RECOMP_ABI_CALL(0x000BC9E0u, sub_000BC9E0); /* call 0x000BC9E0 */

loc_000BCA3A: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000BCA43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCA40u); } /* indirect call */
    }

loc_000BCA43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCA50
 * Original: 0x000BCA50 - 0x000BCACC (124 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCA50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000BCA5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCA59u); } /* indirect call */
    }

loc_000BCA5C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCA80; /* je: equal / zero */

loc_000BCA62: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax) = 0x311268;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = edi;
    goto loc_000BCA8A;

loc_000BCA80: ;
    edx = esi + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCA93; /* je: equal / zero */

loc_000BCA87: ;
    eax = esi + -12;

loc_000BCA8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCA93; /* je: equal / zero */

loc_000BCA8E: ;
    ecx = eax + 0x14;
    goto loc_000BCA95;

loc_000BCA93: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCA95: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCAA2; /* je: equal / zero */

loc_000BCA9D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000BCAA4;

loc_000BCAA2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BCAA4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BCAADu); RECOMP_ABI_CALL(0x001568B0u, sub_001568B0); /* call 0x001568B0 */

loc_000BCAAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCABF; /* je: equal / zero */

loc_000BCAB1: ;
    ecx = eax + -20;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000BCABF: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BCAD0
 * Original: 0x000BCAD0 - 0x000BCAED (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCAD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xB4;
    MEM32(esi) = 0x3113F8;
    PUSH32(esp, 0x000BCAE4u); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_000BCAE4: ;
    ecx = esi + 4;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001D0960(); return; /* tail jmp 0x001D0960 */

}

/**
 * sub_000BCAF0
 * Original: 0x000BCAF0 - 0x000BCB0C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCAF0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BCB06u); RECOMP_ABI_CALL(0x001CDA30u, sub_001CDA30); /* call 0x001CDA30 */

loc_000BCB06: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BCB10
 * Original: 0x000BCB10 - 0x000BCB1D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCB10(void)
{

loc_000BCB10: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BCB20
 * Original: 0x000BCB20 - 0x000BCB2D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCB20(void)
{

loc_000BCB20: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BCB30
 * Original: 0x000BCB30 - 0x000BCB36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCB30(void)
{

loc_000BCB30: ;
    eax = MEM32(0x3C61CC);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCB40
 * Original: 0x000BCB40 - 0x000BCB5C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCB40: ;
    ecx = MEM32(0x3C61CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCB5B; /* je: equal / zero */

loc_000BCB4A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000BCB51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BCB4Eu); } /* indirect call */
    }

loc_000BCB51: ;
    MEM32(0x3C61CC) = 0;

loc_000BCB5B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BCB60
 * Original: 0x000BCB60 - 0x000BCB63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCB60(void)
{

loc_000BCB60: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCB70
 * Original: 0x000BCB70 - 0x000BCB73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCB70(void)
{

loc_000BCB70: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCB80
 * Original: 0x000BCB80 - 0x000BCB91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCB80: ;
    eax = MEM32(0x3C61CC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BCB8Du); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000BCB8D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BCBA0
 * Original: 0x000BCBA0 - 0x000BCBD6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCBA0(void)
{

loc_000BCBA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(esi) = 0x3113F8;
    PUSH32(esp, 0x000BCBB5u); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_000BCBB5: ;
    ebx = esi + 0xB4;
    ecx = ebx;
    PUSH32(esp, 0x000BCBC2u); RECOMP_ABI_CALL(0x001D05C0u, sub_001D05C0); /* call 0x001D05C0 */

loc_000BCBC2: ;
    ecx = edi;
    PUSH32(esp, 0x000BCBC9u); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_000BCBC9: ;
    ecx = ebx;
    PUSH32(esp, 0x000BCBD0u); RECOMP_ABI_CALL(0x001D0630u, sub_001D0630); /* call 0x001D0630 */

loc_000BCBD0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCBE0
 * Original: 0x000BCBE0 - 0x000BCC5E (126 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCBE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(esi) = 0;
    MEM32(edi) = 0;
    eax = MEM32(0x3C3580);
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(eax + 0x48);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x44);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x40);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x000BCC47u); RECOMP_ABI_CALL(0x000A58E0u, sub_000A58E0); /* call 0x000A58E0 */

loc_000BCC47: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0x100;
    MEM32(edi) = 0x100;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000BCC60
 * Original: 0x000BCC60 - 0x000BCF1F (703 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCC60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCC60: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 4;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x000BCC71u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000BCC71: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    edi = MEM32(esp + 0x4C);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    edx = esp + 0x18;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x30;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BCD1Au); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BCD1A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    eax = esp + 0x28;
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x000BCDBFu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BCDBF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 8);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000BCE64u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BCE64: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    edx = esp + 0x28;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x20;
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BCF09u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BCF09: ;
    ecx = esi;
    PUSH32(esp, 0x000BCF10u); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000BCF10: ;
    ecx = esi;
    PUSH32(esp, 0x000BCF17u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000BCF17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_000BCF20
 * Original: 0x000BCF20 - 0x000BD0BE (414 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCF20: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0xB4;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x000BCF34u); RECOMP_ABI_CALL(0x001D0BF0u, sub_001D0BF0); /* call 0x001D0BF0 */

loc_000BCF34: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    edi = MEM32(esp + 0x3C);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000BCF94u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000BCF94: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
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
    PUSH32(esp, 0x000BCFF0u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000BCFF0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000BD04Cu); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000BD04C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = eax;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000BD0A8u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000BD0A8: ;
    ecx = esi;
    PUSH32(esp, 0x000BD0AFu); RECOMP_ABI_CALL(0x001D0700u, sub_001D0700); /* call 0x001D0700 */

loc_000BD0AF: ;
    ecx = esi;
    PUSH32(esp, 0x000BD0B6u); RECOMP_ABI_CALL(0x001D0780u, sub_001D0780); /* call 0x001D0780 */

loc_000BD0B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000BD0C0
 * Original: 0x000BD0C0 - 0x000BD12E (110 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD0C0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3C61CC);
    eax = MEM32(esi + 0x124);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x120);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD0EC; /* je: equal / zero */

loc_000BD0D8: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000BD0DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD0DCu); } /* indirect call */
    }

loc_000BD0DF: ;
    eax = MEM32(esi + 0x124);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD0D8; /* jne: not equal / not zero */

loc_000BD0EC: ;
    edi = MEM32(esi + 0x12C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x130)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x130) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD114; /* je: equal / zero */

loc_000BD0FA: ;
    /* nop */

loc_000BD100: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000BD107u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD104u); } /* indirect call */
    }

loc_000BD107: ;
    eax = MEM32(esi + 0x130);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD100; /* jne: not equal / not zero */

loc_000BD114: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD11Cu); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000BD11C: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD128u); RECOMP_ABI_CALL(0x001317C0u, sub_001317C0); /* call 0x001317C0 */

loc_000BD128: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD130
 * Original: 0x000BD130 - 0x000BD169 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD130: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = MEM32(edi + 0x120);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x124) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD166; /* je: equal / zero */

loc_000BD146: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    goto loc_000BD150;

    /* nop */

loc_000BD150: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000BD158u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD155u); } /* indirect call */
    }

loc_000BD158: ;
    eax = MEM32(edi + 0x124);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD150; /* jne: not equal / not zero */

loc_000BD165: ;
    POP32(esp, ebx);

loc_000BD166: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD170
 * Original: 0x000BD170 - 0x000BD1A9 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD170: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    esi = MEM32(edi + 0x12C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x130)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x130) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD1A6; /* je: equal / zero */

loc_000BD186: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    goto loc_000BD190;

    /* nop */

loc_000BD190: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000BD198u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD195u); } /* indirect call */
    }

loc_000BD198: ;
    eax = MEM32(edi + 0x130);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD190; /* jne: not equal / not zero */

loc_000BD1A5: ;
    POP32(esp, ebx);

loc_000BD1A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD1B0
 * Original: 0x000BD1B0 - 0x000BD1EB (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD1B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0x000BD1BFu); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_000BD1BF: ;
    esi = MEM32(edi + 0x120);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x124) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD1E5; /* je: equal / zero */

loc_000BD1CD: ;
    /* nop */

loc_000BD1D0: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000BD1D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD1D5u); } /* indirect call */
    }

loc_000BD1D8: ;
    eax = MEM32(edi + 0x124);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD1D0; /* jne: not equal / not zero */

loc_000BD1E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD1F0
 * Original: 0x000BD1F0 - 0x000BD210 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD1F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD20C; /* je: equal / zero */

loc_000BD1F9: ;
    ecx = esi;
    PUSH32(esp, 0x000BD200u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_000BD200: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000BD209u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000BD203u); } /* indirect call */
    }

loc_000BD209: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BD20C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD210
 * Original: 0x000BD210 - 0x000BD29C (140 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD210: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD298; /* je: equal / zero */

loc_000BD21A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = esi;
    PUSH32(esp, 0x000BD227u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000BD227: ;
    PUSH32(esp, eax);
    ebx = edi + -176;
    PUSH32(esp, 0x1E);
    ecx = esi;
    MEM32(eax + 0x58) = 0xBD130;
    MEM32(eax + 0x48) = ebx;
    PUSH32(esp, 0x000BD241u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000BD241: ;
    ecx = esi;
    PUSH32(esp, 0x000BD248u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000BD248: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x24);
    ecx = esi;
    MEM32(eax + 0x58) = 0xBD170;
    MEM32(eax + 0x48) = ebx;
    PUSH32(esp, 0x000BD25Cu); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000BD25C: ;
    ebx = MEM32(edi + 0x70);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x74) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD276; /* je: equal / zero */

loc_000BD264: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000BD26Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD269u); } /* indirect call */
    }

loc_000BD26C: ;
    eax = MEM32(edi + 0x74);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD264; /* jne: not equal / not zero */

loc_000BD276: ;
    ebx = MEM32(edi + 0x7C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x80) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD296; /* je: equal / zero */

loc_000BD281: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000BD289u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD286u); } /* indirect call */
    }

loc_000BD289: ;
    eax = MEM32(edi + 0x80);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD281; /* jne: not equal / not zero */

loc_000BD296: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000BD298: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD2A0
 * Original: 0x000BD2A0 - 0x000BD2F7 (87 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD2A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BD2A9u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000BD2A9: ;
    edi = esi + 0xB0;
    ecx = edi;
    PUSH32(esp, 0x000BD2B6u); RECOMP_ABI_CALL(0x00131E70u, sub_00131E70); /* call 0x00131E70 */

loc_000BD2B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x311468;
    MEM32(esi + 8) = 0x311460;
    MEM32(edi) = 0x311410;
    ecx = esi + 0x120;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x130) = eax;
    PUSH32(esp, 2);
    MEM32(esi + 0x134) = eax;
    PUSH32(esp, 0x000BD2F2u); RECOMP_ABI_CALL(0x000762D0u, sub_000762D0); /* call 0x000762D0 */

loc_000BD2F2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD300
 * Original: 0x000BD300 - 0x000BD353 (83 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD300: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xB0;
    MEM32(esi) = 0x311468;
    MEM32(esi + 8) = 0x311460;
    MEM32(edi) = 0x311410;
    eax = MEM32(esi + 0x12C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD330; /* je: equal / zero */

loc_000BD327: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD32Du); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BD32D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BD330: ;
    eax = MEM32(esi + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD343; /* je: equal / zero */

loc_000BD33A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD340u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BD340: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BD343: ;
    ecx = edi;
    PUSH32(esp, 0x000BD34Au); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000BD34A: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_000BD360
 * Original: 0x000BD360 - 0x000BD3B3 (83 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD360: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x140);
    PUSH32(esp, 0x3115B4);
    PUSH32(esp, 0x000BD374u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000BD374: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD389; /* je: equal / zero */

loc_000BD37B: ;
    ecx = eax;
    PUSH32(esp, 0x000BD382u); RECOMP_ABI_CALL(0x000BD2A0u, sub_000BD2A0); /* call 0x000BD2A0 */

loc_000BD382: ;
    MEM32(0x3C61CC) = eax;
    goto loc_000BD393;

loc_000BD389: ;
    MEM32(0x3C61CC) = 0;

loc_000BD393: ;
    PUSH32(esp, 0x000BD398u); RECOMP_ABI_CALL(0x000A8330u, sub_000A8330); /* call 0x000A8330 */

loc_000BD398: ;
    PUSH32(esp, 0x000BD39Du); RECOMP_ABI_CALL(0x000A9A40u, sub_000A9A40); /* call 0x000A9A40 */

loc_000BD39D: ;
    PUSH32(esp, 0x000BD3A2u); RECOMP_ABI_CALL(0x000AF280u, sub_000AF280); /* call 0x000AF280 */

loc_000BD3A2: ;
    eax = MEM32(0x3C61CC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD3AFu); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000BD3AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BD3C0
 * Original: 0x000BD3C0 - 0x000BD426 (102 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD3C0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x3C61CC);
    eax = MEM32(esi + 0x124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    ecx = MEM32(esi + 0x120);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000BD3DC; /* jne: not equal / not zero */

loc_000BD3D8: ;
    eax = ecx;
    goto loc_000BD3ED;

loc_000BD3DC: ;
    edi = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BD3E8u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_000BD3E8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BD3ED: ;
    MEM32(esi + 0x124) = eax;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    ecx = MEM32(esi + 0x12C);
    if (CMP_NE(_fa, _fb)) goto loc_000BD40C; /* jne: not equal / not zero */

loc_000BD403: ;
    POP32(esp, edi);
    MEM32(esi + 0x130) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BD40C: ;
    edi = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BD418u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_000BD418: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x130) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD430
 * Original: 0x000BD430 - 0x000BD472 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD430: ;
    eax = MEM32(0x3C61CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD471; /* je: equal / zero */

loc_000BD439: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD43Fu); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_000BD43F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000BD447u); RECOMP_ABI_CALL(0x000BD3C0u, sub_000BD3C0); /* call 0x000BD3C0 */

loc_000BD447: ;
    PUSH32(esp, 0x000BD44Cu); RECOMP_ABI_CALL(0x000A6E00u, sub_000A6E00); /* call 0x000A6E00 */

loc_000BD44C: ;
    PUSH32(esp, 0x000BD451u); RECOMP_ABI_CALL(0x000A8660u, sub_000A8660); /* call 0x000A8660 */

loc_000BD451: ;
    PUSH32(esp, 0x000BD456u); RECOMP_ABI_CALL(0x000AF4B0u, sub_000AF4B0); /* call 0x000AF4B0 */

loc_000BD456: ;
    ecx = MEM32(0x3C61CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD467; /* je: equal / zero */

loc_000BD460: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000BD467u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD464u); } /* indirect call */
    }

loc_000BD467: ;
    MEM32(0x3C61CC) = 0;

loc_000BD471: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD480
 * Original: 0x000BD480 - 0x000BD4CB (75 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD480: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3C61CC);
    if ((_fa == 0)) goto loc_000BD499; /* je: equal / zero */

loc_000BD48E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BD4CA; /* jne: not equal / not zero */

loc_000BD491: ;
    ecx = eax + 0x12C;
    goto loc_000BD49F;

loc_000BD499: ;
    ecx = eax + 0x120;

loc_000BD49F: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD4B6; /* je: equal / zero */

loc_000BD4A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD4B1; /* je: equal / zero */

loc_000BD4AB: ;
    edx = MEM32(esp + 4);
    MEM32(eax) = edx;

loc_000BD4B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 4;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BD4B6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD4CAu); RECOMP_ABI_CALL(0x0013D8F0u, sub_0013D8F0); /* call 0x0013D8F0 */

loc_000BD4CA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD4D0
 * Original: 0x000BD4D0 - 0x000BD502 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD4D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xB4;
    MEM32(esi) = 0x3113F8;
    PUSH32(esp, 0x000BD4E4u); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_000BD4E4: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000BD4ECu); RECOMP_ABI_CALL(0x001D0960u, sub_001D0960); /* call 0x001D0960 */

loc_000BD4EC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BD4FC; /* je: equal / zero */

loc_000BD4F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD4F9u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BD4F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BD4FC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD510
 * Original: 0x000BD510 - 0x000BD518 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD510: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000BD530(); return; /* tail jmp 0x000BD530 */

}

/**
 * sub_000BD520
 * Original: 0x000BD520 - 0x000BD52B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD520: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000BD530(); return; /* tail jmp 0x000BD530 */

}

/**
 * sub_000BD530
 * Original: 0x000BD530 - 0x000BD54E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD530: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BD538u); RECOMP_ABI_CALL(0x000BD300u, sub_000BD300); /* call 0x000BD300 */

loc_000BD538: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BD548; /* je: equal / zero */

loc_000BD53F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD545u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BD545: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BD548: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD550
 * Original: 0x000BD550 - 0x000BD551 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD550(void)
{

loc_000BD550: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD560
 * Original: 0x000BD560 - 0x000BD561 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD560(void)
{

loc_000BD560: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD570
 * Original: 0x000BD570 - 0x000BD571 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD570(void)
{

loc_000BD570: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD580
 * Original: 0x000BD580 - 0x000BD581 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD580(void)
{

loc_000BD580: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD590
 * Original: 0x000BD590 - 0x000BD591 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD590(void)
{

loc_000BD590: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD5A0
 * Original: 0x000BD5A0 - 0x000BD5A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD5A0(void)
{

loc_000BD5A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD5B0
 * Original: 0x000BD5B0 - 0x000BD5B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD5B0(void)
{

loc_000BD5B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD5C0
 * Original: 0x000BD5C0 - 0x000BD5C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD5C0(void)
{

loc_000BD5C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD5D0
 * Original: 0x000BD5D0 - 0x000BD5D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD5D0(void)
{

loc_000BD5D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD5E0
 * Original: 0x000BD5E0 - 0x000BD5E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD5E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD5E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BD5F0
 * Original: 0x000BD5F0 - 0x000BD5F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD5F0(void)
{

loc_000BD5F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD600
 * Original: 0x000BD600 - 0x000BD601 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD600(void)
{

loc_000BD600: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD610
 * Original: 0x000BD610 - 0x000BD611 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD610(void)
{

loc_000BD610: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD620
 * Original: 0x000BD620 - 0x000BD621 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD620(void)
{

loc_000BD620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD630
 * Original: 0x000BD630 - 0x000BD631 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD630(void)
{

loc_000BD630: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD640
 * Original: 0x000BD640 - 0x000BD641 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD640(void)
{

loc_000BD640: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD650
 * Original: 0x000BD650 - 0x000BD651 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD650(void)
{

loc_000BD650: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD660
 * Original: 0x000BD660 - 0x000BD6C4 (100 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD660(void)
{

loc_000BD660: ;
    PUSH32(esp, 0x000BD665u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_000BD665: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x373674)); /* movss */
    eax = MEM32(eax + 0x114);
    MEMF(0x37367C) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x373678); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    MEMF(0x3C6350) = xmm0.f[0]; /* movss */
    MEMF(0x3C6354) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEM32(0x3C6290) = eax;
    MEMF(0x3C6358) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000BD6D0
 * Original: 0x000BD6D0 - 0x000BD6D5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD6D0(void)
{

loc_000BD6D0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD6E0
 * Original: 0x000BD6E0 - 0x000BD6F1 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD6E0(void)
{

loc_000BD6E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x98) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD700
 * Original: 0x000BD700 - 0x000BD72F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD700: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD72D; /* je: equal / zero */

loc_000BD70D: ;
    MEM8(eax + 0x24C) = 0;
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD720u); RECOMP_ABI_CALL(0x00193C10u, sub_00193C10); /* call 0x00193C10 */

loc_000BD720: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = 0;

loc_000BD72D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD730
 * Original: 0x000BD730 - 0x000BDB71 (1089 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD730: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BD736u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_000BD736: ;
    PUSH32(esp, 0x311650);
    edi = eax;
    PUSH32(esp, 0x000BD742u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_000BD742: ;
    SET_LO8(eax, MEM8(0x3C6288));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDB66; /* jne: not equal / not zero */

loc_000BD752: ;
    eax = MEM32(0x3C6294);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD76B; /* jne: not equal / not zero */

loc_000BD75B: ;
    ecx = MEM32(0x4F7410);
    PUSH32(esp, 0x000BD766u); RECOMP_ABI_CALL(0x001C1810u, sub_001C1810); /* call 0x001C1810 */

loc_000BD766: ;
    MEM32(0x3C6294) = eax;

loc_000BD76B: ;
    ecx = MEM32(0x3C6298);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD781; /* jne: not equal / not zero */

loc_000BD775: ;
    ecx = eax;
    PUSH32(esp, 0x000BD77Cu); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_000BD77C: ;
    MEM32(0x3C6298) = eax;

loc_000BD781: ;
    eax = MEM32(0x3C629C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD79A; /* jne: not equal / not zero */

loc_000BD78A: ;
    ecx = MEM32(0x4F7410);
    PUSH32(esp, 0x000BD795u); RECOMP_ABI_CALL(0x001C1810u, sub_001C1810); /* call 0x001C1810 */

loc_000BD795: ;
    MEM32(0x3C629C) = eax;

loc_000BD79A: ;
    ecx = MEM32(0x3C62A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD7B0; /* jne: not equal / not zero */

loc_000BD7A4: ;
    ecx = eax;
    PUSH32(esp, 0x000BD7ABu); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_000BD7AB: ;
    MEM32(0x3C62A0) = eax;

loc_000BD7B0: ;
    eax = MEM32(0x3C62A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD7E9; /* jne: not equal / not zero */

loc_000BD7B9: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB0);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000BD7C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BD7C1u); } /* indirect call */
    }

loc_000BD7C7: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD7DB; /* je: equal / zero */

loc_000BD7D0: ;
    ecx = esi;
    PUSH32(esp, 0x000BD7D7u); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_000BD7D7: ;
    ecx = esi;
    goto loc_000BD7DD;

loc_000BD7DB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BD7DD: ;
    MEM32(0x3C62A4) = ecx;
    PUSH32(esp, 0x000BD7E8u); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_000BD7E8: ;
    POP32(esp, esi);

loc_000BD7E9: ;
    eax = MEM32(0x3C6280);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDB66; /* jne: not equal / not zero */

loc_000BD7F6: ;
    _fa = (uint32_t)(MEM8(0x3C63F0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3C63F0), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BD81D; /* jne: not equal / not zero */

loc_000BD7FF: ;
    MEM32(0x3C63F0) = MEM32(0x3C63F0) | 1;
    _fa = (uint32_t)(MEM32(0x3C63F0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C63E0) = eax;
    MEM32(0x3C63E4) = eax;
    MEM32(0x3C63E8) = eax;
    MEM32(0x3C63EC) = eax;

loc_000BD81D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x31164C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    MEMF(0x3C63A0) = xmm0.f[0]; /* movss */
    MEMF(0x3C63A4) = xmm0.f[0]; /* movss */
    MEMF(0x3C63A8) = xmm0.f[0]; /* movss */
    MEMF(0x3C63AC) = xmm1.f[0]; /* movss */
    MEMF(0x3C63B0) = xmm0.f[0]; /* movss */
    MEMF(0x3C63B4) = xmm2.f[0]; /* movss */
    MEMF(0x3C63B8) = xmm0.f[0]; /* movss */
    MEMF(0x3C63BC) = xmm1.f[0]; /* movss */
    MEMF(0x3C63C0) = xmm2.f[0]; /* movss */
    MEMF(0x3C63C4) = xmm2.f[0]; /* movss */
    MEMF(0x3C63C8) = xmm0.f[0]; /* movss */
    MEMF(0x3C63CC) = xmm1.f[0]; /* movss */
    MEMF(0x3C63D0) = xmm2.f[0]; /* movss */
    MEMF(0x3C63D4) = xmm0.f[0]; /* movss */
    MEMF(0x3C63D8) = xmm0.f[0]; /* movss */
    MEMF(0x3C63DC) = xmm1.f[0]; /* movss */
    MEMF(0x3C637C) = xmm0.f[0]; /* movss */
    MEMF(0x3C6380) = xmm0.f[0]; /* movss */
    MEMF(0x3C6384) = xmm0.f[0]; /* movss */
    MEMF(0x3C6388) = xmm1.f[0]; /* movss */
    MEMF(0x3C638C) = xmm1.f[0]; /* movss */
    MEMF(0x3C6390) = xmm1.f[0]; /* movss */
    MEMF(0x3C6394) = xmm1.f[0]; /* movss */
    MEMF(0x3C6398) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000BD8FAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000BD8F4u); } /* indirect call */
    }

loc_000BD8FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD90A; /* je: equal / zero */

loc_000BD901: ;
    ecx = eax;
    PUSH32(esp, 0x000BD908u); RECOMP_ABI_CALL(0x001D0230u, sub_001D0230); /* call 0x001D0230 */

loc_000BD908: ;
    goto loc_000BD90C;

loc_000BD90A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BD90C: ;
    PUSH32(esp, 0x3C62B8);
    ecx = eax;
    MEM32(0x3C6280) = eax;
    PUSH32(esp, 0x000BD91Du); RECOMP_ABI_CALL(0x001D02B0u, sub_001D02B0); /* call 0x001D02B0 */

loc_000BD91D: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 0x000BD928u); RECOMP_ABI_CALL(0x001D04E0u, sub_001D04E0); /* call 0x001D04E0 */

loc_000BD928: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000BD935u); RECOMP_ABI_CALL(0x001D0500u, sub_001D0500); /* call 0x001D0500 */

loc_000BD935: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 0x311640);
    PUSH32(esp, 0x000BD945u); RECOMP_ABI_CALL(0x001D0460u, sub_001D0460); /* call 0x001D0460 */

loc_000BD945: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C63A0);
    PUSH32(esp, 0x30FFE8);
    PUSH32(esp, 0x000BD95Eu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BD95E: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C637C);
    PUSH32(esp, 0x30FFE4);
    PUSH32(esp, 0x000BD977u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BD977: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3C63E0);
    PUSH32(esp, 0x311638);
    PUSH32(esp, 0x000BD990u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BD990: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3736A8);
    PUSH32(esp, 0x311630);
    PUSH32(esp, 0x000BD9A9u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BD9A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000BD9B3u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000BD9ADu); } /* indirect call */
    }

loc_000BD9B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD9C3; /* je: equal / zero */

loc_000BD9BA: ;
    ecx = eax;
    PUSH32(esp, 0x000BD9C1u); RECOMP_ABI_CALL(0x001CF930u, sub_001CF930); /* call 0x001CF930 */

loc_000BD9C1: ;
    goto loc_000BD9C5;

loc_000BD9C3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BD9C5: ;
    PUSH32(esp, 6);
    ecx = eax;
    MEM32(0x3C6284) = eax;
    PUSH32(esp, 0x000BD9D3u); RECOMP_ABI_CALL(0x001CF070u, sub_001CF070); /* call 0x001CF070 */

loc_000BD9D3: ;
    ecx = MEM32(0x3C6284);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BD9E0u); RECOMP_ABI_CALL(0x001CF090u, sub_001CF090); /* call 0x001CF090 */

loc_000BD9E0: ;
    ecx = MEM32(0x3C6284);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000BD9EDu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000BD9ED: ;
    ecx = MEM32(0x3C6284);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BD9FAu); RECOMP_ABI_CALL(0x001CF0B0u, sub_001CF0B0); /* call 0x001CF0B0 */

loc_000BD9FA: ;
    ecx = MEM32(0x3C6284);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000BDA07u); RECOMP_ABI_CALL(0x001CF220u, sub_001CF220); /* call 0x001CF220 */

loc_000BDA07: ;
    ecx = MEM32(0x3C6284);
    PUSH32(esp, 0x207);
    PUSH32(esp, 0x000BDA17u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000BDA17: ;
    ecx = MEM32(0x3C6284);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BDA24u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000BDA24: ;
    ecx = MEM32(0x3C6284);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000BDA31u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_000BDA31: ;
    eax = MEM32(0x3C6284);
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x311628);
    PUSH32(esp, 0x000BDA4Bu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BDA4B: ;
    eax = MEM32(0x3C63F0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x31AE60)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x311624)); /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000BDA8C; /* jne: not equal / not zero */

loc_000BDA64: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C63F0) = eax;
    MEMF(0x3C636C) = xmm1.f[0]; /* movss */
    MEMF(0x3C6370) = xmm1.f[0]; /* movss */
    MEMF(0x3C6374) = xmm0.f[0]; /* movss */
    MEMF(0x3C6378) = xmm1.f[0]; /* movss */

loc_000BDA8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BDAB8; /* jne: not equal / not zero */

loc_000BDA90: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3C63F0) = eax;
    MEMF(0x3C635C) = xmm0.f[0]; /* movss */
    MEMF(0x3C6360) = xmm0.f[0]; /* movss */
    MEMF(0x3C6364) = xmm1.f[0]; /* movss */
    MEMF(0x3C6368) = xmm0.f[0]; /* movss */

loc_000BDAB8: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C636C);
    PUSH32(esp, 0x30FFAC);
    PUSH32(esp, 0x000BDAD1u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BDAD1: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3C635C);
    PUSH32(esp, 0x30FFA0);
    PUSH32(esp, 0x000BDAEAu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BDAEA: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x373698);
    PUSH32(esp, 0x311614);
    PUSH32(esp, 0x000BDB03u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BDB03: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x373698);
    PUSH32(esp, 0x311604);
    PUSH32(esp, 0x000BDB1Cu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BDB1C: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x373698);
    PUSH32(esp, 0x3115F4);
    PUSH32(esp, 0x000BDB35u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BDB35: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x373698);
    PUSH32(esp, 0x3115E4);
    PUSH32(esp, 0x000BDB4Eu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BDB4E: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000BDB5Bu); RECOMP_ABI_CALL(0x001D0350u, sub_001D0350); /* call 0x001D0350 */

loc_000BDB5B: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 0x000BDB66u); RECOMP_ABI_CALL(0x001D04F0u, sub_001D04F0); /* call 0x001D04F0 */

loc_000BDB66: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BDB6Cu); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_000BDB6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDB80
 * Original: 0x000BDB80 - 0x000BDC1B (155 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDB80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BDB88u); RECOMP_ABI_CALL(0x00131E70u, sub_00131E70); /* call 0x00131E70 */

loc_000BDB88: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x311670;
    MEM32(esi + 0x70) = eax;
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xA0) = eax;
    PUSH32(esp, 0x000BDBB9u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_000BDBB9: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x373674)); /* movss */
    eax = MEM32(eax + 0x114);
    MEMF(0x37367C) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x373678); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    MEMF(0x3C6350) = xmm0.f[0]; /* movss */
    MEMF(0x3C6354) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(0x3C6290) = eax;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    eax = esi;
    MEMF(0x3C6358) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDC20
 * Original: 0x000BDC20 - 0x000BDC5B (59 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BDC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x311670;
    if (CMP_EQ(_fa, _fb)) goto loc_000BDC53; /* je: equal / zero */

loc_000BDC33: ;
    MEM8(eax + 0x24C) = 0;
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BDC46u); RECOMP_ABI_CALL(0x00193C10u, sub_00193C10); /* call 0x00193C10 */

loc_000BDC46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = 0;

loc_000BDC53: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00131E20(); return; /* tail jmp 0x00131E20 */

}

/**
 * sub_000BDC60
 * Original: 0x000BDC60 - 0x000BDD06 (166 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDC60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDD01; /* jne: not equal / not zero */

loc_000BDC74: ;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDC9F; /* je: equal / zero */

loc_000BDC7B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x000BDC83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDC7Du); } /* indirect call */
    }

loc_000BDC83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BDC96; /* jne: not equal / not zero */

loc_000BDC87: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x000BDC92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDC8Cu); } /* indirect call */
    }

loc_000BDC92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDC9F; /* je: equal / zero */

loc_000BDC96: ;
    MEM8(esi + 0x6C) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BDC9F: ;
    eax = MEM32(0x3116C0);
    ecx = MEM32(0x3116C4);
    SET_LO16(edx, MEM16(0x3116C8));
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = ecx;
    MEM16(esp + 0x10) = LO16(edx);
    PUSH32(esp, 0x000BDCC8u); RECOMP_ABI_CALL(0x00039E50u, sub_00039E50); /* call 0x00039E50 */

loc_000BDCC8: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BDCD0u); RECOMP_ABI_CALL(0x00194450u, sub_00194450); /* call 0x00194450 */

loc_000BDCD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xA0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000BDD01; /* je: equal / zero */

loc_000BDCDD: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000BDCE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDCE2u); } /* indirect call */
    }

loc_000BDCE8: ;
    ecx = MEM32(esi + 0xA0);
    MEM32(ecx + 0xB8) = eax;
    edx = MEM32(esi + 0xA0);
    MEM8(edx + 0x24C) = 0;

loc_000BDD01: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BDD10
 * Original: 0x000BDD10 - 0x000BDD5C (76 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDD10(void)
{

loc_000BDD10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x70) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6B301E8B);
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x000BDD27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDD21u); } /* indirect call */
    }

loc_000BDD27: ;
    ecx = eax;
    PUSH32(esp, 0x000BDD2Eu); RECOMP_ABI_CALL(0x00065E40u, sub_00065E40); /* call 0x00065E40 */

loc_000BDD2E: ;
    ecx = MEM32(esi + 0x70);
    MEM32(esi + 0x90) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x913F23E8u);
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000BDD44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BDD3Eu); } /* indirect call */
    }

loc_000BDD44: ;
    ecx = eax;
    PUSH32(esp, 0x000BDD4Bu); RECOMP_ABI_CALL(0x00065E40u, sub_00065E40); /* call 0x00065E40 */

loc_000BDD4B: ;
    ecx = esi;
    MEM32(esi + 0x94) = eax;
    PUSH32(esp, 0x000BDD58u); RECOMP_ABI_CALL(0x000BDC60u, sub_000BDC60); /* call 0x000BDC60 */

loc_000BDD58: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BDD60
 * Original: 0x000BDD60 - 0x000BE018 (696 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDD60: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, 6);
    ecx = esi;
    MEM32(esp + 8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000BDD79u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000BDD79: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    edx = esp + 0x18;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x38) = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BDE16u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BDE16: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    edx = esp + 8;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000BDEB9u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BDEB9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    ecx = MEM32(esp + 8);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = ecx;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 8;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000BDF5Cu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BDF5C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    edx = esp + 0x28;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ecx;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BE005u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BE005: ;
    ecx = esi;
    PUSH32(esp, 0x000BE00Cu); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000BE00C: ;
    ecx = esi;
    PUSH32(esp, 0x000BE013u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000BE013: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BE020
 * Original: 0x000BE020 - 0x000BE262 (578 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x3C629C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE03Du); RECOMP_ABI_CALL(0x001D1370u, sub_001D1370); /* call 0x001D1370 */

loc_000BE03D: ;
    ecx = MEM32(0x3C629C);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE04Au); RECOMP_ABI_CALL(0x001D1460u, sub_001D1460); /* call 0x001D1460 */

loc_000BE04A: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C62A0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE068u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000BE068: ;
    ecx = MEM32(0x3C62A0);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE07Au); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000BE07A: ;
    ecx = MEM32(0x3C62A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE088u); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000BE088: ;
    ecx = MEM32(0x3C629C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000BE092u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE090u); } /* indirect call */
    }

loc_000BE092: ;
    ecx = MEM32(0x3C62A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE09Du); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000BE09D: ;
    ecx = MEM32(0x3C62A0);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE0AAu); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_000BE0AA: ;
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30FFDC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE0C2u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BE0C2: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30FFD0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE0D7u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BE0D7: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30FFC4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE0ECu); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BE0EC: ;
    ecx = MEM32(0x3C6280);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30FFB8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE101u); RECOMP_ABI_CALL(0x001D0B30u, sub_001D0B30); /* call 0x001D0B30 */

loc_000BE101: ;
    ecx = MEM32(0x3C6284);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE10Eu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000BE10E: ;
    ecx = MEM32(0x3C6280);
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE11Du); RECOMP_ABI_CALL(0x001D0B60u, sub_001D0B60); /* call 0x001D0B60 */

loc_000BE11D: ;
    ecx = MEM32(0x3C62A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE128u); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000BE128: ;
    ecx = MEM32(0x3C629C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000BE133u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE130u); } /* indirect call */
    }

loc_000BE133: ;
    ecx = MEM32(0x3C629C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE141u); RECOMP_ABI_CALL(0x001D1370u, sub_001D1370); /* call 0x001D1370 */

loc_000BE141: ;
    ecx = MEM32(0x3C629C);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE14Eu); RECOMP_ABI_CALL(0x001D1460u, sub_001D1460); /* call 0x001D1460 */

loc_000BE14E: ;
    ecx = MEM32(0x3C62A4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE15Au); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000BE15A: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE163u); RECOMP_ABI_CALL(0x001C7670u, sub_001C7670); /* call 0x001C7670 */

loc_000BE163: ;
    edi = MEM32(0x3C62A4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = esp + 0x18;
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
    eax = MEM32(0x378A44);
    ecx = MEM32(0x3C62A0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE194u); RECOMP_ABI_CALL(0x001C6D80u, sub_001C6D80); /* call 0x001C6D80 */

loc_000BE194: ;
    ecx = MEM32(0x3C62A0);
    PUSH32(esp, 0x43480000);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE1A6u); RECOMP_ABI_CALL(0x001C6550u, sub_001C6550); /* call 0x001C6550 */

loc_000BE1A6: ;
    ecx = MEM32(0x3C62A0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE1B4u); RECOMP_ABI_CALL(0x001C7320u, sub_001C7320); /* call 0x001C7320 */

loc_000BE1B4: ;
    ecx = MEM32(0x3C629C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BE1BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE1BCu); } /* indirect call */
    }

loc_000BE1BE: ;
    ecx = MEM32(0x3C62A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE1C9u); RECOMP_ABI_CALL(0x001C6AB0u, sub_001C6AB0); /* call 0x001C6AB0 */

loc_000BE1C9: ;
    ecx = MEM32(0x3C62A0);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE1D6u); RECOMP_ABI_CALL(0x001C66B0u, sub_001C66B0); /* call 0x001C66B0 */

loc_000BE1D6: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx + 0x14) = 2;
    esi = MEM32(0x3C62A4);
    eax = 0xFF000000u;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE1F6u); RECOMP_ABI_CALL(0x001CF3B0u, sub_001CF3B0); /* call 0x001CF3B0 */

loc_000BE1F6: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE1FFu); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000BE1FF: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x8004);
    PUSH32(esp, 0x8003);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE215u); RECOMP_ABI_CALL(0x001CF320u, sub_001CF320); /* call 0x001CF320 */

loc_000BE215: ;
    eax = MEM32(0x378A44);
    edx = MEM32(0x3C62A4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE236u); RECOMP_ABI_CALL(0x000BDD60u, sub_000BDD60); /* call 0x000BDD60 */

loc_000BE236: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = ebx + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE243u); RECOMP_ABI_CALL(0x001CD2C0u, sub_001CD2C0); /* call 0x001CD2C0 */

loc_000BE243: ;
    ecx = MEM32(0x3C62A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE24Eu); RECOMP_ABI_CALL(0x001C6680u, sub_001C6680); /* call 0x001C6680 */

loc_000BE24E: ;
    ecx = MEM32(0x3C629C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000BE259u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE256u); } /* indirect call */
    }

loc_000BE259: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000BE270
 * Original: 0x000BE270 - 0x000BE363 (243 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE270: ;
    SET_LO8(eax, MEM8(0x3C6288));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE362; /* jne: not equal / not zero */

loc_000BE27D: ;
    eax = MEM32(0x3C6294);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE296; /* jne: not equal / not zero */

loc_000BE286: ;
    ecx = MEM32(0x4F7410);
    PUSH32(esp, 0x000BE291u); RECOMP_ABI_CALL(0x001C1810u, sub_001C1810); /* call 0x001C1810 */

loc_000BE291: ;
    MEM32(0x3C6294) = eax;

loc_000BE296: ;
    ecx = MEM32(0x3C6298);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE2AC; /* jne: not equal / not zero */

loc_000BE2A0: ;
    ecx = eax;
    PUSH32(esp, 0x000BE2A7u); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_000BE2A7: ;
    MEM32(0x3C6298) = eax;

loc_000BE2AC: ;
    eax = MEM32(0x3C629C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE2C5; /* jne: not equal / not zero */

loc_000BE2B5: ;
    ecx = MEM32(0x4F7410);
    PUSH32(esp, 0x000BE2C0u); RECOMP_ABI_CALL(0x001C1810u, sub_001C1810); /* call 0x001C1810 */

loc_000BE2C0: ;
    MEM32(0x3C629C) = eax;

loc_000BE2C5: ;
    ecx = MEM32(0x3C62A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE2DB; /* jne: not equal / not zero */

loc_000BE2CF: ;
    ecx = eax;
    PUSH32(esp, 0x000BE2D6u); RECOMP_ABI_CALL(0x001C1A10u, sub_001C1A10); /* call 0x001C1A10 */

loc_000BE2D6: ;
    MEM32(0x3C62A0) = eax;

loc_000BE2DB: ;
    eax = MEM32(0x3C62A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000BE313; /* jne: not equal / not zero */

loc_000BE2E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB0);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000BE2F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE2ECu); } /* indirect call */
    }

loc_000BE2F2: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE306; /* je: equal / zero */

loc_000BE2FB: ;
    ecx = esi;
    PUSH32(esp, 0x000BE302u); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_000BE302: ;
    ecx = esi;
    goto loc_000BE308;

loc_000BE306: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BE308: ;
    MEM32(0x3C62A4) = ecx;
    PUSH32(esp, 0x000BE313u); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_000BE313: ;
    ecx = MEM32(0x3C6280);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE33A; /* je: equal / zero */

loc_000BE31D: ;
    esi = ecx;
    PUSH32(esp, 0x000BE324u); RECOMP_ABI_CALL(0x001D0AE0u, sub_001D0AE0); /* call 0x001D0AE0 */

loc_000BE324: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000BE32Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000BE327u); } /* indirect call */
    }

loc_000BE32D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C6280) = 0;

loc_000BE33A: ;
    ecx = MEM32(0x3C6284);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE361; /* je: equal / zero */

loc_000BE344: ;
    esi = ecx;
    PUSH32(esp, 0x000BE34Bu); RECOMP_ABI_CALL(0x001CF8A0u, sub_001CF8A0); /* call 0x001CF8A0 */

loc_000BE34B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000BE354u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000BE34Eu); } /* indirect call */
    }

loc_000BE354: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C6284) = 0;

loc_000BE361: ;
    POP32(esp, esi);

loc_000BE362: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BE370
 * Original: 0x000BE370 - 0x000BE420 (176 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE370: ;
    SET_LO8(eax, MEM8(0x3C6288));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE41E; /* jne: not equal / not zero */

loc_000BE380: ;
    ecx = MEM32(0x3C62A4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE3A8; /* je: equal / zero */

loc_000BE38A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BE392u); RECOMP_ABI_CALL(0x001D0960u, sub_001D0960); /* call 0x001D0960 */

loc_000BE392: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000BE39Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000BE398u); } /* indirect call */
    }

loc_000BE39E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C62A4) = ebx;
    POP32(esp, esi);

loc_000BE3A8: ;
    ecx = MEM32(0x3C629C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE3E3; /* je: equal / zero */

loc_000BE3B2: ;
    eax = MEM32(0x3C62A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE3CD; /* je: equal / zero */

loc_000BE3BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BE3C1u); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_000BE3C1: ;
    ecx = MEM32(0x3C629C);
    MEM32(0x3C62A0) = ebx;

loc_000BE3CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE3E3; /* je: equal / zero */

loc_000BE3D1: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4F7410);
    PUSH32(esp, 0x000BE3DDu); RECOMP_ABI_CALL(0x001C1890u, sub_001C1890); /* call 0x001C1890 */

loc_000BE3DD: ;
    MEM32(0x3C629C) = ebx;

loc_000BE3E3: ;
    ecx = MEM32(0x3C6294);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE41E; /* je: equal / zero */

loc_000BE3ED: ;
    eax = MEM32(0x3C6298);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE408; /* je: equal / zero */

loc_000BE3F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BE3FCu); RECOMP_ABI_CALL(0x001C1AD0u, sub_001C1AD0); /* call 0x001C1AD0 */

loc_000BE3FC: ;
    ecx = MEM32(0x3C6294);
    MEM32(0x3C6298) = ebx;

loc_000BE408: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE41E; /* je: equal / zero */

loc_000BE40C: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x4F7410);
    PUSH32(esp, 0x000BE418u); RECOMP_ABI_CALL(0x001C1890u, sub_001C1890); /* call 0x001C1890 */

loc_000BE418: ;
    MEM32(0x3C6294) = ebx;

loc_000BE41E: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BE420
 * Original: 0x000BE420 - 0x000BE748 (808 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE420(void)
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

loc_000BE420: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x8C));
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(0x3C628C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x373664)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x373668)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm4 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000BE524; /* jnp: not parity */

loc_000BE4FA: ;
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 0xC); /* divss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_000BE524: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm4.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE59Bu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_000BE59B: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE5A9u); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_000BE5A9: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    xmm2 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3210B0)); /* fmul dword ptr [0x3210b0] */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3210B0); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000BE66B; /* jnp: not parity */

loc_000BE63B: ;
    xmm2 = xmm3; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 0xC); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_000BE66B: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000BE714; /* jnp: not parity */

loc_000BE6DF: ;
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 0xC); /* divss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_000BE714: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE722u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_000BE722: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE730u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_000BE730: ;
    ecx = MEM32(esi + 0xA0);
    edx = MEM32(ecx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x000BE743u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE73Du); } /* indirect call */
    }

loc_000BE743: ;
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
 * sub_000BE750
 * Original: 0x000BE750 - 0x000BE91B (459 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE750(void)
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

loc_000BE750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE7E0; /* je: equal / zero */

loc_000BE763: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(eax + 0x60);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x80) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x84) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x88) = eax;
    eax = MEM32(ecx + 0xE4);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x84)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x64); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x80)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x68); /* subss */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3C6350); /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000BE7FC; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3C6350)) */

loc_000BE7E0: ;
    esi = MEM32(esi + 0xA0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE914; /* je: equal / zero */

loc_000BE7EE: ;
    MEM8(esi + 0x24C) = 0;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000BE7FC: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE803u); RECOMP_ABI_CALL(0x000BDC60u, sub_000BDC60); /* call 0x000BDC60 */

loc_000BE803: ;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BE914; /* je: equal / zero */

loc_000BE811: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE818u); RECOMP_ABI_CALL(0x000BE420u, sub_000BE420); /* call 0x000BE420 */

loc_000BE818: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x000BE823u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BE81Du); } /* indirect call */
    }

loc_000BE823: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3C6354); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3C6358); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000BE85F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000BE85A: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000BE867;

loc_000BE85F: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000BE867; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000BE864: ;
    xmm0 = xmm2; /* movaps */

loc_000BE867: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x37367C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x3116CC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000BE89E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000BE88A: ;
    eax = MEM32(esi + 0xA0);
    MEM8(eax + 0x24C) = 0;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000BE89E: ;
    ecx = MEM32(esi + 0xA0);
    xmm0 = XMM_SCALAR(MEMF(0x37366C)); /* movss */
    MEMF(ecx + 0x23C) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0xA0);
    xmm0 = XMM_SCALAR(MEMF(0x373670)); /* movss */
    MEMF(edx + 0x240) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0xA0);
    xmm0 = XMM_SCALAR(MEMF(0x373680)); /* movss */
    MEMF(ecx + 0x234) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x373684)); /* movss */
    MEMF(ecx + 0x238) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BE8F5u); RECOMP_ABI_CALL(0x00193FC0u, sub_00193FC0); /* call 0x00193FC0 */

loc_000BE8F5: ;
    eax = MEM32(esi + 0xA0);
    ecx = MEM32(esi + 0x9C);
    MEM32(eax + 0x244) = ecx;
    edx = MEM32(esi + 0xA0);
    MEM8(edx + 0x24C) = 1;

loc_000BE914: ;
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
 * sub_000BE920
 * Original: 0x000BE920 - 0x000BE970 (80 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE920: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x311670;
    if (CMP_EQ(_fa, _fb)) goto loc_000BE953; /* je: equal / zero */

loc_000BE933: ;
    MEM8(eax + 0x24C) = 0;
    eax = MEM32(esi + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BE946u); RECOMP_ABI_CALL(0x00193C10u, sub_00193C10); /* call 0x00193C10 */

loc_000BE946: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = 0;

loc_000BE953: ;
    ecx = esi;
    PUSH32(esp, 0x000BE95Au); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000BE95A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BE96A; /* je: equal / zero */

loc_000BE961: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BE967u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000BE967: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BE96A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BE990
 * Original: 0x000BE990 - 0x000BE991 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE990(void)
{

loc_000BE990: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BE9A0
 * Original: 0x000BE9A0 - 0x000BE9A9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BE9A0: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0018D480(); return; /* tail jmp 0x0018D480 */

}

/**
 * sub_000BE9B0
 * Original: 0x000BE9B0 - 0x000BE9CC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE9B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BE9B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3C63F4) = eax;
    MEM32(0x3C63F8) = eax;
    MEM32(0x3C63FC) = eax;
    MEM32(0x3C6400) = eax;
    MEM32(0x3C6404) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000BE9D0
 * Original: 0x000BE9D0 - 0x000BE9E0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BE9D0(void)
{

loc_000BE9D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx * 4 + 0x3C63F4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000BEA10
 * Original: 0x000BEA10 - 0x000BEACB (187 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEA10(void)
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

loc_000BEA10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000BEA25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BEA22u); } /* indirect call */
    }

loc_000BEA25: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BEA2Cu); RECOMP_ABI_CALL(0x0018D2D0u, sub_0018D2D0); /* call 0x0018D2D0 */

loc_000BEA2C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_000BEA30: ;
    eax = MEM32(esi * 4 + 0x3C63F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BEAAB; /* je: equal / zero */

loc_000BEA3B: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BEA44u); RECOMP_ABI_CALL(0x0018D280u, sub_0018D280); /* call 0x0018D280 */

loc_000BEA44: ;
    ecx = MEM32(esi * 4 + 0x3C63F4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BEA50u); RECOMP_ABI_CALL(0x000E7260u, sub_000E7260); /* call 0x000E7260 */

loc_000BEA50: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi * 4 + 0x3C63F4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BEA65u); RECOMP_ABI_CALL(0x000E7250u, sub_000E7250); /* call 0x000E7250 */

loc_000BEA65: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BEA77u); RECOMP_ABI_CALL(0x0018E390u, sub_0018E390); /* call 0x0018E390 */

loc_000BEA77: ;
    ecx = MEM32(esi * 4 + 0x3C63F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x198); PUSH32(esp, 0x000BEA88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BEA82u); } /* indirect call */
    }

loc_000BEA88: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BEA91u); RECOMP_ABI_CALL(0x0018D6B0u, sub_0018D6B0); /* call 0x0018D6B0 */

loc_000BEA91: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BEA98u); RECOMP_ABI_CALL(0x0018DDF0u, sub_0018DDF0); /* call 0x0018DDF0 */

loc_000BEA98: ;
    eax = MEM32(esi * 4 + 0x3C63F4);
    ecx = MEM32(eax + 0xF0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BEAABu); RECOMP_ABI_CALL(0x00133960u, sub_00133960); /* call 0x00133960 */

loc_000BEAAB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BEA30; /* jl: less (signed <) */

loc_000BEAB5: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BEABCu); RECOMP_ABI_CALL(0x0018D320u, sub_0018D320); /* call 0x0018D320 */

loc_000BEABC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000BEAC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000BEAC2u); } /* indirect call */
    }

loc_000BEAC5: ;
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
 * sub_000BEAD0
 * Original: 0x000BEAD0 - 0x000BEB07 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEAD0(void)
{

loc_000BEAD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x000BEADCu); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000BEADC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    ecx = esi;
    MEM32(eax + 0x58) = 0xBEA10;
    PUSH32(esp, 0x000BEAEDu); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000BEAED: ;
    ecx = esi;
    PUSH32(esp, 0x000BEAF4u); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000BEAF4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    ecx = esi;
    MEM32(eax + 0x58) = 0xBE9A0;
    PUSH32(esp, 0x000BEB05u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000BEB05: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BEB10
 * Original: 0x000BEB10 - 0x000BEB62 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEB10: ;
    eax = MEM32(0x3C6408);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEB60; /* jne: not equal / not zero */

loc_000BEB1C: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3116D0);
    PUSH32(esp, 0x000BEB2Du); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000BEB2D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BEB59; /* je: equal / zero */

loc_000BEB34: ;
    MEM32(0x3C63F4) = esi;
    MEM32(0x3C63F8) = esi;
    MEM32(0x3C63FC) = esi;
    MEM32(0x3C6400) = esi;
    MEM32(0x3C6404) = esi;
    MEM32(0x3C6408) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BEB59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3C6408) = eax;

loc_000BEB60: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BEB70
 * Original: 0x000BEB70 - 0x000BEB76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB70(void)
{

loc_000BEB70: ;
    eax = 0x3C640C;
    esp += 4; return; /* ret */

}

/**
 * sub_000BEB80
 * Original: 0x000BEB80 - 0x000BEB89 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB80(void)
{

loc_000BEB80: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000BEB90
 * Original: 0x000BEB90 - 0x000BEBBC (44 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEB90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(ecx) = edi;
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BEBB7; /* jle: less or equal (signed <=) */

loc_000BEB9F: ;
    PUSH32(esp, esi);
    esi = edi + 8;

loc_000BEBA3: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BEBADu); RECOMP_ABI_CALL(0x001D0080u, sub_001D0080); /* call 0x001D0080 */

loc_000BEBAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BEBA3; /* jne: not equal / not zero */

loc_000BEBB6: ;
    POP32(esp, esi);

loc_000BEBB7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BEBC0
 * Original: 0x000BEBC0 - 0x000BEBF4 (52 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BEBC0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BEBEA; /* jle: less or equal (signed <=) */

loc_000BEBCE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 8;
    ebx = eax;

loc_000BEBD5: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BEBDFu); RECOMP_ABI_CALL(0x001D0170u, sub_001D0170); /* call 0x001D0170 */

loc_000BEBDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BEBD5; /* jne: not equal / not zero */

loc_000BEBE8: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000BEBEA: ;
    POP32(esp, edi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000BEC00
 * Original: 0x000BEC00 - 0x000BEC1B (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BEC00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000BEC16; /* jbe: below or equal (unsigned <=) */

loc_000BEC12: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_000BEC16: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BEC20
 * Original: 0x000BEC20 - 0x000BEC2A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEC20(void)
{

loc_000BEC20: ;
    eax = MEM32(esp + 4);
    MEM32(0x3C6410) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000BEC30
 * Original: 0x000BEC30 - 0x000BEC5C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEC30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEC30: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x18) = LO8(eax);
    MEM8(ecx + 0x19) = LO8(eax);
    MEM8(ecx + 0x1A) = LO8(eax);
    MEM8(ecx + 0x1B) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000BEC60
 * Original: 0x000BEC60 - 0x000BECAE (78 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEC60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEC60: ;
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
 * sub_000BECB0
 * Original: 0x000BECB0 - 0x000BED0E (94 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BECB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BECB0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    eax = MEM32(esp + 0x14);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    edx = MEM32(esp);
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
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
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BED10
 * Original: 0x000BED10 - 0x000BED6F (95 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BED10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BED10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    eax = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x14); /* mulss */
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp);
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BED70
 * Original: 0x000BED70 - 0x000BEDC1 (81 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BED70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BED70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
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
 * sub_000BEDD0
 * Original: 0x000BEDD0 - 0x000BEDD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEDD0(void)
{

loc_000BEDD0: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000BEDE0
 * Original: 0x000BEDE0 - 0x000BEE10 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEDE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x18) = LO8(ecx);
    MEM8(eax + 0x19) = LO8(ecx);
    MEM8(eax + 0x1A) = LO8(ecx);
    MEM8(eax + 0x1B) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BEE30
 * Original: 0x000BEE30 - 0x000BEE4D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEE30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEE30: ;
    eax = MEM32(0x3C641C);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, 0xBEC00);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BEE49u); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_000BEE49: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BEE50
 * Original: 0x000BEE50 - 0x000BEE51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEE50(void)
{

loc_000BEE50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BEE60
 * Original: 0x000BEE60 - 0x000BEE83 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEE60: ;
    eax = MEM32(0x3C641C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BEE82; /* je: equal / zero */

loc_000BEE69: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BEE72u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000BEE72: ;
    ecx = MEM32(0x3C641C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = 0;

loc_000BEE82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BEE90
 * Original: 0x000BEE90 - 0x000BEE93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEE90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEE90: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BEEA0
 * Original: 0x000BEEA0 - 0x000BEEA5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEEA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEEA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BEEB0
 * Original: 0x000BEEB0 - 0x000BEEB5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEEB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BEEC0
 * Original: 0x000BEEC0 - 0x000BEEF7 (55 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEEC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEEC0: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx) = 0;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx + 4) = 0;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 4);
    edx = MEM32(esp + 8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx + 8) = edx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BEF00
 * Original: 0x000BEF00 - 0x000BEF06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEF00: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BEF10
 * Original: 0x000BEF10 - 0x000BEF57 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEF10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, 0xBEC00);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x000BEF36u); RECOMP_ABI_CALL(0x002BECF0u, sub_002BECF0); /* call 0x002BECF0 */

loc_000BEF36: ;
    esi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BEF4D; /* jne: not equal / not zero */

loc_000BEF3F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3116FC);
    PUSH32(esp, 0x000BEF4Au); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000BEF4A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BEF4D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BEF60
 * Original: 0x000BEF60 - 0x000BEF7D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEF60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEF60: ;
    eax = MEM32(0x3C641C);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, 0xBEC00);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BEF79u); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_000BEF79: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BEF80
 * Original: 0x000BEF80 - 0x000BEF81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEF80(void)
{

loc_000BEF80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BEF90
 * Original: 0x000BEF90 - 0x000BEFB3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEF90: ;
    eax = MEM32(0x3C641C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BEFB2; /* je: equal / zero */

loc_000BEF99: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BEFA2u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000BEFA2: ;
    ecx = MEM32(0x3C641C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = 0;

loc_000BEFB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000BEFC0
 * Original: 0x000BEFC0 - 0x000BF00D (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BEFC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3C641C);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0xBEC00);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x000BEFEAu); RECOMP_ABI_CALL(0x002BECF0u, sub_002BECF0); /* call 0x002BECF0 */

loc_000BEFEA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF006; /* jne: not equal / not zero */

loc_000BEFF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3116FC);
    PUSH32(esp, 0x000BEFFCu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000BEFFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000BF006: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BF010
 * Original: 0x000BF010 - 0x000BF077 (103 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BF010: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF059; /* jne: not equal / not zero */

loc_000BF01A: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF026; /* je: equal / zero */

loc_000BF024: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF026: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000BF030u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000BF02Au); } /* indirect call */
    }

loc_000BF030: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF041; /* je: equal / zero */

loc_000BF037: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x000BF03Fu); RECOMP_ABI_CALL(0x001CDD00u, sub_001CDD00); /* call 0x001CDD00 */

loc_000BF03F: ;
    goto loc_000BF043;

loc_000BF041: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BF043: ;
    MEM32(esi + 4) = eax;
    MEM8(esi + 0x18) = 1;
    eax = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM32(esi + 8) = eax;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 6);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, edi);

loc_000BF059: ;
    eax = MEM32(esi + 4);
    ecx = 3;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM8(esi + 0x1A) = 1;
    MEM8(esi + 0x1B) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BF080
 * Original: 0x000BF080 - 0x000BF09E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BF080: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ecx + 3));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 1));
    SET_LO8(edx, MEM8(ecx));
    ecx = ZX8(MEM8(ecx + 2));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BF0A0
 * Original: 0x000BF0A0 - 0x000BF0BF (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BF0A0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ecx + 0x17));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x15));
    SET_LO8(edx, MEM8(ecx + 0x14));
    ecx = ZX8(MEM8(ecx + 0x16));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BF0C0
 * Original: 0x000BF0C0 - 0x000BF608 (1352 bytes, 316 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF0C0(void)
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

loc_000BF0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x38DC5C)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(0x3C6414);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x38DC58)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF0F8u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000BF0F8: ;
    ecx = MEM32(0x3C6414);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF105u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000BF105: ;
    SET_LO8(eax, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF13E; /* je: equal / zero */

loc_000BF117: ;
    fp_push(MEMF(0x3727D0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC98)); /* fadd dword ptr [0x38dc98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF137u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF137: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF13E: ;
    SET_LO8(eax, MEM8(esi + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF177; /* je: equal / zero */

loc_000BF14A: ;
    fp_push(MEMF(0x3727CC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC94)); /* fadd dword ptr [0x38dc94] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF16Au); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF16A: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF177: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x40) = ecx;
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x34) = eax;
    SET_LO16(eax, MEM16(ebp + 0x12));
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x3C) = edx;
    edx = ZX8(LO8(ecx));
    edi = ZX8(HI8(eax));
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(HI8(ecx));
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(LO8(eax));
    eax = esp + 0x30;
    PUSH32(esp, eax);
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C6414);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF24Au); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BF24A: ;
    SET_LO8(eax, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF283; /* je: equal / zero */

loc_000BF25C: ;
    fp_push(MEMF(0x3727D0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC98)); /* fadd dword ptr [0x38dc98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF27Cu); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF27C: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF283: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 8); /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF2CE; /* je: equal / zero */

loc_000BF2A0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3727CC)); /* fmul dword ptr [0x3727cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC94)); /* fadd dword ptr [0x38dc94] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF2C1u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF2C1: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF2CE: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3210B0); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = esp + 0x40;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x50) = ecx;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C6414);
    MEM32(esp + 0x28) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF37Cu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BF37C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0xC); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF3C7; /* je: equal / zero */

loc_000BF399: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3727D0)); /* fmul dword ptr [0x3727d0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC98)); /* fadd dword ptr [0x38dc98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF3BAu); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF3BA: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF3C7: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esi + 8); /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebp + 8); /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF418; /* je: equal / zero */

loc_000BF3E4: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3727CC)); /* fmul dword ptr [0x3727cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC94)); /* fadd dword ptr [0x38dc94] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF405u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF405: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF418: ;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C6414);
    MEM32(esp + 0x4C) = edx;
    edx = esp + 0x20;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF4B8u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BF4B8: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0xC); /* cvtsi2ss */
    SET_LO8(eax, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0xC); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF503; /* je: equal / zero */

loc_000BF4D5: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3727D0)); /* fmul dword ptr [0x3727d0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC98)); /* fadd dword ptr [0x38dc98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF4F6u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF4F6: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF503: ;
    SET_LO8(eax, MEM8(esi + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF542; /* je: equal / zero */

loc_000BF50F: ;
    fp_push(MEMF(0x3727CC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC94)); /* fadd dword ptr [0x38dc94] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF52Fu); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF52F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF542: ;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3210B0); /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x30) = ecx;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x48) = ecx;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEM32(esp + 0x50) = edx;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C6414);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF5EAu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BF5EA: ;
    ecx = MEM32(0x3C6414);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF5F5u); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000BF5F5: ;
    ecx = MEM32(0x3C6414);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF600u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000BF600: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000BF610
 * Original: 0x000BF610 - 0x000BF669 (89 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF610(void)
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

loc_000BF610: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(0x3036F0)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000BF666; /* jbe: below or equal (unsigned <=) */

loc_000BF624: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(0x3036F0)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000BF666; /* jbe: below or equal (unsigned <=) */

loc_000BF635: ;
    fp_push((double)SMEM32(0x38DC64)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(eax + 0x20) - fp_top()); /* fsubr dword ptr [eax + 0x20] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(0x3036F0)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000BF666; /* jbe: below or equal (unsigned <=) */

loc_000BF64C: ;
    fp_push((double)SMEM32(0x38DC60)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(eax + 0x24) - fp_top()); /* fsubr dword ptr [eax + 0x24] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(0x3036F0)); /* fld double */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_000BF666; /* jbe: below or equal (unsigned <=) */

loc_000BF663: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000BF666: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BF670
 * Original: 0x000BF670 - 0x000BF8F8 (648 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF670(void)
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

loc_000BF670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    ecx = MEM32(0x3C6414);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF68Du); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000BF68D: ;
    ecx = MEM32(0x3C6414);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF69Au); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000BF69A: ;
    SET_LO8(eax, MEM8(edi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000BF6AF; /* jne: not equal / not zero */

loc_000BF6A4: ;
    SET_LO8(eax, MEM8(edi + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF819; /* je: equal / zero */

loc_000BF6AF: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF6B5u); RECOMP_ABI_CALL(0x000BF610u, sub_000BF610); /* call 0x000BF610 */

loc_000BF6B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BF819; /* jne: not equal / not zero */

loc_000BF6C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    esi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    /* nop */

loc_000BF6E0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 8);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, MEM8(edi + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BF73A; /* je: equal / zero */

loc_000BF70C: ;
    fp_push(MEMF(0x3727CC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC94)); /* fadd dword ptr [0x38dc94] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF72Du); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF72D: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF73A: ;
    SET_LO8(eax, MEM8(edi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BF781; /* je: equal / zero */

loc_000BF74D: ;
    fp_push(MEMF(0x3727D0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC98)); /* fadd dword ptr [0x38dc98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF76Eu); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF76E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF781: ;
    eax = MEM32(0x3C3580);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x40); /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x44); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + ebx * 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x10); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + ebx * 8 + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x14); /* mulss */
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x3C) = edx;
    edx = esp + 0x38;
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, esi);
    eax = esp + 0x20;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(0x3C6414);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF7FCu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BF7FC: ;
    edx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000BF6E0; /* jl: less (signed <) */

loc_000BF814: ;
    goto loc_000BF8D9;

loc_000BF819: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    esi = ecx;
    ecx = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    goto loc_000BF840;

    /* nop */

loc_000BF840: ;
    edx = MEM32(0x3C3580);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x40); /* subss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = MEM32(0x3C3580);
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x44); /* subss */
    eax = MEM32(ebp + 0x10);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + ebx * 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x10); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + ebx * 8 + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x14); /* mulss */
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x3C) = edx;
    edx = esp + 0x38;
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(0x3C6414);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF8C1u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BF8C1: ;
    edx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000BF840; /* jl: less (signed <) */

loc_000BF8D9: ;
    ecx = MEM32(0x3C6414);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF8E4u); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000BF8E4: ;
    ecx = MEM32(0x3C6414);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF8EFu); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000BF8EF: ;
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
 * sub_000BF900
 * Original: 0x000BF900 - 0x000BFAF4 (500 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BF900(void)
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

loc_000BF900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFAEB; /* je: equal / zero */

loc_000BF919: ;
    ecx = MEM32(0x3C6414);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF925u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000BF925: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax * 4 + 0x3736B0);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C6414);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF93Bu); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000BF93B: ;
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BFAD5; /* jle: less or equal (signed <=) */

loc_000BF946: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    esi = MEM32(ebp + 8);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000BF970;

    /* nop */
    /* nop */

loc_000BF970: ;
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x2C);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(edi + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BF9EB; /* je: equal / zero */

loc_000BF9BD: ;
    fp_push(MEMF(0x3727CC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC94)); /* fadd dword ptr [0x38dc94] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BF9DEu); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BF9DE: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BF9EB: ;
    SET_LO8(eax, MEM8(edi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFA32; /* je: equal / zero */

loc_000BF9FE: ;
    fp_push(MEMF(0x3727D0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC98)); /* fadd dword ptr [0x38dc98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFA1Fu); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BFA1F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BFA32: ;
    eax = MEM32(0x3C3580);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x40); /* subss */
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x44); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -12)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x10); /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x14); /* mulss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x44) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + 0xB));
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x48) = edx;
    edx = ZX8(MEM8(esi + 9));
    SET_LO8(ecx, MEM8(esi + 8));
    MEM32(esp + 0x4C) = eax;
    eax = ZX8(MEM8(esi + 0xA));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C6414);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFACBu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000BFACB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BF970; /* jne: not equal / not zero */

loc_000BFAD5: ;
    ecx = MEM32(0x3C6414);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFAE0u); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000BFAE0: ;
    ecx = MEM32(0x3C6414);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFAEBu); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000BFAEB: ;
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
 * sub_000BFB00
 * Original: 0x000BFB00 - 0x000BFBE2 (226 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BFB00: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax * 4 + 0x3736B0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3C6418);
    PUSH32(esp, 0x000BFB1Bu); RECOMP_ABI_CALL(0x001D0BF0u, sub_001D0BF0); /* call 0x001D0BF0 */

loc_000BFB1B: ;
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000BFBC7; /* jle: less or equal (signed <=) */

loc_000BFB27: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000BFB50;

    /* nop */
    goto loc_000BFB50;

    /* nop */

loc_000BFB50: ;
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEM32(esp + 0x1C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(esi + 0xB));
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEM32(esp + 0x20) = eax;
    eax = ZX8(MEM8(esi + 9));
    SET_LO8(edx, MEM8(esi + 8));
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    ecx = ZX8(MEM8(esi + 0xA));
    MEM32(esp + 0x28) = ebx;
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(0x3C6418);
    MEM32(esp + 0x38) = edx;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFBBFu); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000BFBBF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BFB50; /* jne: not equal / not zero */

loc_000BFBC5: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000BFBC7: ;
    ecx = MEM32(0x3C6418);
    PUSH32(esp, 0x000BFBD2u); RECOMP_ABI_CALL(0x001D0700u, sub_001D0700); /* call 0x001D0700 */

loc_000BFBD2: ;
    ecx = MEM32(0x3C6418);
    PUSH32(esp, 0x000BFBDDu); RECOMP_ABI_CALL(0x001D0780u, sub_001D0780); /* call 0x001D0780 */

loc_000BFBDD: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000BFBF0
 * Original: 0x000BFBF0 - 0x000BFD45 (341 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFBF0(void)
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

loc_000BFBF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x3C6418);
    PUSH32(esp, 7);
    MEM32(esp + 0x14) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFC0Fu); RECOMP_ABI_CALL(0x001D0BF0u, sub_001D0BF0); /* call 0x001D0BF0 */

loc_000BFC0F: ;
    SET_LO8(eax, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000BFC24; /* jne: not equal / not zero */

loc_000BFC19: ;
    SET_LO8(eax, MEM8(esi + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFD07; /* je: equal / zero */

loc_000BFC24: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFC2Au); RECOMP_ABI_CALL(0x000BF610u, sub_000BF610); /* call 0x000BF610 */

loc_000BFC2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFD07; /* jne: not equal / not zero */

loc_000BFC35: ;
    esi = MEM32(ebp + 0xC);
    ebx = 4;
    /* nop */

loc_000BFC40: ;
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 8);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x1B));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BFC9C; /* je: equal / zero */

loc_000BFC6E: ;
    fp_push(MEMF(0x3727CC)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC94)); /* fadd dword ptr [0x38dc94] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFC8Fu); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BFC8F: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BFC9C: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(ecx + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFCE1; /* je: equal / zero */

loc_000BFCB3: ;
    fp_push(MEMF(0x3727D0)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x38DC98)); /* fadd dword ptr [0x38dc98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2FE9A0)); /* fadd dword ptr [0x2fe9a0] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFCD4u); RECOMP_ABI_CALL(0x002BEC1Du, sub_002BEC1D); /* call 0x002BEC1D */

loc_000BFCD4: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BFCE1: ;
    ecx = MEM32(0x3C6418);
    PUSH32(esp, esi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFCF8u); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000BFCF8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BFC40; /* jne: not equal / not zero */

loc_000BFD05: ;
    goto loc_000BFD26;

loc_000BFD07: ;
    esi = MEM32(ebp + 0xC);
    ebx = 4;
    /* nop */

loc_000BFD10: ;
    ecx = MEM32(0x3C6418);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFD1Du); RECOMP_ABI_CALL(0x001D0CD0u, sub_001D0CD0); /* call 0x001D0CD0 */

loc_000BFD1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BFD10; /* jne: not equal / not zero */

loc_000BFD26: ;
    ecx = MEM32(0x3C6418);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFD31u); RECOMP_ABI_CALL(0x001D0700u, sub_001D0700); /* call 0x001D0700 */

loc_000BFD31: ;
    ecx = MEM32(0x3C6418);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000BFD3Cu); RECOMP_ABI_CALL(0x001D0780u, sub_001D0780); /* call 0x001D0780 */

loc_000BFD3C: ;
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
 * sub_000BFD50
 * Original: 0x000BFD50 - 0x000BFD7F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFD50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BFD50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x311758);
    ecx = esp + 8;
    MEM32(esi) = 0x311730;
    PUSH32(esp, 0x000BFD68u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000BFD68: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BFD6Fu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000BFD6F: ;
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
 * sub_000BFD80
 * Original: 0x000BFD80 - 0x000BFDA8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BFD80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x311730;
    if (CMP_EQ(_fa, _fb)) goto loc_000BFD99; /* je: equal / zero */

loc_000BFD90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BFD96u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000BFD96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BFD99: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x2FF0D4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BFDB0
 * Original: 0x000BFDB0 - 0x000BFE0E (94 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BFDB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x311764);
    PUSH32(esp, 0x000BFDC3u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000BFDC3: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFE01; /* je: equal / zero */

loc_000BFDCC: ;
    PUSH32(esp, 0x311758);
    ecx = esp + 8;
    MEM32(esi) = 0x311730;
    PUSH32(esp, 0x000BFDE0u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000BFDE0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BFDE7u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000BFDE7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(0x3C641C) = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000BFE01: ;
    MEM32(0x3C641C) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BFE10
 * Original: 0x000BFE10 - 0x000BFE4F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFE10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BFE10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3117B0);
    esi = ecx;
    PUSH32(esp, 0x000BFE25u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000BFE25: ;
    eax = MEM32(edi);
    MEM32(esi + 8) = eax;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x311788);
    PUSH32(esp, 0x000BFE3Du); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000BFE3D: ;
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
 * sub_000BFE50
 * Original: 0x000BFE50 - 0x000BFEEB (155 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BFE50: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000BFE81; /* jne: not equal / not zero */

loc_000BFE63: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFEBC; /* je: equal / zero */

loc_000BFE6C: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BFE76u); RECOMP_ABI_CALL(0x000E4FE0u, sub_000E4FE0); /* call 0x000E4FE0 */

loc_000BFE76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000BFE79: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000BFE81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFE79; /* jne: not equal / not zero */

loc_000BFE86: ;
    eax = MEM32(0x3888C0);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFE6C; /* jne: not equal / not zero */

loc_000BFE93: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BFEBC; /* je: equal / zero */

loc_000BFE9C: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BFEA5u); RECOMP_ABI_CALL(0x000E4E90u, sub_000E4E90); /* call 0x000E4E90 */

loc_000BFEA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;

loc_000BFEBC: ;
    edi = MEM32(esp + 0x14);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BFECBu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000BFECB: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esi) = eax;
    PUSH32(esp, 0x000BFEE0u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000BFEE0: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000BFEF0
 * Original: 0x000BFEF0 - 0x000BFF2D (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BFEF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x18) = LO8(eax);
    MEM8(esi + 0x19) = LO8(eax);
    MEM8(esi + 0x1A) = LO8(eax);
    MEM8(esi + 0x1B) = LO8(eax);
    eax = MEM32(esp + 8);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esi) = eax;
    PUSH32(esp, 0x000BFF27u); RECOMP_ABI_CALL(0x000BF010u, sub_000BF010); /* call 0x000BF010 */

loc_000BFF27: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BFF30
 * Original: 0x000BFF30 - 0x000BFFA2 (114 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BFF30: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x18) = LO8(ebx);
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    MEM8(esi + 0x1B) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000BFF9A; /* je: equal / zero */

loc_000BFF68: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BFF70u); RECOMP_ABI_CALL(0x00151FD0u, sub_00151FD0); /* call 0x00151FD0 */

loc_000BFF70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BFF8D; /* jne: not equal / not zero */

loc_000BFF77: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3117F8);
    PUSH32(esp, 0x000BFF82u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000BFF82: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000BFF8D: ;
    ecx = esi;
    MEM32(esi) = eax;
    MEM8(esi + 0x19) = 1;
    PUSH32(esp, 0x000BFF9Au); RECOMP_ABI_CALL(0x000BF010u, sub_000BF010); /* call 0x000BF010 */

loc_000BFF9A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BFFB0
 * Original: 0x000BFFB0 - 0x000C0085 (213 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BFFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BFFB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp;
    eax = eax & 0x8000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = ecx;
    if ((_fas >= 0)) goto loc_000BFFCF; /* jns: not sign (positive) */

loc_000BFFCA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000BFFCF: ;
    if ((eax == 0)) goto loc_000BFFE8; /* je: equal / zero */

loc_000BFFD1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000BFFD3: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0x8000000Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000BFFE4; /* jns: not sign (positive) */

loc_000BFFDF: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000BFFE4: ;
    if ((edx != 0)) goto loc_000BFFD3; /* jne: not equal / not zero */

loc_000BFFE6: ;
    MEM32(ebx) = eax;

loc_000BFFE8: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x18) = 0;
    MEM8(esi + 0x19) = 0;
    MEM8(esi + 0x1A) = 0;
    MEM8(esi + 0x1B) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000C007D; /* je: equal / zero */

loc_000C001D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0028u); RECOMP_ABI_CALL(0x00151F10u, sub_00151F10); /* call 0x00151F10 */

loc_000C0028: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C004E; /* jne: not equal / not zero */

loc_000C0031: ;
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x311828);
    PUSH32(esp, 0x000C0042u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000C0042: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_000C004E: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C0056u); RECOMP_ABI_CALL(0x00151FC0u, sub_00151FC0); /* call 0x00151FC0 */

loc_000C0056: ;
    edx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(ebx) = edx;
    PUSH32(esp, 0x000C0068u); RECOMP_ABI_CALL(0x00151F90u, sub_00151F90); /* call 0x00151F90 */

loc_000C0068: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C0070u); RECOMP_ABI_CALL(0x00151F70u, sub_00151F70); /* call 0x00151F70 */

loc_000C0070: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi) = ebp;
    PUSH32(esp, 0x000C007Cu); RECOMP_ABI_CALL(0x000BF010u, sub_000BF010); /* call 0x000BF010 */

loc_000C007C: ;
    POP32(esp, edi);

loc_000C007D: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000C0090
 * Original: 0x000C0090 - 0x000C00E8 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0090: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM8(esi + 0x18) = LO8(eax);
    MEM8(esi + 0x19) = LO8(eax);
    MEM8(esi + 0x1A) = LO8(eax);
    MEM8(esi + 0x1B) = LO8(eax);
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    ecx = 3;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = ecx;
    ecx = esi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x000C00E2u); RECOMP_ABI_CALL(0x000BF010u, sub_000BF010); /* call 0x000BF010 */

loc_000C00E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C0098
 * Original: 0x000C0098 - 0x000C00E8 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0098(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0098: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM8(esi + 0x18) = LO8(eax);
    MEM8(esi + 0x19) = LO8(eax);
    MEM8(esi + 0x1A) = LO8(eax);
    MEM8(esi + 0x1B) = LO8(eax);
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    ecx = 3;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = ecx;
    ecx = esi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x000C00E2u); RECOMP_ABI_CALL(0x000BF010u, sub_000BF010); /* call 0x000BF010 */

loc_000C00E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C00F0
 * Original: 0x000C00F0 - 0x000C017F (143 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C00F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C00F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x3C641C);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, 0xBEC00);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x18) = LO8(ebx);
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    MEM8(esi + 0x1B) = LO8(ebx);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0x000C0149u); RECOMP_ABI_CALL(0x002BECF0u, sub_002BECF0); /* call 0x002BECF0 */

loc_000C0149: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0169; /* jne: not equal / not zero */

loc_000C0150: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3116FC);
    PUSH32(esp, 0x000C015Bu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000C015B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C0169: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000C0174u); RECOMP_ABI_CALL(0x000BF010u, sub_000BF010); /* call 0x000BF010 */

loc_000C0174: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C0180
 * Original: 0x000C0180 - 0x000C01CB (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0180: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C01AC; /* je: equal / zero */

loc_000C018B: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C01A5; /* je: equal / zero */

loc_000C0192: ;
    ecx = edi;
    PUSH32(esp, 0x000C0199u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_000C0199: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000C01A2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C019Cu); } /* indirect call */
    }

loc_000C01A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C01A5: ;
    MEM32(esi + 4) = 0;

loc_000C01AC: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C01C8; /* je: equal / zero */

loc_000C01B2: ;
    SET_LO8(ecx, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C01C2; /* je: equal / zero */

loc_000C01B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C01BFu); RECOMP_ABI_CALL(0x00152060u, sub_00152060); /* call 0x00152060 */

loc_000C01BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C01C2: ;
    MEM32(esi) = 0;

loc_000C01C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C01D0
 * Original: 0x000C01D0 - 0x000C02B5 (229 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C01D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C01D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM32(0x3C6410) = eax;
    PUSH32(esp, 0x000C01DFu); RECOMP_ABI_CALL(0x000BFDB0u, sub_000BFDB0); /* call 0x000BFDB0 */

loc_000C01DF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB0);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000C01ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C01E6u); } /* indirect call */
    }

loc_000C01EC: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0200; /* je: equal / zero */

loc_000C01F5: ;
    ecx = esi;
    PUSH32(esp, 0x000C01FCu); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_000C01FC: ;
    ecx = esi;
    goto loc_000C0202;

loc_000C0200: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C0202: ;
    MEM32(0x3C6414) = ecx;
    PUSH32(esp, 0x000C020Du); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_000C020D: ;
    esi = MEM32(0x3C6414);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000C021Fu); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000C021F: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000C0228u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000C0228: ;
    PUSH32(esp, 0x207);
    ecx = esi;
    PUSH32(esp, 0x000C0234u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000C0234: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000C023Du); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_000C023D: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000C0246u); RECOMP_ABI_CALL(0x001CF1C0u, sub_001CF1C0); /* call 0x001CF1C0 */

loc_000C0246: ;
    PUSH32(esp, 0x207);
    ecx = esi;
    PUSH32(esp, 0x000C0252u); RECOMP_ABI_CALL(0x001CF200u, sub_001CF200); /* call 0x001CF200 */

loc_000C0252: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xAC);
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000C025Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C0259u); } /* indirect call */
    }

loc_000C025F: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0273; /* je: equal / zero */

loc_000C0268: ;
    ecx = esi;
    PUSH32(esp, 0x000C026Fu); RECOMP_ABI_CALL(0x001D05C0u, sub_001D05C0); /* call 0x001D05C0 */

loc_000C026F: ;
    ecx = esi;
    goto loc_000C0275;

loc_000C0273: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C0275: ;
    MEM32(0x3C6418) = ecx;
    PUSH32(esp, 0x000C0280u); RECOMP_ABI_CALL(0x001D0630u, sub_001D0630); /* call 0x001D0630 */

loc_000C0280: ;
    esi = MEM32(0x3C6418);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000C0292u); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000C0292: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000C029Bu); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000C029B: ;
    PUSH32(esp, 0x207);
    ecx = esi;
    PUSH32(esp, 0x000C02A7u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000C02A7: ;
    PUSH32(esp, 0x207);
    ecx = esi;
    PUSH32(esp, 0x000C02B3u); RECOMP_ABI_CALL(0x001CF200u, sub_001CF200); /* call 0x001CF200 */

loc_000C02B3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C02C0
 * Original: 0x000C02C0 - 0x000C032F (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C02C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C02C0: ;
    ecx = MEM32(0x3C6418);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C02E4; /* je: equal / zero */

loc_000C02D0: ;
    PUSH32(esp, 0x000C02D5u); RECOMP_ABI_CALL(0x001D0BA0u, sub_001D0BA0); /* call 0x001D0BA0 */

loc_000C02D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xAC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000C02E1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C02DBu); } /* indirect call */
    }

loc_000C02E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C02E4: ;
    ecx = MEM32(0x3C6414);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C0304; /* je: equal / zero */

loc_000C02F0: ;
    PUSH32(esp, 0x000C02F5u); RECOMP_ABI_CALL(0x001D0960u, sub_001D0960); /* call 0x001D0960 */

loc_000C02F5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000C0301u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C02FBu); } /* indirect call */
    }

loc_000C0301: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C0304: ;
    ecx = MEM32(0x3C641C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x3C6418) = edi;
    MEM32(0x3C6414) = edi;
    MEM32(0x3C6410) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000C0326; /* je: equal / zero */

loc_000C0320: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C0326u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C0324u); } /* indirect call */
    }

loc_000C0326: ;
    MEM32(0x3C641C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0330
 * Original: 0x000C0330 - 0x000C04C5 (405 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0330: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0xC);
    edx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000C034Bu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000C034B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF470A0D2u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF470A0D2u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C041C; /* jg: greater (signed >) */

loc_000C0356: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000C040B; /* je: equal / zero */

loc_000C035C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8297F4D9u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8297F4D9u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C03DC; /* je: equal / zero */

loc_000C0363: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB615F668u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB615F668u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0388; /* je: equal / zero */

loc_000C036A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDE1CA0B8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDE1CA0B8u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C042A; /* jne: not equal / not zero */

loc_000C0375: ;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000C0382u); RECOMP_ABI_CALL(0x000BFE50u, sub_000BFE50); /* call 0x000BFE50 */

loc_000C0382: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000C0388: ;
    eax = MEM32(0x3888C0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C04B6; /* jne: not equal / not zero */

loc_000C039C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C03B4; /* je: equal / zero */

loc_000C03A0: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000C03A9u); RECOMP_ABI_CALL(0x000E4E90u, sub_000E4E90); /* call 0x000E4E90 */

loc_000C03A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 4) = ebx;

loc_000C03B4: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C03BFu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000C03BF: ;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, ebx);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000C03D3u); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000C03D3: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000C03DC: ;
    ecx = MEM32(0x3888C0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C04B6; /* jne: not equal / not zero */

loc_000C03F1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0451; /* je: equal / zero */

loc_000C03F5: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C03FEu); RECOMP_ABI_CALL(0x000E4E90u, sub_000E4E90); /* call 0x000E4E90 */

loc_000C03FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 4) = ebx;
    goto loc_000C0451;

loc_000C040B: ;
    edx = MEM32(0x3888C0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 8 (32-bit) */
    goto loc_000C0474;

loc_000C041C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2ACF93CB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2ACF93CB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0465; /* je: equal / zero */

loc_000C0423: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2CAD992E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2CAD992E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0445; /* je: equal / zero */

loc_000C042A: ;
    ecx = edi;
    PUSH32(esp, 0x000C0431u); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000C0431: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31076C);
    PUSH32(esp, 0x000C043Cu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000C043C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000C0445: ;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000C04B6; /* jne: not equal / not zero */

loc_000C0451: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C045Cu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000C045C: ;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 4) = ecx;
    goto loc_000C04A0;

loc_000C0465: ;
    edx = MEM32(0x3888C0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 7 (32-bit) */

loc_000C0474: ;
    if (CMP_NE(_fa, _fb)) goto loc_000C04B6; /* jne: not equal / not zero */

loc_000C0476: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C048E; /* je: equal / zero */

loc_000C047A: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0483u); RECOMP_ABI_CALL(0x000E4E90u, sub_000E4E90); /* call 0x000E4E90 */

loc_000C0483: ;
    MEM32(esi + 4) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_000C048E: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C0499u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000C0499: ;
    edx = MEM32(esp + 0x20);
    MEM32(esi + 4) = edx;

loc_000C04A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, ebx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x000C04ADu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000C04AD: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000C04B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C04BCu); RECOMP_ABI_CALL(0x000E4FE0u, sub_000E4FE0); /* call 0x000E4FE0 */

loc_000C04BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C04D0
 * Original: 0x000C04D0 - 0x000C0542 (114 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C04D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C04D0: ;
    SET_LO8(ecx, MEM8(0x3C643C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000C053C; /* jne: not equal / not zero */

loc_000C04DF: ;
    edx = MEM32(0x3C643C);
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2D6CA0);
    MEM32(0x3C643C) = edx;
    MEM32(0x3C6420) = eax;
    MEM32(0x3C6424) = eax;
    MEM32(0x3C6428) = eax;
    MEM32(0x3C642C) = eax;
    MEMF(0x3C6430) = xmm0.f[0]; /* movss */
    MEMF(0x3C6434) = xmm0.f[0]; /* movss */
    MEM8(0x3C6438) = LO8(eax);
    MEM8(0x3C6439) = LO8(eax);
    MEM8(0x3C643A) = LO8(eax);
    MEM8(0x3C643B) = LO8(eax);
    PUSH32(esp, 0x000C0539u); RECOMP_ABI_CALL(0x002BE30Eu, sub_002BE30E); /* call 0x002BE30E */

loc_000C0539: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C053C: ;
    eax = 0x3C6420;
    esp += 4; return; /* ret */

}

/**
 * sub_000C0550
 * Original: 0x000C0550 - 0x000C058C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0550: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x311730;
    if (CMP_EQ(_fa, _fb)) goto loc_000C0569; /* je: equal / zero */

loc_000C0560: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0566u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000C0566: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C0569: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x2FF0D4;
    if (TEST_Z(_fa, _fb)) goto loc_000C0586; /* je: equal / zero */

loc_000C057D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C0583u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C0583: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C0586: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C0590
 * Original: 0x000C0590 - 0x000C05CE (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0590: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xB0;
    MEM32(esi) = 0x3118B0;
    MEM32(esi + 8) = 0x3118A8;
    MEM32(ecx) = 0x311858;
    PUSH32(esp, 0x000C05B1u); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000C05B1: ;
    ecx = esi;
    PUSH32(esp, 0x000C05B8u); RECOMP_ABI_CALL(0x00130500u, sub_00130500); /* call 0x00130500 */

loc_000C05B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C05C8; /* je: equal / zero */

loc_000C05BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C05C5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C05C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C05C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C05D0
 * Original: 0x000C05D0 - 0x000C05EF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C05D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C05D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x311A10;
    if (TEST_Z(_fa, _fb)) goto loc_000C05E9; /* je: equal / zero */

loc_000C05E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C05E6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C05E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C05E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C05F0
 * Original: 0x000C05F0 - 0x000C0640 (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C05F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C05F0: ;
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
 * sub_000C0670
 * Original: 0x000C0670 - 0x000C06A1 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0670(void)
{

loc_000C0670: ;
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
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C06B0
 * Original: 0x000C06B0 - 0x000C06D9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C06B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C06B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C06D6; /* je: equal / zero */

loc_000C06BA: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = ecx;

loc_000C06D6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C06E0
 * Original: 0x000C06E0 - 0x000C0701 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C06E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C06E0: ;
    ecx = MEM32(0x3C6444);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C06F0; /* je: equal / zero */

loc_000C06EA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C06F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C06EEu); } /* indirect call */
    }

loc_000C06F0: ;
    ecx = MEM32(0x3C6448);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0700; /* je: equal / zero */

loc_000C06FA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000C0700u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C06FEu); } /* indirect call */
    }

loc_000C0700: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C0710
 * Original: 0x000C0710 - 0x000C0728 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0710: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0725; /* je: equal / zero */

loc_000C0718: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_000C0725: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C0730
 * Original: 0x000C0730 - 0x000C0743 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0730: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    ecx = MEM32(0x3C6440);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C0750
 * Original: 0x000C0750 - 0x000C0764 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0750: ;
    edx = MEM32(ecx + 4);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0763; /* je: equal / zero */

loc_000C075A: ;
    SET_LO16(eax, MEM16(edx + 4));
    edx = MEM32(edx);
    MEM32(ecx + 4) = edx;

loc_000C0763: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C0770
 * Original: 0x000C0770 - 0x000C0799 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0770: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(esp + 8));
    eax = SX16(LO16(esi));
    PUSH32(esp, edi);
    edi = MEM32(0x3C6440);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = eax;
    MEM16(eax + 4) = LO16(esi);
    ecx = MEM32(ecx + 4);
    POP32(esp, edi);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C07A0
 * Original: 0x000C07A0 - 0x000C07AA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C07A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000C07A0: ;
    eax = MEM32(ecx + 0x1D4);
    fp_push(MEMF(eax + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C07B0
 * Original: 0x000C07B0 - 0x000C07B7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C07B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C07B0: ;
    eax = MEM32(ecx + eax * 8 + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C07C0
 * Original: 0x000C07C0 - 0x000C081A (90 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C07C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C07C0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0804; /* je: equal / zero */

loc_000C07CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(0x37DB68); PUSH32(esp, 0x000C07DAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C07D4u); } /* indirect call */
    }

loc_000C07DA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C07EB; /* je: equal / zero */

loc_000C07E1: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000C07E9u); RECOMP_ABI_CALL(0x001CDD00u, sub_001CDD00); /* call 0x001CDD00 */

loc_000C07E9: ;
    goto loc_000C07ED;

loc_000C07EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C07ED: ;
    MEM32(edi + 0x18) = eax;
    ecx = 3;
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000C0804: ;
    PUSH32(esp, 0x311A88);
    PUSH32(esp, 0x000C080Eu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000C080E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0820
 * Original: 0x000C0820 - 0x000C0841 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0820: ;
    ecx = MEM32(0x3C6444);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0830; /* je: equal / zero */

loc_000C082A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000C0830u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C082Eu); } /* indirect call */
    }

loc_000C0830: ;
    ecx = MEM32(0x3C6448);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0840; /* je: equal / zero */

loc_000C083A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000C0840u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C083Eu); } /* indirect call */
    }

loc_000C0840: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C0850
 * Original: 0x000C0850 - 0x000C08DC (140 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0850: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C0858u); RECOMP_ABI_CALL(0x0007C570u, sub_0007C570); /* call 0x0007C570 */

loc_000C0858: ;
    eax = MEM32(eax + 0x1FC);
    MEM32(esi + 0x14) = eax;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x311AAC);
    PUSH32(esp, 0x000C0874u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C0874: ;
    MEM32(0x3C6440) = eax;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000C08B5; /* jle: less or equal (signed <=) */

loc_000C0886: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    /* nop */

loc_000C0890: ;
    edx = MEM32(0x3C6440);
    MEM16(ecx + edx + 4) = LO16(eax);
    edx = MEM32(0x3C6440);
    edi = ecx + edx + 0x20;
    MEM32(ecx + edx) = edi;
    edx = MEM32(esi + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C0890; /* jl: less (signed <) */

loc_000C08B4: ;
    POP32(esp, edi);

loc_000C08B5: ;
    edx = MEM32(0x3C6440);
    ecx = eax;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + edx + 4) = LO16(eax);
    eax = MEM32(0x3C6440);
    MEM32(ecx + eax) = 0;
    ecx = MEM32(0x3C6440);
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C08E0
 * Original: 0x000C08E0 - 0x000C093F (95 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C08E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C08E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 0x124;
    PUSH32(esp, 0x000C08EFu); RECOMP_ABI_CALL(0x001D0830u, sub_001D0830); /* call 0x001D0830 */

loc_000C08EF: ;
    esi = edi + 0x128;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000C08FEu); RECOMP_ABI_CALL(0x001CF260u, sub_001CF260); /* call 0x001CF260 */

loc_000C08FE: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000C0907u); RECOMP_ABI_CALL(0x001CF0F0u, sub_001CF0F0); /* call 0x001CF0F0 */

loc_000C0907: ;
    PUSH32(esp, 0x203);
    ecx = esi;
    PUSH32(esp, 0x000C0913u); RECOMP_ABI_CALL(0x001CF0D0u, sub_001CF0D0); /* call 0x001CF0D0 */

loc_000C0913: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000C091Cu); RECOMP_ABI_CALL(0x001CF1E0u, sub_001CF1E0); /* call 0x001CF1E0 */

loc_000C091C: ;
    PUSH32(esp, 0x204);
    ecx = esi;
    PUSH32(esp, 0x000C0928u); RECOMP_ABI_CALL(0x001CF200u, sub_001CF200); /* call 0x001CF200 */

loc_000C0928: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000C0931u); RECOMP_ABI_CALL(0x001CF3D0u, sub_001CF3D0); /* call 0x001CF3D0 */

loc_000C0931: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C0939u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_000C0939: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0940
 * Original: 0x000C0940 - 0x000C098D (77 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0940(void)
{

loc_000C0940: ;
    ecx = MEM32(ecx + 0x1DC);
    eax = MEM32(esp + 4);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 8);
    MEM8(eax + 0x18) = 0;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(ecx);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(ecx);
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000C0990
 * Original: 0x000C0990 - 0x000C0A0E (126 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0990: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000C0999u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_000C0999: ;
    edi = esi + 0xB0;
    ecx = edi;
    PUSH32(esp, 0x000C09A6u); RECOMP_ABI_CALL(0x00131E70u, sub_00131E70); /* call 0x00131E70 */

loc_000C09A6: ;
    MEM32(esi) = 0x311B28;
    MEM32(esi + 8) = 0x311B20;
    MEM32(edi) = 0x311AD0;
    PUSH32(esp, 0xC);
    MEM32(esi + 0x120) = 0;
    PUSH32(esp, 0x000C09CAu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000C09CA: ;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x124;
    MEM32(esi + 0x120) = eax;
    PUSH32(esp, 0x000C09E3u); RECOMP_ABI_CALL(0x001D0810u, sub_001D0810); /* call 0x001D0810 */

loc_000C09E3: ;
    edi = MEM32(esp + 0xC);
    ecx = esi;
    MEM32(esi + 0x1D4) = edi;
    MEM32(esi + 0x1D8) = 0;
    PUSH32(esp, 0x000C09FEu); RECOMP_ABI_CALL(0x000C08E0u, sub_000C08E0); /* call 0x000C08E0 */

loc_000C09FE: ;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x1DC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C0A10
 * Original: 0x000C0A10 - 0x000C0A2A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0A10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(0x3C6440) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C0A30
 * Original: 0x000C0A30 - 0x000C0A98 (104 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0A30: ;
    eax = MEM32(0x3C6440);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C0A4F; /* je: equal / zero */

loc_000C0A40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0A46u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_000C0A46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C6440) = ebp;

loc_000C0A4F: ;
    edi = MEM32(ebx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0A7D; /* je: equal / zero */

loc_000C0A57: ;
    PUSH32(esp, esi);

loc_000C0A58: ;
    esi = MEM32(edi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0A72; /* je: equal / zero */

loc_000C0A5F: ;
    ecx = esi;
    PUSH32(esp, 0x000C0A66u); RECOMP_ABI_CALL(0x001CE560u, sub_001CE560); /* call 0x001CE560 */

loc_000C0A66: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x37DB6C); PUSH32(esp, 0x000C0A6Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000C0A69u); } /* indirect call */
    }

loc_000C0A6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C0A72: ;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0A58; /* jne: not equal / not zero */

loc_000C0A7C: ;
    POP32(esp, esi);

loc_000C0A7D: ;
    eax = MEM32(ebx + 8);
    MEM32(ebx + 8) = ebp;
    MEM32(ebx + 0xC) = ebp;
    POP32(esp, edi);
    MEM32(ebx + 0x10) = ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000C0A97; /* je: equal / zero */

loc_000C0A90: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0A96u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C0A96: ;
    POP32(esp, ecx);

loc_000C0A97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C0AA0
 * Original: 0x000C0AA0 - 0x000C0AC6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x311C88;
    PUSH32(esp, 0x000C0AAEu); RECOMP_ABI_CALL(0x000C0A30u, sub_000C0A30); /* call 0x000C0A30 */

loc_000C0AAE: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0ABE; /* je: equal / zero */

loc_000C0AB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0ABBu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C0ABB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C0ABE: ;
    MEM32(esi) = 0x311A10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0AD0
 * Original: 0x000C0AD0 - 0x000C0B18 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0AD0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0AEB; /* je: equal / zero */

loc_000C0ADB: ;
    eax = MEM32(esp + 8);
    /* nop */

loc_000C0AE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0AF1; /* je: equal / zero */

loc_000C0AE4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0AE0; /* jne: not equal / not zero */

loc_000C0AEB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000C0AF1: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x311C98);
    PUSH32(esp, 0x000C0B05u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C0B05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0AEB; /* je: equal / zero */

loc_000C0B0C: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000C0B14u); RECOMP_ABI_CALL(0x000C0990u, sub_000C0990); /* call 0x000C0990 */

loc_000C0B14: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C0B20
 * Original: 0x000C0B20 - 0x000C0BBF (159 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0B20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3C6444);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0B67; /* jne: not equal / not zero */

loc_000C0B2D: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x311CE0);
    PUSH32(esp, 0x000C0B3Eu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C0B3E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0B61; /* je: equal / zero */

loc_000C0B45: ;
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(0x3C6440) = edi;
    MEM32(0x3C6444) = eax;
    goto loc_000C0B67;

loc_000C0B61: ;
    MEM32(0x3C6444) = edi;

loc_000C0B67: ;
    _fa = (uint32_t)(MEM32(0x3C6448)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3C6448), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0BBC; /* jne: not equal / not zero */

loc_000C0B6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 8);
    PUSH32(esp, 0x311CBC);
    PUSH32(esp, 0x000C0B81u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C0B81: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0BB5; /* je: equal / zero */

loc_000C0B8A: ;
    PUSH32(esp, 0x311A4C);
    ecx = esp + 0xC;
    MEM32(esi) = 0x311A20;
    PUSH32(esp, 0x000C0B9Eu); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_000C0B9E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C0BA5u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_000C0BA5: ;
    MEM32(esi + 4) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3C6448) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C0BB5: ;
    MEM32(0x3C6448) = edi;
    POP32(esp, esi);

loc_000C0BBC: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0BC0
 * Original: 0x000C0BC0 - 0x000C0C09 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0BC0: ;
    eax = MEM32(0x3C6444);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0C07; /* jne: not equal / not zero */

loc_000C0BCC: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x311D04);
    PUSH32(esp, 0x000C0BDDu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C0BDD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0C00; /* je: equal / zero */

loc_000C0BE4: ;
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(0x3C6440) = esi;
    MEM32(0x3C6444) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C0C00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3C6444) = eax;

loc_000C0C07: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0C10
 * Original: 0x000C0C10 - 0x000C0C1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0C10: ;
    ecx = MEM32(0x3C6444);
    g_seh_ebp = ebp; sub_000C0A30(); return; /* tail jmp 0x000C0A30 */

}

/**
 * sub_000C0C20
 * Original: 0x000C0C20 - 0x000C0CE1 (193 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0C20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(0x3C6444);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0C69; /* jne: not equal / not zero */

loc_000C0C30: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x311D04);
    PUSH32(esp, 0x000C0C41u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C0C41: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0C61; /* je: equal / zero */

loc_000C0C48: ;
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(0x3C6440) = esi;
    ecx = eax;
    goto loc_000C0C63;

loc_000C0C61: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C0C63: ;
    MEM32(0x3C6444) = ecx;

loc_000C0C69: ;
    edx = MEM32(ebx + 0x120);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0CAA; /* je: equal / zero */

loc_000C0C75: ;
    PUSH32(esp, ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    /* nop */

loc_000C0C80: ;
    SET_LO16(edx, MEM16(eax + 8));
    ebp = MEM32(0x3C6440);
    edi = MEM32(ecx);
    esi = SX16(LO16(edx));
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = esi;
    MEM16(esi + 4) = LO16(edx);
    edx = MEM32(ecx);
    MEM32(edx) = edi;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x120) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0C80; /* jne: not equal / not zero */

loc_000C0CA8: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000C0CAA: ;
    eax = MEM32(ebx + 0x120);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0CCD; /* je: equal / zero */

loc_000C0CB6: ;
    eax = esi;
    esi = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C0CC0u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C0CC0: ;
    eax = MEM32(ebx + 0x120);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0CB6; /* jne: not equal / not zero */

loc_000C0CCD: ;
    eax = MEM32(ebx + 0x120);
    MEM32(eax) = eax;
    ebx = MEM32(ebx + 0x120);
    POP32(esp, esi);
    MEM32(ebx + 4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0CF0
 * Original: 0x000C0CF0 - 0x000C0DD7 (231 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C0CF0: ;
    eax = MEM32(0x3C6444);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000C0D39; /* jne: not equal / not zero */

loc_000C0CFF: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x311D04);
    PUSH32(esp, 0x000C0D10u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C0D10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0D33; /* je: equal / zero */

loc_000C0D17: ;
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(0x3C6440) = ebx;
    MEM32(0x3C6444) = eax;
    goto loc_000C0D39;

loc_000C0D33: ;
    MEM32(0x3C6444) = ebx;

loc_000C0D39: ;
    _fa = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1D8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0DB4; /* je: equal / zero */

loc_000C0D41: ;
    eax = MEM32(esi + 0x120);
    ecx = MEM32(eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    eax = MEM32(0x3C6440);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(eax + edx + 0x18));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0DD2; /* jne: not equal / not zero */

loc_000C0D60: ;
    ecx = MEM32(esi + 0x1DC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM8(eax + 0x18) = LO8(ebx);
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(ecx);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(ecx);
    POP32(esp, esi);
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_000C0DB4: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x000C0DD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C0DCCu); } /* indirect call */
    }

loc_000C0DD2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000C0DE0
 * Original: 0x000C0DE0 - 0x000C0F63 (387 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C0DE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x3C6444);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000C0E28; /* jne: not equal / not zero */

loc_000C0DF2: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x311D04);
    PUSH32(esp, 0x000C0E03u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C0E03: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0E21; /* je: equal / zero */

loc_000C0E0A: ;
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(0x3C6440) = ebx;
    goto loc_000C0E23;

loc_000C0E21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C0E23: ;
    MEM32(0x3C6444) = eax;

loc_000C0E28: ;
    ecx = MEM32(edi + 0x1D4);
    edx = MEM32(edi + 0x1D8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0E9B; /* jne: not equal / not zero */

loc_000C0E39: ;
    eax = MEM32(edi + 0x120);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    SET_LO16(ebp, MEM16(eax + 8));
    MEM32(edx) = ecx;
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0x000C0E55u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C0E55: ;
    esi = MEM32(edi + 0x120);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000C0E62u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000C0E62: ;
    ecx = eax + 8;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0E6F; /* je: equal / zero */

loc_000C0E6C: ;
    MEM16(ecx) = LO16(ebp);

loc_000C0E6F: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(esi + 4) = eax;
    ecx = MEM32(edi + 0x120);
    edx = MEM32(ecx + 4);
    esi = (uint32_t)(int32_t)SMEM16(edx + 8);
    eax = MEM32(0x3C6440);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C0E9B: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0EB1; /* je: equal / zero */

loc_000C0EA2: ;
    SET_LO16(ebp, MEM16(ecx + 4));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebp), 0xFFFFFFFFu (16-bit) */
    ecx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000C0F20; /* jne: not equal / not zero */

loc_000C0EB1: ;
    ecx = MEM32(edi + 0x120);
    eax = MEM32(ecx);
    esi = edi + 0x120;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0ED0; /* je: equal / zero */

loc_000C0EC5: ;
    eax = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0EC5; /* jne: not equal / not zero */

loc_000C0ECC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C0ED8; /* jne: not equal / not zero */

loc_000C0ED0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C0ED8: ;
    edx = MEM32(esi);
    eax = MEM32(edx);
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 8));
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0x000C0EF6u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C0EF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000C0F05u); RECOMP_ABI_CALL(0x000C18E0u, sub_000C18E0); /* call 0x000C18E0 */

loc_000C0F05: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 8);
    eax = MEM32(0x3C6440);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000C0F20: ;
    ebx = MEM32(0x3C6440);
    esi = SX16(LO16(ebp));
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi + 0x120);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000C0F3Bu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000C0F3B: ;
    ecx = eax + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C0F48; /* je: equal / zero */

loc_000C0F45: ;
    MEM16(ecx) = LO16(ebp);

loc_000C0F48: ;
    ecx = MEM32(ebx + 4);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(ebx + 4) = eax;
    MEM32(edi + 0x1D8) = MEM32(edi + 0x1D8) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x1D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C0F70
 * Original: 0x000C0F70 - 0x000C137E (1038 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C0F70(void)
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

loc_000C0F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x3C6444);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ecx;
    MEM32(esp + 0x14) = edi;
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000C1065; /* jne: not equal / not zero */

loc_000C102B: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x311D04);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C103Cu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C103C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C105F; /* je: equal / zero */

loc_000C1043: ;
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(0x3C6440) = esi;
    MEM32(0x3C6444) = eax;
    goto loc_000C1065;

loc_000C105F: ;
    MEM32(0x3C6444) = esi;

loc_000C1065: ;
    _fa = (uint32_t)(MEM32(edi + 0x1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1D8), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000C1375; /* jl: less (signed <) */

loc_000C1072: ;
    eax = MEM32(edi + 0x120);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C136A; /* je: equal / zero */

loc_000C1082: ;
    ebx = edi + 0x124;
    goto loc_000C1090;

    /* nop */

loc_000C1090: ;
    eax = MEM32(edi + 0x1D4);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C10A9u); RECOMP_ABI_CALL(0x001D0AC0u, sub_001D0AC0); /* call 0x001D0AC0 */

loc_000C10A9: ;
    PUSH32(esp, 6);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C10B2u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000C10B2: ;
    ecx = MEM32(edi + 0x120);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1357; /* je: equal / zero */

loc_000C10C0: ;
    edx = MEM32(0x3C6440);
    goto loc_000C10D0;

loc_000C10C8: ;
    esi = MEM32(esp + 0xC);
    /* nop */

loc_000C10D0: ;
    eax = MEM32(esi);
    edi = esi;
    edi = (uint32_t)(int32_t)SMEM16(edi + 8);
    esi = (uint32_t)(int32_t)SMEM16(eax + 8);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C133D; /* je: equal / zero */

loc_000C10F2: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C134F; /* jne: not equal / not zero */

loc_000C10FD: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C134F; /* jne: not equal / not zero */

loc_000C1108: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000C112E; /* jle: less or equal (signed <=) */

loc_000C1116: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C111Du); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000C111D: ;
    PUSH32(esp, 6);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C1126u); RECOMP_ABI_CALL(0x001D0DB0u, sub_001D0DB0); /* call 0x001D0DB0 */

loc_000C1126: ;
    MEM32(esp + 0x10) = 0;

loc_000C112E: ;
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(0x2FE99C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edx + 0x1DC)); /* fdiv dword ptr [edx + 0x1dc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1C)); /* fmul dword ptr [esi + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31164C)); /* fmul dword ptr [0x31164c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C114Eu); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000C114E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x1C)); /* fmul dword ptr [edi + 0x1c] */
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0x808080;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31164C)); /* fmul dword ptr [0x31164c] */
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C1168u); RECOMP_ABI_CALL(0x002BE320u, sub_002BE320); /* call 0x002BE320 */

loc_000C1168: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    eax = eax | 0x808080;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x40);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x60) = eax;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x4C);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    MEM32(esp + 0x6C) = edx;
    edx = esp + 0x1C;
    MEM32(esp + 0x70) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C11DBu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000C11DB: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x14)); /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x90) = ecx;
    MEM32(esp + 0x94) = edx;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = esp + 0xB0;
    MEM32(esp + 0x98) = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0xA0) = ecx;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C1252u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000C1252: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    edx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    eax = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x74) = eax;
    MEM32(esp + 0x78) = ecx;
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEM32(esp + 0x80) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C12BCu); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000C12BC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    eax = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    ecx = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x80) = eax;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x5C);
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    MEM32(esp + 0x8C) = edx;
    edx = esp + 0x20;
    MEM32(esp + 0x90) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C1333u); RECOMP_ABI_CALL(0x001D0EA0u, sub_001D0EA0); /* call 0x001D0EA0 */

loc_000C1333: ;
    edx = MEM32(0x3C6440);
    eax = MEM32(esp + 0xC);

loc_000C133D: ;
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C10C8; /* jne: not equal / not zero */

loc_000C134F: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0xC);

loc_000C1357: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C135Eu); RECOMP_ABI_CALL(0x001D09B0u, sub_001D09B0); /* call 0x001D09B0 */

loc_000C135E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x120) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C1090; /* jne: not equal / not zero */

loc_000C136A: ;
    ecx = edi + 0x124;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C1375u); RECOMP_ABI_CALL(0x001D0A30u, sub_001D0A30); /* call 0x001D0A30 */

loc_000C1375: ;
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
 * sub_000C1380
 * Original: 0x000C1380 - 0x000C147E (254 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1380(void)
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

loc_000C1380: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0x000C138Fu); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_000C138F: ;
    eax = MEM32(0x3C6444);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C13D0; /* jne: not equal / not zero */

loc_000C139A: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x311D04);
    PUSH32(esp, 0x000C13ABu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C13AB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C13C9; /* je: equal / zero */

loc_000C13B2: ;
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(0x3C6440) = esi;
    goto loc_000C13CB;

loc_000C13C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C13CB: ;
    MEM32(0x3C6444) = eax;

loc_000C13D0: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1DC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    edi = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C1478; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_000C13E7: ;
    ecx = MEM32(ebx + 0x120);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1478; /* je: equal / zero */

loc_000C13F7: ;
    PUSH32(esp, ebp);
    goto loc_000C1400;

    /* nop */

loc_000C1400: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(0x3C6440);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_SCALAR(MEMF(ecx + edx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000C146D; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000C1428: ;
    SET_LO16(ecx, MEM16(eax + 8));
    ebp = MEM32(0x3C6440);
    esi = MEM32(edi + 4);
    edx = SX16(LO16(ecx));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = edx;
    MEM16(edx + 4) = LO16(ecx);
    ecx = MEM32(edi + 4);
    MEM32(ecx) = esi;
    esi = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(ecx) = esi;
    PUSH32(esp, eax);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x000C1459u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C1459: ;
    ecx = MEM32(ebx + 0x1D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi;
    MEM32(ebx + 0x1D8) = ecx;
    goto loc_000C146F;

loc_000C146D: ;
    eax = MEM32(eax);

loc_000C146F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x120) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C1400; /* jne: not equal / not zero */

loc_000C1477: ;
    POP32(esp, ebp);

loc_000C1478: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1480
 * Original: 0x000C1480 - 0x000C1485 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C1480: ;
    g_seh_ebp = ebp; sub_000C0B20(); return; /* tail jmp 0x000C0B20 */

}

/**
 * sub_000C1490
 * Original: 0x000C1490 - 0x000C149B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C1490: ;
    ecx = MEM32(0x3C6444);
    g_seh_ebp = ebp; sub_000C0A30(); return; /* tail jmp 0x000C0A30 */

}

/**
 * sub_000C14A0
 * Original: 0x000C14A0 - 0x000C14E9 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C14A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C14A0: ;
    eax = MEM32(0x3C6444);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C14E7; /* jne: not equal / not zero */

loc_000C14AC: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x311D04);
    PUSH32(esp, 0x000C14BDu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C14BD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C14E0; /* je: equal / zero */

loc_000C14C4: ;
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(0x3C6440) = esi;
    MEM32(0x3C6444) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000C14E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3C6444) = eax;

loc_000C14E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000C14F0
 * Original: 0x000C14F0 - 0x000C154B (91 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C14F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C14F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xB0;
    MEM32(esi) = 0x311B28;
    MEM32(esi + 8) = 0x311B20;
    MEM32(edi) = 0x311AD0;
    PUSH32(esp, 0x000C1512u); RECOMP_ABI_CALL(0x000C0C20u, sub_000C0C20); /* call 0x000C0C20 */

loc_000C1512: ;
    ecx = esi + 0x124;
    PUSH32(esp, 0x000C151Du); RECOMP_ABI_CALL(0x001D0960u, sub_001D0960); /* call 0x001D0960 */

loc_000C151D: ;
    ecx = esi + 0x120;
    PUSH32(esp, 0x000C1528u); RECOMP_ABI_CALL(0x0004FAF0u, sub_0004FAF0); /* call 0x0004FAF0 */

loc_000C1528: ;
    ecx = edi;
    MEM32(esi) = 0x3118B0;
    MEM32(esi + 8) = 0x3118A8;
    MEM32(edi) = 0x311858;
    PUSH32(esp, 0x000C1542u); RECOMP_ABI_CALL(0x00131E20u, sub_00131E20); /* call 0x00131E20 */

loc_000C1542: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_000C1550
 * Original: 0x000C1550 - 0x000C15A6 (86 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1550: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C1558u); RECOMP_ABI_CALL(0x000C0DE0u, sub_000C0DE0); /* call 0x000C0DE0 */

loc_000C1558: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C15A2; /* je: equal / zero */

loc_000C155C: ;
    ecx = MEM32(esi + 0x1DC);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 8);
    MEM8(eax + 0x18) = 0;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    edx = MEM32(ecx);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(ecx);
    MEM32(eax + 0xC) = ecx;
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_000C15A2: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000C15B0
 * Original: 0x000C15B0 - 0x000C1637 (135 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C15B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C15B0: ;
    eax = MEM32(0x3C6444);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000C15F9; /* jne: not equal / not zero */

loc_000C15BF: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x311D04);
    PUSH32(esp, 0x000C15D0u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C15D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C15F3; /* je: equal / zero */

loc_000C15D7: ;
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(0x3C6440) = ebx;
    MEM32(0x3C6444) = eax;
    goto loc_000C15F9;

loc_000C15F3: ;
    MEM32(0x3C6444) = ebx;

loc_000C15F9: ;
    _fa = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1D8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1634; /* je: equal / zero */

loc_000C1601: ;
    eax = MEM32(esi + 0x120);
    ecx = MEM32(eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    eax = MEM32(0x3C6440);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(edx + eax + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax + 0x18), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C1634; /* jne: not equal / not zero */

loc_000C161C: ;
    ecx = esi;
    PUSH32(esp, 0x000C1623u); RECOMP_ABI_CALL(0x000C0DE0u, sub_000C0DE0); /* call 0x000C0DE0 */

loc_000C1623: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1634; /* je: equal / zero */

loc_000C1627: ;
    MEM8(eax + 0x18) = 1;
    ecx = MEM32(esi + 0x1DC);
    MEM32(eax + 0x1C) = ecx;

loc_000C1634: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C1640
 * Original: 0x000C1640 - 0x000C1689 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1640: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x1C) = eax;
    esi = ecx;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi + 8;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = 0x40;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000C167Eu); RECOMP_ABI_CALL(0x000C1A50u, sub_000C1A50); /* call 0x000C1A50 */

loc_000C167E: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C1690
 * Original: 0x000C1690 - 0x000C16A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1690(void)
{

loc_000C1690: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C16A0u); RECOMP_ABI_CALL(0x000C0F70u, sub_000C0F70); /* call 0x000C0F70 */

loc_000C16A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C16B0
 * Original: 0x000C16B0 - 0x000C16DE (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C16B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C16B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x000C16BFu); RECOMP_ABI_CALL(0x0018DE40u, sub_0018DE40); /* call 0x0018DE40 */

loc_000C16BF: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFF50u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFF50u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    ecx = edi;
    MEM32(eax + 0x58) = 0xC1690;
    MEM32(eax + 0x48) = esi;
    PUSH32(esp, 0x000C16D9u); RECOMP_ABI_CALL(0x0018D620u, sub_0018D620); /* call 0x0018D620 */

loc_000C16D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C16E0
 * Original: 0x000C16E0 - 0x000C16E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C16E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C16E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000C0590(); return; /* tail jmp 0x000C0590 */

}

/**
 * sub_000C16F0
 * Original: 0x000C16F0 - 0x000C16FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C16F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C16F0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000C0590(); return; /* tail jmp 0x000C0590 */

}

/**
 * sub_000C1700
 * Original: 0x000C1700 - 0x000C1705 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1700: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1710
 * Original: 0x000C1710 - 0x000C17F6 (230 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1710(void)
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

loc_000C1710: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x000C171Fu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000C171F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F424725) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F424725 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000C1799; /* jg: greater (signed >) */

loc_000C1726: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000C1778; /* je: equal / zero */

loc_000C1728: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C1A452Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8C1A452Fu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1764; /* je: equal / zero */

loc_000C172F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE9915EB8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE9915EB8u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1751; /* je: equal / zero */

loc_000C1736: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF54DE50Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF54DE50Fu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C17A7; /* jne: not equal / not zero */

loc_000C173D: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000C1746u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000C1746: ;
    eax = MEM32(edi + 4);
    POP32(esp, edi);
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000C1751: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000C175Au); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000C175A: ;
    ecx = MEM32(edi + 4);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000C1764: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000C176Du); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000C176D: ;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000C1778: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x000C178Bu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000C178B: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000C1799: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DE73088) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3DE73088 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C17D5; /* je: equal / zero */

loc_000C17A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6EA8B1AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6EA8B1AA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C17C1; /* je: equal / zero */

loc_000C17A7: ;
    ecx = esi;
    PUSH32(esp, 0x000C17AEu); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_000C17AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x311A58);
    PUSH32(esp, 0x000C17B9u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_000C17B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000C17C1: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000C17CAu); RECOMP_ABI_CALL(0x00264440u, sub_00264440); /* call 0x00264440 */

loc_000C17CA: ;
    edx = MEM32(edi + 4);
    POP32(esp, edi);
    MEM32(edx + 0x10) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000C17D5: ;
    eax = MEM32(0x3727C4);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000C17E7u); RECOMP_ABI_CALL(0x00264450u, sub_00264450); /* call 0x00264450 */

loc_000C17E7: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    ecx = MEM32(edi + 4);
    POP32(esp, edi);
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000C1800
 * Original: 0x000C1800 - 0x000C1849 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1800: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000C1848; /* je: equal / zero */

loc_000C1810: ;
    PUSH32(esp, esi);

loc_000C1811: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C183D; /* je: equal / zero */

loc_000C1815: ;
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

loc_000C183D: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C1811; /* jne: not equal / not zero */

loc_000C1847: ;
    POP32(esp, esi);

loc_000C1848: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C1850
 * Original: 0x000C1850 - 0x000C1897 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1850: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_BE(_fa, _fb)) goto loc_000C1896; /* jbe: below or equal (unsigned <=) */

loc_000C185C: ;
    edx = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);

loc_000C1863: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C188F; /* je: equal / zero */

loc_000C1867: ;
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

loc_000C188F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C1863; /* jne: not equal / not zero */

loc_000C1895: ;
    POP32(esp, esi);

loc_000C1896: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C18A0
 * Original: 0x000C18A0 - 0x000C18B6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C18A0(void)
{

loc_000C18A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x000C18ABu); RECOMP_ABI_CALL(0x000C07C0u, sub_000C07C0); /* call 0x000C07C0 */

loc_000C18AB: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C18C0
 * Original: 0x000C18C0 - 0x000C18C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C18C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C18C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000C1B50(); return; /* tail jmp 0x000C1B50 */

}

/**
 * sub_000C18D0
 * Original: 0x000C18D0 - 0x000C18DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C18D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C18D0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000C1B50(); return; /* tail jmp 0x000C1B50 */

}

/**
 * sub_000C18E0
 * Original: 0x000C18E0 - 0x000C190F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C18E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C18E0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000C18EAu); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000C18EA: ;
    ecx = eax + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C18FE; /* je: equal / zero */

loc_000C18F4: ;
    edx = MEM32(esp + 8);
    SET_LO16(edx, MEM16(edx));
    MEM16(ecx) = LO16(edx);

loc_000C18FE: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1910
 * Original: 0x000C1910 - 0x000C1A10 (256 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C1910: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi);
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x24);
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
    MEM32(esp + 0x10) = eax;
    ecx = esp + 0x24;
    if (CMP_B(_fa, _fb)) goto loc_000C1945; /* jb: below (unsigned <) */

loc_000C1941: ;
    ecx = esp + 0x10;

loc_000C1945: ;
    ebx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_000C195D; /* je: equal / zero */

loc_000C194B: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C1956u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_000C1956: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    goto loc_000C195F;

loc_000C195D: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C195F: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C1972u); RECOMP_ABI_CALL(0x000C1800u, sub_000C1800); /* call 0x000C1800 */

loc_000C1972: ;
    esi = eax;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C19B5; /* jne: not equal / not zero */

loc_000C1980: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C19B0; /* je: equal / zero */

loc_000C1984: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esi + 0xC) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(eax + 0x18);
    MEM32(esi + 0x18) = eax;

loc_000C19B0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C19CB;

loc_000C19B5: ;
    edx = MEM32(esp + 0x1C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C19C6u); RECOMP_ABI_CALL(0x000C1850u, sub_000C1850); /* call 0x000C1850 */

loc_000C19C6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_000C19CB: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000C19EC; /* jne: not equal / not zero */

loc_000C19D3: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(esp + 0x18);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000C19E7u); RECOMP_ABI_CALL(0x000C1800u, sub_000C1800); /* call 0x000C1800 */

loc_000C19E7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_000C19EC: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C19FB; /* je: equal / zero */

loc_000C19F2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C19F8u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C19F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C19FB: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebp;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000C1A10
 * Original: 0x000C1A10 - 0x000C1A4A (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x311C88;
    PUSH32(esp, 0x000C1A1Eu); RECOMP_ABI_CALL(0x000C0A30u, sub_000C0A30); /* call 0x000C0A30 */

loc_000C1A1E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1A2E; /* je: equal / zero */

loc_000C1A25: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C1A2Bu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C1A2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C1A2E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x311A10;
    if (TEST_Z(_fa, _fb)) goto loc_000C1A44; /* je: equal / zero */

loc_000C1A3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C1A41u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C1A41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C1A44: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1A50
 * Original: 0x000C1A50 - 0x000C1AA8 (88 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1A50: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1A91; /* je: equal / zero */

loc_000C1A58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1A8A; /* je: equal / zero */

loc_000C1A5C: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    esi = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(edx + 0x10);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(edx + 0x14);
    MEM32(eax + 0x14) = esi;
    edx = MEM32(edx + 0x18);
    MEM32(eax + 0x18) = edx;
    POP32(esp, esi);

loc_000C1A8A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 0x1C;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000C1A91: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C1AA5u); RECOMP_ABI_CALL(0x000C1910u, sub_000C1910); /* call 0x000C1910 */

loc_000C1AA5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1AB0
 * Original: 0x000C1AB0 - 0x000C1B45 (149 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1AB0: ;
    eax = MEM32(0x3C6444);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000C1AF9; /* jne: not equal / not zero */

loc_000C1AC3: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x311D04);
    PUSH32(esp, 0x000C1AD4u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_000C1AD4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1AF2; /* je: equal / zero */

loc_000C1ADB: ;
    MEM32(eax) = 0x311C88;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = esi;
    MEM32(0x3C6440) = esi;
    goto loc_000C1AF4;

loc_000C1AF2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C1AF4: ;
    MEM32(0x3C6444) = eax;

loc_000C1AF9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    edi = eax;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = 0x40;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0x000C1B31u); RECOMP_ABI_CALL(0x000C1A50u, sub_000C1A50); /* call 0x000C1A50 */

loc_000C1B31: ;
    edx = MEM32(edi + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    MEM32(ebx + 4) = edx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000C1B50
 * Original: 0x000C1B50 - 0x000C1B6E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000C1B58u); RECOMP_ABI_CALL(0x000C14F0u, sub_000C14F0); /* call 0x000C14F0 */

loc_000C1B58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000C1B68; /* je: equal / zero */

loc_000C1B5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C1B65u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_000C1B65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000C1B68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1B70
 * Original: 0x000C1B70 - 0x000C1B73 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1B70(void)
{

loc_000C1B70: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000C1B80
 * Original: 0x000C1B80 - 0x000C1B84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1B80(void)
{

loc_000C1B80: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_000C1B90
 * Original: 0x000C1B90 - 0x000C1B94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1B90(void)
{

loc_000C1B90: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_000C1BA0
 * Original: 0x000C1BA0 - 0x000C1BA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1BA0(void)
{

loc_000C1BA0: ;
    eax = MEM32(0x3C644C);
    esp += 4; return; /* ret */

}

/**
 * sub_000C1BB0
 * Original: 0x000C1BB0 - 0x000C1BB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1BB0(void)
{

loc_000C1BB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C1BC0
 * Original: 0x000C1BC0 - 0x000C1BC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1BC0(void)
{

loc_000C1BC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000C1BD0
 * Original: 0x000C1BD0 - 0x000C1BDA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1BD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C1BD6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_000C1BD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000C1BE0
 * Original: 0x000C1BE0 - 0x000C1C1B (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1BE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0x10);
    eax = ecx;
    ecx = MEM32(ebp + 8);
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm1); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm1 = XMM_MEM(ecx + 0x20); /* movaps */
    ecx = MEM32(ebp + 0xC);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000C1C20
 * Original: 0x000C1C20 - 0x000C1C7F (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1C20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x18;
    edi = ecx + 0x100;
    ebx = 5;

loc_000C1C31: ;
    eax = MEM32(esi + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1C4F; /* je: equal / zero */

loc_000C1C38: ;
    eax = MEM32(edi + -180);
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x000C1C4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C1C49u); } /* indirect call */
    }

loc_000C1C4F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1C65; /* je: equal / zero */

loc_000C1C54: ;
    eax = MEM32(edi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + edi + -28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x000C1C65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C1C5Fu); } /* indirect call */
    }

loc_000C1C65: ;
    MEM32(esi + -20) = 0;
    MEM32(esi) = 0;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C1C31; /* jne: not equal / not zero */

loc_000C1C7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C1C80
 * Original: 0x000C1C80 - 0x000C1CB9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1C80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + esi * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1CAC; /* je: equal / zero */

loc_000C1C90: ;
    eax = esi + esi * 8;
    ecx = MEM32(edi + eax * 4 + 0x4C);
    eax = edi + eax * 4 + 0x2C;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + eax + 4);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x000C1CACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C1CA6u); } /* indirect call */
    }

loc_000C1CAC: ;
    MEM32(edi + esi * 4 + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1CC0
 * Original: 0x000C1CC0 - 0x000C1CFF (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1CC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + esi * 4 + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1CF2; /* je: equal / zero */

loc_000C1CD0: ;
    eax = esi + esi * 8;
    ecx = MEM32(edi + eax * 4 + 0x100);
    eax = edi + eax * 4 + 0xE0;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + eax + 4);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x000C1CF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C1CECu); } /* indirect call */
    }

loc_000C1CF2: ;
    MEM32(edi + esi * 4 + 0x18) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1D00
 * Original: 0x000C1D00 - 0x000C1D67 (103 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000C1D00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = eax + ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000C1D29; /* je: equal / zero */

loc_000C1D21: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x000C1D29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C1D23u); } /* indirect call */
    }

loc_000C1D29: ;
    PUSH32(esp, 0x000C1D2Eu); RECOMP_ABI_CALL(0x000B9580u, sub_000B9580); /* call 0x000B9580 */

loc_000C1D2E: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000C1D3Au); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_000C1D3A: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000C1D4C; /* je: equal / zero */

loc_000C1D46: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C1D4Cu); RECOMP_ABI_CALL(0x0012F650u, sub_0012F650); /* call 0x0012F650 */

loc_000C1D4C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000C1D5B; /* je: equal / zero */

loc_000C1D53: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000C1D5Bu); RECOMP_ABI_CALL(0x0012F620u, sub_0012F620); /* call 0x0012F620 */

loc_000C1D5B: ;
    POP32(esp, edi);
    MEM32(ebp + 0x20) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000C1D70
 * Original: 0x000C1D70 - 0x000C1DBE (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1D70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x000C1D7Au); RECOMP_ABI_CALL(0x000C1C20u, sub_000C1C20); /* call 0x000C1C20 */

loc_000C1D7A: ;
    esi = ebx + 0x194;
    edi = 5;

loc_000C1D85: ;
    PUSH32(esp, 0xBC9E0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C1D97u); RECOMP_ABI_CALL(0x000127C0u, sub_000127C0); /* call 0x000127C0 */

loc_000C1D97: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C1D85; /* jne: not equal / not zero */

loc_000C1D9A: ;
    esi = ebx + 0xE0;
    edi = 5;

loc_000C1DA5: ;
    PUSH32(esp, 0xBC9E0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000C1DB7u); RECOMP_ABI_CALL(0x000127C0u, sub_000127C0); /* call 0x000127C0 */

loc_000C1DB7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000C1DA5; /* jne: not equal / not zero */

loc_000C1DBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000C1DC0
 * Original: 0x000C1DC0 - 0x000C1EA3 (227 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1DC0: ;
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
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1E9A; /* je: equal / zero */

loc_000C1DD7: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C1DE0u); RECOMP_ABI_CALL(0x000C1D00u, sub_000C1D00); /* call 0x000C1D00 */

loc_000C1DE0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1E9A; /* je: equal / zero */

loc_000C1DEA: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C1DF3u); RECOMP_ABI_CALL(0x001305A0u, sub_001305A0); /* call 0x001305A0 */

loc_000C1DF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1DFF; /* je: equal / zero */

loc_000C1DFA: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000C1E01;

loc_000C1DFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000C1E01: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000C1E7Bu); RECOMP_ABI_CALL(0x00131F70u, sub_00131F70); /* call 0x00131F70 */

loc_000C1E7B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x000C1E85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C1E7Fu); } /* indirect call */
    }

loc_000C1E85: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0x60) = 1;
    MEM8(eax + 0x61) = 1;
    MEM8(eax + 0x62) = LO8(ebx);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = edi;

loc_000C1E9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000C1EB0
 * Original: 0x000C1EB0 - 0x000C1F02 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C1EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C1EB0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1EFE; /* je: equal / zero */

loc_000C1EB9: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000C1EC4u); RECOMP_ABI_CALL(0x000C1D00u, sub_000C1D00); /* call 0x000C1D00 */

loc_000C1EC4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000C1EFD; /* je: equal / zero */

loc_000C1ECA: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x000C1ED9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C1ED3u); } /* indirect call */
    }

loc_000C1ED9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x000C1EE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000C1EDDu); } /* indirect call */
    }

loc_000C1EE3: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, 1);
    MEM8(eax + 0x60) = LO8(ecx);
    MEM8(eax + 0x61) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(eax + 0x62) = LO8(ecx);
    MEM32(edx) = edi;

loc_000C1EFD: ;
    POP32(esp, esi);

loc_000C1EFE: ;
    POP32(esp, edi);
    esp += 24; return; /* ret 20 */

}
