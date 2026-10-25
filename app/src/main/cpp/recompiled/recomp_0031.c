/**
 * Medal of Honor European Assault - Recompiled code chunk 31
 * Functions: 250 (0x00106630 - 0x001107F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00106630
 * Original: 0x00106630 - 0x00106655 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106630: ;
    eax = MEM32(0x3DE8C0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x3DE8C0) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x20)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x20))); }
    MEM32(0x3DE8C0) = edx;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106652; /* jne: not equal / not zero */

loc_0010664A: ;
    ecx = MEM32(ecx + 0x24);
    g_seh_ebp = ebp; sub_0025C290(); return; /* tail jmp 0x0025C290 */

loc_00106652: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00106660
 * Original: 0x00106660 - 0x00106664 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106660(void)
{

loc_00106660: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_00106670
 * Original: 0x00106670 - 0x001066AE (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106670(void)
{

loc_00106670: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0x2C);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x30);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x38);
    MEM32(ecx + 0x1C) = edx;
    eax = MEM32(eax + 0x3C);
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001066B0
 * Original: 0x001066B0 - 0x001066D3 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001066B0(void)
{

loc_001066B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x1A0);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x1A4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x1A8);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001066E0
 * Original: 0x001066E0 - 0x0010673A (90 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001066E0(void)
{

loc_001066E0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x1AC);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x1B0);
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(eax + 0x1B4);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 0x1B8);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 0x1BC);
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(eax + 0x1C0);
    MEM32(ecx + 0x3C) = edx;
    edx = MEM32(eax + 0x1C4);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 0x1C8);
    MEM32(ecx + 0x44) = edx;
    eax = MEM32(eax + 0x1CC);
    MEM32(ecx + 0x48) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00106740
 * Original: 0x00106740 - 0x00106764 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106740(void)
{

loc_00106740: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x1D0);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x1D4);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0x1D8);
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00106770
 * Original: 0x00106770 - 0x001067B2 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106770: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x290);
    esi = edi + 0x290;
    ecx = esi;
    MEM8(edi + 0x571) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0010678Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106789u); } /* indirect call */
    }

loc_0010678C: ;
    MEM8(eax + 0x268) = MEM8(eax + 0x268) & 0xEF;
    _fa = (uint32_t)(MEM8(eax + 0x268)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0010679Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106797u); } /* indirect call */
    }

loc_0010679A: ;
    MEM8(eax + 0x268) = MEM8(eax + 0x268) & 0xBF;
    _fa = (uint32_t)(MEM8(eax + 0x268)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001067ADu); RECOMP_ABI_CALL(0x001039A0u, sub_001039A0); /* call 0x001039A0 */

loc_001067AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001067C0
 * Original: 0x001067C0 - 0x00106831 (113 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001067C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001067C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x571));
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010682D; /* jne: not equal / not zero */

loc_001067CF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x7B0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010682D; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x7B0)) */

loc_001067DE: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x7A8)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x5BC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010682D; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(esi + 0x5BC)) */

loc_001067EF: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5BC); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi + 0x5BC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00106813; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00106804: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x00106813u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010680Du); } /* indirect call */
    }

loc_00106813: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x5BC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x7AC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010682B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x7AC)) */

loc_00106824: ;
    ecx = esi;
    PUSH32(esp, 0x0010682Bu); RECOMP_ABI_CALL(0x001037B0u, sub_001037B0); /* call 0x001037B0 */

loc_0010682B: ;
    SET_LO8(eax, 1);

loc_0010682D: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00106840
 * Original: 0x00106840 - 0x001068CF (143 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106840: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x318230;
    MEM32(esi + 8) = 0x318228;
    MEM32(esi + 0xB0) = 0x318220;
    MEM32(esi + 0xB8) = 0x318208;
    MEM32(esi + 0xC0) = 0x318204;
    MEM32(esi + 0xC4) = 0x3181C0;
    MEM32(esi + 0x1C0) = 0x318198;
    if (CMP_EQ(_fa, _fb)) goto loc_0010689F; /* je: equal / zero */

loc_0010688E: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010689F; /* jne: not equal / not zero */

loc_00106899: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0010689Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010689Du); } /* indirect call */
    }

loc_0010689F: ;
    edi = esi + 0xB44;
    ebx = 6;
    /* nop */

loc_001068B0: ;
    PUSH32(esp, 0x001068B5u); RECOMP_ABI_CALL(0x000C14A0u, sub_000C14A0); /* call 0x000C14A0 */

loc_001068B5: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001068BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001068BCu); } /* indirect call */
    }

loc_001068BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001068B0; /* jne: not equal / not zero */

loc_001068C5: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00103CB0(); return; /* tail jmp 0x00103CB0 */

}

/**
 * sub_001068D0
 * Original: 0x001068D0 - 0x00106B88 (696 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001068D0(void)
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

loc_001068D0: ;
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
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x001068E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001068E0u); } /* indirect call */
    }

loc_001068E6: ;
    esi = eax;
    MEM32(esp + 0x2C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001068F1u); RECOMP_ABI_CALL(0x00065CB0u, sub_00065CB0); /* call 0x00065CB0 */

loc_001068F1: ;
    ebx = eax;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x2C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00106901u); RECOMP_ABI_CALL(0x00066160u, sub_00066160); /* call 0x00066160 */

loc_00106901: ;
    eax = MEM32(edi + 0x234);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010690Du); RECOMP_ABI_CALL(0x00105830u, sub_00105830); /* call 0x00105830 */

loc_0010690D: ;
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00106A32; /* je: equal / zero */

loc_00106920: ;
    fp_push(MEMF(edi + 0xB1C)); /* fld float */
    esi = esi + esi * 2;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(edi + 0xB20)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esi + ebx + 0x18)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FE9A0)); /* fmul dword ptr [0x2fe9a0] */
    xmm1 = XMM_SCALAR(MEMF(esi + ebx + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + ebx + 0x10)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + ebx + 0x1C)); /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x50);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x5C);
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001069BAu); RECOMP_ABI_CALL(0x00266D00u, sub_00266D00); /* call 0x00266D00 */

loc_001069BA: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    edx = MEM32(esp + 0x50);
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_sin(fp_top()); /* fsin */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x58);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x54);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00106A06u); RECOMP_ABI_CALL(0x00266D00u, sub_00266D00); /* call 0x00266D00 */

loc_00106A06: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_00106A32: ;
    edi = MEM32(edi + 0xB00);
    ebx = MEM32(edi + 0xC);
    eax = MEM32(edi + 0x28);
    ecx = MEM32(ebx + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x20) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00106B71; /* jle: less or equal (signed <=) */

loc_00106A53: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = ecx;
    goto loc_00106A70;

loc_00106A64: ;
    eax = MEM32(esp + 0x28);
    goto loc_00106A70;

    /* nop */

loc_00106A70: ;
    esi = MEM32(ebx + 0x80);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(eax + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esi + ecx + 0xAC)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_MEM(edx + edi); /* movaps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00106A97; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00106A94: ;
    xmm1 = xmm2; /* movaps */

loc_00106A97: ;
    eax = MEM32(eax + 0x1C);
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x90); /* subss */
    xmm3 = XMM_MEM(eax + edi); /* movaps */
    PUSH32(esp, ecx);
    xmm4 = xmm1; /* movaps */
    ecx = esi + 0x40;
    xmm4 = XMM_SHUFFLE(xmm4, xmm1, 0); /* shufps */
    MEMF(esp) = xmm2.f[0]; /* movss */
    xmm4 = XMM_MUL(xmm4, xmm3); /* mulps */
    PUSH32(esp, ecx);
    xmm0 = XMM_ADD(xmm0, xmm4); /* addps */
    ecx = esp + 0x58;
    XMM_STORE(esp + 0x38, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00106ACBu); RECOMP_ABI_CALL(0x00232B90u, sub_00232B90); /* call 0x00232B90 */

loc_00106ACB: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00106ADDu); RECOMP_ABI_CALL(0x00109740u, sub_00109740); /* call 0x00109740 */

loc_00106ADD: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106B41; /* je: equal / zero */

loc_00106AE8: ;
    ecx = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */

loc_00106B41: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00106A64; /* jl: less (signed <) */

loc_00106B71: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00106B81u); RECOMP_ABI_CALL(0x000664D0u, sub_000664D0); /* call 0x000664D0 */

loc_00106B81: ;
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
 * sub_00106B90
 * Original: 0x00106B90 - 0x00106BBC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106B90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(esi) = 0x31817C;
    MEM32(esi + 8) = 0x31816C;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00106BB4; /* jne: not equal / not zero */

loc_00106BAE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00106BB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106BB2u); } /* indirect call */
    }

loc_00106BB4: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0022AE40(); return; /* tail jmp 0x0022AE40 */

}

/**
 * sub_00106BC0
 * Original: 0x00106BC0 - 0x00106C3B (123 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106BC0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax + 0x1D0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1D4)); /* movss */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x530EB4);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1D8)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 4) = edx;
    eax = MEM32(ecx);
    PUSH32(esp, 0x4C);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00106C26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106C23u); } /* indirect call */
    }

loc_00106C26: ;
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x4C;
    PUSH32(esp, 0x00106C37u); RECOMP_ABI_CALL(0x0025CCA0u, sub_0025CCA0); /* call 0x0025CCA0 */

loc_00106C37: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106C40
 * Original: 0x00106C40 - 0x00106C9E (94 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106C40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x228)); /* movss */
    ecx = MEM32(0x530EB4);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x22C)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x230)); /* movss */
    SET_LO8(eax, MEM8(eax + 0x234));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x10) = LO8(eax);
    edx = MEM32(ecx);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00106C89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106C86u); } /* indirect call */
    }

loc_00106C89: ;
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x40;
    PUSH32(esp, 0x00106C9Au); RECOMP_ABI_CALL(0x0025CF50u, sub_0025CF50); /* call 0x0025CF50 */

loc_00106C9A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00106CA0
 * Original: 0x00106CA0 - 0x00106CB2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106CA0(void)
{

loc_00106CA0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00106CC0
 * Original: 0x00106CC0 - 0x00106D76 (182 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106CC0(void)
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

loc_00106CC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00106CD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106CCCu); } /* indirect call */
    }

loc_00106CD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = MEM32(esi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00106CEA; /* jne: not equal / not zero */

loc_00106CDA: ;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x00106CE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106CDFu); } /* indirect call */
    }

loc_00106CE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00106CEA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x00106CF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106CEAu); } /* indirect call */
    }

loc_00106CF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106D66; /* je: equal / zero */

loc_00106CF4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x00106CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106CF8u); } /* indirect call */
    }

loc_00106CFE: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C0); PUSH32(esp, 0x00106D1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106D15u); } /* indirect call */
    }

loc_00106D1B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00106D25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106D1Fu); } /* indirect call */
    }

loc_00106D25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106D66; /* je: equal / zero */

loc_00106D29: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00106D33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106D2Du); } /* indirect call */
    }

loc_00106D33: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00106D3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106D37u); } /* indirect call */
    }

loc_00106D3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106D66; /* je: equal / zero */

loc_00106D41: ;
    eax = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(eax + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1ED4), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00106D66; /* jne: not equal / not zero */

loc_00106D4F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    ecx = 0x3888C0;
    PUSH32(esp, 0x00106D5Fu); RECOMP_ABI_CALL(0x000791D0u, sub_000791D0); /* call 0x000791D0 */

loc_00106D5F: ;
    ecx = eax;
    PUSH32(esp, 0x00106D66u); RECOMP_ABI_CALL(0x00077FE0u, sub_00077FE0); /* call 0x00077FE0 */

loc_00106D66: ;
    PUSH32(esp, 0x29);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00106D6Eu); RECOMP_ABI_CALL(0x001497B0u, sub_001497B0); /* call 0x001497B0 */

loc_00106D6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00106D80
 * Original: 0x00106D80 - 0x00106E51 (209 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106D80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x571));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00106DF3; /* je: equal / zero */

loc_00106D91: ;
    eax = MEM32(esi + 0x628);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00106DBD; /* jle: less or equal (signed <=) */

loc_00106D9B: ;
    ebx = esi + 0x62C;

loc_00106DA1: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 0x1B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00106DAFu); RECOMP_ABI_CALL(0x00048C10u, sub_00048C10); /* call 0x00048C10 */

loc_00106DAF: ;
    eax = MEM32(esi + 0x628);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106DA1; /* jl: less (signed <) */

loc_00106DBD: ;
    eax = MEM32(esi + 0x6AC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00106E4D; /* jle: less or equal (signed <=) */

loc_00106DCD: ;
    ebx = esi + 0x6B0;

loc_00106DD3: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1B4);
    PUSH32(esp, 0x00106DE1u); RECOMP_ABI_CALL(0x00048BE0u, sub_00048BE0); /* call 0x00048BE0 */

loc_00106DE1: ;
    eax = MEM32(esi + 0x6AC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106DD3; /* jl: less (signed <) */

loc_00106DEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00106DF3: ;
    eax = MEM32(esi + 0x6AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00106E1F; /* jle: less or equal (signed <=) */

loc_00106DFD: ;
    ebx = esi + 0x6B0;

loc_00106E03: ;
    edx = MEM32(ebx);
    ecx = MEM32(esi + 0x1B4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00106E11u); RECOMP_ABI_CALL(0x00048C10u, sub_00048C10); /* call 0x00048C10 */

loc_00106E11: ;
    eax = MEM32(esi + 0x6AC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106E03; /* jl: less (signed <) */

loc_00106E1F: ;
    eax = MEM32(esi + 0x628);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00106E4D; /* jle: less or equal (signed <=) */

loc_00106E2B: ;
    ebx = esi + 0x62C;

loc_00106E31: ;
    eax = MEM32(ebx);
    ecx = MEM32(esi + 0x1B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00106E3Fu); RECOMP_ABI_CALL(0x00048BE0u, sub_00048BE0); /* call 0x00048BE0 */

loc_00106E3F: ;
    eax = MEM32(esi + 0x628);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00106E31; /* jl: less (signed <) */

loc_00106E4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00106E60
 * Original: 0x00106E60 - 0x00106F64 (260 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106E60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00106E69u); RECOMP_ABI_CALL(0x00103B10u, sub_00103B10); /* call 0x00103B10 */

loc_00106E69: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    MEM32(esi) = 0x318230;
    MEM32(esi + 8) = 0x318228;
    MEM32(esi + 0xB0) = 0x318220;
    MEM32(esi + 0xB8) = 0x318208;
    MEM32(esi + 0xC0) = 0x318204;
    MEM32(esi + 0xC4) = 0x3181C0;
    MEM32(esi + 0x1C0) = 0x318198;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0x5C0;
    ecx = 0x150;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0xB44) = eax;
    MEM32(esi + 0xB48) = eax;
    MEM32(esi + 0xB4C) = eax;
    MEM32(esi + 0xB50) = eax;
    MEM32(esi + 0xB54) = eax;
    MEM32(esi + 0xB58) = eax;
    MEMF(esi + 0xB5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB38) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xB00) = eax;
    MEM32(esi + 0xB04) = eax;
    MEM32(esi + 0xB08) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00106F70
 * Original: 0x00106F70 - 0x001070A1 (305 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00106F70: ;
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
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x00106F86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106F80u); } /* indirect call */
    }

loc_00106F86: ;
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00106F8Fu); RECOMP_ABI_CALL(0x00066460u, sub_00066460); /* call 0x00066460 */

loc_00106F8F: ;
    edi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00106F9Du); RECOMP_ABI_CALL(0x00105FE0u, sub_00105FE0); /* call 0x00105FE0 */

loc_00106F9D: ;
    eax = MEM32(edi + 0x238);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00107098; /* jle: less or equal (signed <=) */

loc_00106FB3: ;
    _fb = (uint32_t)(0x298) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x298;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2A8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00106FC0: ;
    eax = MEM32(edi + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00106FCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00106FC8u); } /* indirect call */
    }

loc_00106FCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107072; /* je: equal / zero */

loc_00106FD7: ;
    xmm0 = XMM_SCALAR(MEMF(edi + -52)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3075DC); /* mulss */
    SET_LO8(ecx, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm4 = XMM_SCALAR(MEMF(edi + -8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00107035; /* je: equal / zero */

loc_0010701A: ;
    xmm0 = XMM_SCALAR(MEMF(edi + -100)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00107035: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x00107040u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010703Au); } /* indirect call */
    }

loc_00107040: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x30); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebx + -8) = xmm2.f[0]; /* movss */
    MEMF(ebx + -4) = xmm0.f[0]; /* movss */
    MEMF(ebx) = xmm1.f[0]; /* movss */

loc_00107072: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0x238);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00106FC0; /* jl: less (signed <) */

loc_00107098: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001070B0
 * Original: 0x001070B0 - 0x001072BC (524 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001070B0(void)
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

loc_001070B0: ;
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
    ebx = ecx;
    eax = MEM32(ebx + 0x214);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001072B3; /* je: equal / zero */

loc_001070CE: ;
    SET_LO8(ecx, MEM8(0x3DE8CC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00107103; /* jne: not equal / not zero */

loc_001070DD: ;
    ecx = MEM32(0x3DE8CC);
    xmm0 = XMM_SCALAR(MEMF(0x3727C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x2FF224); /* mulss */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3DE8CC) = ecx;
    MEMF(0x3DE8C8) = xmm0.f[0]; /* movss */

loc_00107103: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x0010710Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00107107u); } /* indirect call */
    }

loc_0010710D: ;
    fp_push(MEMF(0x2FE99C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((_fa & 1u) /* fcompi */) goto loc_001072B3; /* jb: below (unsigned <) */

loc_0010711F: ;
    ecx = MEM32(ebx + 0xB00);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001072B3; /* jle: less or equal (signed <=) */

loc_00107135: ;
    xmm1 = XMM_SCALAR(MEMF(0x3DE8C8)); /* movss */
    esi = ebx + 0xB24;
    goto loc_00107150;

    /* nop */
    /* nop */

loc_00107150: ;
    edx = MEM32(eax + 0x80);
    SET_LO8(eax, MEM8(edx + edi + 0x80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107286; /* je: equal / zero */

loc_00107165: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 8); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010728D; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010717B: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0xB00);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x80);
    xmm0 = XMM_MEM(edx + edi + 0x20); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    eax = esp + 0x1C;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    edx = esp + 0x14;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = esp + 0x18;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = esp + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010725Eu); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_0010725E: ;
    ecx = MEM32(esi + -2320);
    edx = MEM32(ecx);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00107271u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010726Bu); } /* indirect call */
    }

loc_00107271: ;
    ecx = MEM32(esi + -2320);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010727Cu); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_0010727C: ;
    xmm1 = XMM_SCALAR(MEMF(0x3DE8C8)); /* movss */
    goto loc_0010728D;

loc_00107286: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_0010728D: ;
    edx = MEM32(ebx + 0xB00);
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0xC);
    edx = MEM32(eax + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00107150; /* jl: less (signed <) */

loc_001072B3: ;
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
 * sub_001072C0
 * Original: 0x001072C0 - 0x001076FC (1084 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001072C0(void)
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

loc_001072C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x001072D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001072D3u); } /* indirect call */
    }

loc_001072D9: ;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xB00);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x24) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001074BA; /* jle: less or equal (signed <=) */

loc_001072F7: ;
    edx = esi + 0xB80;
    MEM32(esp + 0x18) = edx;
    edx = 0xFFFFF4BCu;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi + 0xB44;
    MEM32(esp + 0x1C) = edx;
    goto loc_00107320;

loc_00107314: ;
    edx = MEM32(esp + 0x1C);
    goto loc_00107320;

    /* nop */

loc_00107320: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00107489; /* je: equal / zero */

loc_0010732A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FEFB4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00107481; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x2FEFB4)) */

loc_0010733D: ;
    eax = MEM32(eax + 0x80);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 0x80)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x80), 0 (8-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00107481; /* je: equal / zero */

loc_00107356: ;
    ecx = MEM32(esi + 0xB00);
    eax = MEM32(ecx + 0xC);
    ecx = edx + edi;
    edx = MEM32(eax + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ecx + edx)); /* movss */
    eax = MEM32(eax + 0x80);
    xmm1 = XMM_MEM(eax + ebx + 0x20); /* movaps */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    xmm2 = XMM_MEM(eax); /* movaps */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm2); /* subps */
    XMM_STORE(esp + 0xA0, xmm0); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm3); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    edx = esp + 0x48;
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(edx) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    XMM_STORE(esp + 0xC0, xmm1); /* movaps */
    XMM_STORE(eax, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001073CDu); RECOMP_ABI_CALL(0x002BE484u, sub_002BE484); /* call 0x002BE484 */

loc_001073CD: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x3003A0) - fp_top()); /* fsubr dword ptr [0x3003a0] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x375E84)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001073F2; /* jbe: below or equal (unsigned <=) */

loc_001073E3: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x001073EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001073E7u); } /* indirect call */
    }

loc_001073ED: ;
    goto loc_00107489;

loc_001073F2: ;
    eax = MEM32(esi + 0xB00);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x80);
    xmm0 = XMM_SCALAR(MEMF(edx + ebx + 0x90)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = edx + ebx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x60); /* movaps */
    xmm0 = XMM_MEM(esp + 0xA0); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    MEM32(esp + 0x14) = eax;
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    eax = esp + 0x34;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00107471u); RECOMP_ABI_CALL(0x002BE484u, sub_002BE484); /* call 0x002BE484 */

loc_00107471: ;
    fp_push(MEMF(0x375E80)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_001074C3; /* jbe: below or equal (unsigned <=) */

loc_0010747F: ;
    ecx = MEM32(edi);

loc_00107481: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00107489u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00107483u); } /* indirect call */
    }

loc_00107489: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0xB00);
    eax = MEM32(eax + 0xC);
    edx = MEM32(eax + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00107314; /* jl: less (signed <) */

loc_001074BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001074C3: ;
    xmm0 = XMM_SCALAR(MEMF(0x375E7C)); /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm1 = xmm0; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x18)); /* fsub dword ptr [edi + 0x18] */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(esp + 0xA0)); /* mulps */
    xmm2 = XMM_MEM(esp + 0xC0); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm0 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    XMM_STORE(esp + 0xB0, xmm0); /* movaps */
    xmm3.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    MEMF(esp + 0xB0) = xmm3.f[0]; /* movss */
    xmm3 = XMM_MEM(esp + 0xB0); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm2, 0xAA); /* shufps */
    eax = esp + 0x38;
    MEMF(eax) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm2, 0x55); /* shufps */
    ecx = esp + 0x30;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm2, 0); /* shufps */
    edx = esp + 0x2C;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(eax + 0x60); /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0xAA); /* shufps */
    ecx = esp + 0x50;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm1, 0x55); /* shufps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    eax = esp + 0x28;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x44;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    fp_top() = fabs(fp_top()); /* fabs */
    edx = esp + 0x58;
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    eax = esp + 0x3C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    edx = esp + 0x54;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xB00);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    ecx = MEM32(edi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = XMM_SCALAR(MEMF(eax + edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x70) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    PUSH32(esp, 1);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x7C) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    eax = esp + 0x88;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x375E78); /* comiss */
    PUSH32(esp, eax);
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    eax = esp + 0x7C;
    MEMF(esp + 0x84) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm2.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001076F1; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x375E78)) */

loc_001076DB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x001076E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001076DBu); } /* indirect call */
    }

loc_001076E1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00107489;

loc_001076F1: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x001076F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001076F1u); } /* indirect call */
    }

loc_001076F7: ;
    goto loc_00107489;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00107700
 * Original: 0x00107700 - 0x00107AC6 (966 bytes, 305 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107700: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x238);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi + 0xC);
    ebp = esi + 4;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_0010773B; /* jge: greater or equal (signed >=) */

loc_00107728: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00107738u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00107738: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010773B: ;
    edi = esi + 0x10;
    MEM32(ebp + 4) = ebx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00107764; /* jge: greater or equal (signed >=) */

loc_00107751: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00107761u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00107761: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107764: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 0x24);
    edi = esi + 0x1C;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0010778D; /* jge: greater or equal (signed >=) */

loc_0010777A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010778Au); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_0010778A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010778D: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 0x30);
    edi = esi + 0x28;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_001077B6; /* jge: greater or equal (signed >=) */

loc_001077A3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001077B3u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_001077B3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001077B6: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 0x3C);
    edi = esi + 0x34;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_001077DF; /* jge: greater or equal (signed >=) */

loc_001077CC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001077DCu); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_001077DC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001077DF: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 0x48);
    edi = esi + 0x40;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00107808; /* jge: greater or equal (signed >=) */

loc_001077F5: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00107805u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00107805: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107808: ;
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 0x54);
    edi = esi + 0x4C;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010782D; /* jge: greater or equal (signed >=) */

loc_0010781A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010782Au); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_0010782A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010782D: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00107852; /* jge: greater or equal (signed >=) */

loc_0010783F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010784Fu); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_0010784F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107852: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00107A40; /* jl: less (signed <) */

loc_00107860: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x244) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x244;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00107870: ;
    edx = MEM32(ebp);
    ebp = MEM32(eax + -4);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax);
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 4);
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebp;
    edx = MEM32(esi);
    ebp = MEM32(eax + 8);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 0x14);
    edx = MEM32(esp + 0x20);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebp;
    edx = MEM32(edi);
    ebp = MEM32(eax + 0x18);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 0x7C);
    edx = MEM32(esp + 0x28);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 4) = ebp;
    ebp = MEM32(eax + 0x80);
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 4) = ebp;
    ebp = MEM32(eax + 0x84);
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 4) = ebp;
    edx = MEM32(esi);
    ebp = MEM32(eax + 0x88);
    MEM32(edx + ecx * 4 + 4) = ebp;
    ebp = MEM32(eax + 0x8C);
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 4) = ebp;
    ebp = MEM32(eax + 0x90);
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 4) = ebp;
    ebp = MEM32(eax + 0x94);
    edx = MEM32(esp + 0x20);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 4) = ebp;
    edx = MEM32(edi);
    ebp = MEM32(eax + 0x98);
    MEM32(edx + ecx * 4 + 4) = ebp;
    ebp = MEM32(eax + 0xFC);
    edx = MEM32(esp + 0x28);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 8) = ebp;
    ebp = MEM32(eax + 0x100);
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 8) = ebp;
    ebp = MEM32(eax + 0x104);
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(esi);
    ebp = MEM32(eax + 0x108);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx);
    ebp = MEM32(eax + 0x10C);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx);
    ebp = MEM32(eax + 0x110);
    MEM32(edx + ecx * 4 + 8) = ebp;
    ebp = MEM32(eax + 0x114);
    edx = MEM32(esp + 0x20);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 8) = ebp;
    ebp = MEM32(eax + 0x118);
    edx = MEM32(edi);
    MEM32(edx + ecx * 4 + 8) = ebp;
    ebp = MEM32(eax + 0x17C);
    edx = MEM32(esp + 0x28);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x180);
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x184);
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x188);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x18C);
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x190);
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x194);
    edx = MEM32(esp + 0x20);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x198);
    edx = MEM32(edi);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx + -3;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107870; /* jl: less (signed <) */

loc_00107A40: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00107ABE; /* jge: greater or equal (signed >=) */

loc_00107A44: ;
    edx = MEM32(esp + 0x2C);
    eax = ecx;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edx + 0x244;
    goto loc_00107A60;

loc_00107A56: ;
    ebp = MEM32(esp + 0x28);
    /* nop */

loc_00107A60: ;
    edx = MEM32(ebp);
    ebp = MEM32(eax + -4);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax);
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 4);
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 8);
    edx = MEM32(esi);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 0x14);
    edx = MEM32(esp + 0x20);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebp;
    ebp = MEM32(eax + 0x18);
    edx = MEM32(edi);
    MEM32(edx + ecx * 4) = ebp;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107A56; /* jl: less (signed <) */

loc_00107ABE: ;
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
 * sub_00107AD0
 * Original: 0x00107AD0 - 0x00107B38 (104 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(ebp + 0x238);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x14);
    esi = edi + 0xC;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00107B04; /* jge: greater or equal (signed >=) */

loc_00107AF1: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 1);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00107B01u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00107B01: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107B04: ;
    MEM32(esi + 4) = ebx;
    MEM8(edi) = LO8(ebx);
    eax = MEM32(ebp + 8);
    MEM32(edi + 4) = eax;
    ecx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00107B33; /* jle: less or equal (signed <=) */

loc_00107B1B: ;
    edi = ebp + 0x260;

loc_00107B21: ;
    SET_LO8(ecx, MEM8(edi));
    edx = MEM32(esi);
    MEM8(eax + edx) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107B21; /* jl: less (signed <) */

loc_00107B33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00107B40
 * Original: 0x00107B40 - 0x00107D0B (459 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107B40: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ecx = MEM32(ebp + 0x54);
    edx = MEM32(ebp + 0x238);
    PUSH32(esp, esi);
    esi = ebx + 0x18;
    MEM8(ebx) = LO8(edx);
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x2C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00107B8C; /* jge: greater or equal (signed >=) */

loc_00107B71: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ecx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00107B81u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00107B81: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107B8C: ;
    edi = ebx + 0x24;
    MEM32(esi + 4) = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00107BB9; /* jge: greater or equal (signed >=) */

loc_00107B9E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = edx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00107BAEu); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00107BAE: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107BB9: ;
    MEM32(edi + 4) = edx;
    eax = MEM32(ebp + 0x40);
    MEM32(ebx + 4) = eax;
    eax = MEM32(ebp + 0x44);
    MEM32(ebx + 8) = eax;
    eax = MEM32(ebp + 0x48);
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(ebp + 0x4C);
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(ebp + 0x50);
    MEM32(ebx + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107C6A; /* jl: less (signed <) */

loc_00107BE5: ;
    edx = 0xFFFFFFACu;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = edx;
    edx = 0xFFFFFFB0u;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    edx = 0xFFFFFFA4u;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = ecx;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebp + 0x5C;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x20) = ecx;
    goto loc_00107C21;

loc_00107C1D: ;
    edx = MEM32(esp + 0x14);

loc_00107C21: ;
    ebx = MEM32(eax + -4);
    ecx = edx + eax;
    edx = MEM32(esi);
    MEM32(ecx + edx) = ebx;
    ebx = MEM32(eax);
    edx = MEM32(esi);
    MEM32(edx + ecx + 4) = ebx;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 4);
    MEM32(ecx + eax) = edx;
    ecx = MEM32(esi);
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + eax) = edx;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = ecx;
    if ((_fa != 0)) goto loc_00107C1D; /* jne: not equal / not zero */

loc_00107C5E: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x2C);

loc_00107C6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00107C95; /* jge: greater or equal (signed >=) */

loc_00107C6E: ;
    edx = ebp + eax * 4 + 0x58;
    MEM32(esp + 0x28) = edx;

loc_00107C76: ;
    ebx = MEM32(esp + 0x28);
    ebx = MEM32(ebx);
    edx = MEM32(esi);
    MEM32(edx + eax * 4) = ebx;
    ebx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00107C76; /* jl: less (signed <) */

loc_00107C91: ;
    edx = MEM32(esp + 0x2C);

loc_00107C95: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107CDA; /* jl: less (signed <) */

loc_00107C9C: ;
    ecx = ebp + 0x2E4;

loc_00107CA2: ;
    ebx = MEM32(ecx + -128);
    esi = MEM32(edi);
    MEM32(esi + eax * 4) = ebx;
    ebx = MEM32(ecx);
    esi = MEM32(edi);
    MEM32(esi + eax * 4 + 4) = ebx;
    ebx = MEM32(ecx + 0x80);
    esi = MEM32(edi);
    MEM32(esi + eax * 4 + 8) = ebx;
    esi = MEM32(edi);
    ebx = MEM32(ecx + 0x100);
    MEM32(esi + eax * 4 + 0xC) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx + -3;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107CA2; /* jl: less (signed <) */

loc_00107CDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00107D03; /* jge: greater or equal (signed >=) */

loc_00107CDE: ;
    ecx = eax;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ecx + ebp + 0x264;
    /* nop */

loc_00107CF0: ;
    esi = MEM32(ebp);
    ecx = MEM32(edi);
    MEM32(ecx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x80;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107CF0; /* jl: less (signed <) */

loc_00107D03: ;
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
 * sub_00107D10
 * Original: 0x00107D10 - 0x00107EC5 (437 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107D10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x238);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEM8(ebp) = LO8(ebx);
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00107D4E; /* jge: greater or equal (signed >=) */

loc_00107D3B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00107D4Bu); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00107D4B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107D4E: ;
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = ebx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00107D77; /* jge: greater or equal (signed >=) */

loc_00107D64: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00107D74u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00107D74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107D77: ;
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = ebx;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00107DA0; /* jge: greater or equal (signed >=) */

loc_00107D8D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, 1);
    if (CMP_GE(_fas, _fbs)) eax = ebx; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00107D9Du); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00107D9D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00107DA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00107E5D; /* jl: less (signed <) */

loc_00107DAE: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFFDu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebx;
    _fb = (uint32_t)(0x26C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x26C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00107DC0: ;
    ebx = MEM32(ecx + -4);
    edx = MEM32(ebp);
    MEM32(edx + eax * 4) = ebx;
    SET_LO8(ebx, MEM8(ecx));
    edx = MEM32(esi);
    MEM8(eax + edx) = LO8(ebx);
    ebx = MEM32(ecx + 4);
    edx = MEM32(edi);
    MEM32(edx + eax * 4) = ebx;
    ebx = MEM32(ecx + 0x7C);
    edx = MEM32(ebp);
    MEM32(edx + eax * 4 + 4) = ebx;
    SET_LO8(ebx, MEM8(ecx + 0x80));
    edx = MEM32(esi);
    MEM8(eax + edx + 1) = LO8(ebx);
    ebx = MEM32(ecx + 0x84);
    edx = MEM32(edi);
    MEM32(edx + eax * 4 + 4) = ebx;
    ebx = MEM32(ecx + 0xFC);
    edx = MEM32(ebp);
    MEM32(edx + eax * 4 + 8) = ebx;
    SET_LO8(ebx, MEM8(ecx + 0x100));
    edx = MEM32(esi);
    MEM8(eax + edx + 2) = LO8(ebx);
    ebx = MEM32(ecx + 0x104);
    edx = MEM32(edi);
    MEM32(edx + eax * 4 + 8) = ebx;
    ebx = MEM32(ecx + 0x17C);
    edx = MEM32(ebp);
    MEM32(edx + eax * 4 + 0xC) = ebx;
    SET_LO8(ebx, MEM8(ecx + 0x180));
    edx = MEM32(esi);
    MEM8(eax + edx + 3) = LO8(ebx);
    edx = MEM32(edi);
    ebx = MEM32(ecx + 0x184);
    MEM32(edx + eax * 4 + 0xC) = ebx;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00107DC0; /* jl: less (signed <) */

loc_00107E59: ;
    ebx = MEM32(esp + 0x14);

loc_00107E5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edx = MEM32(esp + 0x20);
    if (CMP_GE(_fas, _fbs)) goto loc_00107EB0; /* jge: greater or equal (signed >=) */

loc_00107E65: ;
    ecx = eax;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edx + 0x26C;
    MEM32(esp + 0x10) = ecx;

loc_00107E75: ;
    edx = MEM32(ebp);
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + -4);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(ecx));
    edx = MEM32(esi);
    MEM8(eax + edx) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(edi);
    ecx = MEM32(ecx + 4);
    MEM32(edx + eax * 4) = ecx;
    edx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00107E75; /* jl: less (signed <) */

loc_00107EAC: ;
    edx = MEM32(esp + 0x20);

loc_00107EB0: ;
    eax = MEM32(edx + 0x170);
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x1C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00107ED0
 * Original: 0x00107ED0 - 0x00107F27 (87 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107ED0(void)
{

loc_00107ED0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 0x174);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x178);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x17C);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x180);
    MEM32(eax + 0xC) = edx;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x198)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x194)); /* movss */
    ecx = MEM32(ecx + 0x190);
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00107F30
 * Original: 0x00107F30 - 0x0010830A (986 bytes, 229 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00107F30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB04);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0xB00);
    edx = MEM32(ecx + 0x20);
    SET_LO8(ecx, MEM8(edx + 0x14));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x31843C)); /* movss */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00107F71; /* jne: not equal / not zero */

loc_00107F69: ;
    xmm0 = XMM_SCALAR(MEMF(0x31BE80)); /* movss */

loc_00107F71: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM8(eax + 8) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00107F85u); RECOMP_ABI_CALL(0x001070B0u, sub_001070B0); /* call 0x001070B0 */

loc_00107F85: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00107F8Du); RECOMP_ABI_CALL(0x001072C0u, sub_001072C0); /* call 0x001072C0 */

loc_00107F8D: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00107F95u); RECOMP_ABI_CALL(0x00104810u, sub_00104810); /* call 0x00104810 */

loc_00107F95: ;
    SET_LO8(ebx, MEM8(esi + 0x571));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00107FEF; /* jne: not equal / not zero */

loc_00107FA4: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1F4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0xB1C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF020); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x1F8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0xB1C) = xmm3.f[0]; /* movss */
    MEMF(esi + 0xB20) = xmm1.f[0]; /* movss */

loc_00107FEF: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi + 0x5D0;
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0xB1C); /* comiss */
    eax = esi + 0xB1C;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    if ((_fca > _fcb)) goto loc_0010801A; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(esi + 0xB1C)) */

loc_00108018: ;
    edx = eax;

loc_0010801A: ;
    edx = MEM32(edx);
    MEM32(eax) = edx;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca > _fcb)) ecx = eax; /* cmova */
    ecx = MEM32(ecx);
    MEM32(eax) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5D8)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0xB20); /* comiss */
    eax = esi + 0xB20;
    ecx = esi + 0x5D8;
    if ((_fca > _fcb)) ecx = eax; /* cmova */
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x5D4)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(eax); /* comiss */
    ecx = esi + 0x5D4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) ecx = eax; /* cmovbe */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = MEM32(ecx);
    MEM32(eax) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00108301; /* je: equal / zero */

loc_0010806E: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x518)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00108086; /* jp: parity */

loc_0010807F: ;
    edi = 1;
    goto loc_00108088;

loc_00108086: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00108088: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(0x3727C4); /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x518); /* addss */
    MEMF(esi + 0x518) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x51C); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x7B4); /* comiss */
    if ((_fca > _fcb)) goto loc_001080B9; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esi + 0x7B4)) */

loc_001080B1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001081D8; /* je: equal / zero */

loc_001080B9: ;
    edx = MEM32(esi);
    eax = esp + 0x80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4DA8ACC5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001080CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001080CAu); } /* indirect call */
    }

loc_001080CD: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x50); /* movaps */
    ecx = esp + 0xB0;
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x60); /* movaps */
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108102u); RECOMP_ABI_CALL(0x00264FC0u, sub_00264FC0); /* call 0x00264FC0 */

loc_00108102: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = MEM32(esi + 0x518);
    MEM32(esi + 0x51C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001081C1; /* je: equal / zero */

loc_00108116: ;
    eax = MEM32(esi + 0x204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001081D8; /* je: equal / zero */

loc_00108124: ;
    eax = MEM32(esi + 0x208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x570) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00108151; /* je: equal / zero */

loc_00108135: ;
    ecx = eax + 0xB0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00108140u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010813Du); } /* indirect call */
    }

loc_00108140: ;
    ecx = MEM32(esi + 0x208);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108151u); RECOMP_ABI_CALL(0x0003CB80u, sub_0003CB80); /* call 0x0003CB80 */

loc_00108151: ;
    eax = MEM32(esi + 0x20C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010817B; /* je: equal / zero */

loc_0010815B: ;
    edx = MEM32(eax + 0xB0);
    ecx = eax + 0xB0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0010816Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108167u); } /* indirect call */
    }

loc_0010816A: ;
    ecx = MEM32(esi + 0x20C);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010817Bu); RECOMP_ABI_CALL(0x0003CB80u, sub_0003CB80); /* call 0x0003CB80 */

loc_0010817B: ;
    eax = MEM32(esi + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001081A1; /* je: equal / zero */

loc_00108185: ;
    ecx = eax + 0xB0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00108190u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010818Du); } /* indirect call */
    }

loc_00108190: ;
    ecx = MEM32(esi + 0x210);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001081A1u); RECOMP_ABI_CALL(0x0003CB80u, sub_0003CB80); /* call 0x0003CB80 */

loc_001081A1: ;
    ecx = MEM32(esi + 0x204);
    edx = MEM32(ecx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x001081B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001081AEu); } /* indirect call */
    }

loc_001081B4: ;
    ecx = MEM32(esi + 0x204);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001081BFu); RECOMP_ABI_CALL(0x0010CCD0u, sub_0010CCD0); /* call 0x0010CCD0 */

loc_001081BF: ;
    goto loc_001081D8;

loc_001081C1: ;
    ecx = MEM32(esi + 0x204);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001081D8; /* je: equal / zero */

loc_001081CB: ;
    edx = MEM32(ecx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x001081D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001081D2u); } /* indirect call */
    }

loc_001081D8: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x7B8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FEC54); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00108301; /* jnp: not parity */

loc_001081F1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x518)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x7B8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00108301; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x7B8)) */

loc_00108206: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00108211u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010820Eu); } /* indirect call */
    }

loc_00108211: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    ecx = esp + 0x30;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    PUSH32(esp, ecx);
    ecx = eax + 0x30;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108248u); RECOMP_ABI_CALL(0x00131380u, sub_00131380); /* call 0x00131380 */

loc_00108248: ;
    edx = MEM32(esi + 0xC4);
    ecx = esi + 0xC4;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0010825Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108259u); } /* indirect call */
    }

loc_0010825C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x28); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00108301; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_001082C0: ;
    PUSH32(esp, 0);
    ecx = esi;
    MEM8(esi + 0x520) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001082D0u); RECOMP_ABI_CALL(0x001398F0u, sub_001398F0); /* call 0x001398F0 */

loc_001082D0: ;
    eax = MEM32(esi + 0x204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esi + 0x571) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00108301; /* je: equal / zero */

loc_001082E1: ;
    edx = MEM32(eax + 0xB0);
    ecx = eax + 0xB0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x001082F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001082EDu); } /* indirect call */
    }

loc_001082F0: ;
    ecx = MEM32(esi + 0x204);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108301u); RECOMP_ABI_CALL(0x0003CB80u, sub_0003CB80); /* call 0x0003CB80 */

loc_00108301: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00108310
 * Original: 0x00108310 - 0x0010870E (1022 bytes, 285 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108310: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x238);
    eax = MEM32(ebx + 0x2C);
    PUSH32(esp, esi);
    esi = ebx + 0x24;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_00108349; /* jge: greater or equal (signed >=) */

loc_00108336: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108346u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00108346: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108349: ;
    MEM32(esi + 4) = ebp;
    eax = MEM32(ebx + 0x38);
    esi = ebx + 0x30;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010836E; /* jge: greater or equal (signed >=) */

loc_0010835B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010836Bu); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_0010836B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010836E: ;
    MEM32(esi + 4) = ebp;
    eax = MEM32(ebx + 0x44);
    esi = ebx + 0x3C;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00108393; /* jge: greater or equal (signed >=) */

loc_00108380: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108390u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00108390: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108393: ;
    MEM32(esi + 4) = ebp;
    eax = MEM32(ebx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001083B5; /* jge: greater or equal (signed >=) */

loc_001083A2: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001083B2u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_001083B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001083B5: ;
    esi = ebx + 0xC;
    MEM32(ebx + 4) = ebp;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001083DA; /* jge: greater or equal (signed >=) */

loc_001083C7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001083D7u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_001083D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001083DA: ;
    edi = ebx + 0x18;
    MEM32(esi + 4) = ebp;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001083FF; /* jge: greater or equal (signed >=) */

loc_001083EC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001083FCu); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_001083FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001083FF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(edi + 4) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00108661; /* jl: less (signed <) */

loc_00108410: ;
    eax = MEM32(esp + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x278;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00108420;

    /* nop */

loc_00108420: ;
    edx = MEM32(edi);
    ebp = MEM32(eax + -4);
    MEM32(edx + ecx * 4) = ebp;
    edx = MEM32(ebx + 0x24);
    ebp = MEM32(eax);
    MEM32(edx + ecx * 4) = ebp;
    edx = MEM32(ebx + 0x30);
    ebp = MEM32(eax + 4);
    MEM32(edx + ecx * 4) = ebp;
    edx = MEM32(ebx + 0x3C);
    ebp = MEM32(eax + 8);
    MEM32(edx + ecx * 4) = ebp;
    edx = MEM32(ebx);
    ebp = MEM32(eax + 0x18);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEM32(edx + esi) = ebp;
    MEMF(edx + esi + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + esi + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + esi + 0xC) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0x28);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx + 0xC);
    MEM32(edx + esi) = ebp;
    MEMF(edx + esi + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + esi + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + esi + 0xC) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0x7C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi);
    MEM32(edx + ecx * 4 + 4) = ebp;
    edx = MEM32(ebx + 0x24);
    ebp = MEM32(eax + 0x80);
    MEM32(edx + ecx * 4 + 4) = ebp;
    edx = MEM32(ebx + 0x30);
    ebp = MEM32(eax + 0x84);
    MEM32(edx + ecx * 4 + 4) = ebp;
    edx = MEM32(ebx + 0x3C);
    ebp = MEM32(eax + 0x88);
    MEM32(edx + ecx * 4 + 4) = ebp;
    edx = MEM32(ebx);
    ebp = MEM32(eax + 0x98);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    MEM32(esi + edx + 0x10) = ebp;
    MEMF(esi + edx + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esi + edx + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esi + edx + 0x1C) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0xA8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xAC)); /* movss */
    edx = esi + edx + 0x10;
    edx = MEM32(ebx + 0xC);
    MEM32(edx + esi + 0x10) = ebp;
    MEMF(edx + esi + 0x14) = xmm2.f[0]; /* movss */
    MEMF(edx + esi + 0x18) = xmm1.f[0]; /* movss */
    MEMF(edx + esi + 0x1C) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0xFC);
    edx = edx + esi + 0x10;
    edx = MEM32(edi);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(ebx + 0x24);
    ebp = MEM32(eax + 0x100);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(ebx + 0x30);
    ebp = MEM32(eax + 0x104);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(ebx + 0x3C);
    ebp = MEM32(eax + 0x108);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x120)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x11C)); /* movss */
    ebp = esi + 0x20;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(eax + 0x118);
    MEM32(edx) = ebp;
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x130)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x12C)); /* movss */
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + 0x128);
    MEM32(edx) = ebp;
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0x17C);
    edx = MEM32(edi);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x180);
    edx = MEM32(ebx + 0x24);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x184);
    edx = MEM32(ebx + 0x30);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x188);
    edx = MEM32(ebx + 0x3C);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    edx = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1A0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x19C)); /* movss */
    ebp = esi + 0x30;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + 0x198);
    MEM32(edx) = ebp;
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1B0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x1AC)); /* movss */
    ebp = esi + 0x30;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + 0x1A8);
    MEM32(edx) = ebp;
    ebp = MEM32(esp + 0x10);
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebp + -3;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00108420; /* jl: less (signed <) */

loc_00108661: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00108708; /* jge: greater or equal (signed >=) */

loc_00108669: ;
    edx = MEM32(esp + 0x1C);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = eax;
    eax = ecx;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edx + 0x278;

loc_00108682: ;
    esi = MEM32(eax + -4);
    edx = MEM32(edi);
    MEM32(edx + ecx * 4) = esi;
    esi = MEM32(eax);
    edx = MEM32(ebx + 0x24);
    MEM32(edx + ecx * 4) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ebx + 0x30);
    MEM32(edx + ecx * 4) = esi;
    esi = MEM32(eax + 8);
    edx = MEM32(ebx + 0x3C);
    MEM32(edx + ecx * 4) = esi;
    edx = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x18);
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x28);
    MEM32(edx) = esi;
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00108682; /* jl: less (signed <) */

loc_00108708: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00108315
 * Original: 0x00108315 - 0x0010870E (1017 bytes, 283 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108315(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108315: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x238);
    eax = MEM32(ebx + 0x2C);
    PUSH32(esp, esi);
    esi = ebx + 0x24;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_00108349; /* jge: greater or equal (signed >=) */

loc_00108336: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108346u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00108346: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108349: ;
    MEM32(esi + 4) = ebp;
    eax = MEM32(ebx + 0x38);
    esi = ebx + 0x30;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010836E; /* jge: greater or equal (signed >=) */

loc_0010835B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010836Bu); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_0010836B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010836E: ;
    MEM32(esi + 4) = ebp;
    eax = MEM32(ebx + 0x44);
    esi = ebx + 0x3C;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00108393; /* jge: greater or equal (signed >=) */

loc_00108380: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00108390u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_00108390: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00108393: ;
    MEM32(esi + 4) = ebp;
    eax = MEM32(ebx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001083B5; /* jge: greater or equal (signed >=) */

loc_001083A2: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001083B2u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_001083B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001083B5: ;
    esi = ebx + 0xC;
    MEM32(ebx + 4) = ebp;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001083DA; /* jge: greater or equal (signed >=) */

loc_001083C7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001083D7u); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_001083D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001083DA: ;
    edi = ebx + 0x18;
    MEM32(esi + 4) = ebp;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001083FF; /* jge: greater or equal (signed >=) */

loc_001083EC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    PUSH32(esp, 4);
    if (CMP_GE(_fas, _fbs)) eax = ebp; /* cmovge */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001083FCu); RECOMP_ABI_CALL(0x001F47B0u, sub_001F47B0); /* call 0x001F47B0 */

loc_001083FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001083FF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM32(edi + 4) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00108661; /* jl: less (signed <) */

loc_00108410: ;
    eax = MEM32(esp + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x278;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00108420;

    /* nop */

loc_00108420: ;
    edx = MEM32(edi);
    ebp = MEM32(eax + -4);
    MEM32(edx + ecx * 4) = ebp;
    edx = MEM32(ebx + 0x24);
    ebp = MEM32(eax);
    MEM32(edx + ecx * 4) = ebp;
    edx = MEM32(ebx + 0x30);
    ebp = MEM32(eax + 4);
    MEM32(edx + ecx * 4) = ebp;
    edx = MEM32(ebx + 0x3C);
    ebp = MEM32(eax + 8);
    MEM32(edx + ecx * 4) = ebp;
    edx = MEM32(ebx);
    ebp = MEM32(eax + 0x18);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    MEM32(edx + esi) = ebp;
    MEMF(edx + esi + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + esi + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + esi + 0xC) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0x28);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebx + 0xC);
    MEM32(edx + esi) = ebp;
    MEMF(edx + esi + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + esi + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + esi + 0xC) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0x7C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi);
    MEM32(edx + ecx * 4 + 4) = ebp;
    edx = MEM32(ebx + 0x24);
    ebp = MEM32(eax + 0x80);
    MEM32(edx + ecx * 4 + 4) = ebp;
    edx = MEM32(ebx + 0x30);
    ebp = MEM32(eax + 0x84);
    MEM32(edx + ecx * 4 + 4) = ebp;
    edx = MEM32(ebx + 0x3C);
    ebp = MEM32(eax + 0x88);
    MEM32(edx + ecx * 4 + 4) = ebp;
    edx = MEM32(ebx);
    ebp = MEM32(eax + 0x98);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xA0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x9C)); /* movss */
    MEM32(esi + edx + 0x10) = ebp;
    MEMF(esi + edx + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esi + edx + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esi + edx + 0x1C) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0xA8);
    xmm1 = XMM_SCALAR(MEMF(eax + 0xB0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xAC)); /* movss */
    edx = esi + edx + 0x10;
    edx = MEM32(ebx + 0xC);
    MEM32(edx + esi + 0x10) = ebp;
    MEMF(edx + esi + 0x14) = xmm2.f[0]; /* movss */
    MEMF(edx + esi + 0x18) = xmm1.f[0]; /* movss */
    MEMF(edx + esi + 0x1C) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0xFC);
    edx = edx + esi + 0x10;
    edx = MEM32(edi);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(ebx + 0x24);
    ebp = MEM32(eax + 0x100);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(ebx + 0x30);
    ebp = MEM32(eax + 0x104);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(ebx + 0x3C);
    ebp = MEM32(eax + 0x108);
    MEM32(edx + ecx * 4 + 8) = ebp;
    edx = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x120)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x11C)); /* movss */
    ebp = esi + 0x20;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(eax + 0x118);
    MEM32(edx) = ebp;
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x130)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x12C)); /* movss */
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + 0x128);
    MEM32(edx) = ebp;
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0x17C);
    edx = MEM32(edi);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x180);
    edx = MEM32(ebx + 0x24);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x184);
    edx = MEM32(ebx + 0x30);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    ebp = MEM32(eax + 0x188);
    edx = MEM32(ebx + 0x3C);
    MEM32(edx + ecx * 4 + 0xC) = ebp;
    edx = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1A0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x19C)); /* movss */
    ebp = esi + 0x30;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + 0x198);
    MEM32(edx) = ebp;
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1B0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x1AC)); /* movss */
    ebp = esi + 0x30;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + 0x1A8);
    MEM32(edx) = ebp;
    ebp = MEM32(esp + 0x10);
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebp + -3;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00108420; /* jl: less (signed <) */

loc_00108661: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00108708; /* jge: greater or equal (signed >=) */

loc_00108669: ;
    edx = MEM32(esp + 0x1C);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = eax;
    eax = ecx;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edx + 0x278;

loc_00108682: ;
    esi = MEM32(eax + -4);
    edx = MEM32(edi);
    MEM32(edx + ecx * 4) = esi;
    esi = MEM32(eax);
    edx = MEM32(ebx + 0x24);
    MEM32(edx + ecx * 4) = esi;
    esi = MEM32(eax + 4);
    edx = MEM32(ebx + 0x30);
    MEM32(edx + ecx * 4) = esi;
    esi = MEM32(eax + 8);
    edx = MEM32(ebx + 0x3C);
    MEM32(edx + ecx * 4) = esi;
    edx = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x18);
    MEM32(edx) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x28);
    MEM32(edx) = esi;
    MEMF(edx + 4) = xmm2.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00108682; /* jl: less (signed <) */

loc_00108708: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00108710
 * Original: 0x00108710 - 0x00108DA9 (1689 bytes, 383 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108710: ;
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
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = 0x80000000u;
    eax = esp + 0x68;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x7C) = edi;
    MEM32(esp + 0x80) = ebx;
    MEM32(esp + 0x84) = ebx;
    MEM32(esp + 0x88) = edi;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = edi;
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0x9C) = ebx;
    MEM32(esp + 0xA0) = edi;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = edi;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = edi;
    MEM32(esp + 0xBC) = ebx;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = edi;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = ebx;
    MEM32(esp + 0xD0) = edi;
    MEM32(esp + 0x70) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001087D7u); RECOMP_ABI_CALL(0x00107700u, sub_00107700); /* call 0x00107700 */

loc_001087D7: ;
    ecx = MEM32(0x530EB4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    MEM32(esp + 0x6C) = 0x13;
    edx = MEM32(ecx);
    PUSH32(esp, 0x390);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001087F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001087F1u); } /* indirect call */
    }

loc_001087F4: ;
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x390;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108806u); RECOMP_ABI_CALL(0x00260D30u, sub_00260D30); /* call 0x00260D30 */

loc_00108806: ;
    ecx = esp + 0x68;
    MEM32(esp + 0xE8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108816u); RECOMP_ABI_CALL(0x00109A30u, sub_00109A30); /* call 0x00109A30 */

loc_00108816: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    ecx = MEM32(0x530EB4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x14) = LO8(ebx);
    edx = MEM32(ecx);
    PUSH32(esp, 0x40);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00108834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108831u); } /* indirect call */
    }

loc_00108834: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108846u); RECOMP_ABI_CALL(0x00260B20u, sub_00260B20); /* call 0x00260B20 */

loc_00108846: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0xEC) = eax;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108877u); RECOMP_ABI_CALL(0x00107AD0u, sub_00107AD0); /* call 0x00107AD0 */

loc_00108877: ;
    ecx = MEM32(0x530EB4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x38);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00108889u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108886u); } /* indirect call */
    }

loc_00108889: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010889Bu); RECOMP_ABI_CALL(0x002609F0u, sub_002609F0); /* call 0x002609F0 */

loc_0010889B: ;
    MEM32(esp + 0xEC) = eax;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001088C2; /* jne: not equal / not zero */

loc_001088AA: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001088C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001088BFu); } /* indirect call */
    }

loc_001088C2: ;
    xmm0 = XMM_SCALAR(MEMF(0x31815C)); /* movss */
    ecx = MEM32(0x530EB4);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, 0x3C);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00108942u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010893Fu); } /* indirect call */
    }

loc_00108942: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108954u); RECOMP_ABI_CALL(0x00260710u, sub_00260710); /* call 0x00260710 */

loc_00108954: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0xE0) = eax;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = edi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001089A3u); RECOMP_ABI_CALL(0x00107B40u, sub_00107B40); /* call 0x00107B40 */

loc_001089A3: ;
    ecx = MEM32(0x530EB4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x60);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001089B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001089B2u); } /* indirect call */
    }

loc_001089B5: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001089C7u); RECOMP_ABI_CALL(0x00260330u, sub_00260330); /* call 0x00260330 */

loc_001089C7: ;
    MEM32(esp + 0xD0) = eax;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001089F1; /* jne: not equal / not zero */

loc_001089D6: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001089F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001089EEu); } /* indirect call */
    }

loc_001089F1: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00108A14; /* jne: not equal / not zero */

loc_001089F9: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00108A14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108A11u); } /* indirect call */
    }

loc_00108A14: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM8(esp + 0x18) = LO8(ebx);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = edi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108A50u); RECOMP_ABI_CALL(0x00107D10u, sub_00107D10); /* call 0x00107D10 */

loc_00108A50: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x54);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00108A62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108A5Fu); } /* indirect call */
    }

loc_00108A62: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108A74u); RECOMP_ABI_CALL(0x0025FBD0u, sub_0025FBD0); /* call 0x0025FBD0 */

loc_00108A74: ;
    ecx = esp + 0x10;
    MEM32(esp + 0xE0) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108A84u); RECOMP_ABI_CALL(0x00109C40u, sub_00109C40); /* call 0x00109C40 */

loc_00108A84: ;
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = edi;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = edi;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108AD7u); RECOMP_ABI_CALL(0x00108310u, sub_00108310); /* call 0x00108310 */

loc_00108AD7: ;
    ecx = MEM32(0x530EB4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x68);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00108AE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108AE6u); } /* indirect call */
    }

loc_00108AE9: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108AFBu); RECOMP_ABI_CALL(0x0025F420u, sub_0025F420); /* call 0x0025F420 */

loc_00108AFB: ;
    ecx = esp + 0x10;
    MEM32(esp + 0xD4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108B0Bu); RECOMP_ABI_CALL(0x00109CB0u, sub_00109CB0); /* call 0x00109CB0 */

loc_00108B0B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x174)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x178)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x17C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x180)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x190)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x194)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x198)); /* movss */
    ecx = MEM32(0x530EB4);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, 0x50);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00108B8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108B8Au); } /* indirect call */
    }

loc_00108B8D: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108B9Fu); RECOMP_ABI_CALL(0x0025EBE0u, sub_0025EBE0); /* call 0x0025EBE0 */

loc_00108B9F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1A0)); /* movss */
    ecx = MEM32(0x530EB4);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1A4)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1A8)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, 0x1C);
    MEM32(esp + 0xE4) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00108BDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108BDCu); } /* indirect call */
    }

loc_00108BDF: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108BF1u); RECOMP_ABI_CALL(0x0025EB30u, sub_0025EB30); /* call 0x0025EB30 */

loc_00108BF1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1AC)); /* movss */
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0xE4);
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1B0)); /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1B4)); /* movss */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1B8)); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0xE8);
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1BC)); /* movss */
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0xD8);
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C0)); /* movss */
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esp + 0xEC);
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C4)); /* movss */
    MEM32(esp + 0x78) = eax;
    eax = MEM32(esp + 0xD4);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(esp + 0xD0);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(esp + 0xE0);
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C8)); /* movss */
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(esp + 0xDC);
    MEM32(esp + 0x80) = edx;
    edx = MEM32(ebp + 0x10);
    eax = esp + 0xB4;
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1CC)); /* movss */
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esp + 0xBC) = ebx;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = edi;
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x8C) = ecx;
    MEM32(esp + 0x94) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108D24u); RECOMP_ABI_CALL(0x001F4820u, sub_001F4820); /* call 0x001F4820 */

loc_00108D24: ;
    ecx = MEM32(esp + 0xC0);
    edx = MEM32(esp + 0xBC);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(esp + 0xB8);
    ecx = MEM32(0x530EB4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    MEM32(esp + 0xBC) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, 0x1A0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00108D5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108D5Au); } /* indirect call */
    }

loc_00108D5D: ;
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x1A0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108D6Fu); RECOMP_ABI_CALL(0x0025E1C0u, sub_0025E1C0); /* call 0x0025E1C0 */

loc_00108D6F: ;
    edx = MEM32(ebp + 8);
    esi = eax;
    MEM32(esi + 0x34) = edx;
    eax = MEM32(esp + 0xBC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00108DA0; /* jne: not equal / not zero */

loc_00108D82: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xBC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00108DA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108D9Du); } /* indirect call */
    }

loc_00108DA0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00108DB0
 * Original: 0x00108DB0 - 0x0010946C (1724 bytes, 378 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00108DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x88;
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    edi = 0x80000000u;
    PUSH32(esp, eax);
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = ebx;
    MEM32(esp + 0x9C) = ebx;
    MEM32(esp + 0xA0) = ebx;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xD8) = ebx;
    MEM32(esp + 0xDC) = ebx;
    MEM32(esp + 0xE0) = edi;
    MEMF(esp + 0xC0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xCC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD0) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108E95u); RECOMP_ABI_CALL(0x0025D0A0u, sub_0025D0A0); /* call 0x0025D0A0 */

loc_00108E95: ;
    ecx = MEM32(esp + 0x8C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = edi;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = edi;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x74) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108F0Eu); RECOMP_ABI_CALL(0x00260B40u, sub_00260B40); /* call 0x00260B40 */

loc_00108F0E: ;
    esi = MEM32(ebp + 0xC);
    eax = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108F1Cu); RECOMP_ABI_CALL(0x00107700u, sub_00107700); /* call 0x00107700 */

loc_00108F1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108F2Du); RECOMP_ABI_CALL(0x00260B50u, sub_00260B50); /* call 0x00260B50 */

loc_00108F2D: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108F36u); RECOMP_ABI_CALL(0x00109A30u, sub_00109A30); /* call 0x00109A30 */

loc_00108F36: ;
    ecx = MEM32(esp + 0x88);
    xmm0 = XMM_SCALAR(MEMF(0x2FEFB0)); /* movss */
    MEM8(esp + 0x10) = LO8(ebx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108F5Du); RECOMP_ABI_CALL(0x00260B00u, sub_00260B00); /* call 0x00260B00 */

loc_00108F5D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    ecx = MEM32(esp + 0xC);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x14) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108F7Au); RECOMP_ABI_CALL(0x00260B10u, sub_00260B10); /* call 0x00260B10 */

loc_00108F7A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x94);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = LO8(ebx);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108FAEu); RECOMP_ABI_CALL(0x00260950u, sub_00260950); /* call 0x00260950 */

loc_00108FAE: ;
    eax = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108FB9u); RECOMP_ABI_CALL(0x00107AD0u, sub_00107AD0); /* call 0x00107AD0 */

loc_00108FB9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00108FCAu); RECOMP_ABI_CALL(0x002609D0u, sub_002609D0); /* call 0x002609D0 */

loc_00108FCA: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00108FEA; /* jne: not equal / not zero */

loc_00108FD2: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00108FEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00108FE7u); } /* indirect call */
    }

loc_00108FEA: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FEFB0)); /* movss */
    ecx = MEM32(esp + 0x98);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x318168)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x318164)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x318160)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x10;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x31815C)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010906Eu); RECOMP_ABI_CALL(0x002604F0u, sub_002604F0); /* call 0x002604F0 */

loc_0010906E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001090DFu); RECOMP_ABI_CALL(0x00260540u, sub_00260540); /* call 0x00260540 */

loc_001090DF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x9C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = LO8(ebx);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00109131u); RECOMP_ABI_CALL(0x00260150u, sub_00260150); /* call 0x00260150 */

loc_00109131: ;
    eax = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010913Cu); RECOMP_ABI_CALL(0x00107B40u, sub_00107B40); /* call 0x00107B40 */

loc_0010913C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010914Du); RECOMP_ABI_CALL(0x00260310u, sub_00260310); /* call 0x00260310 */

loc_0010914D: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00109170; /* jne: not equal / not zero */

loc_00109155: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109170u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010916Du); } /* indirect call */
    }

loc_00109170: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00109193; /* jne: not equal / not zero */

loc_00109178: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109193u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109190u); } /* indirect call */
    }

loc_00109193: ;
    ecx = MEM32(esp + 0xA0);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = LO8(ebx);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = edi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001091D9u); RECOMP_ABI_CALL(0x0025F8F0u, sub_0025F8F0); /* call 0x0025F8F0 */

loc_001091D9: ;
    eax = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001091E4u); RECOMP_ABI_CALL(0x00107D10u, sub_00107D10); /* call 0x00107D10 */

loc_001091E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001091F5u); RECOMP_ABI_CALL(0x0025FB20u, sub_0025FB20); /* call 0x0025FB20 */

loc_001091F5: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001091FEu); RECOMP_ABI_CALL(0x00109C40u, sub_00109C40); /* call 0x00109C40 */

loc_001091FE: ;
    ecx = MEM32(esp + 0xA8);
    edx = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x58) = edi;
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00109259u); RECOMP_ABI_CALL(0x0025F190u, sub_0025F190); /* call 0x0025F190 */

loc_00109259: ;
    eax = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00109264u); RECOMP_ABI_CALL(0x00108310u, sub_00108310); /* call 0x00108310 */

loc_00109264: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00109273u); RECOMP_ABI_CALL(0x0025F400u, sub_0025F400); /* call 0x0025F400 */

loc_00109273: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010927Cu); RECOMP_ABI_CALL(0x00109CB0u, sub_00109CB0); /* call 0x00109CB0 */

loc_0010927C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0xA4);
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x24, xmm0); /* movaps */
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001092B2u); RECOMP_ABI_CALL(0x0025EB60u, sub_0025EB60); /* call 0x0025EB60 */

loc_001092B2: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x174)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x178)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x17C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x180)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x190)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x194)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x198)); /* movss */
    eax = esp + 0x10;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00109329u); RECOMP_ABI_CALL(0x0025EBA0u, sub_0025EBA0); /* call 0x0025EBA0 */

loc_00109329: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x170);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ebx = MEM32(edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010935Du); RECOMP_ABI_CALL(0x0025EA30u, sub_0025EA30); /* call 0x0025EA30 */

loc_0010935D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1A0)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1A4)); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1A8)); /* movss */
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00109393u); RECOMP_ABI_CALL(0x0025EA50u, sub_0025EA50); /* call 0x0025EA50 */

loc_00109393: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1AC)); /* movss */
    ecx = MEM32(ebp + 8);
    MEMF(esp + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1B0)); /* movss */
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1B4)); /* movss */
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1B8)); /* movss */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1BC)); /* movss */
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C0)); /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C4)); /* movss */
    MEMF(esp + 0xC8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C8)); /* movss */
    edx = esp + 0x88;
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1CC)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010943Cu); RECOMP_ABI_CALL(0x0025D500u, sub_0025D500); /* call 0x0025D500 */

loc_0010943C: ;
    eax = MEM32(esp + 0xDC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00109465; /* jne: not equal / not zero */

loc_00109447: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xDC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109465u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109462u); } /* indirect call */
    }

loc_00109465: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00109470
 * Original: 0x00109470 - 0x0010968F (543 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x564) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x564;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x1FC);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x308) = eax;
    ecx = MEM32(ebx + 0x200);
    MEM32(esi + 0x30C) = ecx;
    edx = MEM32(ebx + 0x204);
    MEM32(esi + 0x310) = edx;
    eax = MEM32(ebx + 0x208);
    MEM32(esi + 0x314) = eax;
    ecx = MEM32(ebx + 0x20C);
    MEM32(esi + 0x318) = ecx;
    edx = MEM32(ebx + 0x210);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi + 0x5C0;
    MEM32(esi + 0x31C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001094D8u); RECOMP_ABI_CALL(0x00105FE0u, sub_00105FE0); /* call 0x00105FE0 */

loc_001094D8: ;
    eax = MEM32(0x3DEA20);
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x150;
    edi = esp + 0x30;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00109509u); RECOMP_ABI_CALL(0x00106F70u, sub_00106F70); /* call 0x00106F70 */

loc_00109509: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00109510u); RECOMP_ABI_CALL(0x001032A0u, sub_001032A0); /* call 0x001032A0 */

loc_00109510: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x258)); /* movss */
    SET_LO8(edx, MEM8(esp + 0x264));
    ecx = MEM32(0x530EB4);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x25C)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x260)); /* movss */
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x30) = LO8(edx);
    eax = MEM32(ecx);
    PUSH32(esp, 0x40);
    MEM32(esp + 0x24) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0010955Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010955Au); } /* indirect call */
    }

loc_0010955D: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010956Fu); RECOMP_ABI_CALL(0x0025CF50u, sub_0025CF50); /* call 0x0025CF50 */

loc_0010956F: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0xB04) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00109586u); RECOMP_ABI_CALL(0x00108710u, sub_00108710); /* call 0x00108710 */

loc_00109586: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0xB00) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00109597u); RECOMP_ABI_CALL(0x00106BC0u, sub_00106BC0); /* call 0x00106BC0 */

loc_00109597: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB08) = eax;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x28);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001095AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001095ACu); } /* indirect call */
    }

loc_001095AF: ;
    ecx = MEM32(esp + 0x1C);
    edi = eax;
    MEM16(edi + 4) = 0x28;
    eax = MEM32(esi + 0xB00);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001095CDu); RECOMP_ABI_CALL(0x0022AEC0u, sub_0022AEC0); /* call 0x0022AEC0 */

loc_001095CD: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(edi) = 0x31817C;
    MEM32(edi + 8) = 0x31816C;
    MEM32(edi + 0x24) = edx;
    MEM32(edi + 0x1C) = 0;
    MEM32(edi + 0x20) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001095F9u); RECOMP_ABI_CALL(0x002250A0u, sub_002250A0); /* call 0x002250A0 */

loc_001095F9: ;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010960C; /* jne: not equal / not zero */

loc_00109604: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0010960Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010960Au); } /* indirect call */
    }

loc_0010960C: ;
    ecx = MEM32(esi + 0xB00);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edx + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00109659; /* jle: less or equal (signed <=) */

loc_0010961E: ;
    eax = esi + 0xB44;
    MEM32(esp + 0x14) = eax;

loc_00109628: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010962Du); RECOMP_ABI_CALL(0x000C14A0u, sub_000C14A0); /* call 0x000C14A0 */

loc_0010962D: ;
    ecx = MEM32(esi + 0x27C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0010963Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109638u); } /* indirect call */
    }

loc_0010963B: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0xB00);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00109628; /* jl: less (signed <) */

loc_00109659: ;
    edx = MEM32(ebx + 0x20);
    MEM32(esi + 0xB0C) = edx;
    eax = MEM32(ebx + 0x1DC);
    MEM32(esi + 0xB10) = eax;
    ecx = MEM32(ebx + 0x1E0);
    MEM32(esi + 0xB14) = ecx;
    edx = MEM32(ebx + 0x1E4);
    POP32(esp, edi);
    MEM32(esi + 0xB18) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109690
 * Original: 0x00109690 - 0x00109728 (152 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x548) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x548;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x150;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001096CBu); RECOMP_ABI_CALL(0x00106F70u, sub_00106F70); /* call 0x00106F70 */

loc_001096CB: ;
    eax = MEM32(esi + 0xB00);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001096DCu); RECOMP_ABI_CALL(0x00108DB0u, sub_00108DB0); /* call 0x00108DB0 */

loc_001096DC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esi + 0xB0C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1F4)); /* movss */
    MEMF(esi + 0xB10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1F8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0xB14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1F4)); /* movss */
    POP32(esp, edi);
    MEMF(esi + 0xB18) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109730
 * Original: 0x00109730 - 0x00109738 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109730: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00109910(); return; /* tail jmp 0x00109910 */

}

/**
 * sub_00109740
 * Original: 0x00109740 - 0x001097F1 (177 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109740: ;
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
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_MEM(eax); /* movaps */
    edx = MEM32(ebp + 8);
    xmm1 = XMM_MEM(edx); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xC9); /* shufps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xD2); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xC9); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm2 = XMM_MEM(eax); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2 = XMM_MEM(edx); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    esi = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00109800
 * Original: 0x00109800 - 0x0010980F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109800(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00109800: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x7D4)); /* fmul dword ptr [ecx + 0x7d4] */
    fp_top() = -fp_top(); /* fchs */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00109810
 * Original: 0x00109810 - 0x00109842 (50 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109810(void)
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

loc_00109810: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010982D; /* je: equal / zero */

loc_00109818: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x7DC)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 12; return; /* ret 8 */

loc_0010982D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x7D8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00109850
 * Original: 0x00109850 - 0x00109857 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109850(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00109850: ;
    fp_push(MEMF(ecx + 0x7E0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00109860
 * Original: 0x00109860 - 0x00109867 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109860(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00109860: ;
    fp_push(MEMF(ecx + 0x7E4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00109870
 * Original: 0x00109870 - 0x00109877 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109870(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00109870: ;
    fp_push(MEMF(0x318438)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00109880
 * Original: 0x00109880 - 0x00109887 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109880(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00109880: ;
    fp_push(MEMF(ecx + 0xB1C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00109890
 * Original: 0x00109890 - 0x00109897 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109890(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00109890: ;
    fp_push(MEMF(ecx + 0xB20)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001098A0
 * Original: 0x001098A0 - 0x001098A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001098A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001098A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00109900(); return; /* tail jmp 0x00109900 */

}

/**
 * sub_001098B0
 * Original: 0x001098B0 - 0x001098BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001098B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001098B0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00109900(); return; /* tail jmp 0x00109900 */

}

/**
 * sub_001098C0
 * Original: 0x001098C0 - 0x001098CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001098C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001098C0: ;
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00109900(); return; /* tail jmp 0x00109900 */

}

/**
 * sub_001098D0
 * Original: 0x001098D0 - 0x001098DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001098D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001098D0: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00109900(); return; /* tail jmp 0x00109900 */

}

/**
 * sub_001098E0
 * Original: 0x001098E0 - 0x001098EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001098E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001098E0: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00109900(); return; /* tail jmp 0x00109900 */

}

/**
 * sub_001098F0
 * Original: 0x001098F0 - 0x001098FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001098F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001098F0: ;
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00109900(); return; /* tail jmp 0x00109900 */

}

/**
 * sub_00109900
 * Original: 0x00109900 - 0x0010990E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109900(void)
{

loc_00109900: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00109908u); RECOMP_ABI_CALL(0x00106840u, sub_00106840); /* call 0x00106840 */

loc_00109908: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109910
 * Original: 0x00109910 - 0x0010995A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109910: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(esi) = 0x31817C;
    MEM32(esi + 8) = 0x31816C;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ecx + 6));
    if ((_fa != 0)) goto loc_00109933; /* jne: not equal / not zero */

loc_0010992D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00109933u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109931u); } /* indirect call */
    }

loc_00109933: ;
    ecx = esi;
    PUSH32(esp, 0x0010993Au); RECOMP_ABI_CALL(0x0022AE40u, sub_0022AE40); /* call 0x0022AE40 */

loc_0010993A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00109954; /* je: equal / zero */

loc_00109941: ;
    eax = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109954u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109951u); } /* indirect call */
    }

loc_00109954: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109960
 * Original: 0x00109960 - 0x001099B4 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109960: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    edx = 0x80000000u;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = edx;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001099C0
 * Original: 0x001099C0 - 0x00109A27 (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001099C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001099C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001099E4; /* js: sign (negative) */

loc_001099CA: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001099E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001099E1u); } /* indirect call */
    }

loc_001099E4: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109A05; /* js: sign (negative) */

loc_001099EB: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109A05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109A02u); } /* indirect call */
    }

loc_00109A05: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109A25; /* js: sign (negative) */

loc_00109A0C: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109A25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109A22u); } /* indirect call */
    }

loc_00109A25: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00109A30
 * Original: 0x00109A30 - 0x00109B3D (269 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109A54; /* js: sign (negative) */

loc_00109A3A: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109A54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109A51u); } /* indirect call */
    }

loc_00109A54: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109A75; /* js: sign (negative) */

loc_00109A5B: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109A75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109A72u); } /* indirect call */
    }

loc_00109A75: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109A96; /* js: sign (negative) */

loc_00109A7C: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109A96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109A93u); } /* indirect call */
    }

loc_00109A96: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109AB7; /* js: sign (negative) */

loc_00109A9D: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109AB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109AB4u); } /* indirect call */
    }

loc_00109AB7: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109AD8; /* js: sign (negative) */

loc_00109ABE: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109AD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109AD5u); } /* indirect call */
    }

loc_00109AD8: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109AF9; /* js: sign (negative) */

loc_00109ADF: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109AF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109AF6u); } /* indirect call */
    }

loc_00109AF9: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109B1A; /* js: sign (negative) */

loc_00109B00: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109B1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109B17u); } /* indirect call */
    }

loc_00109B1A: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109B3B; /* js: sign (negative) */

loc_00109B21: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109B3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109B38u); } /* indirect call */
    }

loc_00109B3B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00109B40
 * Original: 0x00109B40 - 0x00109BAF (111 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109B40: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = 0x80000000u;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3003A4)); /* movss */
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00109BB0
 * Original: 0x00109BB0 - 0x00109BB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109BB0: ;
    g_seh_ebp = ebp; sub_00109A30(); return; /* tail jmp 0x00109A30 */

}

/**
 * sub_00109BC0
 * Original: 0x00109BC0 - 0x00109BE3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109BC0: ;
    edx = ecx;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109BE2; /* js: sign (negative) */

loc_00109BC9: ;
    ecx = MEM32(0x530EB4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00109BE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109BDEu); } /* indirect call */
    }

loc_00109BE1: ;
    POP32(esp, esi);

loc_00109BE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00109BF0
 * Original: 0x00109BF0 - 0x00109C37 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109C14; /* js: sign (negative) */

loc_00109BFA: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109C14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109C11u); } /* indirect call */
    }

loc_00109C14: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109C35; /* js: sign (negative) */

loc_00109C1B: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109C35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109C32u); } /* indirect call */
    }

loc_00109C35: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00109C40
 * Original: 0x00109C40 - 0x00109CA5 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109C61; /* js: sign (negative) */

loc_00109C4A: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109C61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109C5Eu); } /* indirect call */
    }

loc_00109C61: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109C82; /* js: sign (negative) */

loc_00109C68: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109C82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109C7Fu); } /* indirect call */
    }

loc_00109C82: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109CA3; /* js: sign (negative) */

loc_00109C89: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109CA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109CA0u); } /* indirect call */
    }

loc_00109CA3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00109CB0
 * Original: 0x00109CB0 - 0x00109D1E (110 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109CD4; /* js: sign (negative) */

loc_00109CBA: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109CD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109CD1u); } /* indirect call */
    }

loc_00109CD4: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109CF5; /* js: sign (negative) */

loc_00109CDB: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109CF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109CF2u); } /* indirect call */
    }

loc_00109CF5: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109D16; /* js: sign (negative) */

loc_00109CFC: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00109D16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109D13u); } /* indirect call */
    }

loc_00109D16: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001099C0(); return; /* tail jmp 0x001099C0 */

}

/**
 * sub_00109D20
 * Original: 0x00109D20 - 0x00109D46 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109D20: ;
    edx = ecx;
    eax = MEM32(edx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00109D45; /* js: sign (negative) */

loc_00109D29: ;
    ecx = MEM32(0x530EB4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x4C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00109D44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00109D41u); } /* indirect call */
    }

loc_00109D44: ;
    POP32(esp, esi);

loc_00109D45: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00109D50
 * Original: 0x00109D50 - 0x00109D5B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109D50: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00109D60
 * Original: 0x00109D60 - 0x00109D6D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109D60: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00109D70
 * Original: 0x00109D70 - 0x00109D86 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109D70(void)
{

loc_00109D70: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM8(eax) = 0;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00109D90
 * Original: 0x00109D90 - 0x00109D96 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109D90(void)
{

loc_00109D90: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00109DA0
 * Original: 0x00109DA0 - 0x00109DB2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109DA0(void)
{

loc_00109DA0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00109DC0
 * Original: 0x00109DC0 - 0x00109DDC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109DC0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109DD7; /* jne: not equal / not zero */

loc_00109DCA: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109DD7; /* jne: not equal / not zero */

loc_00109DD2: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00109DD7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109DE0
 * Original: 0x00109DE0 - 0x00109DF0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109DE0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00109E20
 * Original: 0x00109E20 - 0x00109E3C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109E20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109E37; /* jne: not equal / not zero */

loc_00109E2A: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109E37; /* jne: not equal / not zero */

loc_00109E32: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00109E37: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109E40
 * Original: 0x00109E40 - 0x00109E4D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109E40: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00109E50
 * Original: 0x00109E50 - 0x00109E74 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109E50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109E6F; /* jne: not equal / not zero */

loc_00109E5A: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109E6F; /* jne: not equal / not zero */

loc_00109E62: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109E6F; /* jne: not equal / not zero */

loc_00109E6A: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00109E6F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109E80
 * Original: 0x00109E80 - 0x00109EC2 (66 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109E80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00109E8Cu); RECOMP_ABI_CALL(0x000C8220u, sub_000C8220); /* call 0x000C8220 */

loc_00109E8C: ;
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00109EB3; /* jle: less or equal (signed <=) */

loc_00109E94: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00109E9Cu); RECOMP_ABI_CALL(0x000C8230u, sub_000C8230); /* call 0x000C8230 */

loc_00109E9C: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00109EA7u); RECOMP_ABI_CALL(0x002BE150u, sub_002BE150); /* call 0x002BE150 */

loc_00109EA7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00109EBC; /* jne: not equal / not zero */

loc_00109EAE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00109E94; /* jl: less (signed <) */

loc_00109EB3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edi) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00109EBC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00109ED0
 * Original: 0x00109ED0 - 0x00109EEB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x218));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109EE2; /* je: equal / zero */

loc_00109EDD: ;
    PUSH32(esp, 0x00109EE2u); RECOMP_ABI_CALL(0x000740D0u, sub_000740D0); /* call 0x000740D0 */

loc_00109EE2: ;
    MEM8(esi + 0x218) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00109EF0
 * Original: 0x00109EF0 - 0x00109EF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109EF0(void)
{

loc_00109EF0: ;
    eax = MEM32(ecx + 0x110);
    esp += 4; return; /* ret */

}

/**
 * sub_00109F00
 * Original: 0x00109F00 - 0x00109F03 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109F00(void)
{

loc_00109F00: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109F10
 * Original: 0x00109F10 - 0x00109F17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109F10(void)
{

loc_00109F10: ;
    eax = MEM32(ecx + 0x110);
    esp += 4; return; /* ret */

}

/**
 * sub_00109F20
 * Original: 0x00109F20 - 0x00109F38 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109F20: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00109F30; /* jbe: below or equal (unsigned <=) */

loc_00109F28: ;
    MEM8(0x3DE8D4) = 1;
    esp += 4; return; /* ret */

loc_00109F30: ;
    MEM8(0x3DE8D5) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00109F40
 * Original: 0x00109F40 - 0x00109F63 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109F40: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(0x3DE8D4) = LO8(ecx);
    MEM8(0x3DE8D5) = LO8(ecx);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(0x3DE8D0) = eax;
    PUSH32(esp, 0x00109F5Fu); RECOMP_ABI_CALL(0x000C91A0u, sub_000C91A0); /* call 0x000C91A0 */

loc_00109F5F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00109F70
 * Original: 0x00109F70 - 0x00109F71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109F70(void)
{

loc_00109F70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00109F80
 * Original: 0x00109F80 - 0x00109F92 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109F80: ;
    ecx = MEM32(ecx + 0x110);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109F8F; /* je: equal / zero */

loc_00109F8A: ;
    g_seh_ebp = ebp; sub_00070BE0(); return; /* tail jmp 0x00070BE0 */

loc_00109F8F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109F86
 * Original: 0x00109F86 - 0x00109F92 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109F86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109F86: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00109F8F; /* je: equal / zero */

loc_00109F8A: ;
    g_seh_ebp = ebp; sub_00070BE0(); return; /* tail jmp 0x00070BE0 */

loc_00109F8F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00109FA0
 * Original: 0x00109FA0 - 0x00109FA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109FA0(void)
{

loc_00109FA0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00109FB0
 * Original: 0x00109FB0 - 0x00109FBA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109FB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00109FB6u); RECOMP_ABI_CALL(0x00194DF0u, sub_00194DF0); /* call 0x00194DF0 */

loc_00109FB6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00109FC0
 * Original: 0x00109FC0 - 0x00109FF7 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00109FC0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM32(eax + 0x3C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0010A000
 * Original: 0x0010A000 - 0x0010A049 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A000: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM32(eax + 0x3C) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0010A050
 * Original: 0x0010A050 - 0x0010A09E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A050: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 4);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x39) = LO8(ecx);
    MEM32(eax + 0x3C) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0010A0A0
 * Original: 0x0010A0A0 - 0x0010A0C6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A0A0(void)
{

loc_0010A0A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    edx = MEM32(ecx + 0x128);
    PUSH32(esp, 0);
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0x0010A0C0u); RECOMP_ABI_CALL(0x000719F0u, sub_000719F0); /* call 0x000719F0 */

loc_0010A0C0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010A0D0
 * Original: 0x0010A0D0 - 0x0010A15C (140 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A0D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x30);
    edx = esi;
    ebp = edx + ecx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x48);
    MEM32(esp + 0x10) = 0;
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0010A151; /* je: equal / zero */

loc_0010A0F4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A13B; /* je: equal / zero */

loc_0010A0FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A100u); RECOMP_ABI_CALL(0x000C8250u, sub_000C8250); /* call 0x000C8250 */

loc_0010A100: ;
    ecx = eax + 0x82;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F7A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3F7A0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010A131; /* jle: less or equal (signed <=) */

loc_0010A114: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x31846C);
    PUSH32(esp, 0x0010A120u); RECOMP_ABI_CALL(0x002BF339u, sub_002BF339); /* call 0x002BF339 */

loc_0010A120: ;
    MEM32(esi) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 0;
    goto loc_0010A13B;

loc_0010A131: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010A13B; /* jle: less or equal (signed <=) */

loc_0010A137: ;
    MEM32(esp + 0x10) = eax;

loc_0010A13B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A0F4; /* jne: not equal / not zero */

loc_0010A146: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32C80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32C80 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010A156; /* jg: greater (signed >) */

loc_0010A151: ;
    eax = 0x32C80;

loc_0010A156: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A160
 * Original: 0x0010A160 - 0x0010A176 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A160(void)
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

loc_0010A160: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x194);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x3011DC) / fp_top()); /* fdivr dword ptr [0x3011dc] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010A180
 * Original: 0x0010A180 - 0x0010A187 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A180(void)
{

loc_0010A180: ;
    eax = MEM32(ecx + 0x194);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A190
 * Original: 0x0010A190 - 0x0010A197 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A190(void)
{

loc_0010A190: ;
    eax = MEM32(ecx + 0x1F0);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A1A0
 * Original: 0x0010A1A0 - 0x0010A34E (430 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A1A0: ;
    SET_LO8(edx, MEM8(0x3DE8D4));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010A1B6: ;
    eax = MEM32(esi + 0x1C);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0010A1FB; /* je: equal / zero */

loc_0010A1BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010A264; /* jne: not equal / not zero */

loc_0010A1C5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A1DA; /* jne: not equal / not zero */

loc_0010A1C9: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A347; /* je: equal / zero */

loc_0010A1D1: ;
    MEM32(esi + 0x1C) = 3;
    goto loc_0010A1B6;

loc_0010A1DA: ;
    _fa = (uint32_t)(MEM8(0x3DE8D5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3DE8D5), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A1EB; /* je: equal / zero */

loc_0010A1E2: ;
    MEM32(esi + 0x1C) = 3;
    SET_LO8(ecx, 1);

loc_0010A1EB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A1B6; /* je: equal / zero */

loc_0010A1F0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A1B6; /* jne: not equal / not zero */

loc_0010A1F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0010A1FB: ;
    ecx = MEM32(esi + 0x18);
    eax = ecx + -2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010A254; /* ja: above (unsigned >) */

loc_0010A206: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10A350); /* switch: 19 entries, 11 targets */
    if (_jt == 0x0010A20Du) goto loc_0010A20D;
    if (_jt == 0x0010A228u) goto loc_0010A228;
    if (_jt == 0x0010A22Du) goto loc_0010A22D;
    if (_jt == 0x0010A232u) goto loc_0010A232;
    if (_jt == 0x0010A235u) goto loc_0010A235;
    if (_jt == 0x0010A24Du) goto loc_0010A24D;
    if (_jt == 0x0010A254u) goto loc_0010A254;
    if (_jt == 0x0010A281u) goto loc_0010A281;
    if (_jt == 0x0010A2B7u) goto loc_0010A2B7;
    if (_jt == 0x0010A304u) goto loc_0010A304;
    if (_jt == 0x0010A332u) goto loc_0010A332;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010A20D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A24D; /* jne: not equal / not zero */

loc_0010A211: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A340; /* je: equal / zero */

loc_0010A219: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010A235; /* ja: above (unsigned >) */

loc_0010A221: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x10A368); /* switch: 13 entries, 8 targets */
    if (_jt == 0x0010A228u) goto loc_0010A228;
    if (_jt == 0x0010A22Du) goto loc_0010A22D;
    if (_jt == 0x0010A232u) goto loc_0010A232;
    if (_jt == 0x0010A235u) goto loc_0010A235;
    if (_jt == 0x0010A281u) goto loc_0010A281;
    if (_jt == 0x0010A2B7u) goto loc_0010A2B7;
    if (_jt == 0x0010A304u) goto loc_0010A304;
    if (_jt == 0x0010A332u) goto loc_0010A332;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010A228: ;
    eax = MEM32(esi + 0xC);
    goto loc_0010A235;

loc_0010A22D: ;
    eax = MEM32(esi + 0x10);
    goto loc_0010A235;

loc_0010A232: ;
    eax = MEM32(esi + 0x14);

loc_0010A235: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A23Bu); RECOMP_ABI_CALL(0x000C9160u, sub_000C9160); /* call 0x000C9160 */

loc_0010A23B: ;
    SET_LO8(edx, MEM8(0x3DE8D4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = 2;
    goto loc_0010A254;

loc_0010A24D: ;
    MEM32(esi + 0x1C) = 3;

loc_0010A254: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A1B6; /* je: equal / zero */

loc_0010A25D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0010A264: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010A347; /* jne: not equal / not zero */

loc_0010A26B: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010A332; /* ja: above (unsigned >) */

loc_0010A27A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10A384); /* switch: 6 entries, 4 targets */
    if (_jt == 0x0010A281u) goto loc_0010A281;
    if (_jt == 0x0010A2B7u) goto loc_0010A2B7;
    if (_jt == 0x0010A304u) goto loc_0010A304;
    if (_jt == 0x0010A332u) goto loc_0010A332;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010A281: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A2A6; /* je: equal / zero */

loc_0010A285: ;
    ecx = MEM32(edi + 0x144);
    eax = MEM32(esi + 0x24);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x144) = ecx;
    ecx = MEM32(edi + 0x138);
    MEM32(eax) = ecx;
    MEM32(edi + 0x138) = eax;
    MEM32(esi + 0x24) = ebx;

loc_0010A2A6: ;
    POP32(esp, edi);
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x1C) = 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0010A2B7: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A2DC; /* je: equal / zero */

loc_0010A2BB: ;
    ecx = MEM32(edi + 0x144);
    eax = MEM32(esi + 0x24);
    edx = MEM32(edi + 0x138);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x144) = ecx;
    MEM32(eax) = edx;
    MEM32(edi + 0x138) = eax;
    MEM32(esi + 0x24) = ebx;

loc_0010A2DC: ;
    ecx = esi + 0x34;
    MEM32(esi + 0x28) = ebx;
    PUSH32(esp, 0x0010A2E7u); RECOMP_ABI_CALL(0x00012990u, sub_00012990); /* call 0x00012990 */

loc_0010A2E7: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A2F0u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010A2F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x1C) = 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0010A304: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A312; /* je: equal / zero */

loc_0010A30B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0010A312u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010A30Fu); } /* indirect call */
    }

loc_0010A312: ;
    ecx = esi + 0x34;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x28) = ebx;
    PUSH32(esp, 0x0010A320u); RECOMP_ABI_CALL(0x00012990u, sub_00012990); /* call 0x00012990 */

loc_0010A320: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A329u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010A329: ;
    MEM32(esi + 0x30) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = ebx;

loc_0010A332: ;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0010A340: ;
    MEM32(esi + 0x1C) = 2;

loc_0010A347: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010A3A0
 * Original: 0x0010A3A0 - 0x0010A46D (205 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A3A0: ;
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
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x0010A3C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010A3BCu); } /* indirect call */
    }

loc_0010A3C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = ZX16(MEM16(esi + 6));
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    MEM8(esp + 0x12) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010A3D5u); RECOMP_ABI_CALL(0x00070830u, sub_00070830); /* call 0x00070830 */

loc_0010A3D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0010A3E4; /* jne: not equal / not zero */

loc_0010A3E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A43A; /* je: equal / zero */

loc_0010A3E4: ;
    ecx = ZX16(MEM16(esi + 6));
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010A3EEu); RECOMP_ABI_CALL(0x000707F0u, sub_000707F0); /* call 0x000707F0 */

loc_0010A3EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A424; /* je: equal / zero */

loc_0010A3F5: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010A3FDu); RECOMP_ABI_CALL(0x000BBBE0u, sub_000BBBE0); /* call 0x000BBBE0 */

loc_0010A3FD: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A424; /* je: equal / zero */

loc_0010A406: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010A415u); RECOMP_ABI_CALL(0x0017F7E0u, sub_0017F7E0); /* call 0x0017F7E0 */

loc_0010A415: ;
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xEC); PUSH32(esp, 0x0010A424u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010A41Eu); } /* indirect call */
    }

loc_0010A424: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A43A; /* je: equal / zero */

loc_0010A42C: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010A437u); RECOMP_ABI_CALL(0x000AB670u, sub_000AB670); /* call 0x000AB670 */

loc_0010A437: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010A43A: ;
    eax = ZX16(MEM16(esi + 6));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010A444u); RECOMP_ABI_CALL(0x00070810u, sub_00070810); /* call 0x00070810 */

loc_0010A444: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010A44Bu); RECOMP_ABI_CALL(0x001497B0u, sub_001497B0); /* call 0x001497B0 */

loc_0010A44B: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A464; /* je: equal / zero */

loc_0010A456: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x0010A464u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010A45Eu); } /* indirect call */
    }

loc_0010A464: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010A470
 * Original: 0x0010A470 - 0x0010A4D2 (98 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010A470: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM8(eax + 0x40) = 1;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM8(eax + 0x58) = 1;
    MEM32(eax + 0x5C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0010A4E0
 * Original: 0x0010A4E0 - 0x0010A633 (339 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A4E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x528378);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x204);
    MEM32(esp + 8) = eax;
    eax = esi + 0x200;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A62F; /* je: equal / zero */

loc_0010A507: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_0010A510: ;
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0010A617; /* jb: below (unsigned <) */

loc_0010A522: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A549; /* jne: not equal / not zero */

loc_0010A529: ;
    ecx = MEM32(esi + 0x110);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A53A; /* je: equal / zero */

loc_0010A533: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0010A53Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010A537u); } /* indirect call */
    }

loc_0010A53A: ;
    MEM32(esi + 0x110) = 0;
    goto loc_0010A5EB;

loc_0010A549: ;
    edi = MEM32(esi + 0x160);
    ecx = esi + 0x15C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A5EB; /* je: equal / zero */

loc_0010A562: ;
    edx = MEM32(ebx + 0xC);

loc_0010A565: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A578; /* je: equal / zero */

loc_0010A56A: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A565; /* jne: not equal / not zero */

loc_0010A576: ;
    goto loc_0010A5EB;

loc_0010A578: ;
    eax = MEM32(esi + 0x12C);
    ebp = MEM32(edi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x12C) = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0010A592u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010A58Fu); } /* indirect call */
    }

loc_0010A592: ;
    ecx = MEM32(esi + 0x124);
    MEM32(ebp) = ecx;
    MEM32(esi + 0x124) = ebp;
    ecx = MEM32(esi + 0x144);
    eax = MEM32(edi + 0xC);
    edx = MEM32(esi + 0x138);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x144) = ecx;
    MEM32(eax) = edx;
    MEM32(esi + 0x138) = eax;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(edi) = 0;
    eax = MEM32(esi + 0x158);
    MEM32(edi + 4) = eax;
    eax = MEM32(esi + 0x14C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x158) = edi;
    MEM32(esi + 0x14C) = eax;

loc_0010A5EB: ;
    eax = ebx;
    edx = MEM32(eax);
    ecx = ebx + 4;
    ebx = MEM32(ecx);
    edi = ebx;
    MEM32(edx + 4) = edi;
    MEM32(edi) = edx;
    MEM32(eax) = 0;
    edx = MEM32(esi + 0x1FC);
    MEM32(ecx) = edx;
    MEM32(esi + 0x1FC) = eax;
    MEM32(esi + 0x1F0) = MEM32(esi + 0x1F0) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x1F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0010A61A;

loc_0010A617: ;
    ebx = MEM32(ebx + 4);

loc_0010A61A: ;
    eax = esi + 0x200;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A510; /* jne: not equal / not zero */

loc_0010A62D: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0010A62F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A640
 * Original: 0x0010A640 - 0x0010A6A5 (101 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A640: ;
    eax = MEM32(ecx + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx + 0x194;
    if (CMP_EQ(_fa, _fb)) goto loc_0010A6A3; /* je: equal / zero */

loc_0010A651: ;
    eax = MEM32(ecx + 0x1A8);
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A69B; /* je: equal / zero */

loc_0010A661: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(eax + 0x1C) = 1;
    PUSH32(esp, 0x0010A671u); RECOMP_ABI_CALL(0x0010A1A0u, sub_0010A1A0); /* call 0x0010A1A0 */

loc_0010A671: ;
    esi = MEM32(edi + 0x14);
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x0010A686u); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010A686: ;
    MEM32(esi) = 0;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 4) = eax;
    eax = MEM32(edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0xC) = esi;
    MEM32(edi) = eax;
    POP32(esp, esi);

loc_0010A69B: ;
    ecx = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0010C460(); return; /* tail jmp 0x0010C460 */

loc_0010A6A3: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A6B0
 * Original: 0x0010A6B0 - 0x0010A743 (147 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A6B0: ;
    eax = MEM32(ecx + 0x204);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A6F1; /* je: equal / zero */

loc_0010A6CD: ;
    ebx = MEM32(esi);
    /* nop */

loc_0010A6D0: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A6E5; /* jne: not equal / not zero */

loc_0010A6D5: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A6E5; /* jne: not equal / not zero */

loc_0010A6DD: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A73C; /* je: equal / zero */

loc_0010A6E5: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A6D0; /* jne: not equal / not zero */

loc_0010A6F1: ;
    eax = MEM32(ecx + 0x1FC);
    edi = MEM32(ecx + 0x200);
    ebx = MEM32(eax + 4);
    MEM32(ecx + 0x1FC) = ebx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ebp = MEM32(esi);
    edx = ecx + 0x200;
    ebx = eax + 8;
    MEM32(ebx) = ebp;
    ebp = MEM32(esi + 4);
    MEM32(ebx + 4) = ebp;
    esi = MEM32(esi + 8);
    MEM32(ebx + 8) = esi;
    MEM32(ecx + 0x1F0) = MEM32(ecx + 0x1F0) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x1F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = eax;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edx;
    MEM32(edx) = eax;

loc_0010A73C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010A750
 * Original: 0x0010A750 - 0x0010AAAC (860 bytes, 262 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A750: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = edi + 0x194;
    MEM32(esp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010A8AE; /* je: equal / zero */

loc_0010A76F: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1A8);
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AA8A; /* jne: not equal / not zero */

loc_0010A784: ;
    PUSH32(esp, ebp);

loc_0010A785: ;
    eax = MEM32(esi + 0x18);
    ebp = 9;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010A8AC; /* ja: above (unsigned >) */

loc_0010A797: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10AAAC); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0010A79Eu) goto loc_0010A79E;
    if (_jt == 0x0010A7D0u) goto loc_0010A7D0;
    if (_jt == 0x0010A7E6u) goto loc_0010A7E6;
    if (_jt == 0x0010A8B4u) goto loc_0010A8B4;
    if (_jt == 0x0010A8C9u) goto loc_0010A8C9;
    if (_jt == 0x0010A8DDu) goto loc_0010A8DD;
    if (_jt == 0x0010A945u) goto loc_0010A945;
    if (_jt == 0x0010A9A9u) goto loc_0010A9A9;
    if (_jt == 0x0010A9CDu) goto loc_0010A9CD;
    if (_jt == 0x0010AA17u) goto loc_0010AA17;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010A79E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A7BA; /* jne: not equal / not zero */

loc_0010A7A3: ;
    eax = MEM32(edi + 0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A8AC; /* jne: not equal / not zero */

loc_0010A7B1: ;
    MEM32(esi + 0x18) = 1;
    goto loc_0010A785;

loc_0010A7BA: ;
    _fa = (uint32_t)(MEM32(edi + 0x12C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x12C), 0x19 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010A8AC; /* jge: greater or equal (signed >=) */

loc_0010A7C7: ;
    MEM32(esi + 0x18) = 1;
    goto loc_0010A785;

loc_0010A7D0: ;
    SET_LO8(eax, MEM8(0x3DE8D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A8AC; /* je: equal / zero */

loc_0010A7DD: ;
    MEM32(esi + 0x18) = 3;
    goto loc_0010A785;

loc_0010A7E6: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A82A; /* jne: not equal / not zero */

loc_0010A7EB: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x130);
    PUSH32(esp, 0x3184D4);
    PUSH32(esp, 0x0010A7FFu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0010A7FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A80F; /* je: equal / zero */

loc_0010A806: ;
    ecx = eax;
    PUSH32(esp, 0x0010A80Du); RECOMP_ABI_CALL(0x000740E0u, sub_000740E0); /* call 0x000740E0 */

loc_0010A80D: ;
    goto loc_0010A811;

loc_0010A80F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010A811: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x0010A821u); RECOMP_ABI_CALL(0x00070A60u, sub_00070A60); /* call 0x00070A60 */

loc_0010A821: ;
    MEM32(esi + 0x18) = 6;
    goto loc_0010A870;

loc_0010A82A: ;
    ecx = edi + 0x120;
    PUSH32(esp, 0x0010A835u); RECOMP_ABI_CALL(0x0010C100u, sub_0010C100); /* call 0x0010C100 */

loc_0010A835: ;
    MEM32(esi + 0x20) = eax;
    ecx = MEM32(edi + 0xC0);
    edx = MEM32(edi + 0xBC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0010A84Du); RECOMP_ABI_CALL(0x00070D40u, sub_00070D40); /* call 0x00070D40 */

loc_0010A84D: ;
    eax = MEM32(esi + 8);
    edx = MEM32(edi + 0xC8);
    ecx = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx + ecx + 1;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x0010A86Bu); RECOMP_ABI_CALL(0x00070A60u, sub_00070A60); /* call 0x00070A60 */

loc_0010A86B: ;
    MEM32(esi + 0x18) = ebp;
    SET_LO8(ebx, 1);

loc_0010A870: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    ebp = esi + 0x34;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010A880u); RECOMP_ABI_CALL(0x00075190u, sub_00075190); /* call 0x00075190 */

loc_0010A880: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0010A88Au); RECOMP_ABI_CALL(0x000719F0u, sub_000719F0); /* call 0x000719F0 */

loc_0010A88A: ;
    ecx = ebp;
    PUSH32(esp, 0x0010A891u); RECOMP_ABI_CALL(0x00012990u, sub_00012990); /* call 0x00012990 */

loc_0010A891: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010A89Au); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010A89A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(esi + 0x2C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0010A785; /* jne: not equal / not zero */

loc_0010A8AC: ;
    POP32(esp, ebp);

loc_0010A8AD: ;
    POP32(esp, esi);

loc_0010A8AE: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A8B4: ;
    SET_LO8(eax, MEM8(0x3DE8D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A8AC; /* je: equal / zero */

loc_0010A8BD: ;
    MEM32(esi + 0x18) = 8;
    goto loc_0010A785;

loc_0010A8C9: ;
    edx = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010A8D5u); RECOMP_ABI_CALL(0x00073820u, sub_00073820); /* call 0x00073820 */

loc_0010A8D5: ;
    MEM32(esi + 0x18) = ebp;
    goto loc_0010A785;

loc_0010A8DD: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A8EA; /* jne: not equal / not zero */

loc_0010A8E2: ;
    eax = MEM32(edi + 0x114);
    goto loc_0010A901;

loc_0010A8EA: ;
    eax = MEM32(edi + 0x138);
    ecx = MEM32(eax);
    MEM32(edi + 0x138) = ecx;
    MEM32(edi + 0x144) = MEM32(edi + 0x144) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x144)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = eax;

loc_0010A901: ;
    edx = eax;
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;
    edx = edx & 0xFFFFFF80u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    PUSH32(esp, 0x109F20);
    PUSH32(esp, eax);
    MEM32(esi + 0x28) = edx;
    MEM32(0x3DE8D0) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM8(0x3DE8D4) = 0;
    MEM8(0x3DE8D5) = 0;
    PUSH32(esp, 0x0010A933u); RECOMP_ABI_CALL(0x000C91A0u, sub_000C91A0); /* call 0x000C91A0 */

loc_0010A933: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(esi + 0x18) = 2;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A945: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010A94Eu); RECOMP_ABI_CALL(0x000C8250u, sub_000C8250); /* call 0x000C8250 */

loc_0010A94E: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3184A8);
    PUSH32(esp, 0x0010A95Eu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0010A95E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x109F70);
    PUSH32(esp, eax);
    ecx = esi + 0x34;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x0010A972u); RECOMP_ABI_CALL(0x00012970u, sub_00012970); /* call 0x00012970 */

loc_0010A972: ;
    eax = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0x109F20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(0x3DE8D0) = eax;
    MEM8(0x3DE8D4) = 0;
    MEM8(0x3DE8D5) = 0;
    PUSH32(esp, 0x0010A997u); RECOMP_ABI_CALL(0x000C91A0u, sub_000C91A0); /* call 0x000C91A0 */

loc_0010A997: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(esi + 0x18) = 4;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A9A9: ;
    SET_LO8(eax, MEM8(0x3DE8D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010A8AC; /* je: equal / zero */

loc_0010A9B6: ;
    ecx = esi + 0x34;
    PUSH32(esp, 0x0010A9BEu); RECOMP_ABI_CALL(0x00012A10u, sub_00012A10); /* call 0x00012A10 */

loc_0010A9BE: ;
    POP32(esp, ebp);
    MEM32(esi + 0x18) = 5;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010A9CD: ;
    eax = MEM32(edi + 0x118);
    ecx = eax;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x30) = eax;
    eax = ecx;
    PUSH32(esp, 0x109F20);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(0x3DE8D0) = eax;
    MEM8(0x3DE8D4) = 0;
    MEM8(0x3DE8D5) = 0;
    PUSH32(esp, 0x0010AA05u); RECOMP_ABI_CALL(0x000C91A0u, sub_000C91A0); /* call 0x000C91A0 */

loc_0010AA05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(esi + 0x18) = 7;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010AA17: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AA3D; /* jne: not equal / not zero */

loc_0010AA1C: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 1);
    MEM32(edi + 0x110) = ecx;
    PUSH32(esp, 0x0010AA2Cu); RECOMP_ABI_CALL(0x000719F0u, sub_000719F0); /* call 0x000719F0 */

loc_0010AA2C: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0010AA35u); RECOMP_ABI_CALL(0x0010C9A0u, sub_0010C9A0); /* call 0x0010C9A0 */

loc_0010AA35: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010AA3D: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 4);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ecx = edi + 0x14C;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0010AA69u); RECOMP_ABI_CALL(0x0010C8D0u, sub_0010C8D0); /* call 0x0010C8D0 */

loc_0010AA69: ;
    edx = MEM32(edi + 0x15C);
    ecx = MEM32(edx + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0010AA79u); RECOMP_ABI_CALL(0x000719F0u, sub_000719F0); /* call 0x000719F0 */

loc_0010AA79: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0010AA82u); RECOMP_ABI_CALL(0x0010C9A0u, sub_0010C9A0); /* call 0x0010C9A0 */

loc_0010AA82: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0010AA8A: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010AA94u); RECOMP_ABI_CALL(0x0010A1A0u, sub_0010A1A0); /* call 0x0010A1A0 */

loc_0010AA94: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010A8AD; /* jne: not equal / not zero */

loc_0010AA9E: ;
    ecx = ebx;
    PUSH32(esp, 0x0010AAA5u); RECOMP_ABI_CALL(0x0010C9A0u, sub_0010C9A0); /* call 0x0010C9A0 */

loc_0010AAA5: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010AAE0
 * Original: 0x0010AAE0 - 0x0010AF05 (1061 bytes, 268 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0010AAE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AAF7u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_0010AAF7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x3185B0;
    MEM32(esi + 8) = 0x3185A4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEMF(esi + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEMF(esi + 0xD0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0xE8) = ebx;
    MEM32(esi + 0xEC) = ebx;
    MEM8(esi + 0xF0) = 1;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xF4) = eax;
    MEM32(esi + 0xF8) = ebx;
    MEM32(esi + 0xFC) = ebx;
    MEM32(esi + 0x100) = ebx;
    MEM32(esi + 0x104) = ebx;
    MEM8(esi + 0x108) = 1;
    MEM32(esi + 0x10C) = eax;
    edi = esi + 0x120;
    MEM32(esi + 0x110) = ebx;
    MEM32(esi + 0x114) = ebx;
    MEM32(esi + 0x118) = ebx;
    MEM8(esi + 0x11C) = LO8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x10), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010ABDA; /* je: equal / zero */

loc_0010ABCF: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ABD7u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010ABD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010ABDA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ABDFu); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_0010ABDF: ;
    PUSH32(esp, 0x2FF5B8);
    ebp = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ABEBu); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0010ABEB: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x1DB0);
    PUSH32(esp, 0x2FF590);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AC01u); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_0010AC01: ;
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AC0Bu); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0010AC0B: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(edi) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = 0x19;
    MEM32(edi + 0xC) = ebx;
    MEM8(edi + 0x10) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AC2Cu); RECOMP_ABI_CALL(0x0010BF60u, sub_0010BF60); /* call 0x0010BF60 */

loc_0010AC2C: ;
    MEM32(esi + 0x134) = ebx;
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x13C) = ebx;
    MEM32(esi + 0x140) = ebx;
    MEM32(esi + 0x144) = ebx;
    MEM8(esi + 0x148) = LO8(ebx);
    MEM32(esi + 0x14C) = ebx;
    MEM32(esi + 0x150) = ebx;
    MEM32(esi + 0x154) = ebx;
    MEM32(esi + 0x158) = ebx;
    ebp = esi + 0x134;
    edi = esi + 0x14C;
    eax = edi + 0x10;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM8(edi + 0x28) = 1;
    MEM8(esi + 0x178) = LO8(ebx);
    MEM32(esi + 0x17C) = ebx;
    MEM32(esi + 0x180) = ebx;
    MEM32(esi + 0x184) = ebx;
    MEM32(esi + 0x188) = ebx;
    MEM32(esi + 0x18C) = ebx;
    ecx = esi + 0x194;
    MEM32(esi + 0x190) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ACCBu); RECOMP_ABI_CALL(0x0010C920u, sub_0010C920); /* call 0x0010C920 */

loc_0010ACCB: ;
    MEM32(esi + 0x1F0) = ebx;
    MEM32(esi + 0x1F4) = ebx;
    MEM32(esi + 0x1F8) = ebx;
    MEM32(esi + 0x1FC) = ebx;
    eax = esi + 0x200;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = edx;
    ecx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    MEM8(esi + 0x214) = 1;
    PUSH32(esp, 0x19);
    ecx = edi;
    MEM8(esi + 0x218) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AD17u); RECOMP_ABI_CALL(0x0010C830u, sub_0010C830); /* call 0x0010C830 */

loc_0010AD17: ;
    PUSH32(esp, 0x1A);
    ecx = esi + 0x194;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AD24u); RECOMP_ABI_CALL(0x0010CB80u, sub_0010CB80); /* call 0x0010CB80 */

loc_0010AD24: ;
    PUSH32(esp, 0x1A);
    ecx = esi + 0x1F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AD31u); RECOMP_ABI_CALL(0x0010C9D0u, sub_0010C9D0); /* call 0x0010C9D0 */

loc_0010AD31: ;
    MEM8(esp + 0x20) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1F;
    edi = esp + 0x21;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x3C2528);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, 0x318444);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    MEM32(esp + 0x1C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AD59u); RECOMP_ABI_CALL(0x0007C490u, sub_0007C490); /* call 0x0007C490 */

loc_0010AD59: ;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, 0x31859C);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AD69u); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0010AD69: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AD73u); RECOMP_ABI_CALL(0x000C9370u, sub_000C9370); /* call 0x000C9370 */

loc_0010AD73: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x318454);
    edi = esp + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AD86u); RECOMP_ABI_CALL(0x00109E80u, sub_00109E80); /* call 0x00109E80 */

loc_0010AD86: ;
    ecx = edi;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AD8Eu); RECOMP_ABI_CALL(0x00194DF0u, sub_00194DF0); /* call 0x00194DF0 */

loc_0010AD8E: ;
    edi = eax;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AD96u); RECOMP_ABI_CALL(0x000C8250u, sub_000C8250); /* call 0x000C8250 */

loc_0010AD96: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    MEM32(esp + 0x44) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ADA3u); RECOMP_ABI_CALL(0x000C93B0u, sub_000C93B0); /* call 0x000C93B0 */

loc_0010ADA3: ;
    MEM32(esp + 0x4C) = eax;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ADB3u); RECOMP_ABI_CALL(0x000C9420u, sub_000C9420); /* call 0x000C9420 */

loc_0010ADB3: ;
    edx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ADC4u); RECOMP_ABI_CALL(0x000C9A00u, sub_000C9A00); /* call 0x000C9A00 */

loc_0010ADC4: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ADCDu); RECOMP_ABI_CALL(0x000C90F0u, sub_000C90F0); /* call 0x000C90F0 */

loc_0010ADCD: ;
    ecx = MEM32(esi + 0xB0);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ADD9u); RECOMP_ABI_CALL(0x000C8250u, sub_000C8250); /* call 0x000C8250 */

loc_0010ADD9: ;
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x580);
    PUSH32(esp, eax);
    PUSH32(esp, 0x318570);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ADECu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0010ADEC: ;
    MEM32(esi + 0x114) = eax;
    MEM8(esp + 0xB4) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1F;
    edi = esp + 0xB5;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(esp + 0x2C);
    edx = MEM32(eax + 0x4C);
    eax = MEM32(eax + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xBC;
    PUSH32(esp, 0x318560);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AE2Au); RECOMP_ABI_CALL(0x002BE1D6u, sub_002BE1D6); /* call 0x002BE1D6 */

loc_0010AE2A: ;
    edx = esp + 0xC4;
    PUSH32(esp, 0x80);
    PUSH32(esp, edx);
    edi = esp + 0x4C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AE40u); RECOMP_ABI_CALL(0x00109E80u, sub_00109E80); /* call 0x00109E80 */

loc_0010AE40: ;
    eax = edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AE48u); RECOMP_ABI_CALL(0x00194DF0u, sub_00194DF0); /* call 0x00194DF0 */

loc_0010AE48: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xB8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AE54u); RECOMP_ABI_CALL(0x000C8250u, sub_000C8250); /* call 0x000C8250 */

loc_0010AE54: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x580);
    PUSH32(esp, eax);
    PUSH32(esp, 0x318534);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AE67u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0010AE67: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC4)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3210B0); /* comiss */
    MEM32(esi + 0x118) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010AEFB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3210B0)) */

loc_0010AE81: ;
    _fa = (uint32_t)(MEM32(esi + 0xC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC8), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010AEFB; /* jle: less or equal (signed <=) */

loc_0010AE89: ;
    _fa = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xCC), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010AEFB; /* jle: less or equal (signed <=) */

loc_0010AE91: ;
    eax = esi + 0xB0;
    MEM8(esi + 0x11C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AEA3u); RECOMP_ABI_CALL(0x0010A0D0u, sub_0010A0D0); /* call 0x0010A0D0 */

loc_0010AEA3: ;
    edi = eax;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x82) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x82;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x19);
    edi = edi & 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    ecx = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AEB9u); RECOMP_ABI_CALL(0x0010C3C0u, sub_0010C3C0); /* call 0x0010C3C0 */

loc_0010AEB9: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x19);
    PUSH32(esp, edi);
    PUSH32(esp, 0x318500);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AEC7u); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0010AEC7: ;
    eax = MEM32(ebp + 4);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    MEM32(ebp + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = edx;
    MEM32(esi + 0x180) = eax;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = ecx;
    MEM32(eax) = edx;
    PUSH32(esp, 0x19);
    ecx = esi + 0x188;
    MEM32(ebp + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010AEFBu); RECOMP_ABI_CALL(0x000762D0u, sub_000762D0); /* call 0x000762D0 */

loc_0010AEFB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010AF10
 * Original: 0x0010AF10 - 0x0010B024 (276 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010AF10: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0010AF1Cu); RECOMP_ABI_CALL(0x0010A640u, sub_0010A640); /* call 0x0010A640 */

loc_0010AF1C: ;
    SET_LO8(eax, MEM8(edi + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AF64; /* jne: not equal / not zero */

loc_0010AF26: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0x480);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3186FC);
    esi = edi + 0x184;
    PUSH32(esp, 0x0010AF40u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0010AF40: ;
    ecx = MEM32(esp + 0x30);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(edi + 0x17C) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edi;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    MEM8(eax) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0010AF64: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(edi + 0x13C);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x180);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0010AFF6; /* jle: less or equal (signed <=) */

loc_0010AF85: ;
    PUSH32(esp, ebx);
    ebx = edi + 0x15C;
    /* nop */

loc_0010AF90: ;
    esi = MEM32(edi + 0x160);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010AFE1; /* je: equal / zero */

loc_0010AF9F: ;
    /* nop */

loc_0010AFA0: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AFD1; /* jne: not equal / not zero */

loc_0010AFA5: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x128);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x0010AFC5u); RECOMP_ABI_CALL(0x000719F0u, sub_000719F0); /* call 0x000719F0 */

loc_0010AFC5: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0010AFD1u); RECOMP_ABI_CALL(0x0010A6B0u, sub_0010A6B0); /* call 0x0010A6B0 */

loc_0010AFD1: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010AFA0; /* jne: not equal / not zero */

loc_0010AFDD: ;
    ecx = MEM32(esp + 0x14);

loc_0010AFE1: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0010AF90; /* jl: less (signed <) */

loc_0010AFF5: ;
    POP32(esp, ebx);

loc_0010AFF6: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(edi + 0x180);
    eax = MEM32(esp + 0x24);
    MEM32(edi + 0x17C) = ecx;
    ecx = edi + 0x184;
    MEM32(ecx) = edx;
    POP32(esp, ebp);
    MEM32(eax + 8) = edi;
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    MEM8(eax) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010B030
 * Original: 0x0010B030 - 0x0010B0CF (159 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x11C));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B05E; /* jne: not equal / not zero */

loc_0010B040: ;
    eax = MEM32(esi + 0x184);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B04Cu); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010B04C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x17C) = ebx;
    MEM32(esi + 0x184) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0010B05E: ;
    eax = MEM32(esi + 0x188);
    edx = MEM32(esi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010B094; /* je: equal / zero */

loc_0010B06F: ;
    /* nop */

loc_0010B070: ;
    edi = MEM32(esi + 0x144);
    ecx = MEM32(eax);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x144) = edi;
    edi = MEM32(esi + 0x138);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx) = edi;
    MEM32(esi + 0x138) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010B070; /* jne: not equal / not zero */

loc_0010B094: ;
    eax = MEM32(esi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    ecx = MEM32(esi + 0x188);
    if (CMP_NE(_fa, _fb)) goto loc_0010B0A8; /* jne: not equal / not zero */

loc_0010B0A4: ;
    eax = ecx;
    goto loc_0010B0B9;

loc_0010B0A8: ;
    edi = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010B0B4u); RECOMP_ABI_CALL(0x002BE8E0u, sub_002BE8E0); /* call 0x002BE8E0 */

loc_0010B0B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B0B9: ;
    MEM32(esi + 0x18C) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x17C) = ebx;
    MEM32(esi + 0x184) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B0D0
 * Original: 0x0010B0D0 - 0x0010B185 (181 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010B0D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0010B0DCu); RECOMP_ABI_CALL(0x0010A640u, sub_0010A640); /* call 0x0010A640 */

loc_0010B0DC: ;
    SET_LO8(ebx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010B118; /* je: equal / zero */

loc_0010B0E5: ;
    ecx = MEM32(edi + 0x110);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B118; /* je: equal / zero */

loc_0010B0EF: ;
    eax = MEM32(ecx + 0x128);
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0010B10Cu); RECOMP_ABI_CALL(0x000719F0u, sub_000719F0); /* call 0x000719F0 */

loc_0010B10C: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0010B118u); RECOMP_ABI_CALL(0x0010A6B0u, sub_0010A6B0); /* call 0x0010A6B0 */

loc_0010B118: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010B176; /* je: equal / zero */

loc_0010B11D: ;
    SET_LO8(eax, MEM8(edi + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B176; /* je: equal / zero */

loc_0010B127: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x160);
    ebx = edi + 0x15C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B175; /* je: equal / zero */

loc_0010B13D: ;
    MEM32(esp + 0xC) = 1;

loc_0010B145: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x128);
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0010B15Du); RECOMP_ABI_CALL(0x000719F0u, sub_000719F0); /* call 0x000719F0 */

loc_0010B15D: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0010B169u); RECOMP_ABI_CALL(0x0010A6B0u, sub_0010A6B0); /* call 0x0010A6B0 */

loc_0010B169: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B145; /* jne: not equal / not zero */

loc_0010B175: ;
    POP32(esp, esi);

loc_0010B176: ;
    ecx = edi;
    PUSH32(esp, 0x0010B17Du); RECOMP_ABI_CALL(0x0010A4E0u, sub_0010A4E0); /* call 0x0010A4E0 */

loc_0010B17D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010B190
 * Original: 0x0010B190 - 0x0010B219 (137 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B190: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1A8);
    esi = edi + 0x1A4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B1D1; /* je: equal / zero */

loc_0010B1AF: ;
    ebx = MEM32(edx);

loc_0010B1B1: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B1C5; /* jne: not equal / not zero */

loc_0010B1B6: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B1C5; /* jne: not equal / not zero */

loc_0010B1BE: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B212; /* je: equal / zero */

loc_0010B1C5: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B1B1; /* jne: not equal / not zero */

loc_0010B1D1: ;
    esi = MEM32(edi + 0x1A0);
    ebp = MEM32(edi + 0x1A4);
    eax = MEM32(esi + 4);
    ebx = edi + 0x1A4;
    MEM32(edi + 0x1A0) = eax;
    PUSH32(esp, edx);
    ecx = esi + 8;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0010B202u); RECOMP_ABI_CALL(0x0010C2C0u, sub_0010C2C0); /* call 0x0010C2C0 */

loc_0010B202: ;
    MEM32(edi + 0x194) = MEM32(edi + 0x194) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 4) = esi;
    MEM32(esi) = ebp;
    MEM32(esi + 4) = ebx;
    MEM32(ebx) = esi;

loc_0010B212: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010B220
 * Original: 0x0010B220 - 0x0010B2C4 (164 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B220: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B2BD; /* jne: not equal / not zero */

loc_0010B22F: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x0010B237u); RECOMP_ABI_CALL(0x0010A4E0u, sub_0010A4E0); /* call 0x0010A4E0 */

loc_0010B237: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x1F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B2BD; /* jne: not equal / not zero */

loc_0010B244: ;
    SET_LO8(ecx, MEM8(eax + 0x11C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B2BA; /* je: equal / zero */

loc_0010B24E: ;
    ecx = MEM32(eax + 0x140);
    _fb = (uint32_t)(MEM32(eax + 0x144)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + 0x144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010B2BA; /* jle: less or equal (signed <=) */

loc_0010B25E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;

loc_0010B262: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + 0x138);
    ecx = MEM32(edx);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x134;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x18C);
    ebp = MEM32(ecx + 0x190);
    _fb = (uint32_t)(0x188) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x188;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010B2A1; /* je: equal / zero */

loc_0010B295: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B29B; /* je: equal / zero */

loc_0010B299: ;
    MEM32(eax) = edx;

loc_0010B29B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 4;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010B2B5;

loc_0010B2A1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x17;
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B2B5u); RECOMP_ABI_CALL(0x0013D8F0u, sub_0013D8F0); /* call 0x0013D8F0 */

loc_0010B2B5: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010B262; /* jne: not equal / not zero */

loc_0010B2B8: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0010B2BA: ;
    MEM8(esi) = 1;

loc_0010B2BD: ;
    SET_LO8(eax, MEM8(esi));
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010B2D0
 * Original: 0x0010B2D0 - 0x0010B43D (365 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B2D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 3);
    MEM32(esi) = 0x3185B0;
    MEM32(esi + 8) = 0x3185A4;
    PUSH32(esp, 0x0010B2E8u); RECOMP_ABI_CALL(0x0010B0D0u, sub_0010B0D0); /* call 0x0010B0D0 */

loc_0010B2E8: ;
    eax = MEM32(esi + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B2F4u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010B2F4: ;
    ecx = MEM32(esi + 0x118);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010B300u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010B300: ;
    SET_LO8(eax, MEM8(esi + 0x218));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B314; /* je: equal / zero */

loc_0010B30F: ;
    PUSH32(esp, 0x0010B314u); RECOMP_ABI_CALL(0x000740D0u, sub_000740D0); /* call 0x000740D0 */

loc_0010B314: ;
    PUSH32(esp, edi);
    edi = esi + 0x1F0;
    ecx = edi;
    MEM8(esi + 0x218) = LO8(ebx);
    PUSH32(esp, 0x0010B328u); RECOMP_ABI_CALL(0x001461F0u, sub_001461F0); /* call 0x001461F0 */

loc_0010B328: ;
    _fa = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x24), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B339; /* je: equal / zero */

loc_0010B32D: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010B336u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010B336: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B339: ;
    MEM32(edi + 8) = ebx;
    edi = esi + 0x194;
    ecx = edi;
    PUSH32(esp, 0x0010B349u); RECOMP_ABI_CALL(0x0010C460u, sub_0010C460); /* call 0x0010C460 */

loc_0010B349: ;
    _fa = (uint32_t)(MEM8(edi + 0x58)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x58), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B35A; /* je: equal / zero */

loc_0010B34E: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B357u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010B357: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B35A: ;
    ecx = edi + 0x4C;
    MEM32(edi + 8) = ebx;
    PUSH32(esp, 0x0010B365u); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010B365: ;
    eax = MEM32(esi + 0x188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B378; /* je: equal / zero */

loc_0010B36F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B375u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0010B375: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B378: ;
    edi = esi + 0x14C;
    ecx = edi;
    PUSH32(esp, 0x0010B385u); RECOMP_ABI_CALL(0x001461F0u, sub_001461F0); /* call 0x001461F0 */

loc_0010B385: ;
    _fa = (uint32_t)(MEM8(edi + 0x28)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x28), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B396; /* je: equal / zero */

loc_0010B38A: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010B393u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010B393: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B396: ;
    MEM32(edi + 8) = ebx;
    _fa = (uint32_t)(MEM8(esi + 0x148)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x148), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010B3B1; /* je: equal / zero */

loc_0010B3A2: ;
    edx = MEM32(esi + 0x134);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010B3AEu); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010B3AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B3B1: ;
    MEM32(esi + 0x134) = ebx;
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x13C) = ebx;
    MEM32(esi + 0x140) = ebx;
    MEM32(esi + 0x144) = ebx;
    _fa = (uint32_t)(MEM8(esi + 0x130)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x130), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B3E6; /* je: equal / zero */

loc_0010B3D7: ;
    eax = MEM32(esi + 0x120);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B3E3u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010B3E3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B3E6: ;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = ebx;
    MEM32(esi + 0x128) = ebx;
    MEM32(esi + 0x12C) = ebx;
    _fa = (uint32_t)(MEM8(esi + 0x108)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x108), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B419; /* je: equal / zero */

loc_0010B406: ;
    eax = MEM32(esi + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B419; /* je: equal / zero */

loc_0010B410: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B416u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010B416: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B419: ;
    _fa = (uint32_t)(MEM8(esi + 0xF0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xF0), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B434; /* je: equal / zero */

loc_0010B421: ;
    eax = MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B434; /* je: equal / zero */

loc_0010B42B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B431u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010B431: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B434: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_0010B440
 * Original: 0x0010B440 - 0x0010B787 (839 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B440: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_0010B4A8; /* jae: above or equal (unsigned >=) */

loc_0010B45D: ;
    ecx = MEM32(ebp + 4);
    edi = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((3) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B487; /* je: equal / zero */

loc_0010B46B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x19);
    ecx = ebp;
    PUSH32(esp, 0x0010B476u); RECOMP_ABI_CALL(0x0010C760u, sub_0010C760); /* call 0x0010C760 */

loc_0010B476: ;
    ebx = eax;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B496; /* je: equal / zero */

loc_0010B47F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010B485u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0010B485: ;
    goto loc_0010B493;

loc_0010B487: ;
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0x0010B491u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0010B491: ;
    ebx = eax;

loc_0010B493: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010B496: ;
    edx = ebx + edi * 8;
    MEM32(ebp) = ebx;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = ebx;

loc_0010B4A8: ;
    _fa = (uint32_t)(MEM8(esi + 0x17C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x17C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010B77D; /* jne: not equal / not zero */

loc_0010B4B5: ;
    eax = MEM32(esp + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xD0); /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0xC4); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0xD4); /* subss */
    SET_LO8(eax, MEM8(esp + 0x24));
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    edx = (uint32_t)recomp_cvt_si32((double)xmm1.f[0], g_mxcsr, 1); /* cvttss2si */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0010B542; /* je: equal / zero */

loc_0010B504: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B542; /* jl: less (signed <) */

loc_0010B508: ;
    eax = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010B542; /* jge: greater or equal (signed >=) */

loc_0010B512: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B542; /* jl: less (signed <) */

loc_0010B516: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0xCC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010B542; /* jge: greater or equal (signed >=) */

loc_0010B51E: ;
    ebx = MEM32(esi + 0xE0);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + eax * 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B542; /* je: equal / zero */

loc_0010B52E: ;
    eax = esp + 0x14;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x0010B542u); RECOMP_ABI_CALL(0x0010CC00u, sub_0010CC00); /* call 0x0010CC00 */

loc_0010B542: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010B632; /* je: equal / zero */

loc_0010B551: ;
    _fa = (uint32_t)(MEM8(0x3DE9A8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3DE9A8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010B5C7; /* jne: not equal / not zero */

loc_0010B55A: ;
    ecx = MEM32(0x3DE9A8);
    eax = 1;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3DE9A8) = ecx;
    MEM32(0x3DE968) = ebx;
    MEM32(0x3DE96C) = ebx;
    MEM32(0x3DE970) = edi;
    MEM32(0x3DE974) = ebx;
    MEM32(0x3DE978) = eax;
    MEM32(0x3DE97C) = ebx;
    MEM32(0x3DE980) = eax;
    MEM32(0x3DE984) = edi;
    MEM32(0x3DE988) = eax;
    MEM32(0x3DE98C) = eax;
    MEM32(0x3DE990) = edi;
    MEM32(0x3DE994) = eax;
    MEM32(0x3DE998) = ebx;
    MEM32(0x3DE99C) = eax;
    MEM32(0x3DE9A0) = ebx;
    MEM32(0x3DE9A4) = edi;

loc_0010B5C7: ;
    edi = 0x3DE96C;
    /* nop */

loc_0010B5D0: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(edi + -4);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B625; /* jl: less (signed <) */

loc_0010B5E5: ;
    edx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010B625; /* jge: greater or equal (signed >=) */

loc_0010B5EF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B625; /* jl: less (signed <) */

loc_0010B5F3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xCC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010B625; /* jge: greater or equal (signed >=) */

loc_0010B5FB: ;
    ebp = MEM32(esi + 0xE0);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + edx * 4), 0 (32-bit) */
    ebp = MEM32(esp + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_0010B625; /* je: equal / zero */

loc_0010B611: ;
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0010B625u); RECOMP_ABI_CALL(0x0010CC00u, sub_0010CC00); /* call 0x0010CC00 */

loc_0010B625: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DE9AC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3DE9AC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B5D0; /* jl: less (signed <) */

loc_0010B630: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010B632: ;
    _fa = (uint32_t)(MEM8(esp + 0x24)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x24), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010B77D; /* je: equal / zero */

loc_0010B63D: ;
    _fa = (uint32_t)(MEM8(0x3DE9A8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3DE9A8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010B71D; /* jne: not equal / not zero */

loc_0010B64A: ;
    eax = MEM32(0x3DE9A8);
    ecx = 2;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 1;
    MEM32(0x3DE9A8) = eax;
    eax = 0xFFFFFFFEu;
    MEM32(0x3DE8F8) = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3DE8E8) = eax;
    MEM32(0x3DE8EC) = eax;
    MEM32(0x3DE8F0) = ebx;
    MEM32(0x3DE8F4) = eax;
    MEM32(0x3DE8FC) = eax;
    MEM32(0x3DE900) = edx;
    MEM32(0x3DE904) = eax;
    MEM32(0x3DE908) = ecx;
    MEM32(0x3DE90C) = eax;
    MEM32(0x3DE910) = ecx;
    MEM32(0x3DE914) = ebx;
    MEM32(0x3DE918) = ecx;
    MEM32(0x3DE91C) = edi;
    MEM32(0x3DE920) = ecx;
    MEM32(0x3DE924) = edx;
    MEM32(0x3DE928) = ecx;
    MEM32(0x3DE92C) = ecx;
    MEM32(0x3DE930) = edx;
    MEM32(0x3DE934) = ecx;
    MEM32(0x3DE938) = edi;
    MEM32(0x3DE93C) = ecx;
    MEM32(0x3DE940) = ebx;
    MEM32(0x3DE944) = ecx;
    MEM32(0x3DE948) = eax;
    MEM32(0x3DE94C) = ecx;
    MEM32(0x3DE950) = eax;
    MEM32(0x3DE954) = edx;
    MEM32(0x3DE958) = eax;
    MEM32(0x3DE95C) = edi;
    MEM32(0x3DE960) = eax;
    MEM32(0x3DE964) = ebx;

loc_0010B71D: ;
    edi = 0x3DE8EC;

loc_0010B722: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(edi + -4);
    ebx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B772; /* jl: less (signed <) */

loc_0010B737: ;
    edx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010B772; /* jge: greater or equal (signed >=) */

loc_0010B741: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B772; /* jl: less (signed <) */

loc_0010B745: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xCC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010B772; /* jge: greater or equal (signed >=) */

loc_0010B74D: ;
    ebx = MEM32(esi + 0xE0);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + edx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B772; /* je: equal / zero */

loc_0010B75E: ;
    edx = esp + 0x14;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0010B772u); RECOMP_ABI_CALL(0x0010CC00u, sub_0010CC00); /* call 0x0010CC00 */

loc_0010B772: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DE96C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3DE96C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010B722; /* jl: less (signed <) */

loc_0010B77D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010B790
 * Original: 0x0010B790 - 0x0010BAA0 (784 bytes, 242 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B790: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edi = ecx;
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, 0xE);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0010B7BAu); RECOMP_ABI_CALL(0x0010B440u, sub_0010B440); /* call 0x0010B440 */

loc_0010B7BA: ;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B84D; /* je: equal / zero */

loc_0010B7CA: ;
    ebp = edi + 0x200;

loc_0010B7D0: ;
    esi = MEM32(edi + 0x204);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B846; /* je: equal / zero */

loc_0010B7DF: ;
    /* nop */

loc_0010B7E0: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B7FE; /* jne: not equal / not zero */

loc_0010B7E6: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xB4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B7FE; /* jne: not equal / not zero */

loc_0010B7F3: ;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xB8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B80C; /* je: equal / zero */

loc_0010B7FE: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B7E0; /* jne: not equal / not zero */

loc_0010B80A: ;
    goto loc_0010B846;

loc_0010B80C: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0010B816u); RECOMP_ABI_CALL(0x000719F0u, sub_000719F0); /* call 0x000719F0 */

loc_0010B816: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(esi) = 0;
    edx = MEM32(edi + 0x1FC);
    MEM32(esi + 4) = edx;
    eax = MEM32(edi + 0x1F0);
    edx = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x1FC) = esi;
    MEM32(edi + 0x1F0) = eax;

loc_0010B846: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B7D0; /* jne: not equal / not zero */

loc_0010B84D: ;
    esi = MEM32(edi + 0x160);
    eax = edi + 0x15C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B8CB; /* je: equal / zero */

loc_0010B862: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B889; /* je: equal / zero */

loc_0010B86A: ;
    ecx = MEM32(esi + 0x10);
    /* nop */

loc_0010B870: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B87C; /* jne: not equal / not zero */

loc_0010B874: ;
    ebx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B885; /* je: equal / zero */

loc_0010B87C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B870; /* jne: not equal / not zero */

loc_0010B883: ;
    goto loc_0010B889;

loc_0010B885: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B8B9; /* jne: not equal / not zero */

loc_0010B889: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x128);
    PUSH32(esp, 0);
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0010B8A9u); RECOMP_ABI_CALL(0x000719F0u, sub_000719F0); /* call 0x000719F0 */

loc_0010B8A9: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0010B8B5u); RECOMP_ABI_CALL(0x0010A6B0u, sub_0010A6B0); /* call 0x0010A6B0 */

loc_0010B8B5: ;
    edx = MEM32(esp + 0x14);

loc_0010B8B9: ;
    esi = MEM32(esi + 4);
    eax = edi + 0x15C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B862; /* jne: not equal / not zero */

loc_0010B8CB: ;
    esi = MEM32(edi + 0x1A8);
    eax = edi + 0x1A4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B93C; /* je: equal / zero */

loc_0010B8E0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B909; /* je: equal / zero */

loc_0010B8E8: ;
    ecx = MEM32(esi + 0xC);
    goto loc_0010B8F0;

    /* nop */

loc_0010B8F0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B8FC; /* jne: not equal / not zero */

loc_0010B8F4: ;
    ebx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B905; /* je: equal / zero */

loc_0010B8FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B8F0; /* jne: not equal / not zero */

loc_0010B903: ;
    goto loc_0010B909;

loc_0010B905: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B92A; /* jne: not equal / not zero */

loc_0010B909: ;
    ecx = MEM32(esi + 8);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B92A; /* jne: not equal / not zero */

loc_0010B915: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BA5C; /* je: equal / zero */

loc_0010B920: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B92A; /* jne: not equal / not zero */

loc_0010B927: ;
    MEM32(esi + 0x24) = eax;

loc_0010B92A: ;
    esi = MEM32(esi + 4);

loc_0010B92D: ;
    eax = edi + 0x1A4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B8E0; /* jne: not equal / not zero */

loc_0010B93C: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BA19; /* je: equal / zero */

loc_0010B948: ;
    goto loc_0010B950;

    /* nop */

loc_0010B950: ;
    eax = MEM32(edi + 0x160);
    edx = edi + 0x15C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B980; /* je: equal / zero */

loc_0010B965: ;
    ebx = MEM32(esi);

loc_0010B967: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B974; /* jne: not equal / not zero */

loc_0010B96C: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010B980; /* je: equal / zero */

loc_0010B974: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B967; /* jne: not equal / not zero */

loc_0010B980: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010BA0A; /* jne: not equal / not zero */

loc_0010B988: ;
    eax = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0xC8));
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi + 0xF8);
    ecx = MEM32(edx + eax * 4);
    edx = MEM32(edi + 0xE0);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(esi);
    MEM32(esp + 0x34) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM8(esp + 0x60) = LO8(eax);
    MEM8(esp + 0x61) = LO8(eax);
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esi + 4);
    eax = esp + 0x28;
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x2C) = 1;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x0010BA01u); RECOMP_ABI_CALL(0x0010B190u, sub_0010B190); /* call 0x0010B190 */

loc_0010BA01: ;
    ecx = esp + 0x5C;
    PUSH32(esp, 0x0010BA0Au); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010BA0A: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010B950; /* jne: not equal / not zero */

loc_0010BA19: ;
    esi = MEM32(esp + 0x6C);
    ecx = MEM32(0x3E8CF8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = esi;
    eax = edi + 0xB0;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    ecx = edi + 0x194;
    PUSH32(esp, 0x0010BA41u); RECOMP_ABI_CALL(0x0010C4B0u, sub_0010C4B0); /* call 0x0010C4B0 */

loc_0010BA41: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BA52; /* je: equal / zero */

loc_0010BA49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010BA4Fu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0010BA4F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010BA52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0010BA5C: ;
    ebp = esi;
    eax = MEM32(ebp);
    ebx = esi + 4;
    esi = MEM32(ebx);
    ecx = esi;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = ebp + 0x3C;
    PUSH32(esp, 0x0010BA75u); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010BA75: ;
    MEM32(ebp) = 0;
    edx = MEM32(edi + 0x1A0);
    MEM32(ebx) = edx;
    eax = MEM32(edi + 0x194);
    edx = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x1A0) = ebp;
    MEM32(edi + 0x194) = eax;
    goto loc_0010B92D;

}

/**
 * sub_0010BAA0
 * Original: 0x0010BAA0 - 0x0010BDB2 (786 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0010BAA0: ;
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
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010BAB7u); RECOMP_ABI_CALL(0x001306B0u, sub_001306B0); /* call 0x001306B0 */

loc_0010BAB7: ;
    SET_LO8(eax, MEM8(esi + 0x178));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BAD2; /* je: equal / zero */

loc_0010BAC1: ;
    eax = MEM32(esi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010BAD2; /* jne: not equal / not zero */

loc_0010BACB: ;
    MEM8(esi + 0x178) = 0;

loc_0010BAD2: ;
    eax = MEM32(esi + 0x194);
    ecx = MEM32(0x3DE8D8);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = esp + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0010BAEF; /* jl: less (signed <) */

loc_0010BAEA: ;
    eax = 0x3DE8D8;

loc_0010BAEF: ;
    eax = MEM32(eax);
    ecx = MEM32(0x3DE8DC);
    MEM32(0x3DE8D8) = eax;
    eax = MEM32(esi + 0x1F0);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = esp + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0010BB13; /* jl: less (signed <) */

loc_0010BB0E: ;
    eax = 0x3DE8DC;

loc_0010BB13: ;
    ecx = MEM32(eax);
    MEM32(0x3DE8DC) = ecx;
    eax = MEM32(esi + 0x14C);
    ecx = MEM32(0x3DE8E0);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = esp + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0010BB38; /* jl: less (signed <) */

loc_0010BB33: ;
    eax = 0x3DE8E0;

loc_0010BB38: ;
    edx = MEM32(eax);
    MEM32(0x3DE8E0) = edx;
    SET_LO8(eax, MEM8(esi + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BC5B; /* je: equal / zero */

loc_0010BB4E: ;
    SET_LO8(eax, MEM8(esi + 0x178));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010BC5B; /* jne: not equal / not zero */

loc_0010BB5C: ;
    eax = MEM32(0x3E8D08);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x90)); /* movss */
    ecx = MEM32(0x3888C0);
    xmm2 = XMM_SCALAR(MEMF(0x2FF504)); /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x94)); /* movss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x98)); /* movss */
    eax = MEM32(0x3E8CF8);
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    SET_LO8(edx, MEM8(ecx + 0x203D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC0)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BBCA; /* je: equal / zero */

loc_0010BBB0: ;
    xmm1 = XMM_SCALAR(MEMF(0x3DE8E4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x2FF084); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_0010BBD2;

loc_0010BBCA: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x316360); /* mulss */

loc_0010BBD2: ;
    xmm3 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x300474); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010BC0E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0010BC09: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0010BC16;

loc_0010BC0E: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010BC16; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010BC13: ;
    xmm0 = xmm1; /* movaps */

loc_0010BC16: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    edx = esp + 0x10;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010BC5Bu); RECOMP_ABI_CALL(0x0010B790u, sub_0010B790); /* call 0x0010B790 */

loc_0010BC5B: ;
    eax = MEM32(esi + 0x194);
    ecx = MEM32(0x3DE8D8);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = esp + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0010BC78; /* jl: less (signed <) */

loc_0010BC73: ;
    eax = 0x3DE8D8;

loc_0010BC78: ;
    eax = MEM32(eax);
    ecx = MEM32(0x3DE8DC);
    MEM32(0x3DE8D8) = eax;
    eax = MEM32(esi + 0x1F0);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = esp + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0010BC9C; /* jl: less (signed <) */

loc_0010BC97: ;
    eax = 0x3DE8DC;

loc_0010BC9C: ;
    ecx = MEM32(eax);
    MEM32(0x3DE8DC) = ecx;
    eax = MEM32(esi + 0x14C);
    ecx = MEM32(0x3DE8E0);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = esp + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0010BCC1; /* jl: less (signed <) */

loc_0010BCBC: ;
    eax = 0x3DE8E0;

loc_0010BCC1: ;
    edx = MEM32(eax);
    ecx = esi;
    MEM32(0x3DE8E0) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010BCD0u); RECOMP_ABI_CALL(0x0010A4E0u, sub_0010A4E0); /* call 0x0010A4E0 */

loc_0010BCD0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010BCD7u); RECOMP_ABI_CALL(0x0010A750u, sub_0010A750); /* call 0x0010A750 */

loc_0010BCD7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010BCDCu); RECOMP_ABI_CALL(0x00070BB0u, sub_00070BB0); /* call 0x00070BB0 */

loc_0010BCDC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0010BCE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010BCE1u); } /* indirect call */
    }

loc_0010BCE4: ;
    ecx = MEM32(esi + 0x110);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BCF4; /* je: equal / zero */

loc_0010BCEE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0010BCF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010BCF1u); } /* indirect call */
    }

loc_0010BCF4: ;
    SET_LO8(eax, MEM8(esi + 0x11C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BD2B; /* je: equal / zero */

loc_0010BCFE: ;
    edi = MEM32(esi + 0x160);
    ebx = esi + 0x15C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BD2B; /* je: equal / zero */

loc_0010BD13: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ebp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0010BD1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010BD1Cu); } /* indirect call */
    }

loc_0010BD1F: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010BD13; /* jne: not equal / not zero */

loc_0010BD2B: ;
    eax = MEM32(esi + 0x194);
    ecx = MEM32(0x3DE8D8);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = esp + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0010BD48; /* jl: less (signed <) */

loc_0010BD43: ;
    eax = 0x3DE8D8;

loc_0010BD48: ;
    ecx = MEM32(eax);
    MEM32(0x3DE8D8) = ecx;
    eax = MEM32(esi + 0x1F0);
    ecx = MEM32(0x3DE8DC);
    MEM32(esp + 0xC) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = esp + 0xC;
    if (CMP_L(_fas, _fbs)) goto loc_0010BD6D; /* jl: less (signed <) */

loc_0010BD68: ;
    eax = 0x3DE8DC;

loc_0010BD6D: ;
    edx = MEM32(eax);
    eax = MEM32(0x3DE8E0);
    MEM32(0x3DE8DC) = edx;
    esi = MEM32(esi + 0x14C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0010BD9C; /* jge: greater or equal (signed >=) */

loc_0010BD88: ;
    eax = esp + 0xC;
    eax = MEM32(eax);
    MEM32(0x3DE8E0) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0010BD9C: ;
    POP32(esp, edi);
    eax = 0x3DE8E0;
    ecx = MEM32(eax);
    POP32(esp, esi);
    MEM32(0x3DE8E0) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010BDC0
 * Original: 0x0010BDC0 - 0x0010BF5F (415 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010BDC0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x218));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010BDE1; /* jne: not equal / not zero */

loc_0010BDD3: ;
    PUSH32(esp, 0x0010BDD8u); RECOMP_ABI_CALL(0x000751D0u, sub_000751D0); /* call 0x000751D0 */

loc_0010BDD8: ;
    MEM8(edi + 0x218) = 1;
    goto loc_0010BDE6;

loc_0010BDE1: ;
    PUSH32(esp, 0x0010BDE6u); RECOMP_ABI_CALL(0x00071080u, sub_00071080); /* call 0x00071080 */

loc_0010BDE6: ;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010BE5D; /* je: equal / zero */

loc_0010BDEE: ;
    eax = MEM32(edi + 0xB0);
    ecx = MEM32(edi + 0xB4);
    edx = MEM32(edi + 0xB8);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x14;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM8(esp + 0x50) = LO8(ebx);
    MEM8(esp + 0x51) = LO8(ebx);
    MEM32(esp + 0x54) = ebx;
    PUSH32(esp, 0x0010BE50u); RECOMP_ABI_CALL(0x0010B190u, sub_0010B190); /* call 0x0010B190 */

loc_0010BE50: ;
    ecx = esp + 0x48;
    PUSH32(esp, 0x0010BE59u); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010BE59: ;
    eax = MEM32(esp + 0x58);

loc_0010BE5D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xE (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010BF50; /* je: equal / zero */

loc_0010BE65: ;
    _fa = (uint32_t)(MEM8(edi + 0x11C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x11C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BF50; /* je: equal / zero */

loc_0010BE71: ;
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x0010BE91u); RECOMP_ABI_CALL(0x0010B440u, sub_0010B440); /* call 0x0010B440 */

loc_0010BE91: ;
    esi = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BF32; /* je: equal / zero */

loc_0010BEA1: ;
    eax = MEM32(esi + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0xC8));
    ecx = MEM32(esi);
    edx = MEM32(edi + 0xE0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 0xF8);
    ecx = MEM32(ecx + eax * 4);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(esi);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + 4);
    eax = esp + 0x1C;
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x20) = 1;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = ebx;
    MEM8(esp + 0x58) = LO8(ebx);
    MEM8(esp + 0x59) = LO8(ebx);
    MEM32(esp + 0x5C) = ebx;
    PUSH32(esp, 0x0010BF1Au); RECOMP_ABI_CALL(0x0010B190u, sub_0010B190); /* call 0x0010B190 */

loc_0010BF1A: ;
    ecx = esp + 0x50;
    PUSH32(esp, 0x0010BF23u); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010BF23: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010BEA1; /* jne: not equal / not zero */

loc_0010BF2E: ;
    esi = MEM32(esp + 0x10);

loc_0010BF32: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010BF3F; /* je: equal / zero */

loc_0010BF36: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010BF3Cu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0010BF3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010BF3F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edi + 0x178) = 1;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0010BF50: ;
    MEM8(edi + 0x178) = 1;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010BF60
 * Original: 0x0010BF60 - 0x0010BF99 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010BF60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0010BF97; /* jle: less or equal (signed <=) */

loc_0010BF70: ;
    edx = MEM32(ecx);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x130);
    PUSH32(esp, edi);
    goto loc_0010BF80;

    /* nop */

loc_0010BF80: ;
    edi = MEM32(ecx + 4);
    _fb = (uint32_t)(0x130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x130;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + edx) = edi;
    edx = MEM32(ecx);
    edi = eax + edx;
    MEM32(ecx + 4) = edi;
    if ((_fa != 0)) goto loc_0010BF80; /* jne: not equal / not zero */

loc_0010BF96: ;
    POP32(esp, edi);

loc_0010BF97: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010BFA0
 * Original: 0x0010BFA0 - 0x0010C0F5 (341 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BFA0(void)
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

loc_0010BFA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x30));
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 4);
    edx = MEM32(ebp + 8);
    xmm1.f[0] = (float)(int32_t)MEM32(edx + 8); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x2FE9A0); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x24); /* addss */
    ecx = MEM32(ecx + 8);
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 4); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x20); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x64); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x60); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x2FE99C)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0010C098; /* ja: above (unsigned >) */

loc_0010C028: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0010C064; /* jnp: not parity */

loc_0010C037: ;
    xmm2 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm4.f[0]; /* divss */
    xmm4 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_0010C064: ;
    eax = MEM32(ecx + 0x40);
    ecx = MEM32(ecx + 0x44);
    MEM32(esp + 0x24) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    MEM32(esp + 0x20) = eax;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(0x31BE80)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    _cf = _fa & 1u;
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0010C0A4; /* jbe: below or equal (unsigned <=) */

loc_0010C098: ;
    fp_push(MEMF(0x3210B0)); /* fld float */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0010C0A4: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010C0ADu); RECOMP_ABI_CALL(0x00015710u, sub_00015710); /* call 0x00015710 */

loc_0010C0AD: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010C0E6u); RECOMP_ABI_CALL(0x00264D40u, sub_00264D40); /* call 0x00264D40 */

loc_0010C0E6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2FEAFC)); /* fmul dword ptr [0x2feafc] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0010C100
 * Original: 0x0010C100 - 0x0010C13A (58 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C100: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010C136; /* jge: greater or equal (signed >=) */

loc_0010C10B: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0010C127; /* je: equal / zero */

loc_0010C115: ;
    PUSH32(esp, 0x0010C11Au); RECOMP_ABI_CALL(0x000740E0u, sub_000740E0); /* call 0x000740E0 */

loc_0010C11A: ;
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 4) = edi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010C127: ;
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = edi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010C136: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010C140
 * Original: 0x0010C140 - 0x0010C1FC (188 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C140: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = esi;
    SET_LO8(ebx, MEM8(ecx + 0x28));
    MEM32(ecx + 0xC) = edx;
    SET_LO8(edx, MEM8(eax + 0x28));
    MEM8(eax + 0x28) = LO8(ebx);
    MEM8(ecx + 0x28) = LO8(edx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    edx = MEM32(eax);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010C1D7; /* je: equal / zero */

loc_0010C186: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C1B6; /* je: equal / zero */

loc_0010C18A: ;
    ebx = MEM32(ecx + 0x10);
    edi = MEM32(eax + 0x10);
    esi = ecx + 0x10;
    edx = eax + 0x10;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 0x14);
    MEM32(esi) = edi;
    edi = MEM32(eax + 0x14);
    MEM32(eax + 0x14) = ebx;
    eax = MEM32(esi);
    MEM32(ecx + 0x14) = edi;
    MEM32(eax + 4) = esi;
    ecx = MEM32(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 4) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0010C1B6: ;
    edi = MEM32(ecx + 0x10);
    edx = ecx + 0x10;
    esi = eax + 0x10;
    MEM32(esi) = edi;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = ecx;
    eax = edi;
    MEM32(eax + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 4) = edx;
    MEM32(edx) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0010C1D7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C1F6; /* je: equal / zero */

loc_0010C1DB: ;
    edi = MEM32(eax + 0x10);
    edx = eax + 0x10;
    esi = ecx + 0x10;
    MEM32(esi) = edi;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = eax;
    ecx = edi;
    MEM32(ecx + 4) = esi;
    MEM32(edx + 4) = edx;
    MEM32(edx) = edx;

loc_0010C1F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010C200
 * Original: 0x0010C200 - 0x0010C2BC (188 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C200: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(ecx + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = esi;
    SET_LO8(ebx, MEM8(ecx + 0x58));
    MEM32(ecx + 0xC) = edx;
    SET_LO8(edx, MEM8(eax + 0x58));
    MEM8(eax + 0x58) = LO8(ebx);
    MEM8(ecx + 0x58) = LO8(edx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    edx = MEM32(eax);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010C297; /* je: equal / zero */

loc_0010C246: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C276; /* je: equal / zero */

loc_0010C24A: ;
    ebx = MEM32(ecx + 0x10);
    edi = MEM32(eax + 0x10);
    esi = ecx + 0x10;
    edx = eax + 0x10;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 0x14);
    MEM32(esi) = edi;
    edi = MEM32(eax + 0x14);
    MEM32(eax + 0x14) = ebx;
    eax = MEM32(esi);
    MEM32(ecx + 0x14) = edi;
    MEM32(eax + 4) = esi;
    ecx = MEM32(edx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 4) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0010C276: ;
    edi = MEM32(ecx + 0x10);
    edx = ecx + 0x10;
    esi = eax + 0x10;
    MEM32(esi) = edi;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = ecx;
    eax = edi;
    MEM32(eax + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 4) = edx;
    MEM32(edx) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0010C297: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C2B6; /* je: equal / zero */

loc_0010C29B: ;
    edi = MEM32(eax + 0x10);
    edx = eax + 0x10;
    esi = ecx + 0x10;
    MEM32(esi) = edi;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = eax;
    ecx = edi;
    MEM32(ecx + 4) = esi;
    MEM32(edx + 4) = edx;
    MEM32(edx) = edx;

loc_0010C2B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010C2C0
 * Original: 0x0010C2C0 - 0x0010C32E (110 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C2C0(void)
{

loc_0010C2C0: ;
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
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = 0;
    SET_LO8(edx, MEM8(ecx + 0x38));
    MEM8(eax + 0x38) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x39));
    MEM8(eax + 0x39) = LO8(edx);
    ecx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010C330
 * Original: 0x0010C330 - 0x0010C3B6 (134 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C330: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C3AB; /* je: equal / zero */

loc_0010C34A: ;
    PUSH32(esp, ebx);
    goto loc_0010C350;

    /* nop */

loc_0010C350: ;
    eax = MEM32(ecx + 0xC);
    edi = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edi;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    edi = edx + 8;
    ebp = MEM32(edi);
    ebx = eax + 8;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    edi = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = edi;
    ebx = MEM32(esp + 0x1C);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    esi = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010C350; /* jne: not equal / not zero */

loc_0010C39B: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, ebx);
    MEM32(esi + 4) = eax;
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0010C3AB: ;
    MEM32(esi + 4) = edi;
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010C3C0
 * Original: 0x0010C3C0 - 0x0010C45B (155 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C3C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C3C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010C417; /* jne: not equal / not zero */

loc_0010C3D6: ;
    PUSH32(esp, 0x0010C3DBu); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_0010C3DB: ;
    PUSH32(esp, 0x2FF5B8);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0010C3E9u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0010C3E9: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FF590);
    PUSH32(esp, 0x0010C400u); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_0010C400: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0010C40Eu); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0010C40E: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010C419;

loc_0010C417: ;
    ecx = ebp;

loc_0010C419: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edx;
    MEM8(esi + 0x14) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_0010C454; /* jle: less or equal (signed <=) */

loc_0010C435: ;
    eax = ebx;

loc_0010C437: ;
    ebx = MEM32(esi + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(eax + ecx) = ebx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_G(_fas, _fbs)) goto loc_0010C437; /* jg: greater (signed >) */

loc_0010C454: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010C460
 * Original: 0x0010C460 - 0x0010C4A1 (65 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C460: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x14);
    ebp = edi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C491; /* je: equal / zero */

loc_0010C46F: ;
    PUSH32(esp, ebx);

loc_0010C470: ;
    ebx = MEM32(esi + 4);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x0010C47Bu); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010C47B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esi) = 0;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 4) = eax;
    MEM32(edi + 0xC) = esi;
    esi = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0010C470; /* jne: not equal / not zero */

loc_0010C490: ;
    POP32(esp, ebx);

loc_0010C491: ;
    MEM32(ebp + 4) = ebp;
    MEM32(ebp) = ebp;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010C4B0
 * Original: 0x0010C4B0 - 0x0010C5C1 (273 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C4B0(void)
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

loc_0010C4B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    MEM32(esp + 4) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0010C5BB; /* jle: less or equal (signed <=) */

loc_0010C4C2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x14);
    ebx = edx + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0010C52A; /* je: equal / zero */

loc_0010C4DB: ;
    goto loc_0010C4E0;

    /* nop */

loc_0010C4E0: ;
    ecx = MEM32(edi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi + 8;
    ebp = esi + 8;
    if (CMP_NE(_fa, _fb)) goto loc_0010C518; /* jne: not equal / not zero */

loc_0010C4ED: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010C51A; /* jne: not equal / not zero */

loc_0010C4F4: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0010C4FEu); RECOMP_ABI_CALL(0x0010BFA0u, sub_0010BFA0); /* call 0x0010BFA0 */

loc_0010C4FE: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0010C50Cu); RECOMP_ABI_CALL(0x0010BFA0u, sub_0010BFA0); /* call 0x0010BFA0 */

loc_0010C50C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0010C51A; /* jbe: below or equal (unsigned <=) */

loc_0010C518: ;
    esi = edi;

loc_0010C51A: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010C4E0; /* jne: not equal / not zero */

loc_0010C526: ;
    edx = MEM32(esp + 0x14);

loc_0010C52A: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    MEM32(eax) = ecx;
    eax = MEM32(edx + 0x14);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    MEM32(ebx + 4) = esi;
    MEM32(esi) = ebx;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C5B7; /* je: equal / zero */

loc_0010C54D: ;
    /* nop */

loc_0010C550: ;
    edi = esi;
    ebp = esi + 8;

loc_0010C555: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(edi);
    ebx = edi + 8;
    if (CMP_NE(_fa, _fb)) goto loc_0010C555; /* jne: not equal / not zero */

loc_0010C561: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010C58C; /* jne: not equal / not zero */

loc_0010C568: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0010C572u); RECOMP_ABI_CALL(0x0010BFA0u, sub_0010BFA0); /* call 0x0010BFA0 */

loc_0010C572: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0010C580u); RECOMP_ABI_CALL(0x0010BFA0u, sub_0010BFA0); /* call 0x0010BFA0 */

loc_0010C580: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((!(_fa & 1u) && !(_fa & 0x40u)) /* fcompi */) goto loc_0010C555; /* ja: above (unsigned >) */

loc_0010C58C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C5A9; /* je: equal / zero */

loc_0010C592: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    MEM32(edi + 4) = esi;
    MEM32(esi) = edi;
    esi = edi;

loc_0010C5A9: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x18) (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010C550; /* jne: not equal / not zero */

loc_0010C5B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0010C5BB: ;
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
 * sub_0010C5D0
 * Original: 0x0010C5D0 - 0x0010C691 (193 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C5D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x0010C5E8u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_0010C5E8: ;
    PUSH32(esp, 0x2FF5B8);
    ebx = eax;
    PUSH32(esp, 0x0010C5F4u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0010C5F4: ;
    PUSH32(esp, 0x400);
    eax = edi + edi * 2;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FF590);
    PUSH32(esp, 0x0010C60Cu); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_0010C60C: ;
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0x0010C614u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0010C614: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = 0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x10;
    ebp = eax + 8;
    MEM32(ebp) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 4) = edx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 8) = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    MEM32(ebp + 0xC) = ebx;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 8 + -24;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM8(esi + 0x28) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0010C664; /* je: equal / zero */

loc_0010C655: ;
    MEM32(ecx + 4) = edi;
    edx = MEM32(esi + 8);
    edi = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010C655; /* jne: not equal / not zero */

loc_0010C664: ;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 4) = edi;
    MEM32(esi + 0xC) = ecx;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    ecx = esi;
    PUSH32(esp, 0x0010C688u); RECOMP_ABI_CALL(0x0010C330u, sub_0010C330); /* call 0x0010C330 */

loc_0010C688: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010C6A0
 * Original: 0x0010C6A0 - 0x0010C75B (187 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C6A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x0010C6B7u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_0010C6B7: ;
    PUSH32(esp, 0x2FF5B8);
    ebx = eax;
    PUSH32(esp, 0x0010C6C3u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0010C6C3: ;
    PUSH32(esp, 0x400);
    eax = edi + edi * 4;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FF590);
    PUSH32(esp, 0x0010C6DBu); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_0010C6DB: ;
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 0x0010C6E3u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0010C6E3: ;
    MEM32(esi + 8) = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x10;
    MEM32(esi + 0xC) = 0;
    ebx = eax + 8;
    MEM32(ebx) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 4) = edx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    MEM32(ebx + 8) = edi;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    ecx = ecx + ecx * 4;
    ecx = edx + ecx * 4 + -20;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM8(esi + 0x24) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0010C72F; /* je: equal / zero */

loc_0010C71E: ;
    edi = edi;

loc_0010C720: ;
    MEM32(ecx + 4) = edi;
    edx = MEM32(esi + 8);
    edi = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010C720; /* jne: not equal / not zero */

loc_0010C72F: ;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 4) = edi;
    MEM32(esi + 0xC) = ecx;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    ecx = esi;
    PUSH32(esp, 0x0010C753u); RECOMP_ABI_CALL(0x001460B0u, sub_001460B0); /* call 0x001460B0 */

loc_0010C753: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010C760
 * Original: 0x0010C760 - 0x0010C7AF (79 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C760: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C776; /* je: equal / zero */

loc_0010C768: ;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010C771u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0010C771: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010C778;

loc_0010C776: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010C778: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010C7AB; /* je: equal / zero */

loc_0010C787: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    /* nop */

loc_0010C790: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C7A0; /* je: equal / zero */

loc_0010C794: ;
    edi = MEM32(edx + ecx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + ecx + 4);
    MEM32(ecx + 4) = edi;

loc_0010C7A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010C790; /* jne: not equal / not zero */

loc_0010C7AA: ;
    POP32(esp, edi);

loc_0010C7AB: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010C7B0
 * Original: 0x0010C7B0 - 0x0010C828 (120 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C7B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ecx;
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(ecx);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C81C; /* je: equal / zero */

loc_0010C7CD: ;
    /* nop */

loc_0010C7D0: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 4);
    ecx = edi + 8;
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = esi + 8;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0010C7F2u); RECOMP_ABI_CALL(0x0010C2C0u, sub_0010C2C0); /* call 0x0010C2C0 */

loc_0010C7F2: ;
    edx = MEM32(esp + 0x1C);
    MEM32(ebx + 4) = esi;
    MEM32(esi) = ebx;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0010C7D0; /* jne: not equal / not zero */

loc_0010C80C: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebp);
    MEM32(eax) = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0010C81C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 4) = ecx;
    POP32(esp, ebp);
    MEM32(ecx) = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010C830
 * Original: 0x0010C830 - 0x0010C8C1 (145 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C830: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010C8BA; /* jle: less or equal (signed <=) */

loc_0010C83F: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    MEM32(eax) = edx;
    edx = MEM32(esi + 0x14);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0010C859u); RECOMP_ABI_CALL(0x0010C5D0u, sub_0010C5D0); /* call 0x0010C5D0 */

loc_0010C859: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010C865u); RECOMP_ABI_CALL(0x0010C140u, sub_0010C140); /* call 0x0010C140 */

loc_0010C865: ;
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010C88F; /* je: equal / zero */

loc_0010C871: ;
    ecx = MEM32(eax + 4);
    MEM32(eax) = 0;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    edx = esp + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010C871; /* jne: not equal / not zero */

loc_0010C88F: ;
    eax = esp + 0x14;
    ecx = eax;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0010C8BA; /* je: equal / zero */

loc_0010C8AD: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010C8B7u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010C8B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010C8BA: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010C8D0
 * Original: 0x0010C8D0 - 0x0010C920 (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C8D0: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edi;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    ebp = MEM32(ebx);
    edx = ecx + 0x10;
    edi = eax + 8;
    MEM32(edi) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(edi + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(edi + 8) = ebp;
    ebx = MEM32(ebx + 0xC);
    MEM32(edi + 0xC) = ebx;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 4) = edx;
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010C920
 * Original: 0x0010C920 - 0x0010C9A0 (128 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C920: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM8(esp + 0x3C) = LO8(eax);
    MEM8(esp + 0x3D) = LO8(eax);
    MEM32(esp + 0x40) = eax;
    eax = esi + 0x10;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    PUSH32(esp, 0x0010C98Cu); RECOMP_ABI_CALL(0x0010C2C0u, sub_0010C2C0); /* call 0x0010C2C0 */

loc_0010C98C: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x0010C995u); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010C995: ;
    MEM8(esi + 0x58) = 1;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010C9A0
 * Original: 0x0010C9A0 - 0x0010C9D0 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C9A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x14);
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x0010C9B9u); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010C9B9: ;
    MEM32(esi) = 0;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 4) = eax;
    eax = MEM32(edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0xC) = esi;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010C9D0
 * Original: 0x0010C9D0 - 0x0010CA61 (145 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010C9D0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010CA5A; /* jle: less or equal (signed <=) */

loc_0010C9DF: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    MEM32(eax) = edx;
    edx = MEM32(esi + 0x14);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0010C9F9u); RECOMP_ABI_CALL(0x0010C6A0u, sub_0010C6A0); /* call 0x0010C6A0 */

loc_0010C9F9: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010CA05u); RECOMP_ABI_CALL(0x00145E60u, sub_00145E60); /* call 0x00145E60 */

loc_0010CA05: ;
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CA2F; /* je: equal / zero */

loc_0010CA11: ;
    ecx = MEM32(eax + 4);
    MEM32(eax) = 0;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    edx = esp + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    eax = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010CA11; /* jne: not equal / not zero */

loc_0010CA2F: ;
    eax = esp + 0x14;
    ecx = eax;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0010CA5A; /* je: equal / zero */

loc_0010CA4D: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0010CA57u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010CA57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010CA5A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CA70
 * Original: 0x0010CA70 - 0x0010CB74 (260 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010CA70: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ebx;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x0010CA89u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_0010CA89: ;
    PUSH32(esp, 0x2FF5B8);
    ebp = eax;
    PUSH32(esp, 0x0010CA95u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0010CA95: ;
    PUSH32(esp, 0x400);
    eax = edi + edi * 8;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FF590);
    PUSH32(esp, 0x0010CAADu); RECOMP_ABI_CALL(0x001550D0u, sub_001550D0); /* call 0x001550D0 */

loc_0010CAAD: ;
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x0010CAB5u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0010CAB5: ;
    MEM32(esi + 8) = edi;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = esi + 0x10;
    ecx = esp + 0x10;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, ecx);
    ecx = edi + 8;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM8(esp + 0x4D) = LO8(ebx);
    MEM32(esp + 0x50) = ebx;
    MEM32(edi) = edi;
    MEM32(edi + 4) = edi;
    PUSH32(esp, 0x0010CB17u); RECOMP_ABI_CALL(0x0010C2C0u, sub_0010C2C0); /* call 0x0010C2C0 */

loc_0010CB17: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x0010CB20u); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010CB20: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    edx = eax + eax * 8;
    eax = ecx + edx * 8 + -72;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(esi + 0x58) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0010CB44; /* je: equal / zero */

loc_0010CB35: ;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(esi + 8);
    ebx = eax;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CB35; /* jne: not equal / not zero */

loc_0010CB44: ;
    edx = MEM32(esp + 0x58);
    MEM32(eax + 4) = ebx;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = edx;
    eax = esp;
    ecx = esi;
    MEM32(eax) = edi;
    PUSH32(esp, 0x0010CB68u); RECOMP_ABI_CALL(0x0010C7B0u, sub_0010C7B0); /* call 0x0010C7B0 */

loc_0010CB68: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010CB80
 * Original: 0x0010CB80 - 0x0010CBEB (107 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CB80: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010CBE4; /* jle: less or equal (signed <=) */

loc_0010CB8F: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    MEM32(eax) = edx;
    edx = MEM32(esi + 0x14);
    eax = esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0010CBA9u); RECOMP_ABI_CALL(0x0010CA70u, sub_0010CA70); /* call 0x0010CA70 */

loc_0010CBA9: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0010CBB5u); RECOMP_ABI_CALL(0x0010C200u, sub_0010C200); /* call 0x0010C200 */

loc_0010CBB5: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0010CBBEu); RECOMP_ABI_CALL(0x0010C460u, sub_0010C460); /* call 0x0010C460 */

loc_0010CBBE: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CBD3; /* je: equal / zero */

loc_0010CBC6: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0010CBD0u); RECOMP_ABI_CALL(0x001551E0u, sub_001551E0); /* call 0x001551E0 */

loc_0010CBD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010CBD3: ;
    ecx = esp + 0x50;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0010CBE4u); RECOMP_ABI_CALL(0x00012A00u, sub_00012A00); /* call 0x00012A00 */

loc_0010CBE4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CBF0
 * Original: 0x0010CBF0 - 0x0010CBF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010CBF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0010CC40(); return; /* tail jmp 0x0010CC40 */

}

/**
 * sub_0010CC00
 * Original: 0x0010CC00 - 0x0010CC3A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CC00: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CC23; /* je: equal / zero */

loc_0010CC08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CC1C; /* je: equal / zero */

loc_0010CC0C: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    edx = MEM32(edx + 4);
    MEM32(eax + 4) = edx;
    POP32(esp, esi);

loc_0010CC1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 4) = MEM32(ecx + 4) + 8;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0010CC23: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010CC37u); RECOMP_ABI_CALL(0x0003B150u, sub_0003B150); /* call 0x0003B150 */

loc_0010CC37: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CC40
 * Original: 0x0010CC40 - 0x0010CC5E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0010CC48u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_0010CC48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010CC58; /* je: equal / zero */

loc_0010CC4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010CC55u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0010CC55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010CC58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CC60
 * Original: 0x0010CC60 - 0x0010CCC4 (100 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010CC60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xF8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = esi + 0xB0;
    ebx = esi + 0xD4;
    MEM32(esi) = 0x318790;
    MEM32(esi + 8) = 0x318784;
    MEM32(edi) = 0x318740;
    MEM32(ebx) = 0x318728;
    if (TEST_Z(_fa, _fb)) goto loc_0010CCA1; /* je: equal / zero */

loc_0010CC94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010CCA1; /* jne: not equal / not zero */

loc_0010CC98: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010CC9Eu); RECOMP_ABI_CALL(0x00131890u, sub_00131890); /* call 0x00131890 */

loc_0010CC9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010CCA1: ;
    ecx = esi + 0xE0;
    PUSH32(esp, 0x0010CCACu); RECOMP_ABI_CALL(0x0014CB80u, sub_0014CB80); /* call 0x0014CB80 */

loc_0010CCAC: ;
    ecx = ebx;
    PUSH32(esp, 0x0010CCB3u); RECOMP_ABI_CALL(0x0014B390u, sub_0014B390); /* call 0x0014B390 */

loc_0010CCB3: ;
    ecx = edi;
    PUSH32(esp, 0x0010CCBAu); RECOMP_ABI_CALL(0x0003CDC0u, sub_0003CDC0); /* call 0x0003CDC0 */

loc_0010CCBA: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00130500(); return; /* tail jmp 0x00130500 */

}

/**
 * sub_0010CCD0
 * Original: 0x0010CCD0 - 0x0010CD10 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CCD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xF8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010CCEC; /* je: equal / zero */

loc_0010CCDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010CCEC; /* je: equal / zero */

loc_0010CCE1: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010CCE9u); RECOMP_ABI_CALL(0x00131710u, sub_00131710); /* call 0x00131710 */

loc_0010CCE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010CCEC: ;
    SET_LO8(eax, MEM8(esi + 0xF8));
    edx = MEM32(esi + 0xDC);
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = esi + 0xB0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(esi + 0xF8) = LO8(eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0010CD0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CD0Bu); } /* indirect call */
    }

loc_0010CD0E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010CD10
 * Original: 0x0010CD10 - 0x0010CD29 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CD10(void)
{

loc_0010CD10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0010CD18u); RECOMP_ABI_CALL(0x0003C840u, sub_0003C840); /* call 0x0003C840 */

loc_0010CD18: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0010CD20u); RECOMP_ABI_CALL(0x0014CBD0u, sub_0014CBD0); /* call 0x0014CBD0 */

loc_0010CD20: ;
    MEM32(esi + 0x50) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010CD30
 * Original: 0x0010CD30 - 0x0010CD8D (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0010CD30: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = ecx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0010CD5E; /* jp: parity */

loc_0010CD41: ;
    eax = esi + -176;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = esi + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010CD5Au); RECOMP_ABI_CALL(0x0003D2A0u, sub_0003D2A0); /* call 0x0003D2A0 */

loc_0010CD5A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0010CD5E: ;
    edx = esi + -176;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CD6D; /* je: equal / zero */

loc_0010CD68: ;
    eax = esi + 0x24;
    goto loc_0010CD6F;

loc_0010CD6D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010CD6F: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0xF9FA9C95u);
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0010CD82u); RECOMP_ABI_CALL(0x0014CC50u, sub_0014CC50); /* call 0x0014CC50 */

loc_0010CD82: ;
    MEM32(esi + 0x50) = 0xF9FA9C95u;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CD90
 * Original: 0x0010CD90 - 0x0010CDD9 (73 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CD90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CDD5; /* je: equal / zero */

loc_0010CD9A: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0010CDA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010CDA0u); } /* indirect call */
    }

loc_0010CDA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CDD5; /* jne: not equal / not zero */

loc_0010CDA8: ;
    ecx = esi + -212;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CDC6; /* je: equal / zero */

loc_0010CDB2: ;
    ecx = MEM32(esi + -32);
    edx = esi + -28;
    eax = esi + -36;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010CDC2u); RECOMP_ABI_CALL(0x0003D2A0u, sub_0003D2A0); /* call 0x0003D2A0 */

loc_0010CDC2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0010CDC6: ;
    ecx = MEM32(esi + -32);
    edx = esi + -28;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010CDD5u); RECOMP_ABI_CALL(0x0003D2A0u, sub_0003D2A0); /* call 0x0003D2A0 */

loc_0010CDD5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CDE0
 * Original: 0x0010CDE0 - 0x0010CDFE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CDE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0010CDEDu); RECOMP_ABI_CALL(0x0010D1B0u, sub_0010D1B0); /* call 0x0010D1B0 */

loc_0010CDED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CDFA; /* je: equal / zero */

loc_0010CDF4: ;
    MEM32(esi + 0xFC) = eax;

loc_0010CDFA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CE00
 * Original: 0x0010CE00 - 0x0010CE4F (79 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CE00: ;
    eax = MEM32(ecx + 0xFC);
    edx = MEM32(eax + 0x10);
    eax = edx + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CE13; /* jne: not equal / not zero */

loc_0010CE10: ;
    esp += 8; return; /* ret 4 */

loc_0010CE13: ;
    ecx = MEM32(ecx + 0xFC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    ecx = MEM32(esi + 0x34);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CE49; /* je: equal / zero */

loc_0010CE2D: ;
    esi = MEM32(esp + 8);

loc_0010CE31: ;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CE4B; /* je: equal / zero */

loc_0010CE36: ;
    ecx = MEM32(edx + 0x34);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010CE31; /* jne: not equal / not zero */

loc_0010CE49: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010CE4B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CE50
 * Original: 0x0010CE50 - 0x0010CE96 (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CE50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010CE5Fu); RECOMP_ABI_CALL(0x0010CE00u, sub_0010CE00); /* call 0x0010CE00 */

loc_0010CE5F: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010CE8E; /* je: equal / zero */

loc_0010CE65: ;
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    ecx = MEM32(ebp + 0xC);
    XMM_STORE(ecx, xmm1); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0x20, xmm1); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0010CE8E: ;
    SET_LO8(eax, LO8(ecx));
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010CEA0
 * Original: 0x0010CEA0 - 0x0010CEC0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CEA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ecx + -80);
    eax = MEM32(ebp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + -76);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + -72);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CEC0
 * Original: 0x0010CEC0 - 0x0010CEEE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CEC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_MEM(ecx + -112); /* movaps */
    xmm1 = XMM_MEM(ecx + -128); /* movaps */
    eax = MEM32(ebp + 8);
    XMM_STORE(eax, xmm1); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + -80); /* movaps */
    xmm1 = XMM_MEM(ecx + -96); /* movaps */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(eax + 0x20, xmm1); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CEF0
 * Original: 0x0010CEF0 - 0x0010CF8A (154 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CEF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0010CEF9u); RECOMP_ABI_CALL(0x00014260u, sub_00014260); /* call 0x00014260 */

loc_0010CEF9: ;
    edi = esi + 0xB0;
    ecx = edi;
    PUSH32(esp, 0x0010CF06u); RECOMP_ABI_CALL(0x0003CD90u, sub_0003CD90); /* call 0x0003CD90 */

loc_0010CF06: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xD4) = 0x2FF764;
    MEM32(esi + 0xD8) = 0;
    ecx = esi + 0xE0;
    MEM32(esi) = 0x318790;
    MEM32(esi + 8) = 0x318784;
    MEM32(edi) = 0x318740;
    MEM32(esi + 0xD4) = 0x318728;
    MEM32(esi + 0xDC) = eax;
    PUSH32(esp, 0x0010CF4Cu); RECOMP_ABI_CALL(0x0014CA80u, sub_0014CA80); /* call 0x0014CA80 */

loc_0010CF4C: ;
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0xF8));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM8(esi + 0xF8) = LO8(ecx);
    MEM32(esi + 0xFC) = 0;
    MEM32(esi + 0x100) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010CF90
 * Original: 0x0010CF90 - 0x0010CF98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010CF90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0010CFC0(); return; /* tail jmp 0x0010CFC0 */

}

/**
 * sub_0010CFA0
 * Original: 0x0010CFA0 - 0x0010CFAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010CFA0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0010CFC0(); return; /* tail jmp 0x0010CFC0 */

}

/**
 * sub_0010CFB0
 * Original: 0x0010CFB0 - 0x0010CFBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010CFB0: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xD4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0010CFC0(); return; /* tail jmp 0x0010CFC0 */

}

/**
 * sub_0010CFC0
 * Original: 0x0010CFC0 - 0x0010CFDE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0010CFC8u); RECOMP_ABI_CALL(0x0010CC60u, sub_0010CC60); /* call 0x0010CC60 */

loc_0010CFC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010CFD8; /* je: equal / zero */

loc_0010CFCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010CFD5u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0010CFD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010CFD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010CFE0
 * Original: 0x0010CFE0 - 0x0010D000 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010CFE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010CFF6; /* jge: greater or equal (signed >=) */

loc_0010CFF2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0010CFF6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D000
 * Original: 0x0010D000 - 0x0010D010 (16 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D000(void)
{

loc_0010D000: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010D010
 * Original: 0x0010D010 - 0x0010D013 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D010: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010D020
 * Original: 0x0010D020 - 0x0010D025 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D020: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010D030
 * Original: 0x0010D030 - 0x0010D035 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D030(void)
{

loc_0010D030: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010D040
 * Original: 0x0010D040 - 0x0010D076 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D040: ;
    eax = MEM32(ecx + 0xD84);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = eax + ecx + 4;
    ecx = edi;
    PUSH32(esp, 0x0010D05Au); RECOMP_ABI_CALL(0x002643F0u, sub_002643F0); /* call 0x002643F0 */

loc_0010D05A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x415D9568) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x415D9568 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010D071; /* jne: not equal / not zero */

loc_0010D061: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0010D06Cu); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_0010D06C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_0010D071: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010D080
 * Original: 0x0010D080 - 0x0010D0A0 (32 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D080(void)
{

loc_0010D080: ;
    eax = MEM32(ecx + 0xD84);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    MEM32(eax + ecx + 8) = edx;
    MEM32(ecx + 0xDC0) = 0;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010D0A0
 * Original: 0x0010D0A0 - 0x0010D0B0 (16 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D0A0: ;
    MEM32(ecx + 0xD84) = MEM32(ecx + 0xD84) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0xD84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010D0B0
 * Original: 0x0010D0B0 - 0x0010D0CB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D0B0: ;
    ecx = MEM32(0x3DE9AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D0C0; /* je: equal / zero */

loc_0010D0BA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0010D0C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D0BEu); } /* indirect call */
    }

loc_0010D0C0: ;
    MEM32(0x3DE9AC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D0D0
 * Original: 0x0010D0D0 - 0x0010D0D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D0D0(void)
{

loc_0010D0D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D0E0
 * Original: 0x0010D0E0 - 0x0010D114 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D0E0: ;
    eax = MEM32(0x3864D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0010D0FD; /* jle: less or equal (signed <=) */

loc_0010D0EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3188E0);
    PUSH32(esp, 0x0010D0FAu); RECOMP_ABI_CALL(0x00264150u, sub_00264150); /* call 0x00264150 */

loc_0010D0FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010D0FD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x0010D107u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D101u); } /* indirect call */
    }

loc_0010D107: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010D113; /* je: equal / zero */

loc_0010D10C: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_000EF330(); return; /* tail jmp 0x000EF330 */

loc_0010D113: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D120
 * Original: 0x0010D120 - 0x0010D152 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D120: ;
    eax = MEM32(0x3DE9AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010D151; /* jne: not equal / not zero */

loc_0010D129: ;
    PUSH32(esp, 0xDD0);
    PUSH32(esp, 0x0010D133u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_0010D133: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D147; /* je: equal / zero */

loc_0010D13A: ;
    ecx = eax;
    PUSH32(esp, 0x0010D141u); RECOMP_ABI_CALL(0x0010D300u, sub_0010D300); /* call 0x0010D300 */

loc_0010D141: ;
    MEM32(0x3DE9AC) = eax;
    esp += 4; return; /* ret */

loc_0010D147: ;
    MEM32(0x3DE9AC) = 0;

loc_0010D151: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D160
 * Original: 0x0010D160 - 0x0010D1A4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D160: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(esp) = eax;
    MEM32(esp + 4) = ecx;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DE9AC);
    _fb = (uint32_t)(0xD90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0010D19Cu); RECOMP_ABI_CALL(0x0010D370u, sub_0010D370); /* call 0x0010D370 */

loc_0010D19C: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010D1B0
 * Original: 0x0010D1B0 - 0x0010D1FB (75 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D1B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    MEM32(esp) = eax;
    eax = MEM32(0x3DE9AC);
    ecx = MEM32(eax + 0xD84);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx + eax + 4;
    MEM8(esp + 0x10) = 0;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010D1E6u); RECOMP_ABI_CALL(0x0010D460u, sub_0010D460); /* call 0x0010D460 */

loc_0010D1E6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010D1F7; /* je: equal / zero */

loc_0010D1EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D1F7; /* je: equal / zero */

loc_0010D1F2: ;
    eax = MEM32(eax + 8);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0010D1F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D200
 * Original: 0x0010D200 - 0x0010D20B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D200: ;
    ecx = MEM32(0x3DE9AC);
    g_seh_ebp = ebp; sub_0010D4C0(); return; /* tail jmp 0x0010D4C0 */

}

/**
 * sub_0010D210
 * Original: 0x0010D210 - 0x0010D26F (95 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D210: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 8);
    esi = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0010D226u); RECOMP_ABI_CALL(0x0010CEF0u, sub_0010CEF0); /* call 0x0010CEF0 */

loc_0010D226: ;
    MEM32(esi + 0x110) = 0x300534;
    MEM32(esi) = 0x318978;
    MEM32(esi + 8) = 0x31896C;
    MEM32(esi + 0xB0) = 0x318928;
    MEM32(esi + 0xD4) = 0x318910;
    MEM32(esi + 0x110) = 0x318908;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 1 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    MEM8(esi + 0x118) = LO8(edx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010D270
 * Original: 0x0010D270 - 0x0010D280 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D270: ;
    SET_LO8(eax, MEM8(ecx + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D27F; /* je: equal / zero */

loc_0010D277: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EF330(); return; /* tail jmp 0x000EF330 */

loc_0010D27F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D280
 * Original: 0x0010D280 - 0x0010D290 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D280: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D28B; /* je: equal / zero */

loc_0010D284: ;
    eax = ecx + 0x110;
    esp += 4; return; /* ret */

loc_0010D28B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010D290
 * Original: 0x0010D290 - 0x0010D298 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D290: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0010D3E0(); return; /* tail jmp 0x0010D3E0 */

}

/**
 * sub_0010D2A0
 * Original: 0x0010D2A0 - 0x0010D2AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D2A0: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0010D3E0(); return; /* tail jmp 0x0010D3E0 */

}

/**
 * sub_0010D2B0
 * Original: 0x0010D2B0 - 0x0010D2BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D2B0: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xD4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0010D3E0(); return; /* tail jmp 0x0010D3E0 */

}

/**
 * sub_0010D2C0
 * Original: 0x0010D2C0 - 0x0010D2CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D2C0: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0010D3E0(); return; /* tail jmp 0x0010D3E0 */

}

/**
 * sub_0010D2D0
 * Original: 0x0010D2D0 - 0x0010D2F6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D2D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D2E0; /* je: equal / zero */

loc_0010D2DA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0010D2E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D2DEu); } /* indirect call */
    }

loc_0010D2E0: ;
    MEM32(esi + 8) = 0;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D300
 * Original: 0x0010D300 - 0x0010D36D (109 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D300: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x318AE4;
    eax = esi + 4;
    ecx = 0x20;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010D316: ;
    MEM32(eax + 4) = edi;
    MEM32(eax) = edi;
    MEM32(eax + 8) = edi;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010D316; /* jne: not equal / not zero */

loc_0010D324: ;
    ebx = esi + 0xD90;
    ecx = ebx;
    PUSH32(esp, 0x0010D331u); RECOMP_ABI_CALL(0x000EEFF0u, sub_000EEFF0); /* call 0x000EEFF0 */

loc_0010D331: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x120);
    PUSH32(esp, 0x318AD8);
    ecx = ebx;
    MEM32(esi + 0xD84) = edi;
    PUSH32(esp, 0x0010D34Eu); RECOMP_ABI_CALL(0x000EF360u, sub_000EF360); /* call 0x000EF360 */

loc_0010D34E: ;
    PUSH32(esp, 0x318AC8);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0010D35Cu); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_0010D35C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010D363u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_0010D363: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D370
 * Original: 0x0010D370 - 0x0010D3E0 (112 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D370: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010D3DA; /* jge: greater or equal (signed >=) */

loc_0010D37B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi) = 0;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0010D39Au); RECOMP_ABI_CALL(0x000EF230u, sub_000EF230); /* call 0x000EF230 */

loc_0010D39A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D3AC; /* je: equal / zero */

loc_0010D39E: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0010D3AAu); RECOMP_ABI_CALL(0x0010D210u, sub_0010D210); /* call 0x0010D210 */

loc_0010D3AA: ;
    goto loc_0010D3AE;

loc_0010D3AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010D3AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010D3BB; /* je: equal / zero */

loc_0010D3B4: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010D3BD;

loc_0010D3BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010D3BD: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0010D3CAu); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_0010D3CA: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0010D3DA; /* je: equal / zero */

loc_0010D3D1: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x110;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0010D3DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010D3E0
 * Original: 0x0010D3E0 - 0x0010D413 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D3E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D3FE; /* je: equal / zero */

loc_0010D3E7: ;
    eax = esi + 0x110;
    MEM32(eax) = 0x300534;
    PUSH32(esp, 0x0010D3F8u); RECOMP_ABI_CALL(0x0010CC60u, sub_0010CC60); /* call 0x0010CC60 */

loc_0010D3F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0010D3FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(eax) = 0x300534;
    PUSH32(esp, 0x0010D40Du); RECOMP_ABI_CALL(0x0010CC60u, sub_0010CC60); /* call 0x0010CC60 */

loc_0010D40D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010D420
 * Original: 0x0010D420 - 0x0010D45C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D420: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xD90;
    PUSH32(esp, 0x0010D42Eu); RECOMP_ABI_CALL(0x000EF420u, sub_000EF420); /* call 0x000EF420 */

loc_0010D42E: ;
    PUSH32(esp, 0x10D2D0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x6C);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010D440u); RECOMP_ABI_CALL(0x000127C0u, sub_000127C0); /* call 0x000127C0 */

loc_0010D440: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x2FF0D4;
    if (TEST_Z(_fa, _fb)) goto loc_0010D456; /* je: equal / zero */

loc_0010D44D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010D453u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0010D453: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010D456: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010D460
 * Original: 0x0010D460 - 0x0010D4B3 (83 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D460: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x4BDA12F7;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = edx;
    esi = esi >> 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010D4AE; /* jle: less or equal (signed <=) */

loc_0010D481: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(eax);
    PUSH32(esp, ebx);

loc_0010D488: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    ebx = MEM32(eax + edi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0010D4A7; /* jge: greater or equal (signed >=) */

loc_0010D49B: ;
    edi = eax + 0x6C;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010D4A9;

loc_0010D4A7: ;
    esi = ecx;

loc_0010D4A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0010D488; /* jg: greater (signed >) */

loc_0010D4AD: ;
    POP32(esp, ebx);

loc_0010D4AE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D4C0
 * Original: 0x0010D4C0 - 0x0010D560 (160 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D4C0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0xD84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0010D4E3; /* jbe: below or equal (unsigned <=) */

loc_0010D4CF: ;
    PUSH32(esp, 0x10CFE0);
    PUSH32(esp, 0x6C);
    PUSH32(esp, eax);
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010D4E0u); RECOMP_ABI_CALL(0x002BEF20u, sub_002BEF20); /* call 0x002BEF20 */

loc_0010D4E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010D4E3: ;
    ecx = MEM32(ebp + 0xD84);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6C);
    edi = ebp + 4;
    edx = ecx + ebp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D55D; /* je: equal / zero */

loc_0010D4F7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x64;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0010D500: ;
    eax = esi + -88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D535; /* je: equal / zero */

loc_0010D507: ;
    eax = esi + -88;
    MEM32(eax) = 0x310C84;
    MEM32(esi + -72) = ebx;
    MEM8(esi + -68) = 1;
    MEM8(esi + -67) = 1;
    MEM8(esi + -66) = 1;
    MEM32(esi + -64) = ebx;
    MEM32(esi + -8) = ebx;
    MEM32(esi + -4) = ebx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = ebx;
    MEM32(esi + -60) = ecx;
    MEM32(esi + -56) = ecx;
    goto loc_0010D537;

loc_0010D535: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010D537: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + -92) = eax;
    PUSH32(esp, 0x0010D544u); RECOMP_ABI_CALL(0x0014EF90u, sub_0014EF90); /* call 0x0014EF90 */

loc_0010D544: ;
    edx = MEM32(ebp + 0xD84);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x6C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + ebp + 4;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010D500; /* jne: not equal / not zero */

loc_0010D55B: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0010D55D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D560
 * Original: 0x0010D560 - 0x0010D580 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D560: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x318B18;
    if (TEST_Z(_fa, _fb)) goto loc_0010D579; /* je: equal / zero */

loc_0010D570: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010D576u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0010D576: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010D579: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010D580
 * Original: 0x0010D580 - 0x0010D583 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D580(void)
{

loc_0010D580: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010D590
 * Original: 0x0010D590 - 0x0010D593 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D590(void)
{

loc_0010D590: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010D5A0
 * Original: 0x0010D5A0 - 0x0010D5A3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D5A0(void)
{

loc_0010D5A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010D5B0
 * Original: 0x0010D5B0 - 0x0010D5EB (59 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D5B0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0010D5C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D5C3u); } /* indirect call */
    }

loc_0010D5C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D5E4; /* je: equal / zero */

loc_0010D5CA: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esi + 0x18);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx + 4);
    MEM32(edi + 0x20) = edx;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010D5E4: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010D5F0
 * Original: 0x0010D5F0 - 0x0010D5F8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D5F0: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_0010D600
 * Original: 0x0010D600 - 0x0010D608 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D600: ;
    ecx = MEM32(ecx + 0x14);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_0010D610
 * Original: 0x0010D610 - 0x0010D677 (103 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D610: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3DE9B0) = eax;
    MEM32(0x3DE9B4) = eax;
    MEM32(0x3DE9B8) = eax;
    MEM32(0x3DE9BC) = eax;
    MEM32(0x3DE9C0) = eax;
    MEM32(0x3DE9C4) = eax;
    MEM32(0x3DE9C8) = eax;
    MEM32(0x3DE9CC) = eax;
    MEM32(0x3DE9D0) = eax;
    MEM32(0x3DE9D4) = eax;
    MEM32(0x3DE9D8) = eax;
    MEM32(0x3DE9DC) = eax;
    MEM32(0x3DE9E0) = eax;
    MEM32(0x3DE9E4) = eax;
    MEM32(0x3DE9E8) = eax;
    MEM32(0x3DE9EC) = eax;
    MEM32(0x3DE9F0) = eax;
    MEM32(0x3DE9F4) = eax;
    MEM32(0x3DE9F8) = eax;
    MEM32(0x3DE9FC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D680
 * Original: 0x0010D680 - 0x0010D6B9 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D680: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0010D693u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_0010D693: ;
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0010D69Eu); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_0010D69E: ;
    edx = esi + 0x30;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0010D6A9u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_0010D6A9: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0010D6B4u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_0010D6B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010D6C0
 * Original: 0x0010D6C0 - 0x0010D6DA (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D6C0(void)
{

loc_0010D6C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0010D6D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D6D3u); } /* indirect call */
    }

loc_0010D6D6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010D6E0
 * Original: 0x0010D6E0 - 0x0010D6EE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D6E0: ;
    ecx = MEM32(ecx);
    PUSH32(esp, 0x0010D6E7u); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010D6E7: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_0010D6F0
 * Original: 0x0010D6F0 - 0x0010D6FA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D6F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D6F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010D6F6u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0010D6F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0010D700
 * Original: 0x0010D700 - 0x0010D872 (370 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D700: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010D716u); RECOMP_ABI_CALL(0x002651E0u, sub_002651E0); /* call 0x002651E0 */

loc_0010D716: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x54); /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x44); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x54); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x28); /* mulss */
    eax = MEM32(ebp + 0x10);
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp); /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D880
 * Original: 0x0010D880 - 0x0010D8B4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D880: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D8B2; /* je: equal / zero */

loc_0010D88A: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D897; /* je: equal / zero */

loc_0010D891: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010D897u); RECOMP_ABI_CALL(0x00225350u, sub_00225350); /* call 0x00225350 */

loc_0010D897: ;
    ecx = MEM32(esi + 0x58);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010D8AB; /* jne: not equal / not zero */

loc_0010D8A5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0010D8ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D8A9u); } /* indirect call */
    }

loc_0010D8AB: ;
    MEM32(esi + 0x58) = 0;

loc_0010D8B2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D8C0
 * Original: 0x0010D8C0 - 0x0010D8F1 (49 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D8C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D8C0: ;
    eax = MEM32(ecx + 0x58);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    ecx = MEM32(eax + 0xB0);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010D900
 * Original: 0x0010D900 - 0x0010D966 (102 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D900: ;
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
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x40) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010D924u); RECOMP_ABI_CALL(0x0010D700u, sub_0010D700); /* call 0x0010D700 */

loc_0010D924: ;
    esi = MEM32(esi + 0x5C);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0010D93Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D938u); } /* indirect call */
    }

loc_0010D93B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010D95C; /* je: equal / zero */

loc_0010D93F: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(esi + 0x18);
    ecx = eax + eax * 2;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + edx + 4);
    MEM32(edi + 0x20) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0010D95C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010D970
 * Original: 0x0010D970 - 0x0010D9B1 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x40) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010D993u); RECOMP_ABI_CALL(0x0010D700u, sub_0010D700); /* call 0x0010D700 */

loc_0010D993: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(esi + 0x5C);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0010D9AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D9A7u); } /* indirect call */
    }

loc_0010D9AA: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010D9C0
 * Original: 0x0010D9C0 - 0x0010DA05 (69 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010D9C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x40) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010D9E3u); RECOMP_ABI_CALL(0x0010D700u, sub_0010D700); /* call 0x0010D700 */

loc_0010D9E3: ;
    eax = MEM32(ebp + 0x10);
    esi = MEM32(esi + 0x5C);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0010D9FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010D9FBu); } /* indirect call */
    }

loc_0010D9FE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010DA10
 * Original: 0x0010DA10 - 0x0010DA2E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DA10(void)
{

loc_0010DA10: ;
    eax = MEM32(ecx + 0x58);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x28) = edx;
    eax = MEM32(ecx + 0x58);
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010DA2Bu); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_0010DA2B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010DA30
 * Original: 0x0010DA30 - 0x0010DA6E (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010DA30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010DA4D; /* je: equal / zero */

loc_0010DA3A: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010DA43u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0010DA43: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = 0;

loc_0010DA4D: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010DA6C; /* je: equal / zero */

loc_0010DA54: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010DA65; /* jne: not equal / not zero */

loc_0010DA5F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0010DA65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010DA63u); } /* indirect call */
    }

loc_0010DA65: ;
    MEM32(esi + 0x14) = 0;

loc_0010DA6C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010DA70
 * Original: 0x0010DA70 - 0x0010DAAC (60 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010DA70: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0010DA98; /* je: equal / zero */

loc_0010DA7B: ;
    edx = MEM32(ecx + 0xA0);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0xA4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0xA8);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

loc_0010DA98: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010DAB0
 * Original: 0x0010DAB0 - 0x0010DCD1 (545 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010DAB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x14); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x28); /* mulss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x18) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + 0x28); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x28) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x38); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + 0x34); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(edx + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x34); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x38); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + 0x38); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(edx + 0x30); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 0x48); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(edx + 0x44); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x48)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x40)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x40)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x38); /* addss */
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010DCE0
 * Original: 0x0010DCE0 - 0x0010DEFE (542 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010DCE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x14); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x18) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x24); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x28) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x30); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x34); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x38); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x30); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 0x30); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x34) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x38) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x40); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x34); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x38); /* addss */
    MEMF(ecx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x44) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x48) = xmm2.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010DF00
 * Original: 0x0010DF00 - 0x0010E042 (322 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DF00(void)
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

loc_0010DF00: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0010DF72; /* jnp: not parity */

loc_0010DF40: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x10) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x18) = xmm2.f[0]; /* movss */

loc_0010DF72: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0010DFDB; /* jnp: not parity */

loc_0010DFA9: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x28) = xmm2.f[0]; /* movss */

loc_0010DFDB: ;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3210B0)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((((_fa >> 7) & 1u) /* fucompi */) ? 0x80u : 0u) | (((_fa & 0x40u) /* fucompi */) ? 0x40u : 0u) | (((_fa & 4u) /* fucompi */) ? 0x04u : 0u) | (((_fa & 1u) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0010E040; /* jnp: not parity */

loc_0010E012: ;
    xmm1.f[0] = xmm1.f[0] / MEMF(esp); /* divss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x30); /* mulss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */

loc_0010E040: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010E050
 * Original: 0x0010E050 - 0x0010E0AD (93 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E050: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E077; /* je: equal / zero */

loc_0010E05A: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E062u); RECOMP_ABI_CALL(0x00259F00u, sub_00259F00); /* call 0x00259F00 */

loc_0010E062: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E070; /* je: equal / zero */

loc_0010E069: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0010E070u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E06Du); } /* indirect call */
    }

loc_0010E070: ;
    MEM32(esi + 4) = 0;

loc_0010E077: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E0AB; /* je: equal / zero */

loc_0010E07D: ;
    PUSH32(esp, 0x0010E082u); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010E082: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E092; /* je: equal / zero */

loc_0010E086: ;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E092u); RECOMP_ABI_CALL(0x00225350u, sub_00225350); /* call 0x00225350 */

loc_0010E092: ;
    ecx = MEM32(esi);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010E0A5; /* jne: not equal / not zero */

loc_0010E09F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0010E0A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E0A3u); } /* indirect call */
    }

loc_0010E0A5: ;
    MEM32(esi) = 0;

loc_0010E0AB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010E0B0
 * Original: 0x0010E0B0 - 0x0010E0CF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E0B0(void)
{

loc_0010E0B0: ;
    ecx = MEM32(ecx);
    PUSH32(esp, 0x0010E0B7u); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010E0B7: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 1);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E0CCu); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_0010E0CC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E0D0
 * Original: 0x0010E0D0 - 0x0010E0F4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E0D0(void)
{

loc_0010E0D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + 0xC) = esi;
    ecx = MEM32(ecx);
    PUSH32(esp, 0x0010E0DFu); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010E0DF: ;
    PUSH32(esp, 1);
    MEM32(eax + 0x28) = esi;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E0F0u); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_0010E0F0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E100
 * Original: 0x0010E100 - 0x0010E11D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E100(void)
{

loc_0010E100: ;
    ecx = MEM32(ecx);
    PUSH32(esp, 0x0010E107u); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010E107: ;
    PUSH32(esp, 1);
    MEM32(eax + 0x28) = 0xFF;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E11Cu); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_0010E11C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010E120
 * Original: 0x0010E120 - 0x0010E13E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E120(void)
{

loc_0010E120: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    ecx = MEM32(ecx);
    PUSH32(esp, 0x0010E12Bu); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010E12B: ;
    PUSH32(esp, 1);
    MEM32(eax + 0x28) = esi;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E13Cu); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_0010E13C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010E140
 * Original: 0x0010E140 - 0x0010E15D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E140(void)
{

loc_0010E140: ;
    ecx = MEM32(ecx);
    PUSH32(esp, 0x0010E147u); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010E147: ;
    PUSH32(esp, 1);
    MEM32(eax + 0x28) = 0x10;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E15Cu); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_0010E15C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010E160
 * Original: 0x0010E160 - 0x0010E17D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E160(void)
{

loc_0010E160: ;
    ecx = MEM32(ecx);
    PUSH32(esp, 0x0010E167u); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010E167: ;
    PUSH32(esp, 1);
    MEM32(eax + 0x28) = 0x13;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E17Cu); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_0010E17C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010E180
 * Original: 0x0010E180 - 0x0010E1F2 (114 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E190u); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010E190: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010E19Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E198u); } /* indirect call */
    }

loc_0010E19B: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm3 = XMM_MEM(0x307E30); /* movaps */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(esp); /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp, xmm3); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E200
 * Original: 0x0010E200 - 0x0010E23F (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E210u); RECOMP_ABI_CALL(0x00259910u, sub_00259910); /* call 0x00259910 */

loc_0010E210: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 8);
    XMM_STORE(esp, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E240
 * Original: 0x0010E240 - 0x0010E461 (545 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x302588); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0xC); /* movaps */
    XMM_STORE(esp + 0x2C, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3011DC); /* subss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0xC);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x60;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    PUSH32(esp, ecx);
    ecx = MEM32(0x3DEA20);
    edx = esp + 0x34;
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    PUSH32(esp, edx);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x5C) = eax;
    MEM8(esp + 0x58) = 1;
    MEM32(esp + 0x68) = 0x307E40;
    MEM32(esp + 0x98) = 0;
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E316u); RECOMP_ABI_CALL(0x00223510u, sub_00223510); /* call 0x00223510 */

loc_0010E316: ;
    eax = MEM32(esp + 0x90);
    ecx = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0010E421; /* je: equal / zero */

loc_0010E32C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    xmm1 = XMM_MEM(esp + 0x44); /* movaps */
    xmm3 = XMM_MEM(0x307E30); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(esp + 0x34); /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(esp + 0x14, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E363u); RECOMP_ABI_CALL(0x00259920u, sub_00259920); /* call 0x00259920 */

loc_0010E363: ;
    eax = MEM32(esp + 0x90);
    PUSH32(esp, 3);
    ecx = esp + 0x10;
    esi = eax + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E37Du); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_0010E37D: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E3A0; /* je: equal / zero */

loc_0010E385: ;
    edx = MEM32(esp + 0x80);
    eax = ZX16(MEM16(eax + edx * 8 + 6));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E397u); RECOMP_ABI_CALL(0x00070810u, sub_00070810); /* call 0x00070810 */

loc_0010E397: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = eax;
    goto loc_0010E3A8;

loc_0010E3A0: ;
    MEM32(esp + 0xC) = 0;

loc_0010E3A8: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010E40B; /* jne: not equal / not zero */

loc_0010E3AF: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E40B; /* je: equal / zero */

loc_0010E3B5: ;
    PUSH32(esp, 1);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E3C3u); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_0010E3C3: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E40B; /* je: equal / zero */

loc_0010E3C8: ;
    PUSH32(esp, 3);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E3D6u); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_0010E3D6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010E40B; /* jne: not equal / not zero */

loc_0010E3DB: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    ecx = MEM32(edi + 4);
    edx = esp + 0xE0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    edx = MEM32(edi);
    MEM32(esp + 0xDC) = esi;
    MEMF(esp + 0xCC) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0010E40Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010E408u); } /* indirect call */
    }

loc_0010E40B: ;
    ebx = MEM32(esp + 0xC);
    ecx = MEM32(edi + 4);
    MEM32(edi + 0x14) = ebx;
    MEM32(ecx + 0x20) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0010E421: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E44Fu); RECOMP_ABI_CALL(0x00259920u, sub_00259920); /* call 0x00259920 */

loc_0010E44F: ;
    ecx = MEM32(edi + 4);
    MEM32(edi + 0x14) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x20) = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010E470
 * Original: 0x0010E470 - 0x0010E494 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E470(void)
{

loc_0010E470: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    PUSH32(esp, 0x0010E47Fu); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010E47F: ;
    PUSH32(esp, 1);
    MEM32(eax + 0x28) = esi;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010E490u); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_0010E490: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E4A0
 * Original: 0x0010E4A0 - 0x0010E6DF (575 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E4A0(void)
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

loc_0010E4A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010E4CC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010E4C0: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */

loc_0010E4CC: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E50Du); RECOMP_ABI_CALL(0x00259910u, sub_00259910); /* call 0x00259910 */

loc_0010E50D: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    xmm2 = XMM_SUB(xmm2, xmm1); /* subps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x60;
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    XMM_STORE(esp + 0x24, xmm1); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x2FEC54)); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E579u); RECOMP_ABI_CALL(0x0025B040u, sub_0025B040); /* call 0x0025B040 */

loc_0010E579: ;
    SET_LO8(eax, MEM8(esp + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010E67C; /* je: equal / zero */

loc_0010E585: ;
    xmm2 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm3.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x317A94); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010E6B7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x317A94)) */

loc_0010E5C1: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm1 = xmm0; /* movaps */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm1.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_MEM(esp + 0x50); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm2 = XMM_MEM(esp + 0x70); /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xD2); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xC9); /* shufps */
    xmm1 = xmm2; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm2, 0xC9); /* shufps */
    xmm0 = xmm4; /* movaps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0xD2); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xC9); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm4); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xD2); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm4); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm2); /* subps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm3, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    goto loc_0010E6B2;

loc_0010E67C: ;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E683u); RECOMP_ABI_CALL(0x00259930u, sub_00259930); /* call 0x00259930 */

loc_0010E683: ;
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    eax = MEM32(0x3DEA20);
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm2 = XMM_MEM(eax + 0xE0); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm3); /* addps */

loc_0010E6B2: ;
    XMM_STORE(esp + 0x20, xmm0); /* movaps */

loc_0010E6B7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E6CCu); RECOMP_ABI_CALL(0x00259940u, sub_00259940); /* call 0x00259940 */

loc_0010E6CC: ;
    ecx = MEM32(esi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E6D8u); RECOMP_ABI_CALL(0x0025A670u, sub_0025A670); /* call 0x0025A670 */

loc_0010E6D8: ;
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
 * sub_0010E6E0
 * Original: 0x0010E6E0 - 0x0010E726 (70 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E6E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(ecx + 0x58);
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = esp;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E720u); RECOMP_ABI_CALL(0x0022A070u, sub_0022A070); /* call 0x0022A070 */

loc_0010E720: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010E730
 * Original: 0x0010E730 - 0x0010EAB6 (902 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010E730: ;
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
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esp + 0x60) = esi;
    MEM32(esp + 0x58) = edi;
    MEM32(esp + 0x5C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E75Eu); RECOMP_ABI_CALL(0x00066230u, sub_00066230); /* call 0x00066230 */

loc_0010E75E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x50) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0010EAAD; /* jbe: below or equal (unsigned <=) */

loc_0010E76A: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_0010E774;

loc_0010E770: ;
    esi = MEM32(esp + 0x5C);

loc_0010E774: ;
    esi = MEM32(esi + 0x18);
    edi = MEM32(esp + 0xC);
    eax = ZX8(MEM8(esi + edi));
    ecx = MEM32(esp + 0x58);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x50);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edx + ebx * 8);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0 = XMM_MEM(eax + ecx + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax + ecx); /* movaps */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(esp + 0x10, xmm1); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    ecx = esp + 0x10;
    XMM_STORE(esp + 0x30, xmm1); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010E7C2u); RECOMP_ABI_CALL(0x00265950u, sub_00265950); /* call 0x00265950 */

loc_0010E7C2: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x70) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 0x20); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] * MEMF(esi + 0x20); /* mulss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x84) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(esp + 0x94) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x98) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x40); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x34); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x44); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x48); /* addss */
    ecx = esp + 0x60;
    MEMF(esp + 0xA0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010EA27u); RECOMP_ABI_CALL(0x0010DF00u, sub_0010DF00); /* call 0x0010DF00 */

loc_0010EA27: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010EA35u); RECOMP_ABI_CALL(0x00264F40u, sub_00264F40); /* call 0x00264F40 */

loc_0010EA35: ;
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010EA46u); RECOMP_ABI_CALL(0x00264F60u, sub_00264F60); /* call 0x00264F60 */

loc_0010EA46: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010EA57u); RECOMP_ABI_CALL(0x00264F80u, sub_00264F80); /* call 0x00264F80 */

loc_0010EA57: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010EA68u); RECOMP_ABI_CALL(0x00264FA0u, sub_00264FA0); /* call 0x00264FA0 */

loc_0010EA68: ;
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010EA71u); RECOMP_ABI_CALL(0x00265550u, sub_00265550); /* call 0x00265550 */

loc_0010EA71: ;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x54);
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    XMM_STORE(edi + 0x40, xmm0); /* movaps */
    MEM32(esp + 0xC) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0010E770; /* jb: below (unsigned <) */

loc_0010EAAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010EAC0
 * Original: 0x0010EAC0 - 0x0010EB20 (96 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010EAC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x3DE9B0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0010EAD0: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EB0F; /* je: equal / zero */

loc_0010EAD6: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EAEC; /* je: equal / zero */

loc_0010EADD: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0010EAE6u); RECOMP_ABI_CALL(0x00155300u, sub_00155300); /* call 0x00155300 */

loc_0010EAE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ebx;

loc_0010EAEC: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EB06; /* je: equal / zero */

loc_0010EAF3: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010EB03; /* jne: not equal / not zero */

loc_0010EAFD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0010EB03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010EB01u); } /* indirect call */
    }

loc_0010EB03: ;
    MEM32(esi + 0x14) = ebx;

loc_0010EB06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010EB0Cu); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_0010EB0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010EB0F: ;
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DEA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3DEA00 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010EAD0; /* jl: less (signed <) */

loc_0010EB1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010EB20
 * Original: 0x0010EB20 - 0x0010EB99 (121 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010EB20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EB35; /* je: equal / zero */

loc_0010EB2C: ;
    MEM32(esi + 0x10) = ecx;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0010EB35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010EB32u); } /* indirect call */
    }

loc_0010EB35: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EB95; /* je: equal / zero */

loc_0010EB3E: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010EB6A; /* jne: not equal / not zero */

loc_0010EB44: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x0010EB4Bu); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010EB4B: ;
    MEM32(eax + 0x28) = 0xFF;
    POP32(esp, esi);
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = eax;
    ecx = MEM32(0x3DEA20);
    g_seh_ebp = ebp; sub_00224AD0(); return; /* tail jmp 0x00224AD0 */

loc_0010EB6A: ;
    MEM32(esi + 0x18) = eax;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0010EB8E; /* je: equal / zero */

loc_0010EB72: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0010EB83; /* je: equal / zero */

loc_0010EB75: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0010EB95; /* jne: not equal / not zero */

loc_0010EB78: ;
    ecx = esi;
    PUSH32(esp, 0x0010EB7Fu); RECOMP_ABI_CALL(0x0010E160u, sub_0010E160); /* call 0x0010E160 */

loc_0010EB7F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010EB83: ;
    ecx = esi;
    PUSH32(esp, 0x0010EB8Au); RECOMP_ABI_CALL(0x0010E140u, sub_0010E140); /* call 0x0010E140 */

loc_0010EB8A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0010EB8E: ;
    ecx = esi;
    PUSH32(esp, 0x0010EB95u); RECOMP_ABI_CALL(0x0010E100u, sub_0010E100); /* call 0x0010E100 */

loc_0010EB95: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010EBA0
 * Original: 0x0010EBA0 - 0x0010EBDB (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010EBA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx, xmm1); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    eax = MEM32(ebp + 0xC);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    XMM_STORE(ecx + 0x20, xmm1); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    ecx = MEM32(ecx + 0x5C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010EBD3u); RECOMP_ABI_CALL(0x0010E730u, sub_0010E730); /* call 0x0010E730 */

loc_0010EBD3: ;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010EBE0
 * Original: 0x0010EBE0 - 0x0010F3E8 (2056 bytes, 467 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010EBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0010EBE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x70) = esi;
    eax = MEM32(ebp + 8);
    ecx = eax;
    edi = MEM32(ecx);
    edx = esi;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    edi = MEM32(ecx + 8);
    MEM32(edx + 8) = edi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(esp + 0xAC) = eax;
    SET_LO8(eax, MEM8(eax + 2));
    edi = ZX8(LO8(eax));
    eax = edi + edi * 2;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x400);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x80000000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x318B5C);
    MEM32(esp + 0x84) = edx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x78) = edi;
    MEM32(esi + 0x10) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010EC74u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0010EC74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EC82; /* je: equal / zero */

loc_0010EC7B: ;
    MEM32(eax) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010EC84;

loc_0010EC82: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010EC84: ;
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(0x3888C0);
    _fa = (uint32_t)(MEM8(ecx + 0x1ED4)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1ED4), 0x10 (8-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0010EDAB; /* jne: not equal / not zero */

loc_0010ECBA: ;
    ecx = 0x3888C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010ECC4u); RECOMP_ABI_CALL(0x00079160u, sub_00079160); /* call 0x00079160 */

loc_0010ECC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010EDAB; /* ja: above (unsigned >) */

loc_0010ECCD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10F3E8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0010ECD4u) goto loc_0010ECD4;
    if (_jt == 0x0010ED0Bu) goto loc_0010ED0B;
    if (_jt == 0x0010ED3Fu) goto loc_0010ED3F;
    if (_jt == 0x0010ED73u) goto loc_0010ED73;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010ECD4: ;
    xmm0 = XMM_SCALAR(MEMF(0x376680)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376684)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376688)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x37668C)); /* movss */
    goto loc_0010EDA5;

loc_0010ED0B: ;
    xmm0 = XMM_SCALAR(MEMF(0x376690)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376694)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x376698)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x37669C)); /* movss */
    goto loc_0010EDA5;

loc_0010ED3F: ;
    xmm0 = XMM_SCALAR(MEMF(0x3766A0)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3766A4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3766A8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3766AC)); /* movss */
    goto loc_0010EDA5;

loc_0010ED73: ;
    xmm0 = XMM_SCALAR(MEMF(0x3766B0)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3766B4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3766B8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3766BC)); /* movss */

loc_0010EDA5: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0010EDAB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x68) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0010F33A; /* jle: less or equal (signed <=) */

loc_0010EDB7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0xBC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x64) = ebx;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    goto loc_0010EDE0;

    /* nop */
    goto loc_0010EDE0;

    /* nop */

loc_0010EDE0: ;
    edx = ZX8(MEM8(esp + 0x68));
    eax = MEM32(esp + 0xAC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    esi = MEM32(esi + 0x18);
    edi = edx + eax + 4;
    eax = MEM32(edi + 0x44);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010EE05u); RECOMP_ABI_CALL(0x00194DB0u, sub_00194DB0); /* call 0x00194DB0 */

loc_0010EE05: ;
    MEM32(esi + 4) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x382EB4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xB4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xB8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xBC) = xmm1.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xB4); /* movaps */
    MEM32(esp + 0x24) = ebx;
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8EDA8DE5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8EDA8DE5u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010EF4A; /* ja: above (unsigned >) */

loc_0010EE75: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010EFDF; /* je: equal / zero */

loc_0010EE7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6B301E8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6B301E8B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010EF2C; /* ja: above (unsigned >) */

loc_0010EE86: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010EEA7; /* je: equal / zero */

loc_0010EE88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x380F1CA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x380F1CA5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010EEE4; /* ja: above (unsigned >) */

loc_0010EE8F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010EF83; /* je: equal / zero */

loc_0010EE95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28C8B22E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28C8B22E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EEEF; /* je: equal / zero */

loc_0010EE9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36069D24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36069D24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F07B; /* jne: not equal / not zero */

loc_0010EEA7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F040; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010EEC2: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F061; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0010EECB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    goto loc_0010F075;

loc_0010EEE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66090953) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x66090953 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F07B; /* jne: not equal / not zero */

loc_0010EEEF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F017; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010EF0A: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F038; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0010EF13: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    goto loc_0010F075;

loc_0010EF2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6B47B0D4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6B47B0D4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EEA7; /* je: equal / zero */

loc_0010EF37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7403062E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7403062E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EEEF; /* je: equal / zero */

loc_0010EF3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E0C3B4Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8E0C3B4Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EEEF; /* je: equal / zero */

loc_0010EF45: ;
    goto loc_0010F07B;

loc_0010EF4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFED3C6Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBFED3C6Au (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010EFBE; /* ja: above (unsigned >) */

loc_0010EF51: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010EF83; /* je: equal / zero */

loc_0010EF53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C063430u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C063430u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0010EF77; /* ja: above (unsigned >) */

loc_0010EF5A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0010EEEF; /* je: equal / zero */

loc_0010EF5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x913F23E8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x913F23E8u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EEA7; /* je: equal / zero */

loc_0010EF67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91488DB7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x91488DB7u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EEA7; /* je: equal / zero */

loc_0010EF72: ;
    goto loc_0010F07B;

loc_0010EF77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C800FD7u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x9C800FD7u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EFDF; /* je: equal / zero */

loc_0010EF7E: ;
    goto loc_0010F07B;

loc_0010EF83: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    goto loc_0010F07B;

loc_0010EFBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCC09A047u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xCC09A047u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EEA7; /* je: equal / zero */

loc_0010EFC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD2C78F4Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD2C78F4Du (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010EEEF; /* je: equal / zero */

loc_0010EFD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDE46B4D6u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xDE46B4D6u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F07B; /* jne: not equal / not zero */

loc_0010EFDF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    goto loc_0010F07B;

loc_0010F017: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F038; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0010F01C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    goto loc_0010F07B;

loc_0010F038: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    goto loc_0010F067;

loc_0010F040: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010F061; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0010F045: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    goto loc_0010F07B;

loc_0010F061: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_0010F067: ;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */

loc_0010F075: ;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */

loc_0010F07B: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0010F08Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F087u); } /* indirect call */
    }

loc_0010F08A: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F09Cu); RECOMP_ABI_CALL(0x001F9540u, sub_001F9540); /* call 0x001F9540 */

loc_0010F09C: ;
    xmm0 = XMM_MEM(esp + 0xC0); /* movaps */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(0x530EB4);
    ebx = eax;
    XMM_STORE(esp + 0xE0, xmm0); /* movaps */
    XMM_STORE(esp + 0xF0, xmm0); /* movaps */
    XMM_STORE(esp + 0x100, xmm0); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    MEM32(esp + 0xD4) = 0;
    MEMF(esp + 0xE4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xF8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10C) = xmm1.f[0]; /* movss */
    XMM_STORE(esp + 0x114, xmm0); /* movaps */
    MEM32(esp + 0xD8) = ebx;
    edx = MEM32(ecx);
    PUSH32(esp, 0x50);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0010F10Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F107u); } /* indirect call */
    }

loc_0010F10A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F123; /* je: equal / zero */

loc_0010F10E: ;
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F11Du); RECOMP_ABI_CALL(0x001F9F50u, sub_001F9F50); /* call 0x001F9F50 */

loc_0010F11D: ;
    MEM32(esp + 0x74) = eax;
    goto loc_0010F12B;

loc_0010F123: ;
    MEM32(esp + 0x74) = 0;

loc_0010F12B: ;
    MEM16(ebx + 6) = MEM16(ebx + 6) - 1;
    _fa = (uint32_t)(MEM16(ebx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F13E; /* jne: not equal / not zero */

loc_0010F136: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0010F13Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F13Cu); } /* indirect call */
    }

loc_0010F13E: ;
    eax = MEM32(edi + 0x44);
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F14Bu); RECOMP_ABI_CALL(0x00065E20u, sub_00065E20); /* call 0x00065E20 */

loc_0010F14B: ;
    MEM32(esi) = eax;
    eax = edi + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x84) = eax;
    ecx = edi + 0xC;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x88) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x88)); /* movss */
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x90) = ecx;
    edx = edi + 0x18;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x94) = eax;
    xmm3 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    MEM32(esp + 0x98) = ecx;
    eax = edi + 0x24;
    ecx = MEM32(eax);
    MEM32(esp + 0x9C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x8C)); /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x90)); /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x9C)); /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xA0) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA0)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xA4) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA4)); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xA8) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x80)); /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x58) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x50);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F2C1; /* jne: not equal / not zero */

loc_0010F2B2: ;
    edx = esp + 0x4C;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F2BEu); RECOMP_ABI_CALL(0x001F4820u, sub_001F4820); /* call 0x001F4820 */

loc_0010F2BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010F2C1: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x50);
    MEM32(eax + edx * 4) = ecx;
    esi = MEM32(esp + 0x50);
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x60);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = esi;
    esi = MEM32(eax + 8);
    eax = MEM32(esp + 0x5C);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F300; /* jne: not equal / not zero */

loc_0010F2F1: ;
    edx = esp + 0x58;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F2FDu); RECOMP_ABI_CALL(0x001F4820u, sub_001F4820); /* call 0x001F4820 */

loc_0010F2FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010F300: ;
    ecx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x64);
    MEM32(eax + ecx * 4) = esi;
    edi = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x68);
    ecx = MEM32(esp + 0x6C);
    esi = MEM32(esp + 0x70);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x64) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0010EDE0; /* jl: less (signed <) */

loc_0010F33A: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x38);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0010F349u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F346u); } /* indirect call */
    }

loc_0010F349: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F35Bu); RECOMP_ABI_CALL(0x001F9880u, sub_001F9880); /* call 0x001F9880 */

loc_0010F35B: ;
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0x50);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010F390; /* jle: less or equal (signed <=) */

loc_0010F369: ;
    /* nop */

loc_0010F370: ;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(edx + edi * 4);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F387; /* jne: not equal / not zero */

loc_0010F381: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0010F387u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F385u); } /* indirect call */
    }

loc_0010F387: ;
    eax = MEM32(esp + 0x50);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F370; /* jl: less (signed <) */

loc_0010F390: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0x6C);
    MEM32(esi + 0x14) = ecx;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0010F3BA; /* js: sign (negative) */

loc_0010F39F: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0010F3BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F3B7u); } /* indirect call */
    }

loc_0010F3BA: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0010F3DD; /* js: sign (negative) */

loc_0010F3C2: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0010F3DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F3DAu); } /* indirect call */
    }

loc_0010F3DD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F400
 * Original: 0x0010F400 - 0x0010F485 (133 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F400: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0010F410;

    /* nop */

loc_0010F410: ;
    eax = MEM32(ecx * 4 + 0x3DE9B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F423; /* je: equal / zero */

loc_0010F41B: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F446; /* je: equal / zero */

loc_0010F423: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F410; /* jl: less (signed <) */

loc_0010F429: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0010F430: ;
    eax = MEM32(esi * 4 + 0x3DE9B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F44F; /* je: equal / zero */

loc_0010F43B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010F430; /* jl: less (signed <) */

loc_0010F441: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0010F446: ;
    eax = MEM32(ecx * 4 + 0x3DE9B0);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0010F44F: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x318B90);
    PUSH32(esp, 0x0010F460u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0010F460: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F479; /* je: equal / zero */

loc_0010F467: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0010F46Fu); RECOMP_ABI_CALL(0x0010EBE0u, sub_0010EBE0); /* call 0x0010EBE0 */

loc_0010F46F: ;
    MEM32(esi * 4 + 0x3DE9B0) = eax;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0010F479: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi * 4 + 0x3DE9B0) = eax;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010F490
 * Original: 0x0010F490 - 0x0010F821 (913 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x318BF8)); /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    ecx = MEM32(ebx);
    MEM32(esi + 8) = ecx;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(0x530EB4);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x318B0C)); /* movss */
    PUSH32(esp, 0x1F);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, 0x30);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0010F50Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F508u); } /* indirect call */
    }

loc_0010F50B: ;
    PUSH32(esp, 0x3EC7AE14);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = eax;
    MEM16(eax + 4) = 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F527u); RECOMP_ABI_CALL(0x001F7820u, sub_001F7820); /* call 0x001F7820 */

loc_0010F527: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(0x530EB4);
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0xB0) = eax;
    MEM8(esp + 0xA8) = LO8(eax);
    eax = MEM32(ebx + 4);
    XMM_STORE(esp + 0xC0, xmm0); /* movaps */
    XMM_STORE(esp + 0xD0, xmm0); /* movaps */
    XMM_STORE(esp + 0xE0, xmm0); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    MEM32(esp + 0xB8) = 0x80000000u;
    MEMF(esp + 0xC4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xEC) = xmm1.f[0]; /* movss */
    XMM_STORE(esp + 0xF4, xmm0); /* movaps */
    MEM32(esp + 0xA8) = edi;
    MEM32(esp + 0xA4) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0010F5B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F5B1u); } /* indirect call */
    }

loc_0010F5B4: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0xD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F5C9u); RECOMP_ABI_CALL(0x0022A790u, sub_0022A790); /* call 0x0022A790 */

loc_0010F5C9: ;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    ebx = eax;
    SET_LO16(eax, MEM16(edi + 6));
    if ((_fa != 0)) goto loc_0010F5DD; /* jne: not equal / not zero */

loc_0010F5D5: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0010F5DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F5DBu); } /* indirect call */
    }

loc_0010F5DD: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F5ECu); RECOMP_ABI_CALL(0x00229C10u, sub_00229C10); /* call 0x00229C10 */

loc_0010F5EC: ;
    edi = MEM32(0x3DEA20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F5FE; /* je: equal / zero */

loc_0010F5F6: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F5FEu); RECOMP_ABI_CALL(0x002251A0u, sub_002251A0); /* call 0x002251A0 */

loc_0010F5FE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x300BA0)); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(0x318B40); /* movaps */
    MEMF(esp + 0x7C) = xmm2.f[0]; /* movss */
    ecx = MEM32(0x530EB4);
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    eax = 4;
    MEM32(esp + 0x78) = 0;
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x84) = eax;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x88) = 0;
    xmm1 = XMM_MEM(edi + 0xE0); /* movaps */
    xmm1 = XMM_XOR(xmm1, xmm0); /* xorps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x90, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x90) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x90); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm0 = XMM_SCALAR(MEMF(0x318B14)); /* movss */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2B);
    XMM_STORE(esp + 0x64, xmm2); /* movaps */
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x88) = eax;
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, 0x90);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0010F74Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F747u); } /* indirect call */
    }

loc_0010F74A: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F75Cu); RECOMP_ABI_CALL(0x0025A070u, sub_0025A070); /* call 0x0025A070 */

loc_0010F75C: ;
    MEM32(esi) = eax;
    MEM16(ebx + 6) = MEM16(ebx + 6) - 1;
    _fa = (uint32_t)(MEM16(ebx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F771; /* jne: not equal / not zero */

loc_0010F769: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0010F771u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F76Fu); } /* indirect call */
    }

loc_0010F771: ;
    eax = MEM32(0x3DEA04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F786; /* je: equal / zero */

loc_0010F77B: ;
    ecx = eax;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0010F786u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F783u); } /* indirect call */
    }

loc_0010F786: ;
    eax = MEM32(esi + 0x18);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F7BF; /* je: equal / zero */

loc_0010F792: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010F7B5; /* jne: not equal / not zero */

loc_0010F798: ;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F79Fu); RECOMP_ABI_CALL(0x00259950u, sub_00259950); /* call 0x00259950 */

loc_0010F79F: ;
    PUSH32(esp, edi);
    MEM32(eax + 0x28) = 0xFF;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F7B3u); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_0010F7B3: ;
    goto loc_0010F7BF;

loc_0010F7B5: ;
    ecx = esi;
    MEM32(esi + 0x18) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F7BFu); RECOMP_ABI_CALL(0x0010E140u, sub_0010E140); /* call 0x0010E140 */

loc_0010F7BF: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x318BC4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F7D0u); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_0010F7D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F7E0; /* je: equal / zero */

loc_0010F7D7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F7DEu); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_0010F7DE: ;
    goto loc_0010F7E2;

loc_0010F7E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010F7E2: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F7EDu); RECOMP_ABI_CALL(0x00259F40u, sub_00259F40); /* call 0x00259F40 */

loc_0010F7ED: ;
    eax = MEM32(esp + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0010F816; /* js: sign (negative) */

loc_0010F7F8: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xB4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0010F816u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F813u); } /* indirect call */
    }

loc_0010F816: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F830
 * Original: 0x0010F830 - 0x0010F98E (350 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F830: ;
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
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebx;
    edx = MEM32(ecx);
    eax = esi + 0x40;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x4C);
    ecx = MEM32(ebx + 0x10);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebx + 0x14);
    eax = esp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F88Eu); RECOMP_ABI_CALL(0x0010F400u, sub_0010F400); /* call 0x0010F400 */

loc_0010F88E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C) = eax;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0010F8A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F8A0u); } /* indirect call */
    }

loc_0010F8A3: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    MEM16(eax + 4) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F8B5u); RECOMP_ABI_CALL(0x001F73A0u, sub_001F73A0); /* call 0x001F73A0 */

loc_0010F8B5: ;
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    ecx = MEM32(0x530EB4);
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM8(esp + 0x28) = LO8(eax);
    eax = MEM32(ebx + 0x10);
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    MEM32(esp + 0x38) = 0x80000000u;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    XMM_STORE(esp + 0x74, xmm0); /* movaps */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = edi;
    edx = MEM32(ecx);
    PUSH32(esp, 0xD0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0010F91Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F918u); } /* indirect call */
    }

loc_0010F91B: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0xD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F92Du); RECOMP_ABI_CALL(0x0022A790u, sub_0022A790); /* call 0x0022A790 */

loc_0010F92D: ;
    MEM32(esi + 0x58) = eax;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(edi + 6));
    if ((_fa != 0)) goto loc_0010F942; /* jne: not equal / not zero */

loc_0010F93A: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0010F942u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F940u); } /* indirect call */
    }

loc_0010F942: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010F960; /* je: equal / zero */

loc_0010F949: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F952u); RECOMP_ABI_CALL(0x002251A0u, sub_002251A0); /* call 0x002251A0 */

loc_0010F952: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010F960u); RECOMP_ABI_CALL(0x00229C10u, sub_00229C10); /* call 0x00229C10 */

loc_0010F960: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0010F983; /* js: sign (negative) */

loc_0010F968: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0010F983u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010F980u); } /* indirect call */
    }

loc_0010F983: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0010F990
 * Original: 0x0010F990 - 0x0010FA0E (126 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010F990: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x300BA0)); /* movss */
    MEM32(eax + 0x48) = ecx;
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x54) = 4;
    MEM8(eax + 0x58) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FA10
 * Original: 0x0010FA10 - 0x0010FA57 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FA10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0010FA34; /* js: sign (negative) */

loc_0010FA1A: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0010FA34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FA31u); } /* indirect call */
    }

loc_0010FA34: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0010FA55; /* js: sign (negative) */

loc_0010FA3B: ;
    ecx = MEM32(0x530EB4);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0010FA55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0010FA52u); } /* indirect call */
    }

loc_0010FA55: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FA60
 * Original: 0x0010FA60 - 0x0010FA67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FA60(void)
{

loc_0010FA60: ;
    MEM32(ecx) = 0x318C10;
    esp += 4; return; /* ret */

}

/**
 * sub_0010FA70
 * Original: 0x0010FA70 - 0x0010FA77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FA70(void)
{

loc_0010FA70: ;
    MEM32(ecx) = 0x318C10;
    esp += 4; return; /* ret */

}

/**
 * sub_0010FA80
 * Original: 0x0010FA80 - 0x0010FB1D (157 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FA80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    MEM32(eax) = 0x318C10;
    MEM32(eax + 0x20) = 0xFFFFFFFFu;
    ecx = MEM32(0x3DEA20);
    xmm0 = XMM_MEM(0x318B40); /* movaps */
    xmm1 = XMM_MEM(ecx + 0xE0); /* movaps */
    xmm1 = XMM_XOR(xmm1, xmm0); /* xorps */
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(eax + 0x10, xmm2); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010FB20
 * Original: 0x0010FB20 - 0x0010FB55 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FB20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0010FB20: ;
    edx = ecx;
    PUSH32(esp, 0x0010FB27u); RECOMP_ABI_CALL(0x0010FA80u, sub_0010FA80); /* call 0x0010FA80 */

loc_0010FB27: ;
    fp_push(MEMD(0x318C40)); /* fld double */
    if (recomp_fp_trig_in_range(fp_top())) fp_top() = recomp_x87_cos(fp_top()); /* fcos */
    eax = MEM32(esp + 4);
    MEM32(edx) = 0x318C28;
    MEMF(edx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x318C00)); /* movss */
    MEM32(edx + 0x38) = eax;
    MEMF(edx + 0x34) = xmm0.f[0]; /* movss */
    MEM8(edx + 0x3C) = 0;
    eax = edx;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0010FB60
 * Original: 0x0010FB60 - 0x0010FC35 (213 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0010FB60: ;
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
    ebx = ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    MEM32(ebx + 0x20) = 0xFFFFFFFFu;
    esi = MEM32(ecx + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010FC2C; /* je: equal / zero */

loc_0010FB87: ;
    edx = MEM32(ecx + 0x48);
    ecx = MEM32(ebp + 8);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(ecx);
    xmm2 = XMM_MEM(ebx + 0x10); /* movaps */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0010FBA0: ;
    xmm0 = XMM_MEM(edx); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0x55); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    ebx = esp + 0x1C;
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebx) = xmm4.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FBD4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0010FBCF: ;
    xmm1 = xmm0; /* movaps */
    edi = ecx;

loc_0010FBD4: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010FBA0; /* jl: less (signed <) */

loc_0010FBDF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FC2C; /* je: equal / zero */

loc_0010FBE3: ;
    eax = MEM32(edi + 0x28);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 3);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010FBF5u); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_0010FBF5: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FC21; /* je: equal / zero */

loc_0010FBFD: ;
    ecx = MEM32(edi + 0x2C);
    edx = ZX16(MEM16(eax + ecx * 8 + 6));
    eax = eax + ecx * 8;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010FC0Eu); RECOMP_ABI_CALL(0x00070810u, sub_00070810); /* call 0x00070810 */

loc_0010FC0E: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x20) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0010FC21: ;
    edx = MEM32(esp + 0x18);
    MEM32(edx + 0x20) = 0;

loc_0010FC2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0010FC40
 * Original: 0x0010FC40 - 0x0010FC80 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010FC40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(ecx + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0010FC6D; /* jle: less or equal (signed <=) */

loc_0010FC58: ;
    ecx = MEM32(ecx + 0x30);
    goto loc_0010FC60;

    /* nop */

loc_0010FC60: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FC7A; /* je: equal / zero */

loc_0010FC65: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010FC60; /* jl: less (signed <) */

loc_0010FC6D: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */

loc_0010FC7A: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0010FC80
 * Original: 0x0010FC80 - 0x001100AF (1071 bytes, 329 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FC80(void)
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

loc_0010FC80: ;
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
    eax = MEM32(edi + 0x4C);
    edx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0011009B; /* je: equal / zero */

loc_0010FCA2: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(ebp + 8);
    esi = MEM32(edi + 0x48);
    ebx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    goto loc_0010FCE0;

loc_0010FCDD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0010FCE0: ;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FD0F; /* jne: not equal / not zero */

loc_0010FCE8: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FD0F; /* je: equal / zero */

loc_0010FCED: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FCF7; /* jne: not equal / not zero */

loc_0010FCF2: ;
    ecx = MEM32(eax + 0x20);
    goto loc_0010FCF9;

loc_0010FCF7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010FCF9: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010FD0F; /* je: equal / zero */

loc_0010FCFF: ;
    xmm1 = XMM_MEM(esp + 0x30); /* movaps */
    xmm0 = XMM_MEM(esi); /* movaps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    XMM_STORE(esp + 0x30, xmm1); /* movaps */

loc_0010FD0F: ;
    xmm1 = XMM_MEM(edx + 0x10); /* movaps */
    xmm0 = XMM_MEM(esi); /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0x28;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3DEA14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FEB9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3DEA14)) */

loc_0010FD4A: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FEA8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0010FD58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FD68; /* je: equal / zero */

loc_0010FD5C: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FD68; /* jne: not equal / not zero */

loc_0010FD63: ;
    eax = MEM32(eax + 0x20);
    goto loc_0010FD6A;

loc_0010FD68: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0010FD6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FDAD; /* je: equal / zero */

loc_0010FD6E: ;
    PUSH32(esp, 3);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010FD7Cu); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_0010FD7C: ;
    ecx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FDA6; /* je: equal / zero */

loc_0010FD84: ;
    eax = MEM32(ebx + 0x2C);
    eax = ZX16(MEM16(ecx + eax * 8 + 6));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010FD92u); RECOMP_ABI_CALL(0x00070890u, sub_00070890); /* call 0x00070890 */

loc_0010FD92: ;
    edx = MEM32(esp + 0x14);
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FEB9; /* jne: not equal / not zero */

loc_0010FDA4: ;
    goto loc_0010FDAD;

loc_0010FDA6: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x10);

loc_0010FDAD: ;
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEM32(esp + 0x18) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FDDD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0010FDC0: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x40); /* subss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edx + 0x34) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FEB9; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0010FDD3: ;
    MEMF(edx + 0x34) = xmm3.f[0]; /* movss */
    goto loc_0010FEB9;

loc_0010FDDD: ;
    eax = MEM32(edi + 0x4C);
    xmm0 = XMM_MEM(esi); /* movaps */
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 0x48);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    ecx = MEM32(esi + 0x20);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esi + 0x28);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esi + 0x2C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esi + 0x30);
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    MEM32(eax + 0x30) = ecx;
    xmm0 = XMM_MEM(esi); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    xmm0 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(0x300474)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm2.f[0] = recomp_rsqrtss(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    xmm2 = XMM_MEM(esp + 0x40); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x2FE9A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(eax, xmm2); /* movaps */
    MEM32(eax + 0x30) = 0;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0010FED3; /* jge: greater or equal (signed >=) */

loc_0010FEA6: ;
    goto loc_0010FEB9;

loc_0010FEA8: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FEB9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x20)) */

loc_0010FEAF: ;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ebx;

loc_0010FEB9: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(edi + 0x4C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0010FCDD; /* jl: less (signed <) */

loc_0010FED3: ;
    xmm2 = XMM_MEM(esp + 0x30); /* movaps */
    fp_push(MEMD(0x310EC0)); /* fld double */
    xmm0 = xmm2; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm4 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0xAA); /* shufps */
    eax = esp + 0x24;
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_0010FFBD; /* jbe: below or equal (unsigned <=) */

loc_0010FF10: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    eax = MEM32(edi + 0x4C);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(MEMF(0x2FE99C) / fp_top()); /* fdivr dword ptr [0x2fe99c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    if (CMP_LE(_fas, _fbs)) goto loc_0010FFBD; /* jle: less or equal (signed <=) */

loc_0010FF3D: ;
    xmm2 = XMM_SCALAR(MEMF(0x31843C)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0010FF50: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + edx + 0x28);
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010FFAB; /* jne: not equal / not zero */

loc_0010FF5F: ;
    ebx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010FFAB; /* je: equal / zero */

loc_0010FF66: ;
    ecx = MEM32(edi + 0x48);
    xmm0 = XMM_MEM(ecx + eax); /* movaps */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm5 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    ebx = esp + 0x2C;
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(ebx) = xmm5.f[0]; /* movss */
    _fca = xmm2.f[0]; _fcb = MEMF(esp + 0x2C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0010FFAB; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(esp + 0x2C)) */

loc_0010FF97: ;
    ebx = MEM32(esp + 0x10);
    xmm0 = XMM_MEM(ebx + 0x10); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    ecx = MEM32(edi + 0x48);
    MEMF(eax + ecx + 0xC) = xmm3.f[0]; /* movss */

loc_0010FFAB: ;
    ecx = MEM32(edi + 0x4C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0010FF50; /* jl: less (signed <) */

loc_0010FFB9: ;
    edx = MEM32(esp + 0x10);

loc_0010FFBD: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0x4C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x4C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010FFDE; /* jne: not equal / not zero */

loc_0010FFD1: ;
    xmm0 = XMM_SCALAR(MEMF(0x318C00)); /* movss */
    MEMF(edx + 0x34) = xmm0.f[0]; /* movss */

loc_0010FFDE: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011009B; /* je: equal / zero */

loc_0010FFEA: ;
    ecx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x20);
    ecx = MEM32(edx + 0x34);
    ebx = eax;
    edi = MEM32(ebx + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00110010; /* jle: less or equal (signed <=) */

loc_0010FFFE: ;
    edx = MEM32(edx + 0x30);
    esi = edx;

loc_00110003: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110060; /* je: equal / zero */

loc_00110008: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00110003; /* jl: less (signed <) */

loc_00110010: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx + 0x20) = 0;
    ecx = MEM32(ebx + 0x28);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011002Du); RECOMP_ABI_CALL(0x00039A80u, sub_00039A80); /* call 0x00039A80 */

loc_0011002D: ;
    esi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001100A6; /* je: equal / zero */

loc_00110035: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0011003Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110039u); } /* indirect call */
    }

loc_0011003F: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00110048u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110045u); } /* indirect call */
    }

loc_00110048: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110086; /* jne: not equal / not zero */

loc_0011004C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110086; /* jne: not equal / not zero */

loc_00110050: ;
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + 0x3C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00110060: ;
    eax = MEM32(edx + eax * 8 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110010; /* je: equal / zero */

loc_00110068: ;
    edx = ZX16(MEM16(eax + edi * 8 + 6));
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110073u); RECOMP_ABI_CALL(0x00070810u, sub_00070810); /* call 0x00070810 */

loc_00110073: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x20) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00110086: ;
    ecx = MEM32(esp + 0x10);
    eax = 1;
    MEM8(ecx + 0x3C) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0011009B: ;
    MEM32(edx + 0x20) = 0xFFFFFFFFu;
    MEM8(edx + 0x3C) = 0;

loc_001100A6: ;
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
 * sub_001100B0
 * Original: 0x001100B0 - 0x00110105 (85 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001100B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001100B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(ecx + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001100DD; /* jle: less or equal (signed <=) */

loc_001100C8: ;
    ecx = MEM32(ecx + 0x30);
    goto loc_001100D0;

    /* nop */

loc_001100D0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001100FF; /* je: equal / zero */

loc_001100D5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001100D0; /* jl: less (signed <) */

loc_001100DD: ;
    ecx = MEM32(0x3E8D08);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001100E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001100E5u); } /* indirect call */
    }

loc_001100E8: ;
    SET_LO8(ecx, MEM8(eax + 0x3B8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001100FF; /* jne: not equal / not zero */

loc_001100F2: ;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */

loc_001100FF: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00110110
 * Original: 0x00110110 - 0x0011012F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110110: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x318C10;
    if (TEST_Z(_fa, _fb)) goto loc_00110129; /* je: equal / zero */

loc_00110120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110126u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00110126: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110129: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110130
 * Original: 0x00110130 - 0x00110159 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110130: ;
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011014D; /* jle: less or equal (signed <=) */

loc_0011013A: ;
    ecx = MEM32(ecx + 0x30);
    esi = MEM32(esp + 8);

loc_00110141: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110153; /* je: equal / zero */

loc_00110145: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00110141; /* jl: less (signed <) */

loc_0011014D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00110153: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110160
 * Original: 0x00110160 - 0x0011017F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110160: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x318C64;
    if (TEST_Z(_fa, _fb)) goto loc_00110179; /* je: equal / zero */

loc_00110170: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110176u); RECOMP_ABI_CALL(0x001552D0u, sub_001552D0); /* call 0x001552D0 */

loc_00110176: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00110179: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110180
 * Original: 0x00110180 - 0x001101A1 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110180: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00110196; /* jle: less or equal (signed <=) */

loc_00110190: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00110196: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001101B0
 * Original: 0x001101B0 - 0x001101F1 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001101B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001101B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x110180);
    PUSH32(esp, 8);
    PUSH32(esp, 0x1D);
    ecx = esp + 0xC;
    PUSH32(esp, 0x375E98);
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x001101DBu); RECOMP_ABI_CALL(0x002BECF0u, sub_002BECF0); /* call 0x002BECF0 */

loc_001101DB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001101E8; /* jne: not equal / not zero */

loc_001101E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001101E8: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110200
 * Original: 0x00110200 - 0x0011021B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110200: ;
    ecx = MEM32(0x3DEA18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011021A; /* je: equal / zero */

loc_0011020A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00110210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011020Eu); } /* indirect call */
    }

loc_00110210: ;
    MEM32(0x3DEA18) = 0;

loc_0011021A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00110220
 * Original: 0x00110220 - 0x0011022D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110220(void)
{

loc_00110220: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM8(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00110230
 * Original: 0x00110230 - 0x0011023E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00110230: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011023B; /* je: equal / zero */

loc_00110236: ;
    g_seh_ebp = ebp; sub_00229060(); return; /* tail jmp 0x00229060 */

loc_0011023B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110240
 * Original: 0x00110240 - 0x00110249 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110240(void)
{

loc_00110240: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00110250
 * Original: 0x00110250 - 0x001102D7 (135 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110250: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x318CEC);
    ecx = esp + 8;
    MEM32(esi) = 0x318CC4;
    PUSH32(esp, 0x00110268u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_00110268: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011026Fu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_0011026F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x318CB0);
    ecx = esp + 8;
    PUSH32(esp, 0x00110280u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_00110280: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00110287u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_00110287: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x318C9C);
    ecx = esp + 8;
    PUSH32(esp, 0x00110298u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_00110298: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011029Fu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_0011029F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x318C84);
    ecx = esp + 8;
    PUSH32(esp, 0x001102B0u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_001102B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001102B7u); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_001102B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x318C6C);
    ecx = esp + 8;
    PUSH32(esp, 0x001102C8u); RECOMP_ABI_CALL(0x002643D0u, sub_002643D0); /* call 0x002643D0 */

loc_001102C8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001102CFu); RECOMP_ABI_CALL(0x00264690u, sub_00264690); /* call 0x00264690 */

loc_001102CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001102E0
 * Original: 0x001102E0 - 0x00110319 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001102E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001102E0: ;
    eax = MEM32(0x3DEA18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110318; /* jne: not equal / not zero */

loc_001102E9: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x318D00);
    PUSH32(esp, 0x001102FAu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_001102FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011030E; /* je: equal / zero */

loc_00110301: ;
    ecx = eax;
    PUSH32(esp, 0x00110308u); RECOMP_ABI_CALL(0x00110250u, sub_00110250); /* call 0x00110250 */

loc_00110308: ;
    MEM32(0x3DEA18) = eax;
    esp += 4; return; /* ret */

loc_0011030E: ;
    MEM32(0x3DEA18) = 0;

loc_00110318: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00110320
 * Original: 0x00110320 - 0x00110347 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110320: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110344; /* je: equal / zero */

loc_00110326: ;
    edx = eax + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110344; /* je: equal / zero */

loc_0011032D: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x28) = edx;
    eax = MEM32(ecx);
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110344u); RECOMP_ABI_CALL(0x00225FF0u, sub_00225FF0); /* call 0x00225FF0 */

loc_00110344: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110350
 * Original: 0x00110350 - 0x001103A5 (85 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx);
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011039F; /* je: equal / zero */

loc_0011035C: ;
    eax = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(eax + 0x80); /* movaps */
    xmm1 = XMM_MEM(eax + 0x90); /* movaps */
    xmm2 = XMM_MEM(eax + 0xA0); /* movaps */
    xmm3 = XMM_MEM(eax + 0xB0); /* movaps */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    XMM_STORE(eax + 0x10, xmm1); /* movaps */
    XMM_STORE(eax + 0x20, xmm2); /* movaps */
    XMM_STORE(eax + 0x30, xmm3); /* movaps */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */

loc_0011039F: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001103B0
 * Original: 0x001103B0 - 0x001103EA (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001103B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001103B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001103E6; /* je: equal / zero */

loc_001103B7: ;
    ecx = esi;
    PUSH32(esp, 0x001103BEu); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_001103BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001103D0; /* jne: not equal / not zero */

loc_001103C2: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001103D0; /* je: equal / zero */

loc_001103C9: ;
    ecx = esi;
    PUSH32(esp, 0x001103D0u); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_001103D0: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001103DD; /* je: equal / zero */

loc_001103D6: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001103E6; /* jne: not equal / not zero */

loc_001103DD: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x4C)); return; /* indirect tail jmp */

loc_001103E6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001103F0
 * Original: 0x001103F0 - 0x0011041A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001103F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001103F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110418; /* je: equal / zero */

loc_001103F9: ;
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110405u); RECOMP_ABI_CALL(0x00225350u, sub_00225350); /* call 0x00225350 */

loc_00110405: ;
    ecx = MEM32(esi);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110418; /* jne: not equal / not zero */

loc_00110412: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00110418u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110416u); } /* indirect call */
    }

loc_00110418: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00110420
 * Original: 0x00110420 - 0x00110447 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110420: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110444; /* je: equal / zero */

loc_00110426: ;
    edx = eax + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110444; /* je: equal / zero */

loc_0011042D: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x28) = edx;
    eax = MEM32(ecx);
    ecx = MEM32(0x3DEA20);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00110444u); RECOMP_ABI_CALL(0x00224AD0u, sub_00224AD0); /* call 0x00224AD0 */

loc_00110444: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110450
 * Original: 0x00110450 - 0x0011047A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00110450: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110475; /* je: equal / zero */

loc_00110457: ;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 8);
    edx = edx + edx * 2;
    ecx = eax;
    ecx = ecx + edx * 8;
    edx = MEM32(esp + 4);

loc_00110468: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110475; /* je: equal / zero */

loc_0011046C: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110477; /* je: equal / zero */

loc_00110470: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00110468;

loc_00110475: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00110477: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00110480
 * Original: 0x00110480 - 0x00110629 (425 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00110480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110493u); RECOMP_ABI_CALL(0x00155000u, sub_00155000); /* call 0x00155000 */

loc_00110493: ;
    PUSH32(esp, 0x318D70);
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001104A1u); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_001104A1: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001104F7; /* jp: parity */

loc_001104B5: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001104F7; /* jp: parity */

loc_001104C3: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001104F7; /* jp: parity */

loc_001104D1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FE99C); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001104F0; /* jnp: not parity */

loc_001104E3: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x2FEC54); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)(((0) ? 0x80u : 0u) | (((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001104F7; /* jp: parity */

loc_001104F0: ;
    edi = ebx;
    goto loc_001105E9;

loc_001104F7: ;
    ecx = MEM32(0x530EB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x50);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00110506u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00110503u); } /* indirect call */
    }

loc_00110506: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110516; /* je: equal / zero */

loc_0011050A: ;
    PUSH32(esp, ebx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110512u); RECOMP_ABI_CALL(0x001F9B80u, sub_001F9B80); /* call 0x001F9B80 */

loc_00110512: ;
    edi = eax;
    goto loc_00110518;

loc_00110516: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00110518: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    XMM_STORE(esp + 0x44, xmm0); /* movaps */
    XMM_STORE(esp + 0x54, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x2FE99C)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0x14); /* movaps */
    XMM_STORE(esp + 0x64, xmm0); /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x4C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001105B2u); RECOMP_ABI_CALL(0x00232CF0u, sub_00232CF0); /* call 0x00232CF0 */

loc_001105B2: ;
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(edi + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(edi + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    XMM_STORE(edi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    XMM_STORE(edi + 0x40, xmm0); /* movaps */
    MEM16(ebx + 6) = MEM16(ebx + 6) - 1;
    _fa = (uint32_t)(MEM16(ebx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001105E9; /* jne: not equal / not zero */

loc_001105E1: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001105E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001105E7u); } /* indirect call */
    }

loc_001105E9: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x318D38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001105FAu); RECOMP_ABI_CALL(0x00155010u, sub_00155010); /* call 0x00155010 */

loc_001105FA: ;
    ecx = MEM32(esi + 0x14);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x18);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x1C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x20);
    MEM32(eax + 0xC) = edx;
    MEM32(ebx + 8) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011061Eu); RECOMP_ABI_CALL(0x00154FF0u, sub_00154FF0); /* call 0x00154FF0 */

loc_0011061E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00110630
 * Original: 0x00110630 - 0x001107EA (442 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00110630(void)
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

loc_00110630: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001107BC; /* je: equal / zero */

loc_00110648: ;
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    ecx = esp + 0x10;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001106ABu); RECOMP_ABI_CALL(0x000CA0C0u, sub_000CA0C0); /* call 0x000CA0C0 */

loc_001106AB: ;
    eax = MEM32(esi + 0x3C);
    xmm1 = XMM_MEM(eax + 0xB0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    xmm0 = XMM_SUB(xmm0, xmm1); /* subps */
    xmm0 = XMM_MUL(xmm0, xmm0); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0x55); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xAA); /* shufps */
    ecx = esp + 0xC;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x318C50); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001106F1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x318C50)) */

loc_001106ED: ;
    SET_LO8(ecx, 1);
    goto loc_001106F3;

loc_001106F1: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001106F3: ;
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_MEM(esp + 0x10); /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm0); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0x4E); /* shufps */
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xB1); /* shufps */
    edx = esp + 0xC;
    xmm0 = XMM_ADD(xmm0, xmm1); /* addps */
    MEMF(edx) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2FE99C)); /* fsub dword ptr [0x2fe99c] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x318C54)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    _fa = RECOMP_FCMP_CC(RECOMP_FCMP(fp_top(), fp_st1())) >> 8; fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if (((_fa & 1u) || (_fa & 0x40u)) /* fcompi */) goto loc_00110739; /* jbe: below or equal (unsigned <=) */

loc_00110735: ;
    SET_LO8(eax, 1);
    goto loc_0011073B;

loc_00110739: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0011073B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001107C5; /* jne: not equal / not zero */

loc_00110743: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001107C5; /* jne: not equal / not zero */

loc_00110747: ;
    SET_LO8(eax, MEM8(edi + 4));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001107B9; /* je: equal / zero */

loc_00110750: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110772u); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_00110772: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00110784; /* jne: not equal / not zero */

loc_00110776: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00110784; /* je: equal / zero */

loc_0011077D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00110784u); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_00110784: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00110791u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011078Eu); } /* indirect call */
    }

loc_00110791: ;
    esi = MEM32(edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011079Au); RECOMP_ABI_CALL(0x00222C80u, sub_00222C80); /* call 0x00222C80 */

loc_0011079A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001107AC; /* jne: not equal / not zero */

loc_0011079E: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001107AC; /* je: equal / zero */

loc_001107A5: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001107ACu); RECOMP_ABI_CALL(0x00222C90u, sub_00222C90); /* call 0x00222C90 */

loc_001107AC: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001107B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001107B6u); } /* indirect call */
    }

loc_001107B9: ;
    MEM8(edi + 4) = LO8(ebx);

loc_001107BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001107C5: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    SET_LO8(ebx, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001107DBu); RECOMP_ABI_CALL(0x0025BCF0u, sub_0025BCF0); /* call 0x0025BCF0 */

loc_001107DB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 4) = LO8(ebx);
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
 * sub_001107F0
 * Original: 0x001107F0 - 0x00110822 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001107F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001107F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00110805u); RECOMP_ABI_CALL(0x002668E0u, sub_002668E0); /* call 0x002668E0 */

loc_00110805: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x30;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0011081Au); RECOMP_ABI_CALL(0x00110630u, sub_00110630); /* call 0x00110630 */

loc_0011081A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}
