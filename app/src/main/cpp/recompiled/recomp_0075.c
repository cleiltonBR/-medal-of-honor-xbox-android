/**
 * Medal of Honor European Assault - Recompiled code chunk 75
 * Functions: 250 (0x002CB0E1 - 0x002CBDE0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002CB0E1
 * Original: 0x002CB0E1 - 0x002CB0EC (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB0E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB0E1: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB0EAu); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB0EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB0EC
 * Original: 0x002CB0EC - 0x002CB0F7 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB0EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB0EC: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB0F5u); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB0F5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB0F7
 * Original: 0x002CB0F7 - 0x002CB102 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB0F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB0F7: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB100u); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB100: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB102
 * Original: 0x002CB102 - 0x002CB10D (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB102(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB102: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB10Bu); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB10B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB10D
 * Original: 0x002CB10D - 0x002CB118 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB10D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB10D: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB116u); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB116: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB118
 * Original: 0x002CB118 - 0x002CB122 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB118(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB118: ;
    eax = 0x35173C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB130
 * Original: 0x002CB130 - 0x002CB138 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB130: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002230E0(); return; /* tail jmp 0x002230E0 */

}

/**
 * sub_002CB138
 * Original: 0x002CB138 - 0x002CB143 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB138(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB138: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB141u); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB141: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB143
 * Original: 0x002CB143 - 0x002CB14D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB143(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB143: ;
    eax = 0x351768;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB150
 * Original: 0x002CB150 - 0x002CB158 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB150: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB158
 * Original: 0x002CB158 - 0x002CB162 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB158(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB158: ;
    eax = 0x35178C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB170
 * Original: 0x002CB170 - 0x002CB178 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB170: ;
    ecx = ebp + -84;
    g_seh_ebp = ebp; sub_00228FC0(); return; /* tail jmp 0x00228FC0 */

}

/**
 * sub_002CB178
 * Original: 0x002CB178 - 0x002CB183 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB178(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB178: ;
    eax = MEM32(ebp + -88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB181u); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB181: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB183
 * Original: 0x002CB183 - 0x002CB18E (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB183(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB183: ;
    eax = MEM32(ebp + -88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB18Cu); RECOMP_ABI_CALL(0x00228640u, sub_00228640); /* call 0x00228640 */

loc_002CB18C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB18E
 * Original: 0x002CB18E - 0x002CB198 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB18E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB18E: ;
    eax = 0x3517C0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB1A0
 * Original: 0x002CB1A0 - 0x002CB1A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB1A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00229670(); return; /* tail jmp 0x00229670 */

}

/**
 * sub_002CB1A8
 * Original: 0x002CB1A8 - 0x002CB1B2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB1A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB1A8: ;
    eax = 0x3517E4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB1C0
 * Original: 0x002CB1C0 - 0x002CB1C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB1C0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_00223FD0(); return; /* tail jmp 0x00223FD0 */

}

/**
 * sub_002CB1C8
 * Original: 0x002CB1C8 - 0x002CB1D2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB1C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB1C8: ;
    eax = 0x351808;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB1E0
 * Original: 0x002CB1E0 - 0x002CB1E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB1E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB1E8
 * Original: 0x002CB1E8 - 0x002CB1F3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB1E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB1E8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00223FD0(); return; /* tail jmp 0x00223FD0 */

}

/**
 * sub_002CB1F3
 * Original: 0x002CB1F3 - 0x002CB1FD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB1F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB1F3: ;
    eax = 0x351834;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB200
 * Original: 0x002CB200 - 0x002CB208 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB200: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0022B080(); return; /* tail jmp 0x0022B080 */

}

/**
 * sub_002CB208
 * Original: 0x002CB208 - 0x002CB212 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB208(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB208: ;
    eax = 0x351858;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB220
 * Original: 0x002CB220 - 0x002CB228 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB220: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0022A1F0(); return; /* tail jmp 0x0022A1F0 */

}

/**
 * sub_002CB228
 * Original: 0x002CB228 - 0x002CB232 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB228(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB228: ;
    eax = 0x35187C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB240
 * Original: 0x002CB240 - 0x002CB248 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB240: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0022B080(); return; /* tail jmp 0x0022B080 */

}

/**
 * sub_002CB248
 * Original: 0x002CB248 - 0x002CB252 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB248(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB248: ;
    eax = 0x3518A0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB260
 * Original: 0x002CB260 - 0x002CB268 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB260: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0022ADE0(); return; /* tail jmp 0x0022ADE0 */

}

/**
 * sub_002CB268
 * Original: 0x002CB268 - 0x002CB272 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB268(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB268: ;
    eax = 0x3518C4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB280
 * Original: 0x002CB280 - 0x002CB288 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB280: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00222F80(); return; /* tail jmp 0x00222F80 */

}

/**
 * sub_002CB288
 * Original: 0x002CB288 - 0x002CB293 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB288(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB288: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB293
 * Original: 0x002CB293 - 0x002CB29E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB293(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB293: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB29E
 * Original: 0x002CB29E - 0x002CB2A8 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB29E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB29E: ;
    eax = 0x3518F8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB2B0
 * Original: 0x002CB2B0 - 0x002CB2B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB2B0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001208C0(); return; /* tail jmp 0x001208C0 */

}

/**
 * sub_002CB2B8
 * Original: 0x002CB2B8 - 0x002CB2C0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB2B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB2B8: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_001208C0(); return; /* tail jmp 0x001208C0 */

}

/**
 * sub_002CB2C0
 * Original: 0x002CB2C0 - 0x002CB2CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB2C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB2C0: ;
    eax = 0x351924;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB2D0
 * Original: 0x002CB2D0 - 0x002CB2D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB2D0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00200120(); return; /* tail jmp 0x00200120 */

}

/**
 * sub_002CB2D8
 * Original: 0x002CB2D8 - 0x002CB2E2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB2D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB2D8: ;
    eax = 0x351948;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB2F0
 * Original: 0x002CB2F0 - 0x002CB2F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB2F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB2F8
 * Original: 0x002CB2F8 - 0x002CB31F (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB2F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB2F8: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002CB310; /* je: equal / zero */

loc_002CB302: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;
    goto loc_002CB317;

loc_002CB310: ;
    MEM32(ebp + -20) = 0;

loc_002CB317: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_002236A0(); return; /* tail jmp 0x002236A0 */

}

/**
 * sub_002CB31F
 * Original: 0x002CB31F - 0x002CB32A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB31F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB31F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB32A
 * Original: 0x002CB32A - 0x002CB335 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB32A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB32A: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB335
 * Original: 0x002CB335 - 0x002CB340 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB335(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB335: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB340
 * Original: 0x002CB340 - 0x002CB34B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB340: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CB34B
 * Original: 0x002CB34B - 0x002CB356 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB34B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB34B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x74;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00223FD0(); return; /* tail jmp 0x00223FD0 */

}

/**
 * sub_002CB356
 * Original: 0x002CB356 - 0x002CB364 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB356(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB356: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00223FD0(); return; /* tail jmp 0x00223FD0 */

}

/**
 * sub_002CB364
 * Original: 0x002CB364 - 0x002CB36E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB364(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB364: ;
    eax = 0x3519A4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB370
 * Original: 0x002CB370 - 0x002CB378 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB370: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_00224820(); return; /* tail jmp 0x00224820 */

}

/**
 * sub_002CB378
 * Original: 0x002CB378 - 0x002CB382 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB378(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB378: ;
    eax = 0x3519C8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB390
 * Original: 0x002CB390 - 0x002CB398 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB390: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_001208C0(); return; /* tail jmp 0x001208C0 */

}

/**
 * sub_002CB398
 * Original: 0x002CB398 - 0x002CB3A0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB398(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB398: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001208C0(); return; /* tail jmp 0x001208C0 */

}

/**
 * sub_002CB3A0
 * Original: 0x002CB3A0 - 0x002CB3AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB3A0: ;
    eax = 0x3519F4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB3B0
 * Original: 0x002CB3B0 - 0x002CB3B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB3B0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_0022C6E0(); return; /* tail jmp 0x0022C6E0 */

}

/**
 * sub_002CB3B8
 * Original: 0x002CB3B8 - 0x002CB3C2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB3B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB3B8: ;
    eax = 0x351A18;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB3D0
 * Original: 0x002CB3D0 - 0x002CB3D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB3D0: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB3D8
 * Original: 0x002CB3D8 - 0x002CB3E2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB3D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB3D8: ;
    eax = 0x351A3C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB3F0
 * Original: 0x002CB3F0 - 0x002CB3F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB3F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0022EB00(); return; /* tail jmp 0x0022EB00 */

}

/**
 * sub_002CB3F8
 * Original: 0x002CB3F8 - 0x002CB403 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB3F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB3F8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F6550(); return; /* tail jmp 0x001F6550 */

}

/**
 * sub_002CB403
 * Original: 0x002CB403 - 0x002CB40E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB403(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB403: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002216A0(); return; /* tail jmp 0x002216A0 */

}

/**
 * sub_002CB40E
 * Original: 0x002CB40E - 0x002CB418 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB40E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB40E: ;
    eax = 0x351A70;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB420
 * Original: 0x002CB420 - 0x002CB428 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB420: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB428
 * Original: 0x002CB428 - 0x002CB433 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB428(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB428: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0022E670(); return; /* tail jmp 0x0022E670 */

}

/**
 * sub_002CB433
 * Original: 0x002CB433 - 0x002CB43D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB433(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB433: ;
    eax = 0x351A9C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB440
 * Original: 0x002CB440 - 0x002CB44B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB440: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB449u); RECOMP_ABI_CALL(0x001F7040u, sub_001F7040); /* call 0x001F7040 */

loc_002CB449: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB44B
 * Original: 0x002CB44B - 0x002CB455 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB44B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB44B: ;
    eax = 0x351AC0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB460
 * Original: 0x002CB460 - 0x002CB46B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB460: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB469u); RECOMP_ABI_CALL(0x0022E920u, sub_0022E920); /* call 0x0022E920 */

loc_002CB469: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB46B
 * Original: 0x002CB46B - 0x002CB475 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB46B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB46B: ;
    eax = 0x351AE4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB480
 * Original: 0x002CB480 - 0x002CB48B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB480: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB489u); RECOMP_ABI_CALL(0x00223350u, sub_00223350); /* call 0x00223350 */

loc_002CB489: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB48B
 * Original: 0x002CB48B - 0x002CB495 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB48B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB48B: ;
    eax = 0x351B08;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB4A0
 * Original: 0x002CB4A0 - 0x002CB4A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB4A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB4A8
 * Original: 0x002CB4A8 - 0x002CB4CF (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB4A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB4A8: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002CB4C0; /* je: equal / zero */

loc_002CB4B2: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -20) = eax;
    goto loc_002CB4C7;

loc_002CB4C0: ;
    MEM32(ebp + -20) = 0;

loc_002CB4C7: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0022ADB0(); return; /* tail jmp 0x0022ADB0 */

}

/**
 * sub_002CB4CF
 * Original: 0x002CB4CF - 0x002CB4D9 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB4CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB4CF: ;
    eax = 0x351B34;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB4E0
 * Original: 0x002CB4E0 - 0x002CB4E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB4E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB4E8
 * Original: 0x002CB4E8 - 0x002CB4F3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB4E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB4E8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0022ADB0(); return; /* tail jmp 0x0022ADB0 */

}

/**
 * sub_002CB4F3
 * Original: 0x002CB4F3 - 0x002CB4FD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB4F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB4F3: ;
    eax = 0x351B60;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB500
 * Original: 0x002CB500 - 0x002CB50B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB500: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB509u); RECOMP_ABI_CALL(0x0022ED90u, sub_0022ED90); /* call 0x0022ED90 */

loc_002CB509: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB50B
 * Original: 0x002CB50B - 0x002CB515 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB50B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB50B: ;
    eax = 0x351B84;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB520
 * Original: 0x002CB520 - 0x002CB528 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB520: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB528
 * Original: 0x002CB528 - 0x002CB532 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB528(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB528: ;
    eax = 0x351BA8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB540
 * Original: 0x002CB540 - 0x002CB548 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB540: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB548
 * Original: 0x002CB548 - 0x002CB552 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB548(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB548: ;
    eax = 0x351BCC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB560
 * Original: 0x002CB560 - 0x002CB568 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB560: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB568
 * Original: 0x002CB568 - 0x002CB572 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB568(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB568: ;
    eax = 0x351BF0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB580
 * Original: 0x002CB580 - 0x002CB58B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB580: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB589u); RECOMP_ABI_CALL(0x0022ED90u, sub_0022ED90); /* call 0x0022ED90 */

loc_002CB589: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB58B
 * Original: 0x002CB58B - 0x002CB595 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB58B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB58B: ;
    eax = 0x351C14;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB5A0
 * Original: 0x002CB5A0 - 0x002CB5AB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB5A0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB5A9u); RECOMP_ABI_CALL(0x001F7040u, sub_001F7040); /* call 0x001F7040 */

loc_002CB5A9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB5AB
 * Original: 0x002CB5AB - 0x002CB5B5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB5AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB5AB: ;
    eax = 0x351C38;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB5C0
 * Original: 0x002CB5C0 - 0x002CB5CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB5C0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB5C9u); RECOMP_ABI_CALL(0x001F7040u, sub_001F7040); /* call 0x001F7040 */

loc_002CB5C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB5CB
 * Original: 0x002CB5CB - 0x002CB5D5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB5CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB5CB: ;
    eax = 0x351C5C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB5E0
 * Original: 0x002CB5E0 - 0x002CB5EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB5E0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB5E9u); RECOMP_ABI_CALL(0x00228700u, sub_00228700); /* call 0x00228700 */

loc_002CB5E9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB5EB
 * Original: 0x002CB5EB - 0x002CB5F5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB5EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB5EB: ;
    eax = 0x351C80;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB600
 * Original: 0x002CB600 - 0x002CB608 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB600: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_001F6550(); return; /* tail jmp 0x001F6550 */

}

/**
 * sub_002CB608
 * Original: 0x002CB608 - 0x002CB612 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB608(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB608: ;
    eax = 0x351CA4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB620
 * Original: 0x002CB620 - 0x002CB628 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB620: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_001FF100(); return; /* tail jmp 0x001FF100 */

}

/**
 * sub_002CB628
 * Original: 0x002CB628 - 0x002CB630 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB628(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB628: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CB630
 * Original: 0x002CB630 - 0x002CB638 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB630: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_001FF100(); return; /* tail jmp 0x001FF100 */

}

/**
 * sub_002CB638
 * Original: 0x002CB638 - 0x002CB643 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB638(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB638: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CB641u); RECOMP_ABI_CALL(0x002330F0u, sub_002330F0); /* call 0x002330F0 */

loc_002CB641: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CB643
 * Original: 0x002CB643 - 0x002CB64D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB643(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB643: ;
    eax = 0x351CE0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB650
 * Original: 0x002CB650 - 0x002CB658 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB650: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CB658
 * Original: 0x002CB658 - 0x002CB662 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB658(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB658: ;
    eax = 0x351D04;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB670
 * Original: 0x002CB670 - 0x002CB678 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB670: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CB678
 * Original: 0x002CB678 - 0x002CB682 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB678(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB678: ;
    eax = 0x351D28;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB690
 * Original: 0x002CB690 - 0x002CB698 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB690: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CB698
 * Original: 0x002CB698 - 0x002CB6A2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB698(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB698: ;
    eax = 0x351D4C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB6B0
 * Original: 0x002CB6B0 - 0x002CB6BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB6B0: ;
    ecx = ebp + -612;
    g_seh_ebp = ebp; sub_002566D0(); return; /* tail jmp 0x002566D0 */

}

/**
 * sub_002CB6BB
 * Original: 0x002CB6BB - 0x002CB6C5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB6BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB6BB: ;
    eax = 0x351D70;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB6D0
 * Original: 0x002CB6D0 - 0x002CB6D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB6D0: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CB6D8
 * Original: 0x002CB6D8 - 0x002CB6E3 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB6D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB6D8: ;
    ecx = ebp + -236;
    g_seh_ebp = ebp; sub_002BDBB0(); return; /* tail jmp 0x002BDBB0 */

}

/**
 * sub_002CB6E3
 * Original: 0x002CB6E3 - 0x002CB6EE (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB6E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB6E3: ;
    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_001FF100(); return; /* tail jmp 0x001FF100 */

}

/**
 * sub_002CB6EE
 * Original: 0x002CB6EE - 0x002CB6F8 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB6EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB6EE: ;
    eax = 0x351DA4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB700
 * Original: 0x002CB700 - 0x002CB70B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB700: ;
    ecx = ebp + -432;
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CB70B
 * Original: 0x002CB70B - 0x002CB716 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB70B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB70B: ;
    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CB716
 * Original: 0x002CB716 - 0x002CB721 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB716(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB716: ;
    ecx = ebp + -464;
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB721
 * Original: 0x002CB721 - 0x002CB72C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB721(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB721: ;
    ecx = ebp + -476;
    g_seh_ebp = ebp; sub_002566D0(); return; /* tail jmp 0x002566D0 */

}

/**
 * sub_002CB72C
 * Original: 0x002CB72C - 0x002CB736 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB72C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB72C: ;
    eax = 0x351DE0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB740
 * Original: 0x002CB740 - 0x002CB748 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB740: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB748
 * Original: 0x002CB748 - 0x002CB753 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB748(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB748: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002216A0(); return; /* tail jmp 0x002216A0 */

}

/**
 * sub_002CB753
 * Original: 0x002CB753 - 0x002CB75D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB753(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB753: ;
    eax = 0x351E0C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB760
 * Original: 0x002CB760 - 0x002CB768 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB760: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB768
 * Original: 0x002CB768 - 0x002CB773 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB768(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB768: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB773
 * Original: 0x002CB773 - 0x002CB77E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB773(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB773: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB77E
 * Original: 0x002CB77E - 0x002CB789 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB77E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB77E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002216A0(); return; /* tail jmp 0x002216A0 */

}

/**
 * sub_002CB789
 * Original: 0x002CB789 - 0x002CB793 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB789(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB789: ;
    eax = 0x351E48;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB7A0
 * Original: 0x002CB7A0 - 0x002CB7AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB7A0: ;
    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_002216A0(); return; /* tail jmp 0x002216A0 */

}

/**
 * sub_002CB7AB
 * Original: 0x002CB7AB - 0x002CB7B5 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB7AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB7AB: ;
    eax = 0x351E6C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB7C0
 * Original: 0x002CB7C0 - 0x002CB7C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB7C0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB7C8
 * Original: 0x002CB7C8 - 0x002CB7D3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB7C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB7C8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB7D3
 * Original: 0x002CB7D3 - 0x002CB7DD (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB7D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB7D3: ;
    eax = 0x351E98;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB7E0
 * Original: 0x002CB7E0 - 0x002CB7E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB7E0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_002216A0(); return; /* tail jmp 0x002216A0 */

}

/**
 * sub_002CB7E8
 * Original: 0x002CB7E8 - 0x002CB7F0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB7E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB7E8: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_002216A0(); return; /* tail jmp 0x002216A0 */

}

/**
 * sub_002CB7F0
 * Original: 0x002CB7F0 - 0x002CB7FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB7F0: ;
    eax = 0x351EC4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB800
 * Original: 0x002CB800 - 0x002CB808 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB800: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002216A0(); return; /* tail jmp 0x002216A0 */

}

/**
 * sub_002CB808
 * Original: 0x002CB808 - 0x002CB810 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB808(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB808: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_002216A0(); return; /* tail jmp 0x002216A0 */

}

/**
 * sub_002CB810
 * Original: 0x002CB810 - 0x002CB81A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB810: ;
    eax = 0x351EF0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB820
 * Original: 0x002CB820 - 0x002CB828 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB820: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB828
 * Original: 0x002CB828 - 0x002CB832 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB828(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB828: ;
    eax = 0x351F14;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB840
 * Original: 0x002CB840 - 0x002CB848 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB840: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB848
 * Original: 0x002CB848 - 0x002CB853 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB848(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB848: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0022ADB0(); return; /* tail jmp 0x0022ADB0 */

}

/**
 * sub_002CB853
 * Original: 0x002CB853 - 0x002CB85E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB853(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB853: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00200120(); return; /* tail jmp 0x00200120 */

}

/**
 * sub_002CB85E
 * Original: 0x002CB85E - 0x002CB869 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB85E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB85E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB869
 * Original: 0x002CB869 - 0x002CB874 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB869(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB869: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB874
 * Original: 0x002CB874 - 0x002CB87E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB874(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB874: ;
    eax = 0x351F58;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB880
 * Original: 0x002CB880 - 0x002CB888 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB880: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB888
 * Original: 0x002CB888 - 0x002CB8AF (39 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB888(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB888: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002CB8A0; /* je: equal / zero */

loc_002CB892: ;
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = eax;
    goto loc_002CB8A7;

loc_002CB8A0: ;
    MEM32(ebp + -24) = 0;

loc_002CB8A7: ;
    ecx = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_0022ADB0(); return; /* tail jmp 0x0022ADB0 */

}

/**
 * sub_002CB8AF
 * Original: 0x002CB8AF - 0x002CB8BA (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB8AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB8AF: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00200120(); return; /* tail jmp 0x00200120 */

}

/**
 * sub_002CB8BA
 * Original: 0x002CB8BA - 0x002CB8C5 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB8BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB8BA: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB8C5
 * Original: 0x002CB8C5 - 0x002CB8D0 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB8C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB8C5: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CB8D0
 * Original: 0x002CB8D0 - 0x002CB8DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB8D0: ;
    eax = 0x351F9C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB8E0
 * Original: 0x002CB8E0 - 0x002CB8E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB8E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0025A040(); return; /* tail jmp 0x0025A040 */

}

/**
 * sub_002CB8E8
 * Original: 0x002CB8E8 - 0x002CB8F2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB8E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB8E8: ;
    eax = 0x351FC0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB900
 * Original: 0x002CB900 - 0x002CB908 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB900: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CB908
 * Original: 0x002CB908 - 0x002CB912 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB908(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB908: ;
    eax = 0x351FE4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB920
 * Original: 0x002CB920 - 0x002CB928 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB920: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00200120(); return; /* tail jmp 0x00200120 */

}

/**
 * sub_002CB928
 * Original: 0x002CB928 - 0x002CB932 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB928(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB928: ;
    eax = 0x352008;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB940
 * Original: 0x002CB940 - 0x002CB948 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB940: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CB948
 * Original: 0x002CB948 - 0x002CB952 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB948(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB948: ;
    eax = 0x35202C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB960
 * Original: 0x002CB960 - 0x002CB96B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB960: ;
    ecx = ebp + -848;
    g_seh_ebp = ebp; sub_0025A5D0(); return; /* tail jmp 0x0025A5D0 */

}

/**
 * sub_002CB96B
 * Original: 0x002CB96B - 0x002CB976 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB96B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB96B: ;
    ecx = ebp + -432;
    g_seh_ebp = ebp; sub_0025A5D0(); return; /* tail jmp 0x0025A5D0 */

}

/**
 * sub_002CB976
 * Original: 0x002CB976 - 0x002CB981 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB976(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB976: ;
    ecx = ebp + -1092;
    g_seh_ebp = ebp; sub_0025A2C0(); return; /* tail jmp 0x0025A2C0 */

}

/**
 * sub_002CB981
 * Original: 0x002CB981 - 0x002CB98C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB981(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB981: ;
    ecx = ebp + -1112;
    g_seh_ebp = ebp; sub_0025A3F0(); return; /* tail jmp 0x0025A3F0 */

}

/**
 * sub_002CB98C
 * Original: 0x002CB98C - 0x002CB997 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB98C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB98C: ;
    ecx = ebp + -432;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CB997
 * Original: 0x002CB997 - 0x002CB9A2 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB997(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB997: ;
    ecx = ebp + -848;
    g_seh_ebp = ebp; sub_00217310(); return; /* tail jmp 0x00217310 */

}

/**
 * sub_002CB9A2
 * Original: 0x002CB9A2 - 0x002CB9AC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB9A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB9A2: ;
    eax = 0x352078;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB9B0
 * Original: 0x002CB9B0 - 0x002CB9BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB9B0: ;
    ecx = ebp + -216;
    g_seh_ebp = ebp; sub_0025A2C0(); return; /* tail jmp 0x0025A2C0 */

}

/**
 * sub_002CB9BB
 * Original: 0x002CB9BB - 0x002CB9C6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB9BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB9BB: ;
    ecx = ebp + -196;
    g_seh_ebp = ebp; sub_0025A3F0(); return; /* tail jmp 0x0025A3F0 */

}

/**
 * sub_002CB9C6
 * Original: 0x002CB9C6 - 0x002CB9D0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB9C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB9C6: ;
    eax = 0x3520A4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB9D0
 * Original: 0x002CB9D0 - 0x002CB9D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB9D0: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_0025A530(); return; /* tail jmp 0x0025A530 */

}

/**
 * sub_002CB9D8
 * Original: 0x002CB9D8 - 0x002CB9E2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB9D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB9D8: ;
    eax = 0x3520C8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CB9F0
 * Original: 0x002CB9F0 - 0x002CB9F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB9F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CB9F8
 * Original: 0x002CB9F8 - 0x002CBA02 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CB9F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CB9F8: ;
    eax = 0x3520EC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBA10
 * Original: 0x002CBA10 - 0x002CBA1B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA10: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CBA19u); RECOMP_ABI_CALL(0x0025BF30u, sub_0025BF30); /* call 0x0025BF30 */

loc_002CBA19: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CBA1B
 * Original: 0x002CBA1B - 0x002CBA25 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA1B: ;
    eax = 0x352110;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBA30
 * Original: 0x002CBA30 - 0x002CBA38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA30: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CBA38
 * Original: 0x002CBA38 - 0x002CBA40 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA38: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001FF100(); return; /* tail jmp 0x001FF100 */

}

/**
 * sub_002CBA40
 * Original: 0x002CBA40 - 0x002CBA4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA40: ;
    eax = 0x35213C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBA50
 * Original: 0x002CBA50 - 0x002CBA58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA50: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CBA58
 * Original: 0x002CBA58 - 0x002CBA62 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA58: ;
    eax = 0x352160;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBA70
 * Original: 0x002CBA70 - 0x002CBA78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA70: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00200120(); return; /* tail jmp 0x00200120 */

}

/**
 * sub_002CBA78
 * Original: 0x002CBA78 - 0x002CBA82 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA78: ;
    eax = 0x352184;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBA90
 * Original: 0x002CBA90 - 0x002CBA98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA90: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CBA98
 * Original: 0x002CBA98 - 0x002CBAA0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBA98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBA98: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00200120(); return; /* tail jmp 0x00200120 */

}

/**
 * sub_002CBAA0
 * Original: 0x002CBAA0 - 0x002CBAAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBAA0: ;
    eax = 0x3521D4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBAB0
 * Original: 0x002CBAB0 - 0x002CBAB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBAB0: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_00260E30(); return; /* tail jmp 0x00260E30 */

}

/**
 * sub_002CBAB8
 * Original: 0x002CBAB8 - 0x002CBACF (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBAB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBAB8: ;
    eax = MEM32(ebp + -40);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -52);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002CBACBu); RECOMP_ABI_CALL(0x000F23E0u, sub_000F23E0); /* call 0x000F23E0 */

loc_002CBACB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CBACF
 * Original: 0x002CBACF - 0x002CBAE6 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBACF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBACF: ;
    eax = MEM32(ebp + -48);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -52);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002CBAE2u); RECOMP_ABI_CALL(0x000F23E0u, sub_000F23E0); /* call 0x000F23E0 */

loc_002CBAE2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002CBAE6
 * Original: 0x002CBAE6 - 0x002CBAF0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBAE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBAE6: ;
    eax = 0x352208;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBAF0
 * Original: 0x002CBAF0 - 0x002CBAF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBAF0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CBAF8
 * Original: 0x002CBAF8 - 0x002CBB03 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBAF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBAF8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00260E30(); return; /* tail jmp 0x00260E30 */

}

/**
 * sub_002CBB03
 * Original: 0x002CBB03 - 0x002CBB0D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB03: ;
    eax = 0x352234;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBB10
 * Original: 0x002CBB10 - 0x002CBB18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB10: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CBB18
 * Original: 0x002CBB18 - 0x002CBB22 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB18: ;
    eax = 0x3521A8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBB30
 * Original: 0x002CBB30 - 0x002CBB38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB30: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0025C1D0(); return; /* tail jmp 0x0025C1D0 */

}

/**
 * sub_002CBB38
 * Original: 0x002CBB38 - 0x002CBB46 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB38: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x170;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBB46
 * Original: 0x002CBB46 - 0x002CBB50 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB46: ;
    eax = 0x352260;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBB50
 * Original: 0x002CBB50 - 0x002CBB58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB50: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_000863B0(); return; /* tail jmp 0x000863B0 */

}

/**
 * sub_002CBB58
 * Original: 0x002CBB58 - 0x002CBB66 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB58: ;
    eax = MEM32(ebp + -232);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002CBB64u); RECOMP_ABI_CALL(0x001F7040u, sub_001F7040); /* call 0x001F7040 */

loc_002CBB64: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002CBB66
 * Original: 0x002CBB66 - 0x002CBB70 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB66: ;
    eax = 0x35228C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBB70
 * Original: 0x002CBB70 - 0x002CBB78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB70: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CBB78
 * Original: 0x002CBB78 - 0x002CBB83 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB78: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CBB83
 * Original: 0x002CBB83 - 0x002CBB8E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB83: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002216D0(); return; /* tail jmp 0x002216D0 */

}

/**
 * sub_002CBB8E
 * Original: 0x002CBB8E - 0x002CBB99 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB8E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBB99
 * Original: 0x002CBB99 - 0x002CBBA3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBB99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBB99: ;
    eax = 0x3522C8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBBB0
 * Original: 0x002CBBB0 - 0x002CBBB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBBB0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0025ED90(); return; /* tail jmp 0x0025ED90 */

}

/**
 * sub_002CBBB8
 * Original: 0x002CBBB8 - 0x002CBBC3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBBB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBBB8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBBC3
 * Original: 0x002CBBC3 - 0x002CBBCE (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBBC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBBC3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBBCE
 * Original: 0x002CBBCE - 0x002CBBD9 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBBCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBBCE: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBBD9
 * Original: 0x002CBBD9 - 0x002CBBE3 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBBD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBBD9: ;
    eax = 0x352304;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBBF0
 * Original: 0x002CBBF0 - 0x002CBBF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBBF0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0025ED90(); return; /* tail jmp 0x0025ED90 */

}

/**
 * sub_002CBBF8
 * Original: 0x002CBBF8 - 0x002CBC03 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBBF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBBF8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBC03
 * Original: 0x002CBC03 - 0x002CBC0E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC03: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBC0E
 * Original: 0x002CBC0E - 0x002CBC18 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC0E: ;
    eax = 0x352338;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBC20
 * Original: 0x002CBC20 - 0x002CBC28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC20: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CBC28
 * Original: 0x002CBC28 - 0x002CBC33 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC28: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBC33
 * Original: 0x002CBC33 - 0x002CBC3D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC33: ;
    eax = 0x352364;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBC40
 * Original: 0x002CBC40 - 0x002CBC48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC40: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0025FB40(); return; /* tail jmp 0x0025FB40 */

}

/**
 * sub_002CBC48
 * Original: 0x002CBC48 - 0x002CBC53 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC48: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBC53
 * Original: 0x002CBC53 - 0x002CBC5E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC53: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBC5E
 * Original: 0x002CBC5E - 0x002CBC69 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC5E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F6550(); return; /* tail jmp 0x001F6550 */

}

/**
 * sub_002CBC69
 * Original: 0x002CBC69 - 0x002CBC73 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC69: ;
    eax = 0x3523A0;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBC80
 * Original: 0x002CBC80 - 0x002CBC88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC80: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0025FB40(); return; /* tail jmp 0x0025FB40 */

}

/**
 * sub_002CBC88
 * Original: 0x002CBC88 - 0x002CBC93 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC88: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBC93
 * Original: 0x002CBC93 - 0x002CBC9E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC93: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBC9E
 * Original: 0x002CBC9E - 0x002CBCA8 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBC9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBC9E: ;
    eax = 0x3523D4;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBCB0
 * Original: 0x002CBCB0 - 0x002CBCB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBCB0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CBCB8
 * Original: 0x002CBCB8 - 0x002CBCC2 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBCB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBCB8: ;
    eax = 0x3523F8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBCD0
 * Original: 0x002CBCD0 - 0x002CBCD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBCD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBCD0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0025FE40(); return; /* tail jmp 0x0025FE40 */

}

/**
 * sub_002CBCD8
 * Original: 0x002CBCD8 - 0x002CBCE3 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBCD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBCD8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBCE3
 * Original: 0x002CBCE3 - 0x002CBCEE (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBCE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBCE3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBCEE
 * Original: 0x002CBCEE - 0x002CBCF8 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBCEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBCEE: ;
    eax = 0x35242C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBD00
 * Original: 0x002CBD00 - 0x002CBD08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD00: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0025FE40(); return; /* tail jmp 0x0025FE40 */

}

/**
 * sub_002CBD08
 * Original: 0x002CBD08 - 0x002CBD13 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD08: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBD13
 * Original: 0x002CBD13 - 0x002CBD1D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD13: ;
    eax = 0x352458;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBD20
 * Original: 0x002CBD20 - 0x002CBD28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD20: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CBD28
 * Original: 0x002CBD28 - 0x002CBD32 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD28: ;
    eax = 0x35247C;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBD40
 * Original: 0x002CBD40 - 0x002CBD48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD40: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00260860(); return; /* tail jmp 0x00260860 */

}

/**
 * sub_002CBD48
 * Original: 0x002CBD48 - 0x002CBD53 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD48: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F6550(); return; /* tail jmp 0x001F6550 */

}

/**
 * sub_002CBD53
 * Original: 0x002CBD53 - 0x002CBD5D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD53: ;
    eax = 0x3524A8;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBD60
 * Original: 0x002CBD60 - 0x002CBD68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD60: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00260860(); return; /* tail jmp 0x00260860 */

}

/**
 * sub_002CBD68
 * Original: 0x002CBD68 - 0x002CBD72 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD68: ;
    eax = 0x3524CC;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}

/**
 * sub_002CBD80
 * Original: 0x002CBD80 - 0x002CBD88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD80: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00211DF0(); return; /* tail jmp 0x00211DF0 */

}

/**
 * sub_002CBD88
 * Original: 0x002CBD88 - 0x002CBD93 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD88: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBD93
 * Original: 0x002CBD93 - 0x002CBD9E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD93: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBD9E
 * Original: 0x002CBD9E - 0x002CBDA9 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBD9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBD9E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBDA9
 * Original: 0x002CBDA9 - 0x002CBDB4 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBDA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBDA9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBDB4
 * Original: 0x002CBDB4 - 0x002CBDBF (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBDB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBDB4: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBDBF
 * Original: 0x002CBDBF - 0x002CBDCA (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBDBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBDBF: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBDCA
 * Original: 0x002CBDCA - 0x002CBDD5 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBDCA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBDCA: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x58;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBDD5
 * Original: 0x002CBDD5 - 0x002CBDE0 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBDD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBDD5: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x68;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00224500(); return; /* tail jmp 0x00224500 */

}

/**
 * sub_002CBDE0
 * Original: 0x002CBDE0 - 0x002CBDEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002CBDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002CBDE0: ;
    eax = 0x352530;
    g_seh_ebp = ebp; sub_002BFE18(); return; /* tail jmp 0x002BFE18 */

}
